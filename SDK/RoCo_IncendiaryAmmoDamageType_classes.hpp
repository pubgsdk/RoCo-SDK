#pragma once

// Rogue Company (0.59) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_IncendiaryAmmoDamageType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IncendiaryAmmoDamageType.IncendiaryAmmoDamageType_C
// 0x0000 (0x0140 - 0x0140)
class UIncendiaryAmmoDamageType_C : public UMasterFire_DamageType_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass IncendiaryAmmoDamageType.IncendiaryAmmoDamageType_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif