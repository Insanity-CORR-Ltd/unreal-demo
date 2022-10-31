// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunrealDemo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_unrealDemo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_unrealDemo()
	{
		if (!Z_Registration_Info_UPackage__Script_unrealDemo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/unrealDemo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB586FCD9,
				0x0933A413,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_unrealDemo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_unrealDemo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_unrealDemo(Z_Construct_UPackage__Script_unrealDemo, TEXT("/Script/unrealDemo"), Z_Registration_Info_UPackage__Script_unrealDemo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB586FCD9, 0x0933A413));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
