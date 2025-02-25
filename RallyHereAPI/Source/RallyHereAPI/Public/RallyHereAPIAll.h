// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereAPIBaseModel.h"
#include "AdAPI.h"
#include "AuthAPI.h"
#include "BlockedV1API.h"
#include "BlockedV2API.h"
#include "CatalogAPI.h"
#include "ConfigAPI.h"
#include "ConfigurationV1API.h"
#include "CustomAPI.h"
#include "DiscoveryAPI.h"
#include "EntitlementsAPI.h"
#include "FriendsV1API.h"
#include "FriendsV2API.h"
#include "InstanceNotificationAPI.h"
#include "InventoryAPI.h"
#include "KeyClaimsAPI.h"
#include "KeyEntitlementsAPI.h"
#include "MarketingAPI.h"
#include "PlayerIdNotificationAPI.h"
#include "PlayerNotificationAPI.h"
#include "PresenceAPI.h"
#include "PresenceAdminAPI.h"
#include "QueuesAPI.h"
#include "RankAPI.h"
#include "RegionsAPI.h"
#include "SessionsAPI.h"
#include "SettingsAPI.h"
#include "SiteAPI.h"
#include "TimeAPI.h"
#include "UsersAPI.h"

namespace RallyHereAPI
{

struct RALLYHEREAPI_API FRallyHereAPIAll
{
public:
    FRallyHereAPIAll();

    TArray<FAPI*> GetAllAPIs() const;

    FAdAPI& GetAd();
    const FAdAPI& GetAd() const;

    FAuthAPI& GetAuth();
    const FAuthAPI& GetAuth() const;

    FBlockedV1API& GetBlockedV1();
    const FBlockedV1API& GetBlockedV1() const;

    FBlockedV2API& GetBlockedV2();
    const FBlockedV2API& GetBlockedV2() const;

    FCatalogAPI& GetCatalog();
    const FCatalogAPI& GetCatalog() const;

    FConfigAPI& GetConfig();
    const FConfigAPI& GetConfig() const;

    FConfigurationV1API& GetConfigurationV1();
    const FConfigurationV1API& GetConfigurationV1() const;

    FCustomAPI& GetCustom();
    const FCustomAPI& GetCustom() const;

    FDiscoveryAPI& GetDiscovery();
    const FDiscoveryAPI& GetDiscovery() const;

    FEntitlementsAPI& GetEntitlements();
    const FEntitlementsAPI& GetEntitlements() const;

    FFriendsV1API& GetFriendsV1();
    const FFriendsV1API& GetFriendsV1() const;

    FFriendsV2API& GetFriendsV2();
    const FFriendsV2API& GetFriendsV2() const;

    FInstanceNotificationAPI& GetInstanceNotification();
    const FInstanceNotificationAPI& GetInstanceNotification() const;

    FInventoryAPI& GetInventory();
    const FInventoryAPI& GetInventory() const;

    FKeyClaimsAPI& GetKeyClaims();
    const FKeyClaimsAPI& GetKeyClaims() const;

    FKeyEntitlementsAPI& GetKeyEntitlements();
    const FKeyEntitlementsAPI& GetKeyEntitlements() const;

    FMarketingAPI& GetMarketing();
    const FMarketingAPI& GetMarketing() const;

    FPlayerIdNotificationAPI& GetPlayerIdNotification();
    const FPlayerIdNotificationAPI& GetPlayerIdNotification() const;

    FPlayerNotificationAPI& GetPlayerNotification();
    const FPlayerNotificationAPI& GetPlayerNotification() const;

    FPresenceAPI& GetPresence();
    const FPresenceAPI& GetPresence() const;

    FPresenceAdminAPI& GetPresenceAdmin();
    const FPresenceAdminAPI& GetPresenceAdmin() const;

    FQueuesAPI& GetQueues();
    const FQueuesAPI& GetQueues() const;

    FRankAPI& GetRank();
    const FRankAPI& GetRank() const;

    FRegionsAPI& GetRegions();
    const FRegionsAPI& GetRegions() const;

    FSessionsAPI& GetSessions();
    const FSessionsAPI& GetSessions() const;

    FSettingsAPI& GetSettings();
    const FSettingsAPI& GetSettings() const;

    FSiteAPI& GetSite();
    const FSiteAPI& GetSite() const;

    FTimeAPI& GetTime();
    const FTimeAPI& GetTime() const;

    FUsersAPI& GetUsers();
    const FUsersAPI& GetUsers() const;

private:
    TArray<FAPI*> AllAPIs;
    FAdAPI Ad;
    FAuthAPI Auth;
    FBlockedV1API BlockedV1;
    FBlockedV2API BlockedV2;
    FCatalogAPI Catalog;
    FConfigAPI Config;
    FConfigurationV1API ConfigurationV1;
    FCustomAPI Custom;
    FDiscoveryAPI Discovery;
    FEntitlementsAPI Entitlements;
    FFriendsV1API FriendsV1;
    FFriendsV2API FriendsV2;
    FInstanceNotificationAPI InstanceNotification;
    FInventoryAPI Inventory;
    FKeyClaimsAPI KeyClaims;
    FKeyEntitlementsAPI KeyEntitlements;
    FMarketingAPI Marketing;
    FPlayerIdNotificationAPI PlayerIdNotification;
    FPlayerNotificationAPI PlayerNotification;
    FPresenceAPI Presence;
    FPresenceAdminAPI PresenceAdmin;
    FQueuesAPI Queues;
    FRankAPI Rank;
    FRegionsAPI Regions;
    FSessionsAPI Sessions;
    FSettingsAPI Settings;
    FSiteAPI Site;
    FTimeAPI Time;
    FUsersAPI Users;
};
}
