#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_StickySensorGrenade_Level_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StickySensorGrenade_Level_2.StickySensorGrenade_Level_1_C
// 0x0000 (0x0A20 - 0x0A20)
class AStickySensorGrenade_Level_1_C : public AStickySensorGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass StickySensorGrenade_Level_2.StickySensorGrenade_Level_1_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
