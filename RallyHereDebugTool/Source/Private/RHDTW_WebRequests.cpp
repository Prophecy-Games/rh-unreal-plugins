// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RHDTW_WebRequests.h"
#include "RH_Integration.h"
#include "RallyHereIntegrationModule.h"
#include "imgui.h"
#include "RH_ImGuiUtilities.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "RallyHereDebugToolSettings.h"
#include <string>
#include "Math/Color.h"

#include "RH_Diagnostics.h"

// used for copy support
#if PLATFORM_ALLOWS_COPY
#include "HAL/PlatformApplicationMisc.h"
#endif

namespace
{
	static const FColor Red_Base = FColor(121, 51, 70, 230);
	static const FColor Red_Hovered = FColor(131, 49, 73, 230);
	static const FColor Red_Active = FColor(155, 71, 93, 230);

	static const FColor Yellow_Base = FColor(113, 111, 60, 230);
	static const FColor Yellow_Hovered = FColor(132, 130, 63, 230);
	static const FColor Yellow_Active = FColor(150, 148, 85, 230);

	static const FColor Teal_Base = FColor(58, 107, 109, 230);
	static const FColor Teal_Hovered = FColor(59, 123, 125, 230);
	static const FColor Teal_Active = FColor(82, 142, 144, 230);
}

FRHDTW_WebRequests::FRHDTW_WebRequests()
	: Super()
{
	bShowMenuBar = true;
	DefaultPos = FVector2D(610, 430);
}

void FRHDTW_WebRequests::Init(URallyHereDebugTool* InOwner, const FString& InName)
{
	Super::Init(InOwner, InName);
	if (URH_WebRequests* WebRequestsTracker = FRallyHereIntegrationModule::Get().GetWebRequestTracker())
	{
		for (const FName& APIName : WebRequestsTracker->GetAPINames())
		{
			APIFilterToggles.Emplace(APIName, true);
		}
	}
}

void FRHDTW_WebRequests::Do()
{
	URH_WebRequests* WebRequestsTracker = FRallyHereIntegrationModule::Get().GetWebRequestTracker();
	if (WebRequestsTracker == nullptr)
	{
		ImGui::Text("RH_WebRequests unavailable.");
		return;
	}

	if (ImGui::BeginMenuBar())
	{
		TArray<FName> APINames = WebRequestsTracker->GetAPINames();
		if (ImGui::BeginMenu("Filter Requests"))
		{
			bool bValue = AreAllAPIFiltersToggledOn();
			if (ImGui::Checkbox("All", &bValue))
			{
				ToggleAllAPIFilters(bValue);
			}
			ImGui::Separator();

			TArray<FName> FilterKeys;
			APIFilterToggles.GetKeys(FilterKeys);
			for (const FName& FilterKey : FilterKeys)
			{
				bool bIsSelected = APIFilterToggles[FilterKey];
				if (ImGui::Checkbox(TCHAR_TO_UTF8(*FilterKey.ToString()), &bIsSelected))
				{
					APIFilterToggles[FilterKey] = bIsSelected;
				}
			}
			ImGui::EndMenu();
		}

		if (ImGui::BeginMenu("Log"))
		{
			bool bValue = WebRequestsTracker->GetLogAllWebRequests();
			if (ImGui::Checkbox("All", &bValue))
			{
				WebRequestsTracker->SetLogAllWebRequests(bValue);
			}
			ImGui::Separator();
			for (const FName& APIName : APINames)
			{
				bool bIsSelected = WebRequestsTracker->GetLogWebRequests(APIName);
				if (ImGui::Checkbox(TCHAR_TO_UTF8(*APIName.ToString()), &bIsSelected))
				{
					WebRequestsTracker->SetLogWebRequests(APIName, bIsSelected);
				}
			}
			ImGui::EndMenu();
		}

		bool bToggleRetain = WebRequestsTracker->GetIsRetainingWebRequests();
		const FString buttonLabel = bToggleRetain ? "Retain ALL Web Records: ON" : "Retain ALL Web Records: OFF";

		if (ImGui::Button(TCHAR_TO_UTF8(*buttonLabel)))
		{
			WebRequestsTracker->SetIsRetainingWebRequests(!bToggleRetain);
		}
		if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
		{
			ImGui::SetTooltip("When toggled ON, all web request data is retained (memory intensive).");
		}

		if (ImGui::Button("Log To File"))
		{
			auto* Diagnostics = FRallyHereIntegrationModule::Get().GetDiagnostics();
			if (Diagnostics != nullptr)
			{
				// generate the report, but only include metadata and web requests
				FRH_DiagnosticReportOptions Options(FRH_DiagnosticReportOptions::AllDisabled);
				Options.bIncludeMetadata = true;
				Options.bIncludeWebRequests = true;
				Options.World = GetWorld();
				Options.bWriteToFile = true;

				Options.OnReportComplete.BindLambda([](const TSharedRef<const FRH_DiagnosticReportGenerator>& Report)
					{
#if PLATFORM_ALLOWS_COPY
						// copy the filename to the clipboard
						FPlatformApplicationMisc::ClipboardCopy(*Report->ReportFilename);
#endif
					});

				Diagnostics->GenerateReport(Options);
			}
		}
		if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled))
		{
#if PLATFORM_ALLOWS_COPY
			ImGui::SetTooltip("Logs all tracked requests to a file, and copies the filename to clipboard");
#else
			ImGui::SetTooltip("Logs all tracked requests to a file");
#endif
		}

		if (ImGui::Button("Clear Tracked Requests"))
		{
			WebRequestsTracker->ClearTrackedRequests();
		}

		ImGui::EndMenuBar();
	}

	DoViewRequests(WebRequestsTracker);
}

void FRHDTW_WebRequests::DoViewRequests(URH_WebRequests* WebRequestsTracker)
{
	if (!WebRequestsTracker)
		return;

	ImGuiWindowFlags window_flags = ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_AlwaysVerticalScrollbar;
	ImGui::BeginChild("Requests", ImVec2(0, 0), false, window_flags);

	const auto& TrackedRequests = WebRequestsTracker->GetTrackedRequests();
	TDoubleLinkedListIterator<TDoubleLinkedList<TSharedPtr<FRH_WebRequest>>::TDoubleLinkedListNode, TSharedPtr<FRH_WebRequest>>  requestsIterator(TrackedRequests.GetTail());

	int indexId = 0; // Index for IDing the ImGui buttons
	for (; requestsIterator.GetNode() != nullptr; --requestsIterator)
	{
		auto request = requestsIterator.GetNode()->GetValue().Get();
		if (!request)
		{
			continue;
		}

		if (!APIFilterToggles.Contains(request->APIName) || !APIFilterToggles[request->APIName])
		{
			continue;
		}

		std::string label;
		if (request->Responses.Num() > 0)
		{
			label = "(" + std::to_string(request->Responses.Last().ResponseCode) + ") ";
		}
		label += TCHAR_TO_UTF8(*request->Verb);
		label += " ";
		label += TCHAR_TO_UTF8(*request->URL);
		label += "##request-header-";
		label += TCHAR_TO_UTF8(*request->Metadata.Identifier.ToString());
		label += "-";
		label += std::to_string(request->Metadata.RetryCount);

		auto StyleHeaderColor = [](FColor BaseColor, FColor HoveredColor, FColor ActiveColor)
		{
			ImGui::PushStyleColor(ImGuiCol_Header, BaseColor.ToPackedABGR());
			ImGui::PushStyleColor(ImGuiCol_HeaderHovered, HoveredColor.ToPackedABGR());
			ImGui::PushStyleColor(ImGuiCol_HeaderActive, ActiveColor.ToPackedABGR());
		};

		bool hasColorStyling = false;
		if (request->Responses.Num() > 0)
		{
			if (request->Responses.Last().ResponseCode >= EHttpResponseCodes::ServerError) // 500s
			{
				StyleHeaderColor(Yellow_Base, Yellow_Hovered, Yellow_Active);
				hasColorStyling = true;
			}
			else if (request->Responses.Last().ResponseCode >= EHttpResponseCodes::BadRequest) // 400s
			{
				StyleHeaderColor(Red_Base, Red_Hovered, Red_Active);
				hasColorStyling = true;
			}
			else if (request->Responses.Last().ResponseCode >= EHttpResponseCodes::Ambiguous) // 300s
			{
				StyleHeaderColor(Teal_Base, Teal_Hovered, Teal_Active);
				hasColorStyling = true;
			}
		}
		
		if (ImGui::CollapsingHeader(label.data()))
		{
			ImGui::PushID(&request->Metadata);
			std::string tabBarLabel = std::string{ "ReqOrResp##request-tab-bar-" } + TCHAR_TO_UTF8(*request->Metadata.Identifier.ToString()) + std::to_string(request->Metadata.RetryCount);
			static ImGuiTabBarFlags tab_bar_flags =
				ImGuiTabBarFlags_AutoSelectNewTabs | ImGuiTabBarFlags_FittingPolicyResizeDown | ImGuiTabBarFlags_FittingPolicyScroll;

#if PLATFORM_ALLOWS_COPY
			if (ImGui::Button(TCHAR_TO_UTF8(*FString::Printf(TEXT("Copy Full Web Request##%d"), indexId))))
			{
				FPlatformApplicationMisc::ClipboardCopy(*WebRequestsTracker->FormatWebRequestToJsonBlob(*request));
			}
#endif
			if (ImGui::BeginTabBar(tabBarLabel.c_str(), tab_bar_flags))
			{
				if (ImGui::BeginTabItem("Request", nullptr, ImGuiTabItemFlags_None))
				{
					DoViewRequest(request);
					ImGui::EndTabItem();
				}

				if (ImGui::BeginTabItem("Metadata", nullptr, ImGuiTabItemFlags_None))
				{
					DoViewMetadata(request);
					ImGui::EndTabItem();
				}

				for (int32 y = 0; y < request->Responses.Num(); ++y)
				{
					std::string responseLabel = "Response";
					if (y > 0)
					{
						responseLabel += " (retry " + std::to_string(y) + ")";
					}
					if (ImGui::BeginTabItem(responseLabel.c_str(), nullptr, ImGuiTabItemFlags_None))
					{
						DoViewResponse(&request->Responses[y]);
						ImGui::EndTabItem();
					}
				}

				ImGui::EndTabBar();
			}

			ImGui::PopID();
		}
		if (hasColorStyling)
		{
			ImGui::PopStyleColor(3);
		}
		++indexId;
	}

	ImGui::EndChild();
}

void FRHDTW_WebRequests::DoViewRequest(const FRH_WebRequest* WebRequest)
{
	if (!WebRequest)
		return;

	ImGui::Text("Verb : %s", TCHAR_TO_UTF8(*WebRequest->Verb));
	ImGuiDisplayCopyableValue(TEXT("URL"), WebRequest->URL, ECopyMode::KeyValue, true);

	ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowContentRegionMax().x);

	FString PrettyJson;
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(WebRequest->Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
	}
	else
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebRequest->Content));
	}

	ImGui::PopTextWrapPos();
	ImGuiDisplayCopyableValue(TEXT("Copy Content"), WebRequest->Content, ECopyMode::ButtonKey);
	ImGui::SameLine();
	ImGuiDisplayCopyableValue(TEXT("Copy Json"), PrettyJson, ECopyMode::ButtonKey);

	if (ImGui::BeginTable("RequestHeaderDetailsTable", 2, RH_TableFlagsFitSizing))
	{
		// Header
		ImGui::TableSetupColumn("Header");
		ImGui::TableSetupColumn("Value");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& pair : WebRequest->Headers)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(pair.Key, pair.Value, ECopyMode::Key);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Value));
		}

		ImGui::EndTable();
	}
}

void FRHDTW_WebRequests::DoViewResponse(const FRH_WebResponse* WebResponse)
{
	if (!WebResponse)
		return;

	ImGui::Text("Http Success : %d", WebResponse->ResponseSuccess);
	ImGui::Text("Code : %d", WebResponse->ResponseCode);

	ImGui::PushTextWrapPos(ImGui::GetCursorPos().x + ImGui::GetWindowContentRegionMax().x);

	FString PrettyJson;
	TSharedPtr<FJsonValue> JsonValue;
	if (FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(WebResponse->Content), JsonValue) && FJsonSerializer::Serialize(JsonValue, TEXT(""), TJsonWriterFactory<>::Create(&PrettyJson)))
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*PrettyJson));
	}
	else
	{
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebResponse->Content));
	}

	ImGui::PopTextWrapPos();
	ImGuiDisplayCopyableValue(TEXT("Copy Content"), WebResponse->Content, ECopyMode::ButtonKey);
	ImGui::SameLine();
	ImGuiDisplayCopyableValue(TEXT("Copy Json"), PrettyJson, ECopyMode::ButtonKey);

	if (ImGui::BeginTable("ResponseHeaderDetailsTable", 2, RH_TableFlagsFitSizing))
	{
		// Header
		ImGui::TableSetupColumn("Header");
		ImGui::TableSetupColumn("Value");
		ImGui::TableHeadersRow();

		// Content
		for (const auto& pair : WebResponse->Headers)
		{
			ImGui::TableNextRow();
			ImGui::TableNextColumn();
			ImGuiDisplayCopyableValue(pair.Key, pair.Value, ECopyMode::Key);
			ImGui::TableNextColumn();
			ImGui::Text("%s", TCHAR_TO_UTF8(*pair.Value));
		}

		ImGui::EndTable();
	}
}

void FRHDTW_WebRequests::DoViewMetadata(const FRH_WebRequest* WebRequest)
{
	if (!WebRequest)
		return;

	if (ImGui::BeginTable("MetadataTable", 2, RH_TableFlagsFitSizing))
	{
		// Header
		ImGui::TableSetupColumn("Field");
		ImGui::TableSetupColumn("Value");
		ImGui::TableHeadersRow();

		// Content
		ImGui::TableNextRow();
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("Identifier", WebRequest->Metadata.Identifier, ECopyMode::Key);
		ImGui::TableNextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebRequest->Metadata.Identifier.ToString(EGuidFormats::DigitsWithHyphens)));
		ImGui::TableNextRow();
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("Simplified Path", WebRequest->Metadata.SimplifiedPath.ToString(), ECopyMode::Key);
		ImGui::TableNextColumn();
		ImGui::Text("%s", TCHAR_TO_UTF8(*WebRequest->Metadata.SimplifiedPath.ToString()));
		ImGui::TableNextRow();
		ImGui::TableNextColumn();
		ImGuiDisplayCopyableValue("Retry Count", WebRequest->Metadata.RetryCount, ECopyMode::Key);
		ImGui::TableNextColumn();
		ImGui::Text("%d", WebRequest->Metadata.RetryCount);

		ImGui::EndTable();
	}
}

bool FRHDTW_WebRequests::AreAllAPIFiltersToggledOn() const
{
	for (auto& Elem : APIFilterToggles)
	{
		if (Elem.Value == false)
		{
			return false;
		}
	}
	return true;
}

void FRHDTW_WebRequests::ToggleAllAPIFilters(bool bOn)
{
	for (auto& Pair : APIFilterToggles)
	{
		APIFilterToggles[Pair.Key] = bOn;
	}
}