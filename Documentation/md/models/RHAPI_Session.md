# RHAPI_Session <a id="group__RHAPI__Session"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Session`](#structFRHAPI__Session) | A session resource.

## struct `FRHAPI_Session` <a id="structFRHAPI__Session"></a>

```
struct FRHAPI_Session
  : public FRHAPI_Model
```

A session resource.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1) | template type
`public FString `[`SessionId`](#structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909) | unique ID for this session within its type
`public `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` `[`Instance_Optional`](#structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2) | 
`public bool `[`Instance_IsSet`](#structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8) | true if Instance_Optional has been set to a value
`public `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` `[`Match_Optional`](#structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a) | 
`public bool `[`Match_IsSet`](#structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108) | true if Match_Optional has been set to a value
`public `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` `[`Matchmaking_Optional`](#structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db) | 
`public bool `[`Matchmaking_IsSet`](#structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744) | true if Matchmaking_Optional has been set to a value
`public `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` `[`Browser_Optional`](#structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54) | 
`public bool `[`Browser_IsSet`](#structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4) | true if Browser_Optional has been set to a value
`public bool `[`Joinable`](#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907) | Is this session freely joinable by players without an invite?
`public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) | List of teams of players currently in the session.
`public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) | Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.
`public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) | true if PlatformSession_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8) | true if CustomData_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`RegionId_Optional`](#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92) | true if RegionId_Optional has been set to a value
`public bool `[`CreatedByMatchmaking_Optional`](#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24) | Flag of whether or not this session was created by matchmaking or not.
`public bool `[`CreatedByMatchmaking_IsSet`](#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413) | true if CreatedByMatchmaking_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Session_1a21a3afd198e0ca8834b3da27eac1ff6d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Session_1a84c8664b032ad2b3f0afd414af4819aa)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__Session_1ae442d9294aea3fa2e28da1f5bde0ea29)`(FString NewValue)` | Sets the value of Type.
`public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__Session_1ab4a277c6bb8a9d996c92696cabfd4135)`(FString NewValue)` | Sets the value of SessionId.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3)`()` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142)`() const` | Gets the value of Instance_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` | Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` | Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d)`()` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d)`() const` | Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstance`](#structFRHAPI__Session_1ae7a17cfcfc3b2bc60e7b3697ca5407e2)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` NewValue)` | Sets the value of Instance_Optional and also sets Instance_IsSet to true.
`public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` | Clears the value of Instance_Optional and sets Instance_IsSet to false.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a663056f65075925d379ff552e603ea96)`()` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424)`() const` | Gets the value of Match_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` | Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` | Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44)`()` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb)`() const` | Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatch`](#structFRHAPI__Session_1acdf2a6ab7835697ad201a39a74a1cf48)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` NewValue)` | Sets the value of Match_Optional and also sets Match_IsSet to true.
`public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` | Clears the value of Match_Optional and sets Match_IsSet to false.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3)`()` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968)`() const` | Gets the value of Matchmaking_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` | Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` | Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22)`()` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff)`() const` | Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a9273519506c598c2a816c2f8a83ba611)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` NewValue)` | Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.
`public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` | Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2)`()` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed)`() const` | Gets the value of Browser_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` | Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` | Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021)`()` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f)`() const` | Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetBrowser`](#structFRHAPI__Session_1aef47b5ce1532e9a2e5672ef1071ce225)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` NewValue)` | Sets the value of Browser_Optional and also sets Browser_IsSet to true.
`public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` | Clears the value of Browser_Optional and sets Browser_IsSet to false.
`public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c)`()` | Gets the value of Joinable.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819)`() const` | Gets the value of Joinable.
`public inline void `[`SetJoinable`](#structFRHAPI__Session_1a32d534d6a28718ac8056dd5edad60524)`(bool NewValue)` | Sets the value of Joinable.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` | Returns true if Joinable matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` | Sets the value of Joinable to its default
`public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e)`()` | Gets the value of Teams.
`public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60)`() const` | Gets the value of Teams.
`public inline void `[`SetTeams`](#structFRHAPI__Session_1a85f7b809ec82e117ac80ba4593f221df)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > NewValue)` | Sets the value of Teams.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6)`()` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2)`() const` | Gets the value of PlatformSession_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` | Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` | Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613)`()` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0)`() const` | Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a1e57ebcbe14f2f5190acab3972ead250)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > NewValue)` | Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.
`public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` | Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Session_1a1fbb989121313dfebf951e98202effb3)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Session_1a8868880c047000f8ea10662e426d2035)`(FDateTime NewValue)` | Sets the value of Created.
`public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a5823c390317676a992c6de596b07726e)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__Session_1a556488693f5dbb2409e5e2a41a55358d)`(FString NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93)`()` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048)`() const` | Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c)`(const bool & DefaultValue) const` | Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` | Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52)`()` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6)`() const` | Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1ae6b9e72e6aae07f2cbf4d3bc38458665)`(bool NewValue)` | Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.
`public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` | Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.
`public inline bool `[`IsCreatedByMatchmakingDefaultValue`](#structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad)`() const` | Returns true if CreatedByMatchmaking_Optional is set and matches the default value.
`public inline void `[`SetCreatedByMatchmakingToDefault`](#structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6)`()` | Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.

#### Members

#### `public FString `[`Type`](#structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1) <a id="structFRHAPI__Session_1aa99c74b9cc52640a6c132b3517d7fcf1"></a>

template type

<br>
#### `public FString `[`SessionId`](#structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909) <a id="structFRHAPI__Session_1adb1ba4643cbd9dabfde8d3e359500909"></a>

unique ID for this session within its type

<br>
#### `public `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` `[`Instance_Optional`](#structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2) <a id="structFRHAPI__Session_1a9d5d31fd3e79b62891ba654cfa1bf6e2"></a>

<br>
#### `public bool `[`Instance_IsSet`](#structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8) <a id="structFRHAPI__Session_1a9e166a0d902369089a9362287090e1f8"></a>

true if Instance_Optional has been set to a value

<br>
#### `public `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` `[`Match_Optional`](#structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a) <a id="structFRHAPI__Session_1a865f37ad58a4c3eae21fc72d843b6a3a"></a>

<br>
#### `public bool `[`Match_IsSet`](#structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108) <a id="structFRHAPI__Session_1a97d359ac0758f38f0df5ee49c54c8108"></a>

true if Match_Optional has been set to a value

<br>
#### `public `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` `[`Matchmaking_Optional`](#structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db) <a id="structFRHAPI__Session_1af3225af871f86c2aae3381a62dfdd5db"></a>

<br>
#### `public bool `[`Matchmaking_IsSet`](#structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744) <a id="structFRHAPI__Session_1a61ea704dec07fefa55e7f47d4c47c744"></a>

true if Matchmaking_Optional has been set to a value

<br>
#### `public `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` `[`Browser_Optional`](#structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54) <a id="structFRHAPI__Session_1a7595f83d2fded5187f30268f207bfc54"></a>

<br>
#### `public bool `[`Browser_IsSet`](#structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4) <a id="structFRHAPI__Session_1aa1ace01879821c9c9b2b978cf2d3bcb4"></a>

true if Browser_Optional has been set to a value

<br>
#### `public bool `[`Joinable`](#structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907) <a id="structFRHAPI__Session_1a9a4a29da2db810fc7b40b6e955839907"></a>

Is this session freely joinable by players without an invite?

<br>
#### `public TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > `[`Teams`](#structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e) <a id="structFRHAPI__Session_1a3489eec79e810de928f11a6d36b6d16e"></a>

List of teams of players currently in the session.

<br>
#### `public TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > `[`PlatformSession_Optional`](#structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3) <a id="structFRHAPI__Session_1aef33c93a7e5567b34d41af76b8441fe3"></a>

Child Platform Sessions for this session. A player joining one of the child platform sessions implicitly joins the parent session.

<br>
#### `public bool `[`PlatformSession_IsSet`](#structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494) <a id="structFRHAPI__Session_1a6f2c00e800ad78c74ead76a70720d494"></a>

true if PlatformSession_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b) <a id="structFRHAPI__Session_1a0d426749efebca34803c875e390e1c4b"></a>

Leader Player or instance defined custom data about this session.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8) <a id="structFRHAPI__Session_1a02208d99aadc08bc3ccc982f92db99c8"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FDateTime `[`Created`](#structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b) <a id="structFRHAPI__Session_1ab51fce893a31fce6b645ffb16c34544b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public FString `[`RegionId_Optional`](#structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734) <a id="structFRHAPI__Session_1a4d0e9ae0e853919fe3c48fee1c2ff734"></a>

Preferred region for the instance and match to take place in.

<br>
#### `public bool `[`RegionId_IsSet`](#structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92) <a id="structFRHAPI__Session_1abae73173741ad3d3897e92421d1dfd92"></a>

true if RegionId_Optional has been set to a value

<br>
#### `public bool `[`CreatedByMatchmaking_Optional`](#structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24) <a id="structFRHAPI__Session_1affa742fa5462aa1c981d0a9612205d24"></a>

Flag of whether or not this session was created by matchmaking or not.

<br>
#### `public bool `[`CreatedByMatchmaking_IsSet`](#structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413) <a id="structFRHAPI__Session_1ab568dee593d8d974177ac40172c87413"></a>

true if CreatedByMatchmaking_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Session_1a21a3afd198e0ca8834b3da27eac1ff6d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Session_1a21a3afd198e0ca8834b3da27eac1ff6d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Session_1a84c8664b032ad2b3f0afd414af4819aa)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Session_1a84c8664b032ad2b3f0afd414af4819aa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259)`()` <a id="structFRHAPI__Session_1a4b8005e8cc0e349c7c6e9ea8a8b83259"></a>

Gets the value of Type.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09)`() const` <a id="structFRHAPI__Session_1a8cee3a500baa546a077d8fa572dd4a09"></a>

Gets the value of Type.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__Session_1ae442d9294aea3fa2e28da1f5bde0ea29)`(FString NewValue)` <a id="structFRHAPI__Session_1ae442d9294aea3fa2e28da1f5bde0ea29"></a>

Sets the value of Type.

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9)`()` <a id="structFRHAPI__Session_1a534fc1fa04faa28a5efcb160fa9764e9"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29)`() const` <a id="structFRHAPI__Session_1a49c80fd3293ed2083b5ce39387bdae29"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__Session_1ab4a277c6bb8a9d996c92696cabfd4135)`(FString NewValue)` <a id="structFRHAPI__Session_1ab4a277c6bb8a9d996c92696cabfd4135"></a>

Sets the value of SessionId.

<br>
#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3)`()` <a id="structFRHAPI__Session_1a978c6c105acee5cc6a4cd8a81786b5d3"></a>

Gets the value of Instance_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142)`() const` <a id="structFRHAPI__Session_1a97d938a1e2cd367f47dfaf6254c25142"></a>

Gets the value of Instance_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & `[`GetInstance`](#structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92)`(const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a7aefd48c5fcf292677de1c5a5a41ef92"></a>

Gets the value of Instance_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInstance`](#structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af45c7ac833c61962d1bc430614ed947c"></a>

Fills OutValue with the value of Instance_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d)`()` <a id="structFRHAPI__Session_1ae5c1e0c01810bdccbb8f0ca609f2f78d"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` * `[`GetInstanceOrNull`](#structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d)`() const` <a id="structFRHAPI__Session_1ac5f8e4ac9f5b33873d6a4aa8248e163d"></a>

Returns a pointer to Instance_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInstance`](#structFRHAPI__Session_1ae7a17cfcfc3b2bc60e7b3697ca5407e2)`(`[`FRHAPI_InstanceInfo`](RHAPI_InstanceInfo.md#structFRHAPI__InstanceInfo)` NewValue)` <a id="structFRHAPI__Session_1ae7a17cfcfc3b2bc60e7b3697ca5407e2"></a>

Sets the value of Instance_Optional and also sets Instance_IsSet to true.

<br>
#### `public inline void `[`ClearInstance`](#structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f)`()` <a id="structFRHAPI__Session_1a8f06253ad1ab15f087a1fac3c994176f"></a>

Clears the value of Instance_Optional and sets Instance_IsSet to false.

<br>
#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a663056f65075925d379ff552e603ea96)`()` <a id="structFRHAPI__Session_1a663056f65075925d379ff552e603ea96"></a>

Gets the value of Match_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424)`() const` <a id="structFRHAPI__Session_1a3900428342a3a13ee73497256dd0e424"></a>

Gets the value of Match_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & `[`GetMatch`](#structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5)`(const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a96fc4698bfc574871cde9f8f92e144c5"></a>

Gets the value of Match_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatch`](#structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` & OutValue) const` <a id="structFRHAPI__Session_1ab86a9b84d9d6c3e79ea272dc2d74071d"></a>

Fills OutValue with the value of Match_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44)`()` <a id="structFRHAPI__Session_1a621dbcbd722c00a2bbec90d69e37ef44"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` * `[`GetMatchOrNull`](#structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb)`() const` <a id="structFRHAPI__Session_1acea2787f1ec14dcf5f068ae8178004bb"></a>

Returns a pointer to Match_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatch`](#structFRHAPI__Session_1acdf2a6ab7835697ad201a39a74a1cf48)`(`[`FRHAPI_MatchInfo`](RHAPI_MatchInfo.md#structFRHAPI__MatchInfo)` NewValue)` <a id="structFRHAPI__Session_1acdf2a6ab7835697ad201a39a74a1cf48"></a>

Sets the value of Match_Optional and also sets Match_IsSet to true.

<br>
#### `public inline void `[`ClearMatch`](#structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace)`()` <a id="structFRHAPI__Session_1a3f5be584d7ac7a9d06a4f8b9b6ff9ace"></a>

Clears the value of Match_Optional and sets Match_IsSet to false.

<br>
#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3)`()` <a id="structFRHAPI__Session_1a7e72ca984908081c10f44bcec1763cc3"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968)`() const` <a id="structFRHAPI__Session_1a3b04668ebd59b9dd384b1f25eb06d968"></a>

Gets the value of Matchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & `[`GetMatchmaking`](#structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86)`(const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a545e19b64f506b5f3793e85941240d86"></a>

Gets the value of Matchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMatchmaking`](#structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` & OutValue) const` <a id="structFRHAPI__Session_1a58e60dc4c2d4443301862a4815d83480"></a>

Fills OutValue with the value of Matchmaking_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22)`()` <a id="structFRHAPI__Session_1ad0c2005853a2d3d3a3158cfff70eae22"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` * `[`GetMatchmakingOrNull`](#structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff)`() const` <a id="structFRHAPI__Session_1aa65a144963e796b6ca2fcfb5f1d77dff"></a>

Returns a pointer to Matchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMatchmaking`](#structFRHAPI__Session_1a9273519506c598c2a816c2f8a83ba611)`(`[`FRHAPI_MatchmakingInfo`](RHAPI_MatchmakingInfo.md#structFRHAPI__MatchmakingInfo)` NewValue)` <a id="structFRHAPI__Session_1a9273519506c598c2a816c2f8a83ba611"></a>

Sets the value of Matchmaking_Optional and also sets Matchmaking_IsSet to true.

<br>
#### `public inline void `[`ClearMatchmaking`](#structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596)`()` <a id="structFRHAPI__Session_1a91953108c08db083b5fce7614b2b2596"></a>

Clears the value of Matchmaking_Optional and sets Matchmaking_IsSet to false.

<br>
#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2)`()` <a id="structFRHAPI__Session_1a2cfa5643b7ba91b7efa751adba2c6fd2"></a>

Gets the value of Browser_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed)`() const` <a id="structFRHAPI__Session_1afddcc33cd67e5b5d41a30e135136c1ed"></a>

Gets the value of Browser_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & `[`GetBrowser`](#structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf)`(const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & DefaultValue) const` <a id="structFRHAPI__Session_1a1cce194385a9388b08dbd1be9fdf61cf"></a>

Gets the value of Browser_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetBrowser`](#structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` & OutValue) const` <a id="structFRHAPI__Session_1af58dceb39835a33a837360a773e6b94d"></a>

Fills OutValue with the value of Browser_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021)`()` <a id="structFRHAPI__Session_1a5ca76953f5b54edcd38534e3063f5021"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` * `[`GetBrowserOrNull`](#structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f)`() const` <a id="structFRHAPI__Session_1a88606729e6afe871b10edceddd76ea7f"></a>

Returns a pointer to Browser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetBrowser`](#structFRHAPI__Session_1aef47b5ce1532e9a2e5672ef1071ce225)`(`[`FRHAPI_BrowserInfo`](RHAPI_BrowserInfo.md#structFRHAPI__BrowserInfo)` NewValue)` <a id="structFRHAPI__Session_1aef47b5ce1532e9a2e5672ef1071ce225"></a>

Sets the value of Browser_Optional and also sets Browser_IsSet to true.

<br>
#### `public inline void `[`ClearBrowser`](#structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95)`()` <a id="structFRHAPI__Session_1a8300261fe2260b8077d81a0b2a10ed95"></a>

Clears the value of Browser_Optional and sets Browser_IsSet to false.

<br>
#### `public inline bool & `[`GetJoinable`](#structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c)`()` <a id="structFRHAPI__Session_1a8003484ab6879e9688a03c7491409e1c"></a>

Gets the value of Joinable.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819)`() const` <a id="structFRHAPI__Session_1ae8ea9ac7155aec5ede4e0db19be45819"></a>

Gets the value of Joinable.

<br>
#### `public inline void `[`SetJoinable`](#structFRHAPI__Session_1a32d534d6a28718ac8056dd5edad60524)`(bool NewValue)` <a id="structFRHAPI__Session_1a32d534d6a28718ac8056dd5edad60524"></a>

Sets the value of Joinable.

<br>
#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913)`() const` <a id="structFRHAPI__Session_1ab2c839e89e7ef8c8d3517f4dea32e913"></a>

Returns true if Joinable matches the default value.

<br>
#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711)`()` <a id="structFRHAPI__Session_1ad32ed242c030d95e88564f3f0bd98711"></a>

Sets the value of Joinable to its default

<br>
#### `public inline TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e)`()` <a id="structFRHAPI__Session_1ab7008a5afdc6a77a9b21d9f0a687866e"></a>

Gets the value of Teams.

<br>
#### `public inline const TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > & `[`GetTeams`](#structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60)`() const` <a id="structFRHAPI__Session_1ad7cdb19d35e96ccfdf95561febc18a60"></a>

Gets the value of Teams.

<br>
#### `public inline void `[`SetTeams`](#structFRHAPI__Session_1a85f7b809ec82e117ac80ba4593f221df)`(TArray< `[`FRHAPI_SessionTeam`](RHAPI_SessionTeam.md#structFRHAPI__SessionTeam)` > NewValue)` <a id="structFRHAPI__Session_1a85f7b809ec82e117ac80ba4593f221df"></a>

Sets the value of Teams.

<br>
#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6)`()` <a id="structFRHAPI__Session_1a8c178d130dfbf6984477186bba10bdb6"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2)`() const` <a id="structFRHAPI__Session_1a50bf670c4cad94a91c9dcef23a7826a2"></a>

Gets the value of PlatformSession_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & `[`GetPlatformSession`](#structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0)`(const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & DefaultValue) const` <a id="structFRHAPI__Session_1a4d80598db285868a62904cc7a4087fd0"></a>

Gets the value of PlatformSession_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatformSession`](#structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > & OutValue) const` <a id="structFRHAPI__Session_1a3ad19c94403f3b16a21e32ac63308f39"></a>

Fills OutValue with the value of PlatformSession_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613)`()` <a id="structFRHAPI__Session_1a399665b2b0c76f170f8997913152b613"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > * `[`GetPlatformSessionOrNull`](#structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0)`() const` <a id="structFRHAPI__Session_1a18f938d6a17d7f32dc52a327e55b98c0"></a>

Returns a pointer to PlatformSession_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatformSession`](#structFRHAPI__Session_1a1e57ebcbe14f2f5190acab3972ead250)`(TArray< `[`FRHAPI_PlatformSession`](RHAPI_PlatformSession.md#structFRHAPI__PlatformSession)` > NewValue)` <a id="structFRHAPI__Session_1a1e57ebcbe14f2f5190acab3972ead250"></a>

Sets the value of PlatformSession_Optional and also sets PlatformSession_IsSet to true.

<br>
#### `public inline void `[`ClearPlatformSession`](#structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59)`()` <a id="structFRHAPI__Session_1ab2a2e49368eff0e0b474a8698449ee59"></a>

Clears the value of PlatformSession_Optional and sets PlatformSession_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa)`()` <a id="structFRHAPI__Session_1abed072171f304dcb8b90486b80943efa"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4)`() const` <a id="structFRHAPI__Session_1ad27ca08587eedfe4b8e9ec79233cc0c4"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Session_1a7b13eb31cdc9b0badc6cdff6f96b9f5b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Session_1a3c79c259ca67fda3d78a5e9fb8524196"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9)`()` <a id="structFRHAPI__Session_1ac249be887fd6245e401a68aa7d511bd9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e)`() const` <a id="structFRHAPI__Session_1a3fca4472cba176ea8c34aa97de65895e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__Session_1a1fbb989121313dfebf951e98202effb3)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__Session_1a1fbb989121313dfebf951e98202effb3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02)`()` <a id="structFRHAPI__Session_1a32314b8c9e8d7b7ce270550cff54ab02"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613)`()` <a id="structFRHAPI__Session_1a4a913a2628bb2e473ac8f41c97628613"></a>

Gets the value of Created.

<br>
#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d)`() const` <a id="structFRHAPI__Session_1a3d258ecf804b00ae3b7d44d2eafdd08d"></a>

Gets the value of Created.

<br>
#### `public inline void `[`SetCreated`](#structFRHAPI__Session_1a8868880c047000f8ea10662e426d2035)`(FDateTime NewValue)` <a id="structFRHAPI__Session_1a8868880c047000f8ea10662e426d2035"></a>

Sets the value of Created.

<br>
#### `public inline FString & `[`GetRegionId`](#structFRHAPI__Session_1a5823c390317676a992c6de596b07726e)`()` <a id="structFRHAPI__Session_1a5823c390317676a992c6de596b07726e"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3)`() const` <a id="structFRHAPI__Session_1afc68b80e9f4e79b40704a20ad62946a3"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b)`(const FString & DefaultValue) const` <a id="structFRHAPI__Session_1acdeb08926396cda4a845f46f2686d30b"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRegionId`](#structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3)`(FString & OutValue) const` <a id="structFRHAPI__Session_1ac5e6fe80b1ca4307432e555b0babdcd3"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989)`()` <a id="structFRHAPI__Session_1ae11e272a5b85d6af7d79b67b5ee09989"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267)`() const` <a id="structFRHAPI__Session_1a80e86b3b03b44086aff3e9d090fe1267"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRegionId`](#structFRHAPI__Session_1a556488693f5dbb2409e5e2a41a55358d)`(FString NewValue)` <a id="structFRHAPI__Session_1a556488693f5dbb2409e5e2a41a55358d"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

<br>
#### `public inline void `[`ClearRegionId`](#structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c)`()` <a id="structFRHAPI__Session_1a30fad9245a3b507c31661ea5b585e11c"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

<br>
#### `public inline bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93)`()` <a id="structFRHAPI__Session_1ae5447a41db818e93919c1bb590b8ba93"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048)`() const` <a id="structFRHAPI__Session_1a2491fbf7efba2d8eecd8aa3712a47048"></a>

Gets the value of CreatedByMatchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c)`(const bool & DefaultValue) const` <a id="structFRHAPI__Session_1a93939c7bd58a685b2c86a7a7ef284c8c"></a>

Gets the value of CreatedByMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCreatedByMatchmaking`](#structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2)`(bool & OutValue) const` <a id="structFRHAPI__Session_1abc3bdbaf68c4c37a60f9f81fa64debe2"></a>

Fills OutValue with the value of CreatedByMatchmaking_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52)`()` <a id="structFRHAPI__Session_1a1ee4a02d8cef77499ea1bafe725a8a52"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCreatedByMatchmakingOrNull`](#structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6)`() const` <a id="structFRHAPI__Session_1a6c95acf174c2fc5e4d6c4f59febd8ca6"></a>

Returns a pointer to CreatedByMatchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCreatedByMatchmaking`](#structFRHAPI__Session_1ae6b9e72e6aae07f2cbf4d3bc38458665)`(bool NewValue)` <a id="structFRHAPI__Session_1ae6b9e72e6aae07f2cbf4d3bc38458665"></a>

Sets the value of CreatedByMatchmaking_Optional and also sets CreatedByMatchmaking_IsSet to true.

<br>
#### `public inline void `[`ClearCreatedByMatchmaking`](#structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224)`()` <a id="structFRHAPI__Session_1af85992cc0259a2a30e553b1320c1e224"></a>

Clears the value of CreatedByMatchmaking_Optional and sets CreatedByMatchmaking_IsSet to false.

<br>
#### `public inline bool `[`IsCreatedByMatchmakingDefaultValue`](#structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad)`() const` <a id="structFRHAPI__Session_1a4497fa87bd0e35ecdf5b09b0714d36ad"></a>

Returns true if CreatedByMatchmaking_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCreatedByMatchmakingToDefault`](#structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6)`()` <a id="structFRHAPI__Session_1ac89a96065989ec35f4c1e11ca9bc81c6"></a>

Sets the value of CreatedByMatchmaking_Optional to its default and also sets CreatedByMatchmaking_IsSet to true.

<br>
