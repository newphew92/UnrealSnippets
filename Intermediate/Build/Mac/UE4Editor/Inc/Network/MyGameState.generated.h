// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORK_MyGameState_generated_h
#error "MyGameState.generated.h already included, missing '#pragma once' in MyGameState.h"
#endif
#define NETWORK_MyGameState_generated_h

#define Network_Source_Network_MyGameState_h_14_RPC_WRAPPERS
#define Network_Source_Network_MyGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Network_Source_Network_MyGameState_h_14_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend NETWORK_API class UClass* Z_Construct_UClass_AMyGameState(); \
	public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0), 0, Network, NO_API) \
	DECLARE_SERIALIZER(AMyGameState) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyGameState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Network_Source_Network_MyGameState_h_14_INCLASS \
	private: \
	static void StaticRegisterNativesAMyGameState(); \
	friend NETWORK_API class UClass* Z_Construct_UClass_AMyGameState(); \
	public: \
	DECLARE_CLASS(AMyGameState, AGameState, COMPILED_IN_FLAGS(0), 0, Network, NO_API) \
	DECLARE_SERIALIZER(AMyGameState) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AMyGameState*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Network_Source_Network_MyGameState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyGameState(const AMyGameState& InCopy); \
public:


#define Network_Source_Network_MyGameState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AMyGameState(const AMyGameState& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameState)


#define Network_Source_Network_MyGameState_h_11_PROLOG
#define Network_Source_Network_MyGameState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Source_Network_MyGameState_h_14_RPC_WRAPPERS \
	Network_Source_Network_MyGameState_h_14_INCLASS \
	Network_Source_Network_MyGameState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Source_Network_MyGameState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Source_Network_MyGameState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Source_Network_MyGameState_h_14_INCLASS_NO_PURE_DECLS \
	Network_Source_Network_MyGameState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Source_Network_MyGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
