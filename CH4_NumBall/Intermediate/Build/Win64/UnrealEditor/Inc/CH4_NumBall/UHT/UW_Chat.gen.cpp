// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/UW_Chat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_Chat() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_UUW_Chat();
CH4_NUMBALL_API UClass* Z_Construct_UClass_UUW_Chat_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class UUW_Chat Function AddChatMessage
struct Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics
{
	struct UW_Chat_eventAddChatMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Chat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Chat_eventAddChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Chat, nullptr, "AddChatMessage", nullptr, nullptr, Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::UW_Chat_eventAddChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::UW_Chat_eventAddChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_Chat_AddChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Chat_AddChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Chat::execAddChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChatMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UUW_Chat Function AddChatMessage

// Begin Class UUW_Chat Function OnChatTextCommitted
struct Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics
{
	struct UW_Chat_eventOnChatTextCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> CommitMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UW_Chat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Chat_eventOnChatTextCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Chat_eventOnChatTextCommitted_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::NewProp_CommitMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_Chat, nullptr, "OnChatTextCommitted", nullptr, nullptr, Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::UW_Chat_eventOnChatTextCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::UW_Chat_eventOnChatTextCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_Chat::execOnChatTextCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatTextCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_CommitMethod));
	P_NATIVE_END;
}
// End Class UUW_Chat Function OnChatTextCommitted

// Begin Class UUW_Chat
void UUW_Chat::StaticRegisterNativesUUW_Chat()
{
	UClass* Class = UUW_Chat::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChatMessage", &UUW_Chat::execAddChatMessage },
		{ "OnChatTextCommitted", &UUW_Chat::execOnChatTextCommitted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_Chat);
UClass* Z_Construct_UClass_UUW_Chat_NoRegister()
{
	return UUW_Chat::StaticClass();
}
struct Z_Construct_UClass_UUW_Chat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UW_Chat.h" },
		{ "ModuleRelativePath", "UW_Chat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatHistoryArea_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Chat.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UW_Chat.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatHistoryArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_Chat_AddChatMessage, "AddChatMessage" }, // 818188997
		{ &Z_Construct_UFunction_UUW_Chat_OnChatTextCommitted, "OnChatTextCommitted" }, // 2718205190
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_Chat>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Chat_Statics::NewProp_ChatHistoryArea = { "ChatHistoryArea", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Chat, ChatHistoryArea), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatHistoryArea_MetaData), NewProp_ChatHistoryArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_Chat_Statics::NewProp_ChatInputText = { "ChatInputText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_Chat, ChatInputText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputText_MetaData), NewProp_ChatInputText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_Chat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Chat_Statics::NewProp_ChatHistoryArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_Chat_Statics::NewProp_ChatInputText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Chat_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_Chat_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Chat_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_Chat_Statics::ClassParams = {
	&UUW_Chat::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_Chat_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Chat_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_Chat_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_Chat_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_Chat()
{
	if (!Z_Registration_Info_UClass_UUW_Chat.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_Chat.OuterSingleton, Z_Construct_UClass_UUW_Chat_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_Chat.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<UUW_Chat>()
{
	return UUW_Chat::StaticClass();
}
UUW_Chat::UUW_Chat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_Chat);
UUW_Chat::~UUW_Chat() {}
// End Class UUW_Chat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_Chat, UUW_Chat::StaticClass, TEXT("UUW_Chat"), &Z_Registration_Info_UClass_UUW_Chat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_Chat), 1502064545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_3629682368(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
