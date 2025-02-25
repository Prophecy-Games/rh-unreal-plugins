# Ads <a id="group__Ads"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`class `[`URH_AdSubsystem`](#classURH__AdSubsystem) | Ad Subsystem used for serving and responging to ad operrtunities for players.

## class `URH_AdSubsystem` <a id="classURH__AdSubsystem"></a>

```
class URH_AdSubsystem
  : public URH_LocalPlayerSubsystemPlugin
```

Ad Subsystem used for serving and responging to ad operrtunities for players.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public virtual void `[`Initialize`](#classURH__AdSubsystem_1a6bba9b21c9089c0f1cc0e9af2e9b6ee3)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__AdSubsystem_1a341eaf87c25d6d1e29e6547361845bb5)`()` | Safely tears down the subsystem.
`public FHttpRequestPtr `[`BeginNewSession`](#classURH__AdSubsystem_1a70438a957e66082d80591fa070e3a391)`(RallyHereAPI::FRequest_BeginNewSession Request,const RallyHereAPI::FDelegate_BeginNewSession & Delegate)` | Starts a session for serving ad oppertunities.
`public FHttpRequestPtr `[`FindOpportunities`](#classURH__AdSubsystem_1a5f36e3c9cfa910812b2867e2c78e1eeb)`(RallyHereAPI::FRequest_FindOpportunities Request,const RallyHereAPI::FDelegate_FindOpportunities & Delegate)` | Attempts to find new ad oppertunities to present to the user.
`public FHttpRequestPtr `[`UpdateOpportunityById`](#classURH__AdSubsystem_1a6737a0085bcf9d8bf07418f12f2eaca9)`(RallyHereAPI::FRequest_UpdateOpportunityById Request,const RallyHereAPI::FDelegate_UpdateOpportunityById & Delegate)` | Updates the status of an ad oppertunity.
`public FString `[`GetAdApiToken`](#classURH__AdSubsystem_1aa84c842cb38bb70ea8dcef42dda4f1b0)`() const` | Gets the API token used to make quick ad oppertunity attempts for the same user.
`public const TArray< `[`FRHAPI_AdOpportunity`](models/RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#classURH__AdSubsystem_1ad31daa92d579d443b48a8269492f5478)`() const` | Gets all ad oppertunities that have been been found during the session.
`protected TArray< `[`FRHAPI_AdOpportunity`](models/RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#classURH__AdSubsystem_1ab5b3a448252fa2e2f75eecc2aa365579) | Cached Ad Oppertunities.
`protected FString `[`XHzAdApiToken`](#classURH__AdSubsystem_1a103b700c07d6184030fcbf664e551c30) | Ad API token used by the subsystem to make ad calls.
`protected virtual void `[`OnUserChanged`](#classURH__AdSubsystem_1a0f08945f65d5a03be1a52f6660f49d86)`()` | Callback that occurs whenever the local player this subsystem is associated with changes.
`protected virtual void `[`OnBeginNewSession`](#classURH__AdSubsystem_1a6ef3b034a69c31fb12797e1a741d3cb2)`(const RallyHereAPI::FResponse_BeginNewSession & Resp,RallyHereAPI::FDelegate_BeginNewSession Delegate)` | Handles the response to a Begin New Ad Session call.
`protected virtual void `[`OnFindOpportunities`](#classURH__AdSubsystem_1ac5ec6fa0f2803fe0c2cb67eb0d30b280)`(const RallyHereAPI::FResponse_FindOpportunities & Resp,RallyHereAPI::FDelegate_FindOpportunities Delegate)` | Handles the response to a Find Ad Oppertunities call.
`protected virtual void `[`OnUpdateOpportunityById`](#classURH__AdSubsystem_1a1bb77aefd2ceeff74643b19a0b78c2b4)`(const RallyHereAPI::FResponse_UpdateOpportunityById & Resp,RallyHereAPI::FDelegate_UpdateOpportunityById Delegate)` | Handles the response to a Update Ad Oppertunities call.

#### Members

#### `public virtual void `[`Initialize`](#classURH__AdSubsystem_1a6bba9b21c9089c0f1cc0e9af2e9b6ee3)`()` <a id="classURH__AdSubsystem_1a6bba9b21c9089c0f1cc0e9af2e9b6ee3"></a>

Initialize the subsystem.

<br>
#### `public virtual void `[`Deinitialize`](#classURH__AdSubsystem_1a341eaf87c25d6d1e29e6547361845bb5)`()` <a id="classURH__AdSubsystem_1a341eaf87c25d6d1e29e6547361845bb5"></a>

Safely tears down the subsystem.

<br>
#### `public FHttpRequestPtr `[`BeginNewSession`](#classURH__AdSubsystem_1a70438a957e66082d80591fa070e3a391)`(RallyHereAPI::FRequest_BeginNewSession Request,const RallyHereAPI::FDelegate_BeginNewSession & Delegate)` <a id="classURH__AdSubsystem_1a70438a957e66082d80591fa070e3a391"></a>

Starts a session for serving ad oppertunities.

#### Parameters
* `Request` Request information for obtaining a new session. 

* `Delegate` Callback Delegate for when session creation is complete. 

#### Returns
Http Request for the session creation.

<br>
#### `public FHttpRequestPtr `[`FindOpportunities`](#classURH__AdSubsystem_1a5f36e3c9cfa910812b2867e2c78e1eeb)`(RallyHereAPI::FRequest_FindOpportunities Request,const RallyHereAPI::FDelegate_FindOpportunities & Delegate)` <a id="classURH__AdSubsystem_1a5f36e3c9cfa910812b2867e2c78e1eeb"></a>

Attempts to find new ad oppertunities to present to the user.

#### Parameters
* `Request` Request information for requesting new ads. 

* `Delegate` Callback Delegate for when finding oppertunities is complete. 

#### Returns
Http Request for the find oppertunities request.

<br>
#### `public FHttpRequestPtr `[`UpdateOpportunityById`](#classURH__AdSubsystem_1a6737a0085bcf9d8bf07418f12f2eaca9)`(RallyHereAPI::FRequest_UpdateOpportunityById Request,const RallyHereAPI::FDelegate_UpdateOpportunityById & Delegate)` <a id="classURH__AdSubsystem_1a6737a0085bcf9d8bf07418f12f2eaca9"></a>

Updates the status of an ad oppertunity.

#### Parameters
* `Request` Request information for current ad oppertunities. 

* `Delegate` Callback Delegate for when updating oppertunities is complete. 

#### Returns
Http Request for the update oppertunities request.

<br>
#### `public FString `[`GetAdApiToken`](#classURH__AdSubsystem_1aa84c842cb38bb70ea8dcef42dda4f1b0)`() const` <a id="classURH__AdSubsystem_1aa84c842cb38bb70ea8dcef42dda4f1b0"></a>

Gets the API token used to make quick ad oppertunity attempts for the same user.

#### Returns
The API Token.

<br>
#### `public const TArray< `[`FRHAPI_AdOpportunity`](models/RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#classURH__AdSubsystem_1ad31daa92d579d443b48a8269492f5478)`() const` <a id="classURH__AdSubsystem_1ad31daa92d579d443b48a8269492f5478"></a>

Gets all ad oppertunities that have been been found during the session.

#### Returns
All ad oppertunities.

<br>
#### `protected TArray< `[`FRHAPI_AdOpportunity`](models/RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#classURH__AdSubsystem_1ab5b3a448252fa2e2f75eecc2aa365579) <a id="classURH__AdSubsystem_1ab5b3a448252fa2e2f75eecc2aa365579"></a>

Cached Ad Oppertunities.

<br>
#### `protected FString `[`XHzAdApiToken`](#classURH__AdSubsystem_1a103b700c07d6184030fcbf664e551c30) <a id="classURH__AdSubsystem_1a103b700c07d6184030fcbf664e551c30"></a>

Ad API token used by the subsystem to make ad calls.

<br>
#### `protected virtual void `[`OnUserChanged`](#classURH__AdSubsystem_1a0f08945f65d5a03be1a52f6660f49d86)`()` <a id="classURH__AdSubsystem_1a0f08945f65d5a03be1a52f6660f49d86"></a>

Callback that occurs whenever the local player this subsystem is associated with changes.

<br>
#### `protected virtual void `[`OnBeginNewSession`](#classURH__AdSubsystem_1a6ef3b034a69c31fb12797e1a741d3cb2)`(const RallyHereAPI::FResponse_BeginNewSession & Resp,RallyHereAPI::FDelegate_BeginNewSession Delegate)` <a id="classURH__AdSubsystem_1a6ef3b034a69c31fb12797e1a741d3cb2"></a>

Handles the response to a Begin New Ad Session call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnFindOpportunities`](#classURH__AdSubsystem_1ac5ec6fa0f2803fe0c2cb67eb0d30b280)`(const RallyHereAPI::FResponse_FindOpportunities & Resp,RallyHereAPI::FDelegate_FindOpportunities Delegate)` <a id="classURH__AdSubsystem_1ac5ec6fa0f2803fe0c2cb67eb0d30b280"></a>

Handles the response to a Find Ad Oppertunities call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
#### `protected virtual void `[`OnUpdateOpportunityById`](#classURH__AdSubsystem_1a1bb77aefd2ceeff74643b19a0b78c2b4)`(const RallyHereAPI::FResponse_UpdateOpportunityById & Resp,RallyHereAPI::FDelegate_UpdateOpportunityById Delegate)` <a id="classURH__AdSubsystem_1a1bb77aefd2ceeff74643b19a0b78c2b4"></a>

Handles the response to a Update Ad Oppertunities call.

#### Parameters
* `Resp` Response given for the call. 

* `Delegate` Delegate passed in for original call to respond to when call completes.

<br>
