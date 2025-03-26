// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/UW_Main.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_Main() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_UUW_Chat_NoRegister();
CH4_NUMBALL_API UClass* Z_Construct_UClass_UUW_Main();
CH4_NUMBALL_API UClass* Z_Construct_UClass_UUW_Main_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class UUW_Main Function AddChatMessage
struct Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics
{
	struct UW_Main_eventAddChatMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Main_eventAddChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Main, nullptr, "AddChatMessage", nullptr, nullptr, Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::UW_Main_eventAddChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::UW_Main_eventAddChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_Main_AddChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Main_AddChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Main::execAddChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChatMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UUW_Main Function AddChatMessage

// Begin Class UUW_Main Function OnRestartClicked
struct Z_Construct_UFunction_UUW_Main_OnRestartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Main_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Main, nullptr, "OnRestartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Main_OnRestartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUW_Main_OnRestartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Main_OnRestartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Main::execOnRestartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartClicked();
	P_NATIVE_END;
}
// End Class UUW_Main Function OnRestartClicked

// Begin Class UUW_Main Function UpdateCount
struct Z_Construct_UFunction_UUW_Main_UpdateCount_Statics
{
	struct UW_Main_eventUpdateCount_Parms
	{
		int32 Remaining;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::NewProp_Remaining = { "Remaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Main_eventUpdateCount_Parms, Remaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::NewProp_Remaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Main, nullptr, "UpdateCount", nullptr, nullptr, Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::UW_Main_eventUpdateCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::UW_Main_eventUpdateCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_Main_UpdateCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Main_UpdateCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Main::execUpdateCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Remaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCount(Z_Param_Remaining);
	P_NATIVE_END;
}
// End Class UUW_Main Function UpdateCount

// Begin Class UUW_Main Function UpdateResult
struct Z_Construct_UFunction_UUW_Main_UpdateResult_Statics
{
	struct UW_Main_eventUpdateResult_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Main_eventUpdateResult_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Main, nullptr, "UpdateResult", nullptr, nullptr, Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::UW_Main_eventUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::UW_Main_eventUpdateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_Main_UpdateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Main_UpdateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Main::execUpdateResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateResult(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UUW_Main Function UpdateResult

// Begin Class UUW_Main
void UUW_Main::StaticRegisterNativesUUW_Main()
{
	UClass* Class = UUW_Main::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChatMessage", &UUW_Main::execAddChatMessage },
		{ "OnRestartClicked", &UUW_Main::execOnRestartClicked },
		{ "UpdateCount", &UUW_Main::execUpdateCount },
		{ "UpdateResult", &UUW_Main::execUpdateResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_Main);
UClass* Z_Construct_UClass_UUW_Main_NoRegister()
{
	return UUW_Main::StaticClass();
}
struct Z_Construct_UClass_UUW_Main_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UW_Main.h" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Restart_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WB_Chat_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Main.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Restart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Result;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Count;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WB_Chat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_Main_AddChatMessage, "AddChatMessage" }, // 883564819
		{ &Z_Construct_UFunction_UUW_Main_OnRestartClicked, "OnRestartClicked" }, // 2418328810
		{ &Z_Construct_UFunction_UUW_Main_UpdateCount, "UpdateCount" }, // 533988726
		{ &Z_Construct_UFunction_UUW_Main_UpdateResult, "UpdateResult" }, // 2647192617
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Main>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Main, Restart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Restart_MetaData), NewProp_Restart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Main, Result), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Main, Count), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat = { "WB_Chat", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Main, WB_Chat), Z_Construct_UClass_UUW_Chat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WB_Chat_MetaData), NewProp_WB_Chat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Main_Statics::NewProp_ButtonText = { "ButtonText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Main, ButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonText_MetaData), NewProp_ButtonText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_Main_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_Restart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_WB_Chat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Main_Statics::NewProp_ButtonText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_Main_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Main_Statics::ClassParams = {
	&UUW_Main::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_Main_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Main_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Main_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_Main()
{
	if (!Z_Registration_Info_UClass_UUW_Main.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Main.OuterSingleton, Z_Construct_UClass_UUW_Main_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Main.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<UUW_Main>()
{
	return UUW_Main::StaticClass();
}
UUW_Main::UUW_Main(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_Main);
UUW_Main::~UUW_Main() {}
// End Class UUW_Main

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Main, UUW_Main::StaticClass, TEXT("UUW_Main"), &Z_Registration_Info_UClass_UUW_Main, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Main), 2370993321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_4148835805(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
