// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/Player_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Base() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_APlayer_Base();
CH4_NUMBALL_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class APlayer_Base
void APlayer_Base::StaticRegisterNativesAPlayer_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayer_Base);
UClass* Z_Construct_UClass_APlayer_Base_NoRegister()
{
	return APlayer_Base::StaticClass();
}
struct Z_Construct_UClass_APlayer_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Base.h" },
		{ "ModuleRelativePath", "Player_Base.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Base_Statics::ClassParams = {
	&APlayer_Base::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayer_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayer_Base()
{
	if (!Z_Registration_Info_UClass_APlayer_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayer_Base.OuterSingleton, Z_Construct_UClass_APlayer_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayer_Base.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<APlayer_Base>()
{
	return APlayer_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Base);
APlayer_Base::~APlayer_Base() {}
// End Class APlayer_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Player_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayer_Base, APlayer_Base::StaticClass, TEXT("APlayer_Base"), &Z_Registration_Info_UClass_APlayer_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayer_Base), 3386763639U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Player_Base_h_557480031(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Player_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Player_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
