// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "RallyHereAPIBaseModel.h"
#include "RallyHereAPIHelpers.h"
#include "SortOrder.h"
#include "InventoryPageMeta.generated.h"

/** @defgroup RHAPI_InventoryPageMeta RallyHere API Model InventoryPageMeta
 *  @{
 */

/**
 * @brief Metadata about the page of results
 */
USTRUCT(BlueprintType)
struct RALLYHEREAPI_API FRHAPI_InventoryPageMeta : public FRHAPI_Model
{
    GENERATED_BODY()

    /**
    * @brief Fills this object with data from the passed in JSON
    *
    * @param [in] JsonValue Data from the API call.
    *
    * @return true if parsing of the JSON data was successful.
    */
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override final;

    /**
    * @brief Writes the data from this object into the specified JSON Writer stream
    *
    * @param [in] Writer JSON Writer stream to push .
    */
    void WriteJson(TSharedRef<TJsonWriter<>>& Writer) const override final;

    /** @brief Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FDateTime StartingPosition_Optional{  };
    /** @brief true if StartingPosition_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool StartingPosition_IsSet{ false };
    /** @brief Gets the value of StartingPosition_Optional, regardless of it having been set */
    FDateTime& GetStartingPosition() { return StartingPosition_Optional; }
    /** @brief Gets the value of StartingPosition_Optional, regardless of it having been set */
    const FDateTime& GetStartingPosition() const { return StartingPosition_Optional; }
    /** @brief Gets the value of StartingPosition_Optional, if it has been set, otherwise it returns DefaultValue */
    const FDateTime& GetStartingPosition(const FDateTime& DefaultValue) const { if (StartingPosition_IsSet) return StartingPosition_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of StartingPosition_Optional and returns true if it has been set, otherwise returns false */
    bool GetStartingPosition(FDateTime& OutValue) const { if (StartingPosition_IsSet) OutValue = StartingPosition_Optional; return StartingPosition_IsSet; }
    /** @brief Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr */
    FDateTime* GetStartingPositionOrNull() { if (StartingPosition_IsSet) return &StartingPosition_Optional; return nullptr; }
    /** @brief Returns a pointer to StartingPosition_Optional, if it has been set, otherwise returns nullptr */
    const FDateTime* GetStartingPositionOrNull() const { if (StartingPosition_IsSet) return &StartingPosition_Optional; return nullptr; }
    /** @brief Sets the value of StartingPosition_Optional and also sets StartingPosition_IsSet to true */
    void SetStartingPosition(FDateTime NewValue) { StartingPosition_Optional = NewValue; StartingPosition_IsSet = true; }
     /** @brief Clears the value of StartingPosition_Optional and sets StartingPosition_IsSet to false */
    void ClearStartingPosition() { StartingPosition_IsSet = false; }

    /** @brief The cursor value pointing to the next page of results. If cursor is provided, starting_position is ignored */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    FString Cursor_Optional{  };
    /** @brief true if Cursor_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Cursor_IsSet{ false };
    /** @brief Gets the value of Cursor_Optional, regardless of it having been set */
    FString& GetCursor() { return Cursor_Optional; }
    /** @brief Gets the value of Cursor_Optional, regardless of it having been set */
    const FString& GetCursor() const { return Cursor_Optional; }
    /** @brief Gets the value of Cursor_Optional, if it has been set, otherwise it returns DefaultValue */
    const FString& GetCursor(const FString& DefaultValue) const { if (Cursor_IsSet) return Cursor_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Cursor_Optional and returns true if it has been set, otherwise returns false */
    bool GetCursor(FString& OutValue) const { if (Cursor_IsSet) OutValue = Cursor_Optional; return Cursor_IsSet; }
    /** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
    FString* GetCursorOrNull() { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
    /** @brief Returns a pointer to Cursor_Optional, if it has been set, otherwise returns nullptr */
    const FString* GetCursorOrNull() const { if (Cursor_IsSet) return &Cursor_Optional; return nullptr; }
    /** @brief Sets the value of Cursor_Optional and also sets Cursor_IsSet to true */
    void SetCursor(FString NewValue) { Cursor_Optional = NewValue; Cursor_IsSet = true; }
     /** @brief Clears the value of Cursor_Optional and sets Cursor_IsSet to false */
    void ClearCursor() { Cursor_IsSet = false; }

    /** @brief The direction to search. */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    ERHAPI_SortOrder Sort_Optional{  };
    /** @brief true if Sort_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Sort_IsSet{ false };
    /** @brief Gets the value of Sort_Optional, regardless of it having been set */
    ERHAPI_SortOrder& GetSort() { return Sort_Optional; }
    /** @brief Gets the value of Sort_Optional, regardless of it having been set */
    const ERHAPI_SortOrder& GetSort() const { return Sort_Optional; }
    /** @brief Gets the value of Sort_Optional, if it has been set, otherwise it returns DefaultValue */
    const ERHAPI_SortOrder& GetSort(const ERHAPI_SortOrder& DefaultValue) const { if (Sort_IsSet) return Sort_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Sort_Optional and returns true if it has been set, otherwise returns false */
    bool GetSort(ERHAPI_SortOrder& OutValue) const { if (Sort_IsSet) OutValue = Sort_Optional; return Sort_IsSet; }
    /** @brief Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr */
    ERHAPI_SortOrder* GetSortOrNull() { if (Sort_IsSet) return &Sort_Optional; return nullptr; }
    /** @brief Returns a pointer to Sort_Optional, if it has been set, otherwise returns nullptr */
    const ERHAPI_SortOrder* GetSortOrNull() const { if (Sort_IsSet) return &Sort_Optional; return nullptr; }
    /** @brief Sets the value of Sort_Optional and also sets Sort_IsSet to true */
    void SetSort(ERHAPI_SortOrder NewValue) { Sort_Optional = NewValue; Sort_IsSet = true; }
     /** @brief Clears the value of Sort_Optional and sets Sort_IsSet to false */
    void ClearSort() { Sort_IsSet = false; }

    /** @brief The number of Orders to return */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    int32 Limit_Optional{  };
    /** @brief true if Limit_Optional has been set to a value */
    UPROPERTY(BlueprintReadOnly, Category = "RallyHere")
    bool Limit_IsSet{ false };
    /** @brief Gets the value of Limit_Optional, regardless of it having been set */
    int32& GetLimit() { return Limit_Optional; }
    /** @brief Gets the value of Limit_Optional, regardless of it having been set */
    const int32& GetLimit() const { return Limit_Optional; }
    /** @brief Gets the value of Limit_Optional, if it has been set, otherwise it returns DefaultValue */
    const int32& GetLimit(const int32& DefaultValue) const { if (Limit_IsSet) return Limit_Optional; return DefaultValue; }
    /** @brief Fills OutValue with the value of Limit_Optional and returns true if it has been set, otherwise returns false */
    bool GetLimit(int32& OutValue) const { if (Limit_IsSet) OutValue = Limit_Optional; return Limit_IsSet; }
    /** @brief Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr */
    int32* GetLimitOrNull() { if (Limit_IsSet) return &Limit_Optional; return nullptr; }
    /** @brief Returns a pointer to Limit_Optional, if it has been set, otherwise returns nullptr */
    const int32* GetLimitOrNull() const { if (Limit_IsSet) return &Limit_Optional; return nullptr; }
    /** @brief Sets the value of Limit_Optional and also sets Limit_IsSet to true */
    void SetLimit(int32 NewValue) { Limit_Optional = NewValue; Limit_IsSet = true; }
     /** @brief Clears the value of Limit_Optional and sets Limit_IsSet to false */
    void ClearLimit() { Limit_Optional = 10; Limit_IsSet = false; }
    /** @brief Returns true if Limit_Optional is set and matches the default value */
    bool IsLimitDefaultValue() const { return Limit_IsSet && Limit_Optional == 10; }
    /** @brief Sets the value of Limit_Optional to its default and also sets Limit_IsSet to true */
    void SetLimitToDefault() { Limit_Optional = 10; Limit_IsSet = true; }
};

/** @} */
