// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GitTest/GitTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGitTestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GITTEST_API UClass* Z_Construct_UClass_AGitTestGameMode();
GITTEST_API UClass* Z_Construct_UClass_AGitTestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GitTest();
// End Cross Module References

// Begin Class AGitTestGameMode
void AGitTestGameMode::StaticRegisterNativesAGitTestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGitTestGameMode);
UClass* Z_Construct_UClass_AGitTestGameMode_NoRegister()
{
	return AGitTestGameMode::StaticClass();
}
struct Z_Construct_UClass_AGitTestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GitTestGameMode.h" },
		{ "ModuleRelativePath", "GitTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGitTestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGitTestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GitTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGitTestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGitTestGameMode_Statics::ClassParams = {
	&AGitTestGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGitTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGitTestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGitTestGameMode()
{
	if (!Z_Registration_Info_UClass_AGitTestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGitTestGameMode.OuterSingleton, Z_Construct_UClass_AGitTestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGitTestGameMode.OuterSingleton;
}
template<> GITTEST_API UClass* StaticClass<AGitTestGameMode>()
{
	return AGitTestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGitTestGameMode);
AGitTestGameMode::~AGitTestGameMode() {}
// End Class AGitTestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Alexis_source_repos_AntyThesis_GitTest_Source_GitTest_GitTestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGitTestGameMode, AGitTestGameMode::StaticClass, TEXT("AGitTestGameMode"), &Z_Registration_Info_UClass_AGitTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGitTestGameMode), 537631873U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alexis_source_repos_AntyThesis_GitTest_Source_GitTest_GitTestGameMode_h_51880994(TEXT("/Script/GitTest"),
	Z_CompiledInDeferFile_FID_Users_Alexis_source_repos_AntyThesis_GitTest_Source_GitTest_GitTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Alexis_source_repos_AntyThesis_GitTest_Source_GitTest_GitTestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
