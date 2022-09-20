// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPPP/FPPPGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPPPGameModeBase() {}
// Cross Module References
	FPPP_API UClass* Z_Construct_UClass_AFPPPGameModeBase_NoRegister();
	FPPP_API UClass* Z_Construct_UClass_AFPPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FPPP();
// End Cross Module References
	void AFPPPGameModeBase::StaticRegisterNativesAFPPPGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPPPGameModeBase);
	UClass* Z_Construct_UClass_AFPPPGameModeBase_NoRegister()
	{
		return AFPPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPPPGameModeBase.h" },
		{ "ModuleRelativePath", "FPPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPPPGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPPPGameModeBase_Statics::ClassParams = {
		&AFPPPGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPPPGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFPPPGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPPPGameModeBase.OuterSingleton, Z_Construct_UClass_AFPPPGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPPPGameModeBase.OuterSingleton;
	}
	template<> FPPP_API UClass* StaticClass<AFPPPGameModeBase>()
	{
		return AFPPPGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPPPGameModeBase);
	struct Z_CompiledInDeferFile_FID_FPPP_Source_FPPP_FPPPGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPPP_Source_FPPP_FPPPGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPPPGameModeBase, AFPPPGameModeBase::StaticClass, TEXT("AFPPPGameModeBase"), &Z_Registration_Info_UClass_AFPPPGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPPPGameModeBase), 2732358621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FPPP_Source_FPPP_FPPPGameModeBase_h_484840974(TEXT("/Script/FPPP"),
		Z_CompiledInDeferFile_FID_FPPP_Source_FPPP_FPPPGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FPPP_Source_FPPP_FPPPGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
