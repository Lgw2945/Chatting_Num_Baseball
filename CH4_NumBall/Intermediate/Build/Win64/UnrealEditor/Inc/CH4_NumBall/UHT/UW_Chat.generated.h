// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UW_Chat.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4_NUMBALL_UW_Chat_generated_h
#error "UW_Chat.generated.h already included, missing '#pragma once' in UW_Chat.h"
#endif
#define CH4_NUMBALL_UW_Chat_generated_h

#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatTextCommitted); \
	DECLARE_FUNCTION(execAddChatMessage);


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUW_Chat(); \
	friend struct Z_Construct_UClass_UUW_Chat_Statics; \
public: \
	DECLARE_CLASS(UUW_Chat, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CH4_NumBall"), NO_API) \
	DECLARE_SERIALIZER(UUW_Chat)


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUW_Chat(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUW_Chat(UUW_Chat&&); \
	UUW_Chat(const UUW_Chat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUW_Chat); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUW_Chat); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUW_Chat) \
	NO_API virtual ~UUW_Chat();


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_8_PROLOG
#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_INCLASS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4_NUMBALL_API UClass* StaticClass<class UUW_Chat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_UW_Chat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
