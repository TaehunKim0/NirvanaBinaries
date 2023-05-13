// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimNode_KawaiiPhysics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KAWAIIPHYSICS_AnimNode_KawaiiPhysics_generated_h
#error "AnimNode_KawaiiPhysics.generated.h already included, missing '#pragma once' in AnimNode_KawaiiPhysics.h"
#endif
#define KAWAIIPHYSICS_AnimNode_KawaiiPhysics_generated_h

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCollisionLimitBase_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FCollisionLimitBase>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSphericalLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FSphericalLimit>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapsuleLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FCapsuleLimit>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlanarLimit_Statics; \
	KAWAIIPHYSICS_API static class UScriptStruct* StaticStruct(); \
	typedef FCollisionLimitBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FPlanarLimit>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsSettings>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics; \
	static class UScriptStruct* StaticStruct();


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FKawaiiPhysicsModifyBone>();

#define FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<struct FAnimNode_KawaiiPhysics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h


#define FOREACH_ENUM_EPLANARCONSTRAINT(op) \
	op(EPlanarConstraint::None) \
	op(EPlanarConstraint::X) \
	op(EPlanarConstraint::Y) \
	op(EPlanarConstraint::Z) 

enum class EPlanarConstraint : uint8;
template<> struct TIsUEnumClass<EPlanarConstraint> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>();

#define FOREACH_ENUM_EBONEFORWARDAXIS(op) \
	op(EBoneForwardAxis::X_Positive) \
	op(EBoneForwardAxis::X_Negative) \
	op(EBoneForwardAxis::Y_Positive) \
	op(EBoneForwardAxis::Y_Negative) \
	op(EBoneForwardAxis::Z_Positive) \
	op(EBoneForwardAxis::Z_Negative) 

enum class EBoneForwardAxis : uint8;
template<> struct TIsUEnumClass<EBoneForwardAxis> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>();

#define FOREACH_ENUM_ECOLLISIONLIMITTYPE(op) \
	op(ECollisionLimitType::None) \
	op(ECollisionLimitType::Spherical) \
	op(ECollisionLimitType::Capsule) \
	op(ECollisionLimitType::Planar) 

enum class ECollisionLimitType : uint8;
template<> struct TIsUEnumClass<ECollisionLimitType> { enum { Value = true }; };
template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
