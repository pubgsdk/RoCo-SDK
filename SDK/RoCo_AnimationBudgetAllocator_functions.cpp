// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_AnimationBudgetAllocator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FAnimationBudgetAllocatorParameters InParameters                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters"));

	struct
	{
		class UObject*                 WorldContextObject;
		struct FAnimationBudgetAllocatorParameters InParameters;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.InParameters = InParameters;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget"));

	struct
	{
		class UObject*                 WorldContextObject;
		bool                           bEnabled;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.bEnabled = bEnabled;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInAutoRegisterWithBudgetAllocator (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator"));

	struct
	{
		bool                           bInAutoRegisterWithBudgetAllocator;
	} params;

	params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
