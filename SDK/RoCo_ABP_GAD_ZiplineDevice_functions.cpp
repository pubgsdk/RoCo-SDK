// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_ABP_GAD_ZiplineDevice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UABP_GAD_ZiplineDevice_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.AnimGraph");

	struct
	{
		struct FPoseLink               AnimGraph;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.BlueprintUpdateAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_GAD_ZiplineDevice_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.BlueprintUpdateAnimation");

	struct
	{
		float                          DeltaTimeX;
	} params;

	params.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(fn, &params);
}


// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.ExecuteUbergraph_ABP_GAD_ZiplineDevice
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UABP_GAD_ZiplineDevice_C::ExecuteUbergraph_ABP_GAD_ZiplineDevice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.ExecuteUbergraph_ABP_GAD_ZiplineDevice");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
