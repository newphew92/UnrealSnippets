// Fill out your copyright notice in the Description page of Project Settings.
//Modify Network.Build.cs
#include "Network.h"
#include "jsonHelper.h"
#include "FileManager.h"




TSharedPtr<FJsonObject> jsonHelper::loadJsonObject(const FString& fileName){
  //load game

    FString gameContentDir = FPaths::GameContentDir();
    FString temp = FString("/savedGame/") + *fileName;
    FString writeDir = FPaths::Combine(*gameContentDir, *temp);
    // TSharedRef<TJsonReader<>> JsonReader;
    FString JsonStr;
    FFileHelper::LoadFileToString(JsonStr, *writeDir);
    //
    TSharedRef<TJsonReader<>> JsonReader = FJsonStringReader::Create(JsonStr);
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    FJsonSerializer::Deserialize(JsonReader, JsonObject);
    //JsonObject.IsValid()
    return JsonObject;
}
bool jsonHelper::setJsonObject(const FString& fileName){
  //save game
  //apparently creates JSON reader, not sure what it does really
  // Create a writer and hold it in this FString

  FString JsonStr;
  TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
  TSharedRef <TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&JsonStr, 0);
    // TSharedRef > JsonWriter = TJsonWriterFactory<>::Create(SaveFile); ????
  // TSharedRef< FPrettyJsonStringWriter > PrettyWriter = FPrettyJsonStringWriterFactory::Create( &JsonStr );
// ============================Only for direct writing============================================
  // JsonWriter->WriteObjectStart();
  //
  // // ObjectInstance1 (will be MyObject->GetFullPath() or something)
  //   JsonWriter->WriteObjectStart("ObjectInstance1");
  //     JsonWriter->WriteValue("SomeBool", true);
  //     JsonWriter->WriteValue("SomeString", *fileName);
  //     JsonWriter->WriteValue("SomeNumber", 32.0);
  //   JsonWriter->WriteObjectEnd();
  //
  // // Close the writer and finalize the output such that JsonStr has what we want
  // JsonWriter->WriteObjectEnd();
  // JsonWriter->Close();
// ==================================================================================================

  JsonObject->SetBoolField("SomeBool", true);
  JsonObject->SetStringField("SomeString", *fileName);
  JsonObject->SetNumberField("SomNumber", 32.0);

  FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter);
  FString gameContentDir = FPaths::GameContentDir();
  FString temp = FString("/savedGame/") + *fileName;
  FString writeDir = FPaths::Combine(*gameContentDir, *temp);
  FFileHelper::SaveStringToFile(*JsonStr, *writeDir);

  // Http = &FHttpModule::Get();
  TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
  Request->SetVerb(TEXT("POST"));
  Request->SetURL("localhost:8000");
  Request->SetHeader("Content-Type", "application/json");
  Request->SetContentAsString(JsonStr);
  Request->OnProcessRequestComplete().BindRaw(this, &jsonHelper::requestComplete);//holy shit BindRaw worked,
  //https://docs.unrealengine.com/latest/INT/Programming/UnrealArchitecture/Delegates/index.html#payloaddata for more info
  Request->ProcessRequest();

  return true;
}

void jsonHelper::requestComplete(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful){
    if (bWasSuccessful && Response->GetContentType() == "application/json"){
        TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
        TSharedRef<TJsonReader<TCHAR>> JsonReader =  TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
        FJsonSerializer::Deserialize(JsonReader, JsonObject);
    }
    else{
        // Handle error here
    }
}
