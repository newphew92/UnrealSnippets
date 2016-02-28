// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Network : ModuleRules
{
	public Network(TargetInfo Target)
	{
		//added Json and JsonUtilities in this list -Terrence
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","Json", "JsonUtilities" });
		// PublicDependencyModuleNames.AddRange(new string[] { "Json","JsonUtilities" });
	}
}
