// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS_TUT_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPS_TUT_FPSCharacter_generated_h

#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveSide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveSide(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveSide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveSide(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS_Tut"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPS_Tut"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(AFPSCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__MuzzleOffset() { return STRUCT_OFFSET(AFPSCharacter, MuzzleOffset); } \
	FORCEINLINE static uint32 __PPO__GunFirePosition() { return STRUCT_OFFSET(AFPSCharacter, GunFirePosition); } \
	FORCEINLINE static uint32 __PPO__FireUpForce() { return STRUCT_OFFSET(AFPSCharacter, FireUpForce); } \
	FORCEINLINE static uint32 __PPO__FPSCameraComponent() { return STRUCT_OFFSET(AFPSCharacter, FPSCameraComponent); } \
	FORCEINLINE static uint32 __PPO__GunSkeleton() { return STRUCT_OFFSET(AFPSCharacter, GunSkeleton); }


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_12_PROLOG
#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_RPC_WRAPPERS \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_INCLASS \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FPS_Tut_Source_FPS_Tut_FPSCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS_TUT_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_Tut_Source_FPS_Tut_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
