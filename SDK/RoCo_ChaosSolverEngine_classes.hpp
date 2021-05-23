#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ChaosSolverEngine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChaosSolverEngine.ChaosDebugDrawComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosDebugDrawComponent"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosEventListenerComponent
// 0x0008 (0x00B8 - 0x00B0)
class UChaosEventListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosEventListenerComponent"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// 0x01B8 (0x0270 - 0x00B8)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00B8(0x0110) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;                              // 0x01C8(0x0050) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                  // 0x0218(0x0050) (CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosGameplayEventDispatcher"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UChaosNotifyHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosNotifyHandlerInterface"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary"));
		return ptr;
	}


	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
};


// Class ChaosSolverEngine.ChaosSolver
// 0x0000 (0x0028 - 0x0028)
class UChaosSolver : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosSolver"));
		return ptr;
	}

};


// Class ChaosSolverEngine.ChaosSolverActor
// 0x0088 (0x02A8 - 0x0220)
class AChaosSolverActor : public AActor
{
public:
	float                                              TimeStepMultiplier;                                       // 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                CollisionIterations;                                      // 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PushOutIterations;                                        // 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                PushOutPairIterations;                                    // 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              ClusterConnectionFactor;                                  // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                               // 0x0234(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               DoGenerateCollisionData;                                  // 0x0235(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	struct FSolverCollisionFilterSettings              CollisionFilterSettings;                                  // 0x0238(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               DoGenerateBreakingData;                                   // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FSolverBreakingFilterSettings               BreakingFilterSettings;                                   // 0x024C(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               DoGenerateTrailingData;                                   // 0x025C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData02[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	struct FSolverTrailingFilterSettings               TrailingFilterSettings;                                   // 0x0260(0x0010) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bHasFloor;                                                // 0x0270(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	float                                              FloorHeight;                                              // 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              MassScale;                                                // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bGenerateContactGraph;                                    // 0x027C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FChaosDebugSubstepControl                   ChaosDebugSubstepControl;                                 // 0x027D(0x0003) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UBillboardComponent*                         SpriteComponent;                                          // 0x0280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData04[0x18];                                      // 0x0288(0x0018) MISSED OFFSET
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                         // 0x02A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosSolverActor"));
		return ptr;
	}


	void SetSolverActive(bool bActive);
	void SetAsCurrentWorldSolver();
};


// Class ChaosSolverEngine.ChaosSolverSettings
// 0x0020 (0x0058 - 0x0038)
class UChaosSolverSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FSoftClassPath                              DefaultChaosSolverActorClass;                             // 0x0040(0x0018) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_NoClear, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class ChaosSolverEngine.ChaosSolverSettings"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
