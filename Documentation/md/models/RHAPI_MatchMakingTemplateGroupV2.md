# RHAPI_MatchMakingTemplateGroupV2 <a id="group__RHAPI__MatchMakingTemplateGroupV2"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchMakingTemplateGroupV2`](#structFRHAPI__MatchMakingTemplateGroupV2) | A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

## struct `FRHAPI_MatchMakingTemplateGroupV2` <a id="structFRHAPI__MatchMakingTemplateGroupV2"></a>

```
struct FRHAPI_MatchMakingTemplateGroupV2
  : public FRHAPI_Model
```

A collection of MatchMakingTemplates that may be used when a session enters a queue. The first template that satisfies the necessary rules will be used.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a83b0b9b6370236f8a16d72a44acad88e) | ID for this set of potential matchmaking templates.
`public TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb) | List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.
`public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) | Set of all the item ids that are required to validate every rule contained in this template group.
`public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) | true if RequiredItemIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa82d7762c65e34e906c1fa2af0a15b80)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae72915da0979e90493d2d2f47c565c9d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1af78a90a1f59c8c2b72b13dbc9f048017)`()` | Gets the value of TemplateGroupId.
`public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9dd07f13c3c393e77444ce11e2f59ee9)`() const` | Gets the value of TemplateGroupId.
`public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac3bad49ee46745d1555f7e2cbc62d375)`(FGuid NewValue)` | Sets the value of TemplateGroupId.
`public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16)`()` | Gets the value of TemplateOptions.
`public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316)`() const` | Gets the value of TemplateOptions.
`public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1acdfe22412b41577fa5e2761d489693fd)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > NewValue)` | Sets the value of TemplateOptions.
`public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2)`()` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731)`() const` | Gets the value of RequiredItemIds_Optional, regardless of it having been set.
`public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd)`(const TSet< int32 > & DefaultValue) const` | Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` | Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483)`()` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138)`() const` | Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1619a5f41fcd839b5ca83adedae56979)`(TSet< int32 > NewValue)` | Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.
`public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` | Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

#### Members

#### `public FGuid `[`TemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a83b0b9b6370236f8a16d72a44acad88e) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a83b0b9b6370236f8a16d72a44acad88e"></a>

ID for this set of potential matchmaking templates.

<br>
#### `public TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > `[`TemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a5f061f6b1728e5e91acbc50c8d0db1cb"></a>

List of the different matchmaking templates that could be used. The config is chosen based on a set of rules in each MatchMakingTemplate object. If there are no rules, it's the default template.

<br>
#### `public TSet< int32 > `[`RequiredItemIds_Optional`](#structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a679dffab35167122874604eb826703bd"></a>

Set of all the item ids that are required to validate every rule contained in this template group.

<br>
#### `public bool `[`RequiredItemIds_IsSet`](#structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3) <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acf8e308da6fcec42032dd998a15284c3"></a>

true if RequiredItemIds_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1aa82d7762c65e34e906c1fa2af0a15b80)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aa82d7762c65e34e906c1fa2af0a15b80"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae72915da0979e90493d2d2f47c565c9d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae72915da0979e90493d2d2f47c565c9d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1af78a90a1f59c8c2b72b13dbc9f048017)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1af78a90a1f59c8c2b72b13dbc9f048017"></a>

Gets the value of TemplateGroupId.

<br>
#### `public inline const FGuid & `[`GetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1a9dd07f13c3c393e77444ce11e2f59ee9)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a9dd07f13c3c393e77444ce11e2f59ee9"></a>

Gets the value of TemplateGroupId.

<br>
#### `public inline void `[`SetTemplateGroupId`](#structFRHAPI__MatchMakingTemplateGroupV2_1ac3bad49ee46745d1555f7e2cbc62d375)`(FGuid NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ac3bad49ee46745d1555f7e2cbc62d375"></a>

Sets the value of TemplateGroupId.

<br>
#### `public inline TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ae7ac396d71d72df8dfd497619e5b5e16"></a>

Gets the value of TemplateOptions.

<br>
#### `public inline const TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > & `[`GetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a78820cdf045398fec485c4ac12d50316"></a>

Gets the value of TemplateOptions.

<br>
#### `public inline void `[`SetTemplateOptions`](#structFRHAPI__MatchMakingTemplateGroupV2_1acdfe22412b41577fa5e2761d489693fd)`(TArray< `[`FRHAPI_MatchMakingTemplateV2`](RHAPI_MatchMakingTemplateV2.md#structFRHAPI__MatchMakingTemplateV2)` > NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1acdfe22412b41577fa5e2761d489693fd"></a>

Sets the value of TemplateOptions.

<br>
#### `public inline TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1aae74151bbae2476c5dd9e69b5c8619c2"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1ad7c46a9636d5fd68fae7f62341db2731"></a>

Gets the value of RequiredItemIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< int32 > & `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd)`(const TSet< int32 > & DefaultValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a29b9c106297cec5cc94f9bf5d4b8c7cd"></a>

Gets the value of RequiredItemIds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b)`(TSet< int32 > & OutValue) const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2502c85366c9867bc828b58e75b4771b"></a>

Fills OutValue with the value of RequiredItemIds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cc6f2377ab9ba029a272d88bb50b483"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TSet< int32 > * `[`GetRequiredItemIdsOrNull`](#structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138)`() const` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a12ee516297ac458faf9eda375bf3e138"></a>

Returns a pointer to RequiredItemIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a1619a5f41fcd839b5ca83adedae56979)`(TSet< int32 > NewValue)` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a1619a5f41fcd839b5ca83adedae56979"></a>

Sets the value of RequiredItemIds_Optional and also sets RequiredItemIds_IsSet to true.

<br>
#### `public inline void `[`ClearRequiredItemIds`](#structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055)`()` <a id="structFRHAPI__MatchMakingTemplateGroupV2_1a2cfe134d15ff3ce519d7be4a1a681055"></a>

Clears the value of RequiredItemIds_Optional and sets RequiredItemIds_IsSet to false.

<br>
