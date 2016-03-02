// Fill out your copyright notice in the Description page of Project Settings.
#include "Json.h"
#include "Runtime/Online/HTTP/Public/Http.h" //for http requests
#include "IHttpRequest.h"
// #include "HttpWrapper.generated.h"
#pragma once

/**
 *
 */
class NETWORK_API jsonHelper
{
public:
	TSharedPtr<FJsonObject> loadJsonObject(const FString& FilePath);


	void requestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	bool setJsonObject(const FString& fileName);

	FHttpModule* Http;
};
