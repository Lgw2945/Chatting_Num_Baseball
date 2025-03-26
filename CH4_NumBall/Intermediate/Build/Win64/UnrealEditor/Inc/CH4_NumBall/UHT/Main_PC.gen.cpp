// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH4_NumBall/Main_PC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_PC() {}

// Begin Cross Module References
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_PC();
CH4_NUMBALL_API UClass* Z_Construct_UClass_AMain_PC_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_CH4_NumBall();
// End Cross Module References

// Begin Class AMain_PC Function CtoS_SendGuess
struct Main_PC_eventCtoS_SendGuess_Parms
{
	FString Guess;
};
static const FName NAME_AMain_PC_CtoS_SendGuess = FName(TEXT("CtoS_SendGuess"));
void AMain_PC::CtoS_SendGuess(const FString& Guess)
{
	Main_PC_eventCtoS_SendGuess_Parms Parms;
	Parms.Guess=Guess;
	UFunction* Func = FindFunctionChecked(NAME_AMain_PC_CtoS_SendGuess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Main_PC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Main_PC_eventCtoS_SendGuess_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::NewProp_Guess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PC, nullptr, "CtoS_SendGuess", nullptr, nullptr, Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::PropPointers), sizeof(Main_PC_eventCtoS_SendGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Main_PC_eventCtoS_SendGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMain_PC_CtoS_SendGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PC_CtoS_SendGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMain_PC::execCtoS_SendGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CtoS_SendGuess_Implementation(Z_Param_Guess);
	P_NATIVE_END;
}
// End Class AMain_PC Function CtoS_SendGuess

// Begin Class AMain_PC Function CtoS_SendMessage
struct Main_PC_eventCtoS_SendMessage_Parms
{
	FString Message;
};
static const FName NAME_AMain_PC_CtoS_SendMessage = FName(TEXT("CtoS_SendMessage"));
void AMain_PC::CtoS_SendMessage(const FString& Message)
{
	Main_PC_eventCtoS_SendMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMain_PC_CtoS_SendMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Main_PC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Main_PC_eventCtoS_SendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PC, nullptr, "CtoS_SendMessage", nullptr, nullptr, Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::PropPointers), sizeof(Main_PC_eventCtoS_SendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Main_PC_eventCtoS_SendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMain_PC_CtoS_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PC_CtoS_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMain_PC::execCtoS_SendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CtoS_SendMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AMain_PC Function CtoS_SendMessage

// Begin Class AMain_PC Function StoC_SendMessage
struct Main_PC_eventStoC_SendMessage_Parms
{
	FString Message;
};
static const FName NAME_AMain_PC_StoC_SendMessage = FName(TEXT("StoC_SendMessage"));
void AMain_PC::StoC_SendMessage(const FString& Message)
{
	Main_PC_eventStoC_SendMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMain_PC_StoC_SendMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Main_PC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Main_PC_eventStoC_SendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PC, nullptr, "StoC_SendMessage", nullptr, nullptr, Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::PropPointers), sizeof(Main_PC_eventStoC_SendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Main_PC_eventStoC_SendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMain_PC_StoC_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PC_StoC_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMain_PC::execStoC_SendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoC_SendMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AMain_PC Function StoC_SendMessage

// Begin Class AMain_PC Function UpdateCount
struct Main_PC_eventUpdateCount_Parms
{
	int32 Remaining;
};
static const FName NAME_AMain_PC_UpdateCount = FName(TEXT("UpdateCount"));
void AMain_PC::UpdateCount(int32 Remaining)
{
	Main_PC_eventUpdateCount_Parms Parms;
	Parms.Remaining=Remaining;
	UFunction* Func = FindFunctionChecked(NAME_AMain_PC_UpdateCount);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMain_PC_UpdateCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Main_PC.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Remaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::NewProp_Remaining = { "Remaining", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Main_PC_eventUpdateCount_Parms, Remaining), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::NewProp_Remaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PC, nullptr, "UpdateCount", nullptr, nullptr, Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::PropPointers), sizeof(Main_PC_eventUpdateCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Main_PC_eventUpdateCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMain_PC_UpdateCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PC_UpdateCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMain_PC::execUpdateCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Remaining);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCount_Implementation(Z_Param_Remaining);
	P_NATIVE_END;
}
// End Class AMain_PC Function UpdateCount

// Begin Class AMain_PC Function UpdateResult
struct Main_PC_eventUpdateResult_Parms
{
	FString Message;
};
static const FName NAME_AMain_PC_UpdateResult = FName(TEXT("UpdateResult"));
void AMain_PC::UpdateResult(const FString& Message)
{
	Main_PC_eventUpdateResult_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMain_PC_UpdateResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMain_PC_UpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Main_PC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Main_PC_eventUpdateResult_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PC, nullptr, "UpdateResult", nullptr, nullptr, Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::PropPointers), sizeof(Main_PC_eventUpdateResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Main_PC_eventUpdateResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMain_PC_UpdateResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PC_UpdateResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMain_PC::execUpdateResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateResult_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AMain_PC Function UpdateResult

// Begin Class AMain_PC
void AMain_PC::StaticRegisterNativesAMain_PC()
{
	UClass* Class = AMain_PC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CtoS_SendGuess", &AMain_PC::execCtoS_SendGuess },
		{ "CtoS_SendMessage", &AMain_PC::execCtoS_SendMessage },
		{ "StoC_SendMessage", &AMain_PC::execStoC_SendMessage },
		{ "UpdateCount", &AMain_PC::execUpdateCount },
		{ "UpdateResult", &AMain_PC::execUpdateResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_PC);
UClass* Z_Construct_UClass_AMain_PC_NoRegister()
{
	return AMain_PC::StaticClass();
}
struct Z_Construct_UClass_AMain_PC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Main_PC.h" },
		{ "ModuleRelativePath", "Main_PC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMain_PC_CtoS_SendGuess, "CtoS_SendGuess" }, // 236764821
		{ &Z_Construct_UFunction_AMain_PC_CtoS_SendMessage, "CtoS_SendMessage" }, // 2229629337
		{ &Z_Construct_UFunction_AMain_PC_StoC_SendMessage, "StoC_SendMessage" }, // 2910849483
		{ &Z_Construct_UFunction_AMain_PC_UpdateCount, "UpdateCount" }, // 1340233160
		{ &Z_Construct_UFunction_AMain_PC_UpdateResult, "UpdateResult" }, // 425555807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_PC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMain_PC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_NumBall,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_PC_Statics::ClassParams = {
	&AMain_PC::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PC_Statics::Class_MetaDataParams), Z_Construct_UClass_AMain_PC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMain_PC()
{
	if (!Z_Registration_Info_UClass_AMain_PC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_PC.OuterSingleton, Z_Construct_UClass_AMain_PC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMain_PC.OuterSingleton;
}
template<> CH4_NUMBALL_API UClass* StaticClass<AMain_PC>()
{
	return AMain_PC::StaticClass();
}
AMain_PC::AMain_PC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_PC);
AMain_PC::~AMain_PC() {}
// End Class AMain_PC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMain_PC, AMain_PC::StaticClass, TEXT("AMain_PC"), &Z_Registration_Info_UClass_AMain_PC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_PC), 1990625402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_3672607210(TEXT("/Script/CH4_NumBall"),
	Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
