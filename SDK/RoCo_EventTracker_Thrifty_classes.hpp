#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_EventTracker_Thrifty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EventTracker_Thrifty.EventTracker_Thrifty_C
// 0x0009 (0x01F9 - 0x01F0)
class UEventTracker_Thrifty_C : public UKSEventTracker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               PurchasedPrimary;                                         // 0x01F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EventTracker_Thrifty.EventTracker_Thrifty_C");
		return ptr;
	}


	bool DidPlayerWinMatch();
	void MatchHasEnded_Event();
	void Hande_OnShopItemPurchased(const struct FShopItem& ShopItem);
	void HandleLostPlayerController();
	void HandleTrackerInitialized(TMap<struct FString, float> Config, TMap<struct FString, struct FString> StringConfig);
	void ExecuteUbergraph_EventTracker_Thrifty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif