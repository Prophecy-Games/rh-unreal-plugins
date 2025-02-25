// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.
#pragma once

#include "RH_DebugToolWindow.h"
#include "RH_CatalogSubsystem.h"
#include <string>

struct FRHDTW_Catalog : public FRH_DebugToolWindow
{
	typedef FRH_DebugToolWindow Super;

	FRHDTW_Catalog();
	virtual ~FRHDTW_Catalog();

	void Do() override;
	void DoShowClaim(URH_CatalogSubsystem* catalog);
	void DoShowVendors(URH_CatalogSubsystem* catalog);
	void DoShowItems(URH_CatalogSubsystem* catalog);
	void DoShowXpTables(URH_CatalogSubsystem* catalog);
	void DoShowItemInventoryBucketUseRuleSets(URH_CatalogSubsystem* catalog);
	void DoShowTimeFrames(URH_CatalogSubsystem* catalog);
	void DoShowPricePoints(URH_CatalogSubsystem* catalog);
	void DoShowPricePoint(const TPair<FGuid, FRHAPI_PricePoint>& pp);
	void DoShowPriceBreakpointList(const TArray<FRHAPI_PriceBreakpoint>& pbp);

	bool GetCouponsForItem(URH_CatalogSubsystem* catalog, FRHAPI_Loot LootItem, TArray<URH_CatalogItem*>& Coupons);

	TArray<ANSICHAR> VendorIdInput;
	TArray<ANSICHAR> PromoCodeInput;
	int32 ItemIdInput;
	int32 SelectedInventoryBucketRuleSet;

	TArray<int32> SelectedVendorCouponIndexs;
};
