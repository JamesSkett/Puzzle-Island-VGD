// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Puzzle_IslandGameMode.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzle_IslandGameMode() {}
// Cross Module References
	PUZZLE_ISLAND_API UClass* Z_Construct_UClass_APuzzle_IslandGameMode_NoRegister();
	PUZZLE_ISLAND_API UClass* Z_Construct_UClass_APuzzle_IslandGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Puzzle_Island();
// End Cross Module References
	void APuzzle_IslandGameMode::StaticRegisterNativesAPuzzle_IslandGameMode()
	{
	}
	UClass* Z_Construct_UClass_APuzzle_IslandGameMode_NoRegister()
	{
		return APuzzle_IslandGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APuzzle_IslandGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Puzzle_Island();
			OuterClass = APuzzle_IslandGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<APuzzle_IslandGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Puzzle_IslandGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Puzzle_IslandGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuzzle_IslandGameMode, 1557953669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuzzle_IslandGameMode(Z_Construct_UClass_APuzzle_IslandGameMode, &APuzzle_IslandGameMode::StaticClass, TEXT("/Script/Puzzle_Island"), TEXT("APuzzle_IslandGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzle_IslandGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
