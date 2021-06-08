#pragma once

// Rogue Company (0.60) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RoCo_LiveLinkInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x00B0 (0x00D8 - 0x0028)
class ULiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UClass*                                      Role;                                                     // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>                Subjects;                                                 // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                         // 0x0048(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0070 (0x0098 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                                Mode;                                                     // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FLiveLinkSourceBufferManagementSettings     BufferSettings;                                           // 0x0030(0x0050) (CPF_Edit, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     ConnectionString;                                         // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      Factory;                                                  // 0x0090(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRole : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkController
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkController : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (0x00E8 - 0x0098)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings            CurveConversionSettings;                                  // 0x0098(0x0050) (CPF_Edit, CPF_Config, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                            // 0x0028(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                   // 0x0038(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>            Translators;                                              // 0x0040(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UClass*                                      Role;                                                     // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
