#pragma once

// Rogue Company (0.6X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Cam_Barricade_Base_Deploy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cam_Barricade_Base_Deploy.Cam_Barricade_Base_Deploy_C
// 0x0000 (0x0160 - 0x0160)
class UCam_Barricade_Base_Deploy_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cam_Barricade_Base_Deploy.Cam_Barricade_Base_Deploy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
