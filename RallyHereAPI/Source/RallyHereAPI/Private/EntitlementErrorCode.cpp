/**
 * NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
 * Do not edit the file manually.
 *
 * Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
 * Copyright 2022 HiRez Studios
 * SPDX-License-Identifier: Apache-2.0
 *
 * Rally Here APIs
 * version: 0.1.0
 * Rally Here APIs
 */


#include "EntitlementErrorCode.h"
#include "RallyHereAPIModule.h"
#include "RallyHereAPIHelpers.h"
#include "Templates/SharedPointer.h"


using RallyHereAPI::ToStringFormatArg;
using RallyHereAPI::WriteJsonValue;
using RallyHereAPI::TryGetJsonValue;

////////////////////////////////////////////////////
// Implementation for ERHAPI_EntitlementErrorCode
FString EnumToString(const ERHAPI_EntitlementErrorCode& Value)
{
    switch (Value)
    {
    case ERHAPI_EntitlementErrorCode::None:
        return TEXT("none");
    case ERHAPI_EntitlementErrorCode::AuthTokenFailure:
        return TEXT("auth_token_failure");
    case ERHAPI_EntitlementErrorCode::MissingInformation:
        return TEXT("missing_information");
    case ERHAPI_EntitlementErrorCode::FailedToConsume:
        return TEXT("failed_to_consume");
    case ERHAPI_EntitlementErrorCode::NoSkuFound:
        return TEXT("no_sku_found");
    case ERHAPI_EntitlementErrorCode::WrongSkuTypeProvided:
        return TEXT("wrong_sku_type_provided");
    case ERHAPI_EntitlementErrorCode::DurableAuthorityTypeNotValid:
        return TEXT("durable_authority_type_not_valid");
    case ERHAPI_EntitlementErrorCode::DurableSingleUseAuthorityTypeNotValid:
        return TEXT("durable_single_use_authority_type_not_valid");
    case ERHAPI_EntitlementErrorCode::ConsumableAuthorityTypeNotValid:
        return TEXT("consumable_authority_type_not_valid");
    case ERHAPI_EntitlementErrorCode::UnknownSkuTypeProvided:
        return TEXT("unknown_sku_type_provided");
    case ERHAPI_EntitlementErrorCode::FailedToSubmitOrder:
        return TEXT("failed_to_submit_order");
    case ERHAPI_EntitlementErrorCode::AlreadyAppliedDurableSingleUse:
        return TEXT("already_applied_durable_single_use");
    case ERHAPI_EntitlementErrorCode::QuantityZero:
        return TEXT("quantity_zero");
    case ERHAPI_EntitlementErrorCode::PreviouslyApplied:
        return TEXT("previously_applied");
    }

    UE_LOG(LogRallyHereAPI, Error, TEXT("Invalid ERHAPI_EntitlementErrorCode::Values Value (%d)"), (int)Value);
    return TEXT("");
}

bool EnumFromString(const FString& EnumAsString, ERHAPI_EntitlementErrorCode& Value)
{
    static TMap<FString, ERHAPI_EntitlementErrorCode> StringToEnum = { 
        { TEXT("none"), ERHAPI_EntitlementErrorCode::None },
        { TEXT("auth_token_failure"), ERHAPI_EntitlementErrorCode::AuthTokenFailure },
        { TEXT("missing_information"), ERHAPI_EntitlementErrorCode::MissingInformation },
        { TEXT("failed_to_consume"), ERHAPI_EntitlementErrorCode::FailedToConsume },
        { TEXT("no_sku_found"), ERHAPI_EntitlementErrorCode::NoSkuFound },
        { TEXT("wrong_sku_type_provided"), ERHAPI_EntitlementErrorCode::WrongSkuTypeProvided },
        { TEXT("durable_authority_type_not_valid"), ERHAPI_EntitlementErrorCode::DurableAuthorityTypeNotValid },
        { TEXT("durable_single_use_authority_type_not_valid"), ERHAPI_EntitlementErrorCode::DurableSingleUseAuthorityTypeNotValid },
        { TEXT("consumable_authority_type_not_valid"), ERHAPI_EntitlementErrorCode::ConsumableAuthorityTypeNotValid },
        { TEXT("unknown_sku_type_provided"), ERHAPI_EntitlementErrorCode::UnknownSkuTypeProvided },
        { TEXT("failed_to_submit_order"), ERHAPI_EntitlementErrorCode::FailedToSubmitOrder },
        { TEXT("already_applied_durable_single_use"), ERHAPI_EntitlementErrorCode::AlreadyAppliedDurableSingleUse },
        { TEXT("quantity_zero"), ERHAPI_EntitlementErrorCode::QuantityZero },
        { TEXT("previously_applied"), ERHAPI_EntitlementErrorCode::PreviouslyApplied },    };

    const auto Found = StringToEnum.Find(EnumAsString);
    if(Found)
        Value = *Found;
    return Found != nullptr;
}

FStringFormatArg ToStringFormatArg(const ERHAPI_EntitlementErrorCode& Value)
{
    return FStringFormatArg(EnumToString(Value));
}

void WriteJsonValue(TSharedRef<TJsonWriter<>>& Writer, const ERHAPI_EntitlementErrorCode& Value)
{
    RallyHereAPI::WriteJsonValue(Writer, EnumToString(Value));
}

bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, ERHAPI_EntitlementErrorCode& Value)
{
    FString TmpValue;
    if (JsonValue->TryGetString(TmpValue))
    {
        if (EnumFromString(TmpValue, Value))
            return true;
    }
    return false;
}


