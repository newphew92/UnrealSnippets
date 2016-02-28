// Fill out your copyright notice in the Description page of Project Settings.

#include "Network.h"
#include "jsonHelper.h"
#include "FileManager.h"
TSharedPtr<FJsonObject> jsonHelper::loadJsonObject(const FString& FilePath){
  //load game
    FString FullFilePath = FPaths::GameContentDir() + FilePath;

    FString JsonStr;
    FFileHelper::LoadFileToString(JsonStr, *FullFilePath);
    //
    TSharedRef<TJsonReader<>> JsonReader = FJsonStringReader::Create(JsonStr);
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

    FJsonSerializer::Deserialize(JsonReader, JsonObject);
    //JsonObject.IsValid()
    return JsonObject;
}
// bool jsonHelper::setJsonObject(const FString& fileName)
// // {
//   //apparently creates JSON reader, not sure what it does really
//   // FString returnString;
// 	// TSharedRef<TJsonWriter<TCHAR>> writer = TJsonWriterFactory<TCHAR>::Create(&returnString);
//   // TSharedRef<FJsonObject> JsonRootObject = MakeShareable(new FJsonObject);
//   // FJsonSerializer::Serialize(JsonRootObject, writer);
// // }
// {
//   //save game
//   // Create a writer and hold it in this FString
//   FString JsonStr;
//   TSharedRef <TJsonWriter<TCHAR>> JsonWriter = TJsonWriterFactory<>::Create(&JsonStr);
//
//   JsonWriter->WriteObjectStart();
//
//   // ObjectInstance1 (will be MyObject->GetFullPath() or something)
//   JsonWriter->WriteObjectStart("ObjectInstance1");
//   JsonWriter->WriteValue("SomeBool", true);
//   JsonWriter->WriteValue("SomeString", *fileName);
//   JsonWriter->WriteValue("SomeNumber", 32.0);
//   JsonWriter->WriteObjectEnd();
//
//   // ObjectInstance2
//   JsonWriter->WriteObjectStart("ObjectInstance2");
//   JsonWriter->WriteValue("SomeBool", false);
//   JsonWriter->WriteValue("SomeString", TEXT("Bleh"));
//   JsonWriter->WriteValue("SomeNumber", 64.0);
//   JsonWriter->WriteObjectEnd();
//
//   JsonWriter->WriteObjectEnd();
//
//   // Close the writer and finalize the output such that JsonStr has what we want
//   JsonWriter->Close();
//   FJsonSerializer::Serialize(SaveData.ToSharedRef(), JsonWriter);
//   FFileHelper::SaveStringToFile(*SaveGameStringData, *fileName);
//
//   // FArchive* fileName = GFileManager->CreateFileWriter(*FullPath);
//   if (!fileName)
//   {
//      return false;
//   }
//   *fileName << JsonStr;
//   // this will commit the save to disk and free up your memory :)
//   delete fileName;
//   return true;
// }
