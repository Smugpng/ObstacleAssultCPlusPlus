// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleAssult_init() {}
	OBSTACLEASSULT_API UFunction* Z_Construct_UDelegateFunction_ObstacleAssult_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObstacleAssult;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObstacleAssult()
	{
		if (!Z_Registration_Info_UPackage__Script_ObstacleAssult.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ObstacleAssult_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObstacleAssult",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x202392E0,
				0xF4075D94,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObstacleAssult.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObstacleAssult.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObstacleAssult(Z_Construct_UPackage__Script_ObstacleAssult, TEXT("/Script/ObstacleAssult"), Z_Registration_Info_UPackage__Script_ObstacleAssult, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x202392E0, 0xF4075D94));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
