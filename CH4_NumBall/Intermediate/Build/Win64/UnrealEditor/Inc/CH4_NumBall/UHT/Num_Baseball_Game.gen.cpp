// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/Num_Baseball_Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNum_Baseball_Game() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_ANum_Baseball_Game();
CH4_NUMBALL_API UClass* Z_Construct_UClass_ANum_Baseball_Game_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class ANum_Baseball_Game
void ANum_Baseball_Game::StaticRegisterNativesANum_Baseball_Game()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANum_Baseball_Game);
UClass* Z_Construct_UClass_ANum_Baseball_Game_NoRegister()
{
	return ANum_Baseball_Game::StaticClass();
}
struct Z_Construct_UClass_ANum_Baseball_Game_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Num_Baseball_Game.h" },
		{ "ModuleRelativePath", "Num_Baseball_Game.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANum_Baseball_Game>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ANum_Baseball_Game_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANum_Baseball_Game_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ANum_Baseball_Game_Statics::ClassParams = {
	&ANum_Baseball_Game::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANum_Baseball_Game_Statics::Class_MetaDataParams), Z_Construct_UClass_ANum_Baseball_Game_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ANum_Baseball_Game()
{
	if (!Z_Registration_Info_UClass_ANum_Baseball_Game.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANum_Baseball_Game.OuterSingleton, Z_Construct_UClass_ANum_Baseball_Game_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ANum_Baseball_Game.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<ANum_Baseball_Game>()
{
	return ANum_Baseball_Game::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ANum_Baseball_Game);
ANum_Baseball_Game::~ANum_Baseball_Game() {}
// End Class ANum_Baseball_Game

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Num_Baseball_Game_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANum_Baseball_Game, ANum_Baseball_Game::StaticClass, TEXT("ANum_Baseball_Game"), &Z_Registration_Info_UClass_ANum_Baseball_Game, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANum_Baseball_Game), 1795222655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Num_Baseball_Game_h_3068121282(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Num_Baseball_Game_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Num_Baseball_Game_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
