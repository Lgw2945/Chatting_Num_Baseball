// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Main_PC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4_NUMBALL_Main_PC_generated_h
#error "Main_PC.generated.h already included, missing '#pragma once' in Main_PC.h"
#endif
#define CH4_NUMBALL_Main_PC_generated_h

#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CtoS_SendGuess_Implementation(const FString& Guess); \
	virtual void CtoS_SendMessage_Implementation(const FString& Message); \
	virtual void UpdateCount_Implementation(int32 Remaining); \
	virtual void UpdateResult_Implementation(const FString& Message); \
	virtual void StoC_SendMessage_Implementation(const FString& Message); \
	DECLARE_FUNCTION(execCtoS_SendGuess); \
	DECLARE_FUNCTION(execCtoS_SendMessage); \
	DECLARE_FUNCTION(execUpdateCount); \
	DECLARE_FUNCTION(execUpdateResult); \
	DECLARE_FUNCTION(execStoC_SendMessage);


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_CALLBACK_WRAPPERS
#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMain_PC(); \
	friend struct Z_Construct_UClass_AMain_PC_Statics; \
public: \
	DECLARE_CLASS(AMain_PC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4_NumBall"), NO_API) \
	DECLARE_SERIALIZER(AMain_PC)


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMain_PC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMain_PC(AMain_PC&&); \
	AMain_PC(const AMain_PC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMain_PC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMain_PC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMain_PC) \
	NO_API virtual ~AMain_PC();


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_7_PROLOG
#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_CALLBACK_WRAPPERS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_INCLASS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4_NUMBALL_API UClass* StaticClass<class AMain_PC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_Main_PC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
