#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_Weapon_InstantFire_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_InstantFire_Rifle.Weapon_InstantFire_Rifle_C
// 0x0000 (0x0864 - 0x0864)
class AWeapon_InstantFire_Rifle_C : public AWeapon_InstantFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Weapon_InstantFire_Rifle.Weapon_InstantFire_Rifle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif