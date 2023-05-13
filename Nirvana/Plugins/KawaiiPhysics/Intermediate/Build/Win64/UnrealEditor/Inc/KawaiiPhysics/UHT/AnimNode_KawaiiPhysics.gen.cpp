// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
#include "Engine/Classes/Curves/CurveFloat.h"
#include "Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_KawaiiPhysics() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType();
	KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlanarConstraint;
	static UEnum* EPlanarConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EPlanarConstraint"));
		}
		return Z_Registration_Info_UEnum_EPlanarConstraint.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EPlanarConstraint>()
	{
		return EPlanarConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators[] = {
		{ "EPlanarConstraint::None", (int64)EPlanarConstraint::None },
		{ "EPlanarConstraint::X", (int64)EPlanarConstraint::X },
		{ "EPlanarConstraint::Y", (int64)EPlanarConstraint::Y },
		{ "EPlanarConstraint::Z", (int64)EPlanarConstraint::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "None.Name", "EPlanarConstraint::None" },
		{ "X.Name", "EPlanarConstraint::X" },
		{ "Y.Name", "EPlanarConstraint::Y" },
		{ "Z.Name", "EPlanarConstraint::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EPlanarConstraint",
		"EPlanarConstraint",
		Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint()
	{
		if (!Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlanarConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneForwardAxis;
	static UEnum* EBoneForwardAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EBoneForwardAxis"));
		}
		return Z_Registration_Info_UEnum_EBoneForwardAxis.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<EBoneForwardAxis>()
	{
		return EBoneForwardAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators[] = {
		{ "EBoneForwardAxis::X_Positive", (int64)EBoneForwardAxis::X_Positive },
		{ "EBoneForwardAxis::X_Negative", (int64)EBoneForwardAxis::X_Negative },
		{ "EBoneForwardAxis::Y_Positive", (int64)EBoneForwardAxis::Y_Positive },
		{ "EBoneForwardAxis::Y_Negative", (int64)EBoneForwardAxis::Y_Negative },
		{ "EBoneForwardAxis::Z_Positive", (int64)EBoneForwardAxis::Z_Positive },
		{ "EBoneForwardAxis::Z_Negative", (int64)EBoneForwardAxis::Z_Negative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "X_Negative.Name", "EBoneForwardAxis::X_Negative" },
		{ "X_Positive.Name", "EBoneForwardAxis::X_Positive" },
		{ "Y_Negative.Name", "EBoneForwardAxis::Y_Negative" },
		{ "Y_Positive.Name", "EBoneForwardAxis::Y_Positive" },
		{ "Z_Negative.Name", "EBoneForwardAxis::Z_Negative" },
		{ "Z_Positive.Name", "EBoneForwardAxis::Z_Positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"EBoneForwardAxis",
		"EBoneForwardAxis",
		Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis()
	{
		if (!Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneForwardAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionLimitType;
	static UEnum* ECollisionLimitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("ECollisionLimitType"));
		}
		return Z_Registration_Info_UEnum_ECollisionLimitType.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UEnum* StaticEnum<ECollisionLimitType>()
	{
		return ECollisionLimitType_StaticEnum();
	}
	struct Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators[] = {
		{ "ECollisionLimitType::None", (int64)ECollisionLimitType::None },
		{ "ECollisionLimitType::Spherical", (int64)ECollisionLimitType::Spherical },
		{ "ECollisionLimitType::Capsule", (int64)ECollisionLimitType::Capsule },
		{ "ECollisionLimitType::Planar", (int64)ECollisionLimitType::Planar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams[] = {
		{ "Capsule.Name", "ECollisionLimitType::Capsule" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "None.Name", "ECollisionLimitType::None" },
		{ "Planar.Name", "ECollisionLimitType::Planar" },
		{ "Spherical.Name", "ECollisionLimitType::Spherical" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		"ECollisionLimitType",
		"ECollisionLimitType",
		Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType()
	{
		if (!Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionLimitType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionLimitBase;
class UScriptStruct* FCollisionLimitBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitBase, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitBase.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitBase>()
{
	return FCollisionLimitBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionLimitBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromDataAsset_MetaData[];
#endif
		static void NewProp_bFromDataAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "Comment", "/** Bone to attach the sphere to */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Bone to attach the sphere to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_SetBit(void* Obj)
	{
		((FCollisionLimitBase*)Obj)->bFromDataAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset = { "bFromDataAsset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCollisionLimitBase), &Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Debug" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitBase, Type), Z_Construct_UEnum_KawaiiPhysics_ECollisionLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_MetaData)) }; // 2490883970
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_DrivingBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Rotation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_bFromDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewProp_Type,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"CollisionLimitBase",
		sizeof(FCollisionLimitBase),
		alignof(FCollisionLimitBase),
		Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton, Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionLimitBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSphericalLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FSphericalLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimit;
class UScriptStruct* FSphericalLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimit"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimit>()
{
	return FSphericalLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_MetaData)) }; // 1502951913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewProp_LimitType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"SphericalLimit",
		sizeof(FSphericalLimit),
		alignof(FSphericalLimit),
		Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalLimit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCapsuleLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FCapsuleLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimit;
class UScriptStruct* FCapsuleLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimit"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimit>()
{
	return FCapsuleLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimit, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimit, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"CapsuleLimit",
		sizeof(FCapsuleLimit),
		alignof(FCapsuleLimit),
		Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleLimit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlanarLimit>() == std::is_polymorphic<FCollisionLimitBase>(), "USTRUCT FPlanarLimit cannot be polymorphic unless super FCollisionLimitBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimit;
class UScriptStruct* FPlanarLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimit, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimit"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimit.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimit>()
{
	return FPlanarLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlanarLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlanarLimit, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewProp_Plane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitBase,
		&NewStructOps,
		"PlanarLimit",
		sizeof(FPlanarLimit),
		alignof(FPlanarLimit),
		Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlanarLimit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings;
class UScriptStruct* FKawaiiPhysicsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsSettings>()
{
	return FKawaiiPhysicsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDampingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldDampingRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation = { "WorldDampingLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingLocation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation = { "WorldDampingRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, WorldDampingRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData[] = {
		{ "Category", "KawaiiPhysics" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle = { "LimitAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsSettings, LimitAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_WorldDampingRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewProp_LimitAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysicsSettings",
		sizeof(FKawaiiPhysicsSettings),
		alignof(FKawaiiPhysicsSettings),
		Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone;
class UScriptStruct* FKawaiiPhysicsModifyBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsModifyBone"));
	}
	return Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FKawaiiPhysicsModifyBone>()
{
	return FKawaiiPhysicsModifyBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildIndexs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildIndexs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildIndexs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthFromRoot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthFromRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDummy_MetaData[];
#endif
		static void NewProp_bDummy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDummy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsModifyBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef = { "BoneRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, BoneRef), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_Inner = { "ChildIndexs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs = { "ChildIndexs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, ChildIndexs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings_MetaData)) }; // 902954746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation = { "PrevLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation = { "PrevRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PrevRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation = { "PoseLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation = { "PoseRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale = { "PoseScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, PoseScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot = { "LengthFromRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKawaiiPhysicsModifyBone, LengthFromRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit(void* Obj)
	{
		((FKawaiiPhysicsModifyBone*)Obj)->bDummy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy = { "bDummy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKawaiiPhysicsModifyBone), &Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_BoneRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_ChildIndexs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PrevRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_PoseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_LengthFromRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewProp_bDummy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"KawaiiPhysicsModifyBone",
		sizeof(FKawaiiPhysicsModifyBone),
		alignof(FKawaiiPhysicsModifyBone),
		Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone()
	{
		if (!Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_KawaiiPhysics>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_KawaiiPhysics cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics;
class UScriptStruct* FAnimNode_KawaiiPhysics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("AnimNode_KawaiiPhysics"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FAnimNode_KawaiiPhysics>()
{
	return FAnimNode_KawaiiPhysics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFramerate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTargetFramerate_MetaData[];
#endif
		static void NewProp_OverrideTargetFramerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideTargetFramerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DampingCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldDampingLocationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotationCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldDampingRotationCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StiffnessCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadiusCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LimitAngleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DampingCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingLocationCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingLocationCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDampingRotationCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDampingRotationCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StiffnessCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitAngleCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitAngleCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePhysicsSettingsInGame_MetaData[];
#endif
		static void NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePhysicsSettingsInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyBoneLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DummyBoneLength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneForwardAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneForwardAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlanarConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlanarConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetBoneTransformWhenBoneNotFound_MetaData[];
#endif
		static void NewProp_ResetBoneTransformWhenBoneNotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetBoneTransformWhenBoneNotFound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitsDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LimitsDataAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapsuleLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapsuleLimitsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimitsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimitsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimitsData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportRotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[];
#endif
		static void NewProp_bEnableWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWorldCollision_MetaData[];
#endif
		static void NewProp_bAllowWorldCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCollisionParams_MetaData[];
#endif
		static void NewProp_bOverrideCollisionParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCollisionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionChannelSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelfComponent_MetaData[];
#endif
		static void NewProp_bIgnoreSelfComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelfComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoreBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBones;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreBoneNamePrefix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreBoneNamePrefix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreBoneNamePrefix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifyBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalBoneLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalBoneLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreSkelCompTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreSkelCompTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitPhysicsSettings_MetaData[];
#endif
		static void NewProp_bInitPhysicsSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitPhysicsSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditing_MetaData[];
#endif
		static void NewProp_bEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditing;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_KawaiiPhysics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "ModifyTarget" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner = { "ExcludeBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData[] = {
		{ "Category", "ModifyTarget" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones = { "ExcludeBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ExcludeBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData[] = {
		{ "Category", "TargetFramerate" },
		{ "EditCondition", "OverrideTargetFramerate" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate = { "TargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TargetFramerate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData[] = {
		{ "Category", "TargetFramerate" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->OverrideTargetFramerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate = { "OverrideTargetFramerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Settings for control of physical behavior */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Settings for control of physical behavior" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings_MetaData)) }; // 902954746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve = { "DampingCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DampingCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve = { "WorldDampingLocationCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingLocationCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve = { "WorldDampingRotationCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingRotationCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve = { "StiffnessCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, StiffnessCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve = { "RadiusCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RadiusCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData[] = {
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve = { "LimitAngleCurve", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitAngleCurve_DEPRECATED), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData = { "DampingCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DampingCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData = { "WorldDampingLocationCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingLocationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData = { "WorldDampingRotationCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WorldDampingRotationCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData = { "StiffnessCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, StiffnessCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData = { "RadiusCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, RadiusCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData_MetaData[] = {
		{ "Category", "Physics Settings" },
		{ "Comment", "/** Curve for adjusting the set value of physical behavior. Use rate of bone length from Root */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Curve for adjusting the set value of physical behavior. Use rate of bone length from Root" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData = { "LimitAngleCurveData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitAngleCurveData), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData[] = {
		{ "Category", "Advanced Physics Settings" },
		{ "Comment", "/** Flag to update each frame physical parameter. Disable to improve performance */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Flag to update each frame physical parameter. Disable to improve performance" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bUpdatePhysicsSettingsInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame = { "bUpdatePhysicsSettingsInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData[] = {
		{ "Category", "DummyBone" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Add a dummy bone to the end bone if it's above 0. It affects end bone rotation. For example, it rotates well if it is short */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Add a dummy bone to the end bone if it's above 0. It affects end bone rotation. For example, it rotates well if it is short" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength = { "DummyBoneLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, DummyBoneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData[] = {
		{ "Category", "DummyBone" },
		{ "Comment", "/** Bone forward direction */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Bone forward direction" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis = { "BoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, BoneForwardAxis), Z_Construct_UEnum_KawaiiPhysics_EBoneForwardAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_MetaData)) }; // 4160638386
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData[] = {
		{ "Category", "Advanced Physics Settings" },
		{ "Comment", "/** Fix the bone on the specified plane  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Fix the bone on the specified plane" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint = { "PlanarConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarConstraint), Z_Construct_UEnum_KawaiiPhysics_EPlanarConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_MetaData)) }; // 3486619131
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_MetaData[] = {
		{ "Category", "Advanced Physics Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->ResetBoneTransformWhenBoneNotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound = { "ResetBoneTransformWhenBoneNotFound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 2001341268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_MetaData)) }; // 2001341268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) }; // 470540848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_MetaData)) }; // 470540848
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 2848148442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_MetaData)) }; // 2848148442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset = { "LimitsDataAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, LimitsDataAsset), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 2001341268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_MetaData)) }; // 2001341268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) }; // 470540848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_MetaData)) }; // 470540848
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 2848148442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "Category", "Limits Data(Experimental)" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_MetaData)) }; // 2848148442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/** If the movement amount of one frame exceeds the threshold, ignore the movement  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If the movement amount of one frame exceeds the threshold, ignore the movement" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportDistanceThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData[] = {
		{ "Category", "Teleport" },
		{ "Comment", "/** If the rotation amount of one frame exceeds the threshold, ignore the rotation  */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If the rotation amount of one frame exceeds the threshold, ignore the rotation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TeleportRotationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "ExternalForce" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Whether or not wind is enabled for the bodies in this simulation */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether or not wind is enabled for the bodies in this simulation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bEnableWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Scale to apply to calculated wind velocities in the solver */" },
		{ "DisplayAfter", "bEnableWind" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale to apply to calculated wind velocities in the solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, WindScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 *\x09""EXPERIMENTAL. Perform sweeps for each simulating bodies to avoid collisions with the world.\n\x09 *\x09This greatly increases the cost of the physics simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "EXPERIMENTAL. Perform sweeps for each simulating bodies to avoid collisions with the world.\nThis greatly increases the cost of the physics simulation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bAllowWorldCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision = { "bAllowWorldCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "//use component collision channel settings by default\n" },
		{ "EditCondition", "bAllowWorldCollision" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "use component collision channel settings by default" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bOverrideCollisionParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams = { "bOverrideCollisionParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Types of objects that this physics objects will collide with. */" },
		{ "EditCondition", "bAllowWorldCollision&&bOverrideCollisionParams" },
		{ "FullyExpand", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Types of objects that this physics objects will collide with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings = { "CollisionChannelSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, CollisionChannelSettings), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings_MetaData)) }; // 1519692163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Self collision is best done by setting the \"Limits\" in this node, but if you really need using PhysicsAsset collision, uncheck this!*/" },
		{ "EditCondition", "bAllowWorldCollision" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Self collision is best done by setting the \"Limits\" in this node, but if you really need using PhysicsAsset collision, uncheck this!" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bIgnoreSelfComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent = { "bIgnoreSelfComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_Inner = { "IgnoreBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Self bone is always ignored*/" },
		{ "EditCondition", "!bIgnoreSelfComponent" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "Self bone is always ignored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones = { "IgnoreBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, IgnoreBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_MetaData)) }; // 2906976723
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_Inner = { "IgnoreBoneNamePrefix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** If the bone starts with this name, will be ignored (Self bone is always ignored)*/" },
		{ "EditCondition", "!bIgnoreSelfComponent" },
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
		{ "ToolTip", "If the bone starts with this name, will be ignored (Self bone is always ignored)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix = { "IgnoreBoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, IgnoreBoneNamePrefix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner = { "ModifyBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone, METADATA_PARAMS(nullptr, 0) }; // 1233575599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones = { "ModifyBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, ModifyBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_MetaData)) }; // 1233575599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength = { "TotalBoneLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, TotalBoneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform = { "PreSkelCompTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_KawaiiPhysics, PreSkelCompTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bInitPhysicsSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings = { "bInitPhysicsSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_KawaiiPhysics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_SetBit(void* Obj)
	{
		((FAnimNode_KawaiiPhysics*)Obj)->bEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing = { "bEditing", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_KawaiiPhysics), &Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ExcludeBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TargetFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_OverrideTargetFramerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PhysicsSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DampingCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingLocationCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WorldDampingRotationCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_StiffnessCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_RadiusCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitAngleCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bUpdatePhysicsSettingsInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_DummyBoneLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_BoneForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ResetBoneTransformWhenBoneNotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_LimitsDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_SphericalLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CapsuleLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PlanarLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportDistanceThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TeleportRotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_Gravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEnableWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_WindScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bAllowWorldCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bOverrideCollisionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_CollisionChannelSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bIgnoreSelfComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_IgnoreBoneNamePrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_ModifyBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_TotalBoneLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_PreSkelCompTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bInitPhysicsSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewProp_bEditing,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_KawaiiPhysics",
		sizeof(FAnimNode_KawaiiPhysics),
		alignof(FAnimNode_KawaiiPhysics),
		Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::EnumInfo[] = {
		{ EPlanarConstraint_StaticEnum, TEXT("EPlanarConstraint"), &Z_Registration_Info_UEnum_EPlanarConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3486619131U) },
		{ EBoneForwardAxis_StaticEnum, TEXT("EBoneForwardAxis"), &Z_Registration_Info_UEnum_EBoneForwardAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4160638386U) },
		{ ECollisionLimitType_StaticEnum, TEXT("ECollisionLimitType"), &Z_Registration_Info_UEnum_ECollisionLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2490883970U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::ScriptStructInfo[] = {
		{ FCollisionLimitBase::StaticStruct, Z_Construct_UScriptStruct_FCollisionLimitBase_Statics::NewStructOps, TEXT("CollisionLimitBase"), &Z_Registration_Info_UScriptStruct_CollisionLimitBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionLimitBase), 1910705313U) },
		{ FSphericalLimit::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimit_Statics::NewStructOps, TEXT("SphericalLimit"), &Z_Registration_Info_UScriptStruct_SphericalLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimit), 2001341268U) },
		{ FCapsuleLimit::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimit_Statics::NewStructOps, TEXT("CapsuleLimit"), &Z_Registration_Info_UScriptStruct_CapsuleLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimit), 470540848U) },
		{ FPlanarLimit::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimit_Statics::NewStructOps, TEXT("PlanarLimit"), &Z_Registration_Info_UScriptStruct_PlanarLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimit), 2848148442U) },
		{ FKawaiiPhysicsSettings::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsSettings_Statics::NewStructOps, TEXT("KawaiiPhysicsSettings"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsSettings), 902954746U) },
		{ FKawaiiPhysicsModifyBone::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsModifyBone_Statics::NewStructOps, TEXT("KawaiiPhysicsModifyBone"), &Z_Registration_Info_UScriptStruct_KawaiiPhysicsModifyBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsModifyBone), 1233575599U) },
		{ FAnimNode_KawaiiPhysics::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_KawaiiPhysics_Statics::NewStructOps, TEXT("AnimNode_KawaiiPhysics"), &Z_Registration_Info_UScriptStruct_AnimNode_KawaiiPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_KawaiiPhysics), 1321202443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_3790291325(TEXT("/Script/KawaiiPhysics"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_AnimNode_KawaiiPhysics_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
