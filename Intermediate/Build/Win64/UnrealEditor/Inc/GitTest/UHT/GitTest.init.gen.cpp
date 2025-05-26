// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGitTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GitTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GitTest()
	{
		if (!Z_Registration_Info_UPackage__Script_GitTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GitTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBE13A59B,
				0x0AAA103A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GitTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GitTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GitTest(Z_Construct_UPackage__Script_GitTest, TEXT("/Script/GitTest"), Z_Registration_Info_UPackage__Script_GitTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBE13A59B, 0x0AAA103A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
