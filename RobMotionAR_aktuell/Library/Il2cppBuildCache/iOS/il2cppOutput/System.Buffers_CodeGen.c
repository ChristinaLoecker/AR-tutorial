#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Resources.ResourceManager System.SR::get_ResourceManager()
extern void SR_get_ResourceManager_mEC93DC61FEB777324823B4D16BE4B54480955947 (void);
// 0x00000002 System.String System.SR::GetResourceString(System.String,System.String)
extern void SR_GetResourceString_m80874FE1DCB8E1B2F7B25D15F51219F5CADE4AD7 (void);
// 0x00000003 System.Type System.SR::get_ResourceType()
extern void SR_get_ResourceType_mF148E26A9D2AA3BA0B98C21963449A5BA4E3CCA7 (void);
// 0x00000004 System.String System.SR::get_ArgumentException_BufferNotFromPool()
extern void SR_get_ArgumentException_BufferNotFromPool_mF7E9FA1998CFF097C3844036F63685CE4927FD35 (void);
// 0x00000005 System.Void System.SR::.cctor()
extern void SR__cctor_m18CAEA8A36502BED2DF824DBAE84AD86782EF211 (void);
// 0x00000006 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::get_Shared()
// 0x00000007 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::EnsureSharedCreated()
// 0x00000008 System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::Create()
// 0x00000009 T[] System.Buffers.ArrayPool`1::Rent(System.Int32)
// 0x0000000A System.Void System.Buffers.ArrayPool`1::Return(T[],System.Boolean)
// 0x0000000B System.Void System.Buffers.ArrayPool`1::.ctor()
// 0x0000000C System.Void System.Buffers.ArrayPoolEventSource::BufferRented(System.Int32,System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferRented_m5CE9BCB29BD945F1FD67DE08C639408661C59290 (void);
// 0x0000000D System.Void System.Buffers.ArrayPoolEventSource::BufferAllocated(System.Int32,System.Int32,System.Int32,System.Int32,System.Buffers.ArrayPoolEventSource/BufferAllocatedReason)
extern void ArrayPoolEventSource_BufferAllocated_m214A0B4602D23E352E0F4B6BE05C93D3A43F9C7B (void);
// 0x0000000E System.Void System.Buffers.ArrayPoolEventSource::BufferReturned(System.Int32,System.Int32,System.Int32)
extern void ArrayPoolEventSource_BufferReturned_m13CAD12A690C7CB337141C7AC3577CEE3647DF81 (void);
// 0x0000000F System.Void System.Buffers.ArrayPoolEventSource::.ctor()
extern void ArrayPoolEventSource__ctor_mD1104A3392C287DC1B37430D004E36CCED62DC2E (void);
// 0x00000010 System.Void System.Buffers.ArrayPoolEventSource::.cctor()
extern void ArrayPoolEventSource__cctor_m0C90DD30C25E1937DDCA282D02D3B1CD9A9B46EE (void);
// 0x00000011 System.Void System.Buffers.DefaultArrayPool`1::.ctor()
// 0x00000012 System.Void System.Buffers.DefaultArrayPool`1::.ctor(System.Int32,System.Int32)
// 0x00000013 System.Int32 System.Buffers.DefaultArrayPool`1::get_Id()
// 0x00000014 T[] System.Buffers.DefaultArrayPool`1::Rent(System.Int32)
// 0x00000015 System.Void System.Buffers.DefaultArrayPool`1::Return(T[],System.Boolean)
// 0x00000016 System.Void System.Buffers.DefaultArrayPool`1/Bucket::.ctor(System.Int32,System.Int32,System.Int32)
// 0x00000017 System.Int32 System.Buffers.DefaultArrayPool`1/Bucket::get_Id()
// 0x00000018 T[] System.Buffers.DefaultArrayPool`1/Bucket::Rent()
// 0x00000019 System.Void System.Buffers.DefaultArrayPool`1/Bucket::Return(T[])
// 0x0000001A System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
extern void Utilities_SelectBucketIndex_m8A1B5269010C90973FDB9538193CBBBE26091969 (void);
// 0x0000001B System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
extern void Utilities_GetMaxSizeForBucket_m63505BFBAC122CFFE8E4D2EA257020DF5EDADBE7 (void);
static Il2CppMethodPointer s_methodPointers[27] = 
{
	SR_get_ResourceManager_mEC93DC61FEB777324823B4D16BE4B54480955947,
	SR_GetResourceString_m80874FE1DCB8E1B2F7B25D15F51219F5CADE4AD7,
	SR_get_ResourceType_mF148E26A9D2AA3BA0B98C21963449A5BA4E3CCA7,
	SR_get_ArgumentException_BufferNotFromPool_mF7E9FA1998CFF097C3844036F63685CE4927FD35,
	SR__cctor_m18CAEA8A36502BED2DF824DBAE84AD86782EF211,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ArrayPoolEventSource_BufferRented_m5CE9BCB29BD945F1FD67DE08C639408661C59290,
	ArrayPoolEventSource_BufferAllocated_m214A0B4602D23E352E0F4B6BE05C93D3A43F9C7B,
	ArrayPoolEventSource_BufferReturned_m13CAD12A690C7CB337141C7AC3577CEE3647DF81,
	ArrayPoolEventSource__ctor_mD1104A3392C287DC1B37430D004E36CCED62DC2E,
	ArrayPoolEventSource__cctor_m0C90DD30C25E1937DDCA282D02D3B1CD9A9B46EE,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Utilities_SelectBucketIndex_m8A1B5269010C90973FDB9538193CBBBE26091969,
	Utilities_GetMaxSizeForBucket_m63505BFBAC122CFFE8E4D2EA257020DF5EDADBE7,
};
static const int32_t s_InvokerIndices[27] = 
{
	5869,
	4950,
	5869,
	5869,
	5886,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	648,
	334,
	1000,
	3672,
	5886,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5483,
	5483,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x02000004, { 0, 7 } },
	{ 0x02000007, { 7, 12 } },
	{ 0x02000008, { 19, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[22] = 
{
	{ (Il2CppRGCTXDataType)2, 1967 },
	{ (Il2CppRGCTXDataType)3, 28313 },
	{ (Il2CppRGCTXDataType)3, 1450 },
	{ (Il2CppRGCTXDataType)3, 1449 },
	{ (Il2CppRGCTXDataType)3, 27163 },
	{ (Il2CppRGCTXDataType)2, 2288 },
	{ (Il2CppRGCTXDataType)3, 4161 },
	{ (Il2CppRGCTXDataType)3, 4164 },
	{ (Il2CppRGCTXDataType)3, 1452 },
	{ (Il2CppRGCTXDataType)2, 1970 },
	{ (Il2CppRGCTXDataType)3, 4165 },
	{ (Il2CppRGCTXDataType)2, 6998 },
	{ (Il2CppRGCTXDataType)2, 2049 },
	{ (Il2CppRGCTXDataType)3, 2655 },
	{ (Il2CppRGCTXDataType)2, 2290 },
	{ (Il2CppRGCTXDataType)2, 6919 },
	{ (Il2CppRGCTXDataType)3, 2656 },
	{ (Il2CppRGCTXDataType)3, 2658 },
	{ (Il2CppRGCTXDataType)3, 2657 },
	{ (Il2CppRGCTXDataType)2, 7043 },
	{ (Il2CppRGCTXDataType)2, 6966 },
	{ (Il2CppRGCTXDataType)3, 2660 },
};
extern const CustomAttributesCacheGenerator g_System_Buffers_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Buffers_CodeGenModule;
const Il2CppCodeGenModule g_System_Buffers_CodeGenModule = 
{
	"System.Buffers.dll",
	27,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	22,
	s_rgctxValues,
	NULL,
	g_System_Buffers_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
