// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tower_Ascend/Tower_AscendGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTower_AscendGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOWER_ASCEND_API UClass* Z_Construct_UClass_ATower_AscendGameMode();
	TOWER_ASCEND_API UClass* Z_Construct_UClass_ATower_AscendGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tower_Ascend();
// End Cross Module References
	void ATower_AscendGameMode::StaticRegisterNativesATower_AscendGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATower_AscendGameMode);
	UClass* Z_Construct_UClass_ATower_AscendGameMode_NoRegister()
	{
		return ATower_AscendGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATower_AscendGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATower_AscendGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tower_Ascend,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_AscendGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATower_AscendGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Tower_AscendGameMode.h" },
		{ "ModuleRelativePath", "Tower_AscendGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATower_AscendGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATower_AscendGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATower_AscendGameMode_Statics::ClassParams = {
		&ATower_AscendGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATower_AscendGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATower_AscendGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATower_AscendGameMode()
	{
		if (!Z_Registration_Info_UClass_ATower_AscendGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATower_AscendGameMode.OuterSingleton, Z_Construct_UClass_ATower_AscendGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATower_AscendGameMode.OuterSingleton;
	}
	template<> TOWER_ASCEND_API UClass* StaticClass<ATower_AscendGameMode>()
	{
		return ATower_AscendGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATower_AscendGameMode);
	ATower_AscendGameMode::~ATower_AscendGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_FMurtagh_Desktop_Masters_Obstracle_Course_CA_Tower_Ascend_Source_Tower_Ascend_Tower_AscendGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_FMurtagh_Desktop_Masters_Obstracle_Course_CA_Tower_Ascend_Source_Tower_Ascend_Tower_AscendGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATower_AscendGameMode, ATower_AscendGameMode::StaticClass, TEXT("ATower_AscendGameMode"), &Z_Registration_Info_UClass_ATower_AscendGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATower_AscendGameMode), 586920664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_FMurtagh_Desktop_Masters_Obstracle_Course_CA_Tower_Ascend_Source_Tower_Ascend_Tower_AscendGameMode_h_1578743884(TEXT("/Script/Tower_Ascend"),
		Z_CompiledInDeferFile_FID_Users_FMurtagh_Desktop_Masters_Obstracle_Course_CA_Tower_Ascend_Source_Tower_Ascend_Tower_AscendGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_FMurtagh_Desktop_Masters_Obstracle_Course_CA_Tower_Ascend_Source_Tower_Ascend_Tower_AscendGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
