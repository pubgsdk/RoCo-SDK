// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ANotifyState_ShowGadget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyEnd
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UANotifyState_ShowGadget_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyEnd");

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyBegin
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UAnimSequenceBase*       Animation                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          TotalDuration                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UANotifyState_ShowGadget_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyBegin");

	struct
	{
		class USkeletalMeshComponent*  MeshComp;
		class UAnimSequenceBase*       Animation;
		float                          TotalDuration;
		bool                           ReturnValue;
	} params;

	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
