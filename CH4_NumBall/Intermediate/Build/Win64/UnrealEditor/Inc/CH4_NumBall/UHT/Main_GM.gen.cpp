// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/Main_GM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_GM() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_GM();
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_GM_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class AMain_GM
void AMain_GM::StaticRegisterNativesAMain_GM()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_GM);
UClass* Z_Construct_UClass_AMain_GM_NoRegister()
{
	return AMain_GM::StaticClass();
}
struct Z_Construct_UClass_AMain_GM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Main_GM.h" },
		{ "ModuleRelativePath", "Main_GM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameEnded_MetaData[] = {
		{ "ModuleRelativePath", "Main_GM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameStarted_MetaData[] = {
		{ "ModuleRelativePath", "Main_GM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecretNumber_MetaData[] = {
		{ "ModuleRelativePath", "Main_GM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAttempts_MetaData[] = {
		{ "ModuleRelativePath", "Main_GM.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGameEnded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameEnded;
	static void NewProp_bGameStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameStarted;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecretNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerAttempts_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAttempts_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerAttempts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_GM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameEnded_SetBit(void* Obj)
{
	((AMain_GM*)Obj)->bGameEnded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameEnded = { "bGameEnded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMain_GM), &Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameEnded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameEnded_MetaData), NewProp_bGameEnded_MetaData) };
void Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameStarted_SetBit(void* Obj)
{
	((AMain_GM*)Obj)->bGameStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameStarted = { "bGameStarted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMain_GM), &Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameStarted_MetaData), NewProp_bGameStarted_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_SecretNumber = { "SecretNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_GM, SecretNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecretNumber_MetaData), NewProp_SecretNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts_ValueProp = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts_Key_KeyProp = { "PlayerAttempts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts = { "PlayerAttempts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMain_GM, PlayerAttempts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAttempts_MetaData), NewProp_PlayerAttempts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_GM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_bGameStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_SecretNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_GM_Statics::NewProp_PlayerAttempts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_GM_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMain_GM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_GM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_GM_Statics::ClassParams = {
	&AMain_GM::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMain_GM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMain_GM_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_GM_Statics::Class_MetaDataParams), Z_Construct_UClass_AMain_GM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMain_GM()
{
	if (!Z_Registration_Info_UClass_AMain_GM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_GM.OuterSingleton, Z_Construct_UClass_AMain_GM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMain_GM.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<AMain_GM>()
{
	return AMain_GM::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_GM);
AMain_GM::~AMain_GM() {}
// End Class AMain_GM

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_GM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMain_GM, AMain_GM::StaticClass, TEXT("AMain_GM"), &Z_Registration_Info_UClass_AMain_GM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_GM), 3069681416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_GM_h_473414689(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_GM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_GM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
