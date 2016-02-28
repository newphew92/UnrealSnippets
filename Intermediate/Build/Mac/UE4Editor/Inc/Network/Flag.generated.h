// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NETWORK_Flag_generated_h
#error "Flag.generated.h already included, missing '#pragma once' in Flag.h"
#endif
#define NETWORK_Flag_generated_h

#define Network_Source_Network_Flag_h_11_RPC_WRAPPERS \
	virtual bool UpdateScore_Validate(int32 ); \
	virtual void UpdateScore_Implementation(int32 Amount); \
 \
	DECLARE_FUNCTION(execUpdateScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		if (!this->UpdateScore_Validate(Z_Param_Amount)) \
		{ \
			RPC_ValidateFailed(TEXT("UpdateScore_Validate")); \
			return; \
		} \
		this->UpdateScore_Implementation(Z_Param_Amount); \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->OnOverlapBegin(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	}


#define Network_Source_Network_Flag_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		if (!this->UpdateScore_Validate(Z_Param_Amount)) \
		{ \
			RPC_ValidateFailed(TEXT("UpdateScore_Validate")); \
			return; \
		} \
		this->UpdateScore_Implementation(Z_Param_Amount); \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		this->OnOverlapBegin(Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
	}


#define Network_Source_Network_Flag_h_11_EVENT_PARMS \
	struct Flag_eventUpdateScore_Parms \
	{ \
		int32 Amount; \
	};


extern NETWORK_API  FName NETWORK_UpdateScore;
#define Network_Source_Network_Flag_h_11_CALLBACK_WRAPPERS
#define Network_Source_Network_Flag_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAFlag(); \
	friend NETWORK_API class UClass* Z_Construct_UClass_AFlag(); \
	public: \
	DECLARE_CLASS(AFlag, AActor, COMPILED_IN_FLAGS(0), 0, Network, NO_API) \
	DECLARE_SERIALIZER(AFlag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFlag*>(this); }


#define Network_Source_Network_Flag_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAFlag(); \
	friend NETWORK_API class UClass* Z_Construct_UClass_AFlag(); \
	public: \
	DECLARE_CLASS(AFlag, AActor, COMPILED_IN_FLAGS(0), 0, Network, NO_API) \
	DECLARE_SERIALIZER(AFlag) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AFlag*>(this); }


#define Network_Source_Network_Flag_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFlag(const AFlag& InCopy); \
public:


#define Network_Source_Network_Flag_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AFlag(const AFlag& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlag); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlag)


#define Network_Source_Network_Flag_h_8_PROLOG \
	Network_Source_Network_Flag_h_11_EVENT_PARMS


#define Network_Source_Network_Flag_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Source_Network_Flag_h_11_RPC_WRAPPERS \
	Network_Source_Network_Flag_h_11_CALLBACK_WRAPPERS \
	Network_Source_Network_Flag_h_11_INCLASS \
	Network_Source_Network_Flag_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Network_Source_Network_Flag_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Network_Source_Network_Flag_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Network_Source_Network_Flag_h_11_CALLBACK_WRAPPERS \
	Network_Source_Network_Flag_h_11_INCLASS_NO_PURE_DECLS \
	Network_Source_Network_Flag_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Network_Source_Network_Flag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS