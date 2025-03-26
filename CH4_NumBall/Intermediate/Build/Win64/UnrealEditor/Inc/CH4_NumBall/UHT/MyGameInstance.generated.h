// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CH4_NUMBALL_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define CH4_NUMBALL_MyGameInstance_generated_h

#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetUserName); \
	DECLARE_FUNCTION(execGetUserName);


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CH4_NumBall"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyGameInstance(UMyGameInstance&&); \
	UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance) \
	NO_API virtual ~UMyGameInstance();


#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_7_PROLOG
#define FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_INCLASS_NO_PURE_DECLS \
	FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH4_NUMBALL_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_Chatting_Num_Baseball_CH4_NumBall_Source_CH4_NumBall_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
