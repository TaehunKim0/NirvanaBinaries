// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysics/Public/KawaiiPhysicsLimitsDataAsset.h"
#include "KawaiiPhysics/Public/AnimNode_KawaiiPhysics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLimitsDataAsset() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset();
	KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimit();
	KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData();
	UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionLimitDataBase;
class UScriptStruct* FCollisionLimitDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitDataBase, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CollisionLimitDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCollisionLimitDataBase>()
{
	return FCollisionLimitDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DrivingBoneName;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// I chose this design because using FBoneReference with anything other than Persona gives me an error. \n// I want to make it simpler...\n" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "I chose this design because using FBoneReference with anything other than Persona gives me an error.\nI want to make it simpler..." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionLimitDataBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName = { "DrivingBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, DrivingBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation = { "OffsetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation = { "OffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, OffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "CollisionLimitBase" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Debug" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionLimitDataBase, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_DrivingBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_OffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		nullptr,
		&NewStructOps,
		"CollisionLimitDataBase",
		sizeof(FCollisionLimitDataBase),
		alignof(FCollisionLimitDataBase),
		Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionLimitDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionLimitDataBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSphericalLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FSphericalLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalLimitData;
class UScriptStruct* FSphericalLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("SphericalLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FSphericalLimitData>()
{
	return FSphericalLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalLimitData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalLimitData, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_MetaData)) }; // 1502951913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewProp_LimitType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"SphericalLimitData",
		sizeof(FSphericalLimitData),
		alignof(FSphericalLimitData),
		Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalLimitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCapsuleLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FCapsuleLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapsuleLimitData;
class UScriptStruct* FCapsuleLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapsuleLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("CapsuleLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_CapsuleLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FCapsuleLimitData>()
{
	return FCapsuleLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCapsuleLimitData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapsuleLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimitData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "CapsuleLimit" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCapsuleLimitData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"CapsuleLimitData",
		sizeof(FCapsuleLimitData),
		alignof(FCapsuleLimitData),
		Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapsuleLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CapsuleLimitData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlanarLimitData>() == std::is_polymorphic<FCollisionLimitDataBase>(), "USTRUCT FPlanarLimitData cannot be polymorphic unless super FCollisionLimitDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlanarLimitData;
class UScriptStruct* FPlanarLimitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlanarLimitData, Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("PlanarLimitData"));
	}
	return Z_Registration_Info_UScriptStruct_PlanarLimitData.OuterSingleton;
}
template<> KAWAIIPHYSICS_API UScriptStruct* StaticStruct<FPlanarLimitData>()
{
	return FPlanarLimitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlanarLimitData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlanarLimitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlanarLimitData, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewProp_Plane,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
		Z_Construct_UScriptStruct_FCollisionLimitDataBase,
		&NewStructOps,
		"PlanarLimitData",
		sizeof(FPlanarLimitData),
		alignof(FPlanarLimitData),
		Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlanarLimitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlanarLimitData()
	{
		if (!Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlanarLimitData.InnerSingleton;
	}
	void UKawaiiPhysicsLimitsDataAsset::StaticRegisterNativesUKawaiiPhysicsLimitsDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKawaiiPhysicsLimitsDataAsset);
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
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
#endif // WITH_EDITORONLY_DATA
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "KawaiiPhysicsLimitsDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimitData, METADATA_PARAMS(nullptr, 0) }; // 2287396065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData[] = {
		{ "Category", "Spherical Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData = { "SphericalLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_MetaData)) }; // 2287396065
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimitData, METADATA_PARAMS(nullptr, 0) }; // 1138817210
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData[] = {
		{ "Category", "Capsule Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData = { "CapsuleLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_MetaData)) }; // 1138817210
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimitData, METADATA_PARAMS(nullptr, 0) }; // 3765178403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData[] = {
		{ "Category", "Planar Limits" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData = { "PlanarLimitsData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimitsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_MetaData)) }; // 3765178403
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 2001341268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_MetaData)) }; // 2001341268
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCapsuleLimit, METADATA_PARAMS(nullptr, 0) }; // 470540848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits = { "CapsuleLimits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, CapsuleLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_MetaData)) }; // 470540848
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 2848148442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLimitsDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UKawaiiPhysicsLimitsDataAsset, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_MetaData)) }; // 2848148442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimitsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimitsData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_CapsuleLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::NewProp_PlanarLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLimitsDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams = {
		&UKawaiiPhysicsLimitsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset()
	{
		if (!Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset.OuterSingleton;
	}
	template<> KAWAIIPHYSICS_API UClass* StaticClass<UKawaiiPhysicsLimitsDataAsset>()
	{
		return UKawaiiPhysicsLimitsDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKawaiiPhysicsLimitsDataAsset);
	UKawaiiPhysicsLimitsDataAsset::~UKawaiiPhysicsLimitsDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FCollisionLimitDataBase::StaticStruct, Z_Construct_UScriptStruct_FCollisionLimitDataBase_Statics::NewStructOps, TEXT("CollisionLimitDataBase"), &Z_Registration_Info_UScriptStruct_CollisionLimitDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionLimitDataBase), 39981254U) },
		{ FSphericalLimitData::StaticStruct, Z_Construct_UScriptStruct_FSphericalLimitData_Statics::NewStructOps, TEXT("SphericalLimitData"), &Z_Registration_Info_UScriptStruct_SphericalLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalLimitData), 2287396065U) },
		{ FCapsuleLimitData::StaticStruct, Z_Construct_UScriptStruct_FCapsuleLimitData_Statics::NewStructOps, TEXT("CapsuleLimitData"), &Z_Registration_Info_UScriptStruct_CapsuleLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapsuleLimitData), 1138817210U) },
		{ FPlanarLimitData::StaticStruct, Z_Construct_UScriptStruct_FPlanarLimitData_Statics::NewStructOps, TEXT("PlanarLimitData"), &Z_Registration_Info_UScriptStruct_PlanarLimitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlanarLimitData), 3765178403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset, UKawaiiPhysicsLimitsDataAsset::StaticClass, TEXT("UKawaiiPhysicsLimitsDataAsset"), &Z_Registration_Info_UClass_UKawaiiPhysicsLimitsDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsLimitsDataAsset), 3117562662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_4275537010(TEXT("/Script/KawaiiPhysics"),
		Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jack0_GitHub_Nirvana_Nirvana_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLimitsDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
