// NOTE: This file is auto generated by https://github.com/hirezstudios/rally-here-api-generator
// Do not edit the file manually.
//
// Copyright 2018 OpenAPI-Generator Contributors (https://openapi-generator.tech)
// Copyright 2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "RallyHereDeveloperAPIAuthContext.h"
#include "RallyHereDeveloperAPIHelpers.h"
#include "DevAccount.h"
#include "DevAccountCreationRequest.h"
#include "DevAccountOrganization.h"
#include "DevAccountOrganizationRequest.h"
#include "DevAccountUpdateRequest.h"
#include "DevHTTPValidationError.h"
#include "Misc/TVariant.h"

namespace RallyHereDeveloperAPI
{
using RallyHereDeveloperAPI::ToStringFormatArg;
using RallyHereDeveloperAPI::WriteJsonValue;
using RallyHereDeveloperAPI::TryGetJsonValue;

struct FRequest_CreateAccount;
struct FResponse_CreateAccount;
struct FRequest_CreateAccountOrgAssignment;
struct FResponse_CreateAccountOrgAssignment;
struct FRequest_DeleteAccount;
struct FResponse_DeleteAccount;
struct FRequest_DeleteAccountFromOrgApi;
struct FResponse_DeleteAccountFromOrgApi;
struct FRequest_GetAccount;
struct FResponse_GetAccount;
struct FRequest_GetAccountsInOrg;
struct FResponse_GetAccountsInOrg;
struct FRequest_GetAllAccounts;
struct FResponse_GetAllAccounts;
struct FRequest_GetOrgsForAccounts;
struct FResponse_GetOrgsForAccounts;
struct FRequest_ResendVerificationEmail;
struct FResponse_ResendVerificationEmail;
struct FRequest_UpdateAccount;
struct FResponse_UpdateAccount;
struct FRequest_UpdateAccountByUser;
struct FResponse_UpdateAccountByUser;

DECLARE_DELEGATE_OneParam(FDelegate_CreateAccount, const FResponse_CreateAccount&);
DECLARE_DELEGATE_OneParam(FDelegate_CreateAccountOrgAssignment, const FResponse_CreateAccountOrgAssignment&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteAccount, const FResponse_DeleteAccount&);
DECLARE_DELEGATE_OneParam(FDelegate_DeleteAccountFromOrgApi, const FResponse_DeleteAccountFromOrgApi&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAccount, const FResponse_GetAccount&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAccountsInOrg, const FResponse_GetAccountsInOrg&);
DECLARE_DELEGATE_OneParam(FDelegate_GetAllAccounts, const FResponse_GetAllAccounts&);
DECLARE_DELEGATE_OneParam(FDelegate_GetOrgsForAccounts, const FResponse_GetOrgsForAccounts&);
DECLARE_DELEGATE_OneParam(FDelegate_ResendVerificationEmail, const FResponse_ResendVerificationEmail&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateAccount, const FResponse_UpdateAccount&);
DECLARE_DELEGATE_OneParam(FDelegate_UpdateAccountByUser, const FResponse_UpdateAccountByUser&);

class RALLYHEREDEVELOPERAPI_API FOrganizationAccountsAPI : public FAPI
{
public:
    FOrganizationAccountsAPI();
    virtual ~FOrganizationAccountsAPI();

    FHttpRequestPtr CreateAccount(const FRequest_CreateAccount& Request, const FDelegate_CreateAccount& Delegate = FDelegate_CreateAccount(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr CreateAccountOrgAssignment(const FRequest_CreateAccountOrgAssignment& Request, const FDelegate_CreateAccountOrgAssignment& Delegate = FDelegate_CreateAccountOrgAssignment(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr DeleteAccount(const FRequest_DeleteAccount& Request, const FDelegate_DeleteAccount& Delegate = FDelegate_DeleteAccount(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr DeleteAccountFromOrgApi(const FRequest_DeleteAccountFromOrgApi& Request, const FDelegate_DeleteAccountFromOrgApi& Delegate = FDelegate_DeleteAccountFromOrgApi(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAccount(const FRequest_GetAccount& Request, const FDelegate_GetAccount& Delegate = FDelegate_GetAccount(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAccountsInOrg(const FRequest_GetAccountsInOrg& Request, const FDelegate_GetAccountsInOrg& Delegate = FDelegate_GetAccountsInOrg(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetAllAccounts(const FRequest_GetAllAccounts& Request, const FDelegate_GetAllAccounts& Delegate = FDelegate_GetAllAccounts(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr GetOrgsForAccounts(const FRequest_GetOrgsForAccounts& Request, const FDelegate_GetOrgsForAccounts& Delegate = FDelegate_GetOrgsForAccounts(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr ResendVerificationEmail(const FRequest_ResendVerificationEmail& Request, const FDelegate_ResendVerificationEmail& Delegate = FDelegate_ResendVerificationEmail(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateAccount(const FRequest_UpdateAccount& Request, const FDelegate_UpdateAccount& Delegate = FDelegate_UpdateAccount(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);
    FHttpRequestPtr UpdateAccountByUser(const FRequest_UpdateAccountByUser& Request, const FDelegate_UpdateAccountByUser& Delegate = FDelegate_UpdateAccountByUser(), int32 Priority = DefaultRallyHereDeveloperAPIPriority);

private:
    void OnCreateAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateAccount Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnCreateAccountOrgAssignmentResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_CreateAccountOrgAssignment Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteAccount Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnDeleteAccountFromOrgApiResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_DeleteAccountFromOrgApi Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAccount Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAccountsInOrgResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAccountsInOrg Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetAllAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetAllAccounts Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnGetOrgsForAccountsResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_GetOrgsForAccounts Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnResendVerificationEmailResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_ResendVerificationEmail Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateAccountResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateAccount Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);
    void OnUpdateAccountByUserResponse(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded, FDelegate_UpdateAccountByUser Delegate, FRequestMetadata RequestMetadata, TSharedPtr<FAuthContext> AuthContextForRetry, int32 Priority);

};

/* Create Account
 *
 * Create a new account, requires account:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateAccount : public FRequest
{
    FRequest_CreateAccount();
    virtual ~FRequest_CreateAccount() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevAccountCreationRequest AccountCreationRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateAccount : public FResponse
{
    FResponse_CreateAccount(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateAccount() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAccount Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateAccount
{
    typedef FRequest_CreateAccount Request;
    typedef FResponse_CreateAccount Response;
    typedef FDelegate_CreateAccount Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateAccount(InRequest, InDelegate, Priority); }
};

/* Create Account Org Assignment
 *
 * Create an Account/Organization assignment, requires accountOrg:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_CreateAccountOrgAssignment : public FRequest
{
    FRequest_CreateAccountOrgAssignment();
    virtual ~FRequest_CreateAccountOrgAssignment() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    FRHAPI_DevAccountOrganizationRequest AccountOrganizationRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_CreateAccountOrgAssignment : public FResponse
{
    FResponse_CreateAccountOrgAssignment(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_CreateAccountOrgAssignment() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAccountOrganization Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_CreateAccountOrgAssignment
{
    typedef FRequest_CreateAccountOrgAssignment Request;
    typedef FResponse_CreateAccountOrgAssignment Response;
    typedef FDelegate_CreateAccountOrgAssignment Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.CreateAccountOrgAssignment(InRequest, InDelegate, Priority); }
};

/* Delete Account
 *
 * Delete an account by account ID, requires account:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_DeleteAccount : public FRequest
{
    FRequest_DeleteAccount();
    virtual ~FRequest_DeleteAccount() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Account ID */
    TVariant<FGuid, FString> AccountIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_DeleteAccount : public FResponse
{
    FResponse_DeleteAccount(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteAccount() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_DeleteAccount
{
    typedef FRequest_DeleteAccount Request;
    typedef FResponse_DeleteAccount Response;
    typedef FDelegate_DeleteAccount Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.DeleteAccount(InRequest, InDelegate, Priority); }
};

/* Delete Account From Org Api
 *
 * Delete an Account Organization assignment, requires accountOrg:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_DeleteAccountFromOrgApi : public FRequest
{
    FRequest_DeleteAccountFromOrgApi();
    virtual ~FRequest_DeleteAccountFromOrgApi() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
    /* Account ID */
    TVariant<FGuid, FString> AccountIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_DeleteAccountFromOrgApi : public FResponse
{
    FResponse_DeleteAccountFromOrgApi(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_DeleteAccountFromOrgApi() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_DeleteAccountFromOrgApi
{
    typedef FRequest_DeleteAccountFromOrgApi Request;
    typedef FResponse_DeleteAccountFromOrgApi Response;
    typedef FDelegate_DeleteAccountFromOrgApi Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.DeleteAccountFromOrgApi(InRequest, InDelegate, Priority); }
};

/* Get Account
 *
 * Get account details by account ID, requires account:config:view | account:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAccount : public FRequest
{
    FRequest_GetAccount();
    virtual ~FRequest_GetAccount() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Account ID */
    TVariant<FGuid, FString> AccountIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAccount : public FResponse
{
    FResponse_GetAccount(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAccount() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAccount Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAccount
{
    typedef FRequest_GetAccount Request;
    typedef FResponse_GetAccount Response;
    typedef FDelegate_GetAccount Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAccount(InRequest, InDelegate, Priority); }
};

/* Get Accounts In Org
 *
 * Get all Accounts in an Organization, requires accountOrg:config:view | accountOrg:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAccountsInOrg : public FRequest
{
    FRequest_GetAccountsInOrg();
    virtual ~FRequest_GetAccountsInOrg() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Organization ID or short name */
    TVariant<FGuid, FString> OrgIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAccountsInOrg : public FResponse
{
    FResponse_GetAccountsInOrg(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAccountsInOrg() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevAccountOrganization> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAccountsInOrg
{
    typedef FRequest_GetAccountsInOrg Request;
    typedef FResponse_GetAccountsInOrg Response;
    typedef FDelegate_GetAccountsInOrg Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAccountsInOrg(InRequest, InDelegate, Priority); }
};

/* Get All Accounts
 *
 * Get all accounts, requires globalAdmin:*:* permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetAllAccounts : public FRequest
{
    FRequest_GetAllAccounts();
    virtual ~FRequest_GetAllAccounts() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    TOptional<int32> Page;
    TOptional<int32> PerPage;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetAllAccounts : public FResponse
{
    FResponse_GetAllAccounts(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetAllAccounts() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetAllAccounts
{
    typedef FRequest_GetAllAccounts Request;
    typedef FResponse_GetAllAccounts Response;
    typedef FDelegate_GetAllAccounts Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetAllAccounts(InRequest, InDelegate, Priority); }
};

/* Get Orgs For Accounts
 *
 * Get all Organizations for an Account, requires accountOrg:config:view | accountOrg:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_GetOrgsForAccounts : public FRequest
{
    FRequest_GetOrgsForAccounts();
    virtual ~FRequest_GetOrgsForAccounts() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Account Identifier */
    TVariant<FGuid, FString> AccountIdentifier;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_GetOrgsForAccounts : public FResponse
{
    FResponse_GetOrgsForAccounts(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_GetOrgsForAccounts() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    TArray<FRHAPI_DevAccountOrganization> Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_GetOrgsForAccounts
{
    typedef FRequest_GetOrgsForAccounts Request;
    typedef FResponse_GetOrgsForAccounts Response;
    typedef FDelegate_GetOrgsForAccounts Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.GetOrgsForAccounts(InRequest, InDelegate, Priority); }
};

/* Resend Verification Email
 *
 * Resend verification email, requires no permissions as request is for account in token
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_ResendVerificationEmail : public FRequest
{
    FRequest_ResendVerificationEmail();
    virtual ~FRequest_ResendVerificationEmail() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_ResendVerificationEmail : public FResponse
{
    FResponse_ResendVerificationEmail(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_ResendVerificationEmail() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_ResendVerificationEmail
{
    typedef FRequest_ResendVerificationEmail Request;
    typedef FResponse_ResendVerificationEmail Response;
    typedef FDelegate_ResendVerificationEmail Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.ResendVerificationEmail(InRequest, InDelegate, Priority); }
};

/* Update Account
 *
 * Update an account by account ID, requires account:config:edit permissions
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateAccount : public FRequest
{
    FRequest_UpdateAccount();
    virtual ~FRequest_UpdateAccount() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    /* Account ID */
    TVariant<FGuid, FString> AccountIdentifier;
    FRHAPI_DevAccountUpdateRequest AccountUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateAccount : public FResponse
{
    FResponse_UpdateAccount(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateAccount() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevAccount Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateAccount
{
    typedef FRequest_UpdateAccount Request;
    typedef FResponse_UpdateAccount Response;
    typedef FDelegate_UpdateAccount Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateAccount(InRequest, InDelegate, Priority); }
};

/* Update Account By User
 *
 * Update account details, no permissions required as request should be made using user account token
*/
struct RALLYHEREDEVELOPERAPI_API FRequest_UpdateAccountByUser : public FRequest
{
    FRequest_UpdateAccountByUser();
    virtual ~FRequest_UpdateAccountByUser() = default;
    bool SetupHttpRequest(const FHttpRequestRef& HttpRequest) const override;
    FString ComputePath() const override;
    FName GetSimplifiedPath() const override;
    TSharedPtr<FAuthContext> GetAuthContext() const override { return AuthContext; }

    TSharedPtr<FAuthContext> AuthContext;
    FRHAPI_DevAccountUpdateRequest AccountUpdateRequest;
};

struct RALLYHEREDEVELOPERAPI_API FResponse_UpdateAccountByUser : public FResponse
{
    FResponse_UpdateAccountByUser(FRequestMetadata InRequestMetadata);
    virtual ~FResponse_UpdateAccountByUser() = default;
    bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) override;
    void SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode) override;

    FRHAPI_DevJsonValue Content;

};

struct RALLYHEREDEVELOPERAPI_API Traits_UpdateAccountByUser
{
    typedef FRequest_UpdateAccountByUser Request;
    typedef FResponse_UpdateAccountByUser Response;
    typedef FDelegate_UpdateAccountByUser Delegate;
    typedef FOrganizationAccountsAPI API;
    static FString Name;
	
    static FHttpRequestPtr DoCall(API& InAPI, const Request& InRequest, Delegate InDelegate = Delegate(), int32 Priority = DefaultRallyHereDeveloperAPIPriority) { return InAPI.UpdateAccountByUser(InRequest, InDelegate, Priority); }
};


}
