// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_Main.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4_NUMBALL_UW_Main_generated_h
#error "UW_Main.generated.h already included, missing '#pragma once' in UW_Main.h"
#endif
#define CH4_NUMBALL_UW_Main_generated_h

#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCount); \
	DECLARE_FUNCTION(execUpdateResult); \
	DECLARE_FUNCTION(execAddChatMessage); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_Main(); \
	friend struct Z_Construct_UClass_UUW_Main_Statics; \
public: \
	DECLARE_CLASS(UUW_Main, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CH4_NumBall"), NO_API) \
	DECLARE_SERIALIZER(UUW_Main)


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_Main(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUW_Main(UUW_Main&&); \
	UUW_Main(const UUW_Main&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_Main); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_Main); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_Main) \
	NO_API virtual ~UUW_Main();


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_9_PROLOG
#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_INCLASS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4_NUMBALL_API UClass* StaticClass<class UUW_Main>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Main_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
