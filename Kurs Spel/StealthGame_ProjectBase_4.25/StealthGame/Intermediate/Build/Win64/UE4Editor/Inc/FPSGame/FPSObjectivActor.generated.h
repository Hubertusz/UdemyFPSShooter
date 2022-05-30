// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSObjectivActor_generated_h
#error "FPSObjectivActor.generated.h already included, missing '#pragma once' in FPSObjectivActor.h"
#endif
#define FPSGAME_FPSObjectivActor_generated_h

#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_SPARSE_DATA
#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_RPC_WRAPPERS
#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSObjectivActor(); \
	friend struct Z_Construct_UClass_AFPSObjectivActor_Statics; \
public: \
	DECLARE_CLASS(AFPSObjectivActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSObjectivActor)


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSObjectivActor(); \
	friend struct Z_Construct_UClass_AFPSObjectivActor_Statics; \
public: \
	DECLARE_CLASS(AFPSObjectivActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSObjectivActor)


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSObjectivActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSObjectivActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSObjectivActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSObjectivActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSObjectivActor(AFPSObjectivActor&&); \
	NO_API AFPSObjectivActor(const AFPSObjectivActor&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSObjectivActor(AFPSObjectivActor&&); \
	NO_API AFPSObjectivActor(const AFPSObjectivActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSObjectivActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSObjectivActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSObjectivActor)


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPSObjectivActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AFPSObjectivActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(AFPSObjectivActor, PickupFX); }


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_11_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_SPARSE_DATA \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSObjectivActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSObjectivActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSObjectivActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
