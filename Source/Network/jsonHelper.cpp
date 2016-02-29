// Fill out your copyright notice in the Description page of Project Settings.

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
  JsonWriter->WriteObjectStart();

  // ObjectInstance1 (will be MyObject->GetFullPath() or something)
    JsonWriter->WriteObjectStart("ObjectInstance1");
      JsonWriter->WriteValue("SomeBool", true);
      JsonWriter->WriteValue("SomeString", *fileName);
      JsonWriter->WriteValue("SomeNumber", 32.0);
    JsonWriter->WriteObjectEnd();
  //
  // // ObjectInstance2
  // JsonWriter->WriteObjectStart("ObjectInstance2");
  // JsonWriter->WriteValue("SomeBool", false);
  // JsonWriter->WriteValue("SomeString", TEXT("Bleh"));
  // JsonWriter->WriteValue("SomeNumber", 64.0);
  // JsonWriter->WriteObjectEnd();
  //

  // Close the writer and finalize the output such that JsonStr has what we want
  JsonWriter->WriteObjectEnd();
  JsonWriter->Close();

  // FJsonSerializer::Serialize(JsonObject.ToSharedRef(), JsonWriter); Nothing to serialize yet
  FString gameContentDir = FPaths::GameContentDir();
  FString temp = FString("/savedGame/") + *fileName;
  FString writeDir = FPaths::Combine(*gameContentDir, *temp);
  FFileHelper::SaveStringToFile(*JsonStr, *writeDir);

  // FArchive* fileName = GFileManager->CreateFileWriter(*FullPath);
    // if (!fileName)
    // {
    //    return false;
    // }
    // *fileName << JsonStr;
  // this will commit the save to disk and free up your memory :)
  // delete fileName;
  return true;
}
