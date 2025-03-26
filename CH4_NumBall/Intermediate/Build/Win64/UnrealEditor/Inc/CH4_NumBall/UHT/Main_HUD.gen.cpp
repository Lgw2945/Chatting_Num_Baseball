// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/Main_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_HUD() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_HUD();
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_HUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class AMain_HUD
void AMain_HUD::StaticRegisterNativesAMain_HUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_HUD);
UClass* Z_Construct_UClass_AMain_HUD_NoRegister()
{
	return AMain_HUD::StaticClass();
}
struct Z_Construct_UClass_AMain_HUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Main_HUD.h" },
		{ "ModuleRelativePath", "Main_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_HUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMain_HUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_HUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_HUD_Statics::ClassParams = {
	&AMain_HUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_HUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMain_HUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMain_HUD()
{
	if (!Z_Registration_Info_UClass_AMain_HUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_HUD.OuterSingleton, Z_Construct_UClass_AMain_HUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMain_HUD.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<AMain_HUD>()
{
	return AMain_HUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_HUD);
AMain_HUD::~AMain_HUD() {}
// End Class AMain_HUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_HUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMain_HUD, AMain_HUD::StaticClass, TEXT("AMain_HUD"), &Z_Registration_Info_UClass_AMain_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_HUD), 2576013649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_HUD_h_1264193654(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_HUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
