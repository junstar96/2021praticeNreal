#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// LitJson.ExporterFunc
struct ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42;
// LitJson.ImporterFunc
struct ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B;
// LitJson.JsonException
struct JsonException_t798FD591291FF350BB74596BF9B591234440016B;
// LitJson.JsonMapper/<>c
struct U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70;
// LitJson.JsonWriter
struct JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432;
// LitJson.PropertyMetadata[]
struct PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18;
// LitJson.WriterContext
struct WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t204ED194F7491586BD4C0F217FEF0CD759D4A543;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t2C452B4AC138573A30C0B55DD32B4EE21B5B7234;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tBF8B143C32F17FF8C0415456C17A4CFB5CDB92DB;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_tCA060A28536DF504F310AAF95392A8C92F19903C;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tE809E152682281DDA11BCEB33ED25315346D8845;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_tC7C9094C0CA9D0C7D8D92B71C688DF330C25BBBF;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_t6C30FBC62E567D5509CD239FCB8BBB0959932012;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t8EB87757896D11E697C2DF45E0799A08920409CC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t14B5F3942CA453DFB471B223E967CA23EAE5A1B9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_t18CEE781C28C747203A9E04AE9969E7F2D7B6BDB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_t1C3A648788338FA0B70ED3AF378EA802F6B823B1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t4ED490B955745AB49541C95EEC87F93896BB44E7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t80E470B35A71BEF6337FCAB1A8E2A157A08E88BC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t3A8AB47D268C03FB37CA667498F6F23338AD54CA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t261296CD3B3EB50B8487D24799B93FA344DFBE86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t85C1A3241747BAEED6A1627BF4BB494F0AB50865;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_t5745E75533D03E4046E6C4B6BED02CC4305A60AD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_tFC5CF6045209183B1A8839C6B5BE2C10F8A0BAEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_tC9A27453993C8C893CD5A0E9E48D7516C3323BB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_tBE9A9C3D4A40C83B3C68B3FCA7040177D247954E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_t97A9B134B1F321F4B2AAC5D37277ACF34050C7A7;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_t8C023160D2E803B31CD9F9F90B9DC5D1460ABC8C;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t20319D0D4A8067323E2F41E950DEE556F0A8636C;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t8CD147976B726DF5DF74AFCE7869F3140A1F7B56;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_tCB698C1A77A77E3D5106820CFF0440B8109F485A;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_tAFC59B94E1F2CB496CB1232DDB3955882FFB62B6;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_tB755471DCB4E728B8AA5F33F7DC92F4F8BF73E5C;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_tC16B0A05A41A0EDB42A902D6C3916A53E7F881BE;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_t6D3EA94113A5C720E032BB52D87D1AE3B615C45E;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_tDC8D0DC4BAB2B00ADF2865768EBB4E95EBBCC918;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringWriter
struct StringWriter_t194EF1526E072B93984370042AA80926C2EB6139;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD598C9A8F1064E85BE8C9DCF637702C78EB281EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t402A106D3F4F34CB11C5CA96548C96AB3F143508_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC16B0A05A41A0EDB42A902D6C3916A53E7F881BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tDC8D0DC4BAB2B00ADF2865768EBB4E95EBBCC918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t73EC79021050AF0E7EC2FA640B91E4DC42BE3E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4AC410A5F5129A1599B005A41C73B8EB61811128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
IL2CPP_EXTERN_C String_t* _stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45;
IL2CPP_EXTERN_C String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283;
IL2CPP_EXTERN_C String_t* _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728;
IL2CPP_EXTERN_C String_t* _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralA39F7616B9BB60D3C3FD2BCDCC6E09F4CE6A8CB1;
IL2CPP_EXTERN_C String_t* _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77;
IL2CPP_EXTERN_C String_t* _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015;
IL2CPP_EXTERN_C String_t* _stringLiteralECDDA59AEA5EE67D7D854C969CCF7F4F4B4A4C54;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
IL2CPP_EXTERN_C String_t* _stringLiteralF562D2B4D709BCB5B85B55894D84370AD77BC28A;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1B72E70911CA9C0666FCACB6F939DAC01274F6CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2F6602C0AA7460BE984C764943D0C7556A7068BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m539EE8AE6ECF8524341CA82FDCF7019E33A1D393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m7248DAC65302215E921FE0ACF6F57AC2533A0485_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8A64385D0226206258E5BAD18707C013151B384E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mF9C19F0A9FE8098442198548881CD407CE0F7407_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m05076AFECE0F9AF86250C30E2FEA1061608F5A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m5146CB79B673266F25C5DC02D55E47C867CB972E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mF759BC578947A2F55FA7C1F9D90899317A597F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCED6B1FEC85233173B0379E0AD080E9BD0B9345C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m713166FC0847A274EFA46C4E40C2D962AF062ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mDC2E4B811FB8E7EA3226FD65A12F285E053BBAFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mABC2C8FA56F1555FCE439778A2F618045314C801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m86A6EFF746D055705F6006072B4D3FE1376923B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mF76D14B3437A8D04446FB265116105806C72672C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m6C19507554C2E950BCC585BE0FFFE3BFF2E78471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mBBAFFA79F8B7E5D7CF2254DD913F8780FB507C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_mFCC72942A3DA0CD74A6E3C089DD744A15941B7B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m0FC284FA2EA0E451EC4AAECEDA316474B862573E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m1629CB3D44BABE295664610372601E3995432FDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m0C4D0E2E81249BC375F17BD09BDAFFE8942100FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m8511D5E90726C24AFF43E2A1BBF1F892395DF3E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m6B96E498309C1A444C51D19C6D75003094DD6AD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m605573289B5D02F55793463208F06ABBF56B5C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m384860319972D4130A9A7DCD59A6F2200349B1B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m7A2C9D5C1323108BAD338AE3D3A9AE0031181F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBC90C1ABE6A24CED2C93CFF3F46FA697B836D4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mB1BEF5897297C03EB624B9BABFB1F82967C9EA9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t JsonMapper_AddTypeProperties_m1728F6BC726458EFD08AF9B326E6901D5C4C0FF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterBaseExporters_mABB89F6F9B7E0B146FB26330095EA6AC6A9D26D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterBaseImporters_m06B3693983795AA291251312E4E3A5AE6E8B5075_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_ToJson_m430C7B882FED6F475271791E804F74A95CF206F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper__cctor_m64B1B4DD6ADADC80F89F97AB4D3006FC7C635675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Init_mA334EC600A5E8F3EAC9EE6674D24F0D0E72862EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Reset_mAAABAF2E9F4D1148E7255AFA40A20DA93226E984_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_ToString_mB9A661022BD1F9D7AADAD52E294ABD5014933860_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m70BF39665E97BA8C18D3B6DB0D1988070B61DAED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m79AA57886FFFBA2EB9C4581BB29FC270DA400A86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_mB05CF17B1E9E543E8864561331FB08D0128442BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_mF49D96D54DEFF0ADAA727D58D54E566FAF8035E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter__cctor_mB04E15491BA15CF05B57A98259E38724C280D3C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter__ctor_m1530231EE19BD253D2619D6EC214203F1248C099_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m5146CB79B673266F25C5DC02D55E47C867CB972E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mF759BC578947A2F55FA7C1F9D90899317A597F76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCED6B1FEC85233173B0379E0AD080E9BD0B9345C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m713166FC0847A274EFA46C4E40C2D962AF062ED8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mDC2E4B811FB8E7EA3226FD65A12F285E053BBAFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mABC2C8FA56F1555FCE439778A2F618045314C801_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m86A6EFF746D055705F6006072B4D3FE1376923B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mF76D14B3437A8D04446FB265116105806C72672C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m6C19507554C2E950BCC585BE0FFFE3BFF2E78471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mBBAFFA79F8B7E5D7CF2254DD913F8780FB507C7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_mFCC72942A3DA0CD74A6E3C089DD744A15941B7B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m0FC284FA2EA0E451EC4AAECEDA316474B862573E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m1629CB3D44BABE295664610372601E3995432FDE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m0C4D0E2E81249BC375F17BD09BDAFFE8942100FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m8511D5E90726C24AFF43E2A1BBF1F892395DF3E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m6B96E498309C1A444C51D19C6D75003094DD6AD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m605573289B5D02F55793463208F06ABBF56B5C16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m384860319972D4130A9A7DCD59A6F2200349B1B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m7A2C9D5C1323108BAD338AE3D3A9AE0031181F51_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBC90C1ABE6A24CED2C93CFF3F46FA697B836D4A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mB1BEF5897297C03EB624B9BABFB1F82967C9EA9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m462AB8026F75327EB792CBC814FE348DCE4A3E8F_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE51A04161C78908B05A264507CA527861849FB67 
{
public:

public:
};


// System.Object


// LitJson.JsonMapper
struct  JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___static_writer_14)); }
	inline JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}
};


// LitJson.JsonMapper_<>c
struct  U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields
{
public:
	// LitJson.JsonMapper_<>c LitJson.JsonMapper_<>c::<>9
	U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * ___U3CU3E9_0;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_0
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_0_1;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_1
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_1_2;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_2
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_2_3;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_3
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_3_4;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_4
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_4_5;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_5
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_5_6;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_6
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_6_7;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_7
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_7_8;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_8
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * ___U3CU3E9__24_8_9;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_0
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_0_10;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_1
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_1_11;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_2
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_2_12;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_3
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_3_13;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_4
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_4_14;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_5
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_5_15;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_6
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_6_16;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_7
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_7_17;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_8
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_8_18;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_9
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_9_19;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_10
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_10_20;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_11
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___U3CU3E9__25_11_21;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_0_1)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_1_2)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_1_2() const { return ___U3CU3E9__24_1_2; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_1_2() { return &___U3CU3E9__24_1_2; }
	inline void set_U3CU3E9__24_1_2(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_2_3)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_2_3() const { return ___U3CU3E9__24_2_3; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_2_3() { return &___U3CU3E9__24_2_3; }
	inline void set_U3CU3E9__24_2_3(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_3_4)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_3_4() const { return ___U3CU3E9__24_3_4; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_3_4() { return &___U3CU3E9__24_3_4; }
	inline void set_U3CU3E9__24_3_4(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_4_5)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_4_5() const { return ___U3CU3E9__24_4_5; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_4_5() { return &___U3CU3E9__24_4_5; }
	inline void set_U3CU3E9__24_4_5(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_5_6)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_5_6() const { return ___U3CU3E9__24_5_6; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_5_6() { return &___U3CU3E9__24_5_6; }
	inline void set_U3CU3E9__24_5_6(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_6_7)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_6_7() const { return ___U3CU3E9__24_6_7; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_6_7() { return &___U3CU3E9__24_6_7; }
	inline void set_U3CU3E9__24_6_7(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_7_8)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_7_8() const { return ___U3CU3E9__24_7_8; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_7_8() { return &___U3CU3E9__24_7_8; }
	inline void set_U3CU3E9__24_7_8(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_8_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__24_8_9)); }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * get_U3CU3E9__24_8_9() const { return ___U3CU3E9__24_8_9; }
	inline ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 ** get_address_of_U3CU3E9__24_8_9() { return &___U3CU3E9__24_8_9; }
	inline void set_U3CU3E9__24_8_9(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * value)
	{
		___U3CU3E9__24_8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_8_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_0_10)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_0_10() const { return ___U3CU3E9__25_0_10; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_0_10() { return &___U3CU3E9__25_0_10; }
	inline void set_U3CU3E9__25_0_10(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_1_11)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_1_11() const { return ___U3CU3E9__25_1_11; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_1_11() { return &___U3CU3E9__25_1_11; }
	inline void set_U3CU3E9__25_1_11(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_2_12)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_2_12() const { return ___U3CU3E9__25_2_12; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_2_12() { return &___U3CU3E9__25_2_12; }
	inline void set_U3CU3E9__25_2_12(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_3_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_3_13)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_3_13() const { return ___U3CU3E9__25_3_13; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_3_13() { return &___U3CU3E9__25_3_13; }
	inline void set_U3CU3E9__25_3_13(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_3_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_3_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_4_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_4_14)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_4_14() const { return ___U3CU3E9__25_4_14; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_4_14() { return &___U3CU3E9__25_4_14; }
	inline void set_U3CU3E9__25_4_14(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_4_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_4_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_5_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_5_15)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_5_15() const { return ___U3CU3E9__25_5_15; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_5_15() { return &___U3CU3E9__25_5_15; }
	inline void set_U3CU3E9__25_5_15(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_5_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_5_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_6_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_6_16)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_6_16() const { return ___U3CU3E9__25_6_16; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_6_16() { return &___U3CU3E9__25_6_16; }
	inline void set_U3CU3E9__25_6_16(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_6_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_6_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_7_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_7_17)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_7_17() const { return ___U3CU3E9__25_7_17; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_7_17() { return &___U3CU3E9__25_7_17; }
	inline void set_U3CU3E9__25_7_17(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_7_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_7_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_8_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_8_18)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_8_18() const { return ___U3CU3E9__25_8_18; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_8_18() { return &___U3CU3E9__25_8_18; }
	inline void set_U3CU3E9__25_8_18(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_8_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_8_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_9_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_9_19)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_9_19() const { return ___U3CU3E9__25_9_19; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_9_19() { return &___U3CU3E9__25_9_19; }
	inline void set_U3CU3E9__25_9_19(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_9_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_9_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_10_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_10_20)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_10_20() const { return ___U3CU3E9__25_10_20; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_10_20() { return &___U3CU3E9__25_10_20; }
	inline void set_U3CU3E9__25_10_20(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_10_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_10_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_11_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields, ___U3CU3E9__25_11_21)); }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * get_U3CU3E9__25_11_21() const { return ___U3CU3E9__25_11_21; }
	inline ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B ** get_address_of_U3CU3E9__25_11_21() { return &___U3CU3E9__25_11_21; }
	inline void set_U3CU3E9__25_11_21(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * value)
	{
		___U3CU3E9__25_11_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_11_21), (void*)value);
	}
};


// LitJson.JsonWriter
struct  JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.Boolean LitJson.JsonWriter::lower_case_properties
	bool ___lower_case_properties_10;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer_11;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___context_1)); }
	inline WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * get_context_1() const { return ___context_1; }
	inline WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___ctx_stack_2)); }
	inline Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___hex_seq_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_lower_case_properties_10() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___lower_case_properties_10)); }
	inline bool get_lower_case_properties_10() const { return ___lower_case_properties_10; }
	inline bool* get_address_of_lower_case_properties_10() { return &___lower_case_properties_10; }
	inline void set_lower_case_properties_10(bool value)
	{
		___lower_case_properties_10 = value;
	}

	inline static int32_t get_offset_of_writer_11() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432, ___writer_11)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_writer_11() const { return ___writer_11; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_writer_11() { return &___writer_11; }
	inline void set_writer_11(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___writer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_11), (void*)value);
	}
};

struct JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// LitJson.WriterContext
struct  WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2C452B4AC138573A30C0B55DD32B4EE21B5B7234* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t14B5F3942CA453DFB471B223E967CA23EAE5A1B9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t85C1A3241747BAEED6A1627BF4BB494F0AB50865 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___entries_1)); }
	inline EntryU5BU5D_t2C452B4AC138573A30C0B55DD32B4EE21B5B7234* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2C452B4AC138573A30C0B55DD32B4EE21B5B7234** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2C452B4AC138573A30C0B55DD32B4EE21B5B7234* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___keys_7)); }
	inline KeyCollection_t14B5F3942CA453DFB471B223E967CA23EAE5A1B9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t14B5F3942CA453DFB471B223E967CA23EAE5A1B9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t14B5F3942CA453DFB471B223E967CA23EAE5A1B9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ___values_8)); }
	inline ValueCollection_t85C1A3241747BAEED6A1627BF4BB494F0AB50865 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t85C1A3241747BAEED6A1627BF4BB494F0AB50865 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t85C1A3241747BAEED6A1627BF4BB494F0AB50865 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBF8B143C32F17FF8C0415456C17A4CFB5CDB92DB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t18CEE781C28C747203A9E04AE9969E7F2D7B6BDB * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5745E75533D03E4046E6C4B6BED02CC4305A60AD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___entries_1)); }
	inline EntryU5BU5D_tBF8B143C32F17FF8C0415456C17A4CFB5CDB92DB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBF8B143C32F17FF8C0415456C17A4CFB5CDB92DB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBF8B143C32F17FF8C0415456C17A4CFB5CDB92DB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___keys_7)); }
	inline KeyCollection_t18CEE781C28C747203A9E04AE9969E7F2D7B6BDB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t18CEE781C28C747203A9E04AE9969E7F2D7B6BDB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t18CEE781C28C747203A9E04AE9969E7F2D7B6BDB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ___values_8)); }
	inline ValueCollection_t5745E75533D03E4046E6C4B6BED02CC4305A60AD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5745E75533D03E4046E6C4B6BED02CC4305A60AD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5745E75533D03E4046E6C4B6BED02CC4305A60AD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCA060A28536DF504F310AAF95392A8C92F19903C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1C3A648788338FA0B70ED3AF378EA802F6B823B1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tFC5CF6045209183B1A8839C6B5BE2C10F8A0BAEF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___entries_1)); }
	inline EntryU5BU5D_tCA060A28536DF504F310AAF95392A8C92F19903C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCA060A28536DF504F310AAF95392A8C92F19903C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCA060A28536DF504F310AAF95392A8C92F19903C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___keys_7)); }
	inline KeyCollection_t1C3A648788338FA0B70ED3AF378EA802F6B823B1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1C3A648788338FA0B70ED3AF378EA802F6B823B1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1C3A648788338FA0B70ED3AF378EA802F6B823B1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ___values_8)); }
	inline ValueCollection_tFC5CF6045209183B1A8839C6B5BE2C10F8A0BAEF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tFC5CF6045209183B1A8839C6B5BE2C10F8A0BAEF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tFC5CF6045209183B1A8839C6B5BE2C10F8A0BAEF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE809E152682281DDA11BCEB33ED25315346D8845* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4ED490B955745AB49541C95EEC87F93896BB44E7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC9A27453993C8C893CD5A0E9E48D7516C3323BB5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___entries_1)); }
	inline EntryU5BU5D_tE809E152682281DDA11BCEB33ED25315346D8845* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE809E152682281DDA11BCEB33ED25315346D8845** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE809E152682281DDA11BCEB33ED25315346D8845* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___keys_7)); }
	inline KeyCollection_t4ED490B955745AB49541C95EEC87F93896BB44E7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4ED490B955745AB49541C95EEC87F93896BB44E7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4ED490B955745AB49541C95EEC87F93896BB44E7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ___values_8)); }
	inline ValueCollection_tC9A27453993C8C893CD5A0E9E48D7516C3323BB5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC9A27453993C8C893CD5A0E9E48D7516C3323BB5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC9A27453993C8C893CD5A0E9E48D7516C3323BB5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC7C9094C0CA9D0C7D8D92B71C688DF330C25BBBF* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t80E470B35A71BEF6337FCAB1A8E2A157A08E88BC * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBE9A9C3D4A40C83B3C68B3FCA7040177D247954E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___entries_1)); }
	inline EntryU5BU5D_tC7C9094C0CA9D0C7D8D92B71C688DF330C25BBBF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC7C9094C0CA9D0C7D8D92B71C688DF330C25BBBF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC7C9094C0CA9D0C7D8D92B71C688DF330C25BBBF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___keys_7)); }
	inline KeyCollection_t80E470B35A71BEF6337FCAB1A8E2A157A08E88BC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t80E470B35A71BEF6337FCAB1A8E2A157A08E88BC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t80E470B35A71BEF6337FCAB1A8E2A157A08E88BC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ___values_8)); }
	inline ValueCollection_tBE9A9C3D4A40C83B3C68B3FCA7040177D247954E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBE9A9C3D4A40C83B3C68B3FCA7040177D247954E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBE9A9C3D4A40C83B3C68B3FCA7040177D247954E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6C30FBC62E567D5509CD239FCB8BBB0959932012* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3A8AB47D268C03FB37CA667498F6F23338AD54CA * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t97A9B134B1F321F4B2AAC5D37277ACF34050C7A7 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___entries_1)); }
	inline EntryU5BU5D_t6C30FBC62E567D5509CD239FCB8BBB0959932012* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6C30FBC62E567D5509CD239FCB8BBB0959932012** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6C30FBC62E567D5509CD239FCB8BBB0959932012* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___keys_7)); }
	inline KeyCollection_t3A8AB47D268C03FB37CA667498F6F23338AD54CA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3A8AB47D268C03FB37CA667498F6F23338AD54CA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3A8AB47D268C03FB37CA667498F6F23338AD54CA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ___values_8)); }
	inline ValueCollection_t97A9B134B1F321F4B2AAC5D37277ACF34050C7A7 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t97A9B134B1F321F4B2AAC5D37277ACF34050C7A7 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t97A9B134B1F321F4B2AAC5D37277ACF34050C7A7 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t8EB87757896D11E697C2DF45E0799A08920409CC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t261296CD3B3EB50B8487D24799B93FA344DFBE86 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8C023160D2E803B31CD9F9F90B9DC5D1460ABC8C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___entries_1)); }
	inline EntryU5BU5D_t8EB87757896D11E697C2DF45E0799A08920409CC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t8EB87757896D11E697C2DF45E0799A08920409CC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t8EB87757896D11E697C2DF45E0799A08920409CC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___keys_7)); }
	inline KeyCollection_t261296CD3B3EB50B8487D24799B93FA344DFBE86 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t261296CD3B3EB50B8487D24799B93FA344DFBE86 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t261296CD3B3EB50B8487D24799B93FA344DFBE86 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ___values_8)); }
	inline ValueCollection_t8C023160D2E803B31CD9F9F90B9DC5D1460ABC8C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8C023160D2E803B31CD9F9F90B9DC5D1460ABC8C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8C023160D2E803B31CD9F9F90B9DC5D1460ABC8C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.PropertyMetadata>
struct  List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2, ____items_1)); }
	inline PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* get__items_1() const { return ____items_1; }
	inline PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2_StaticFields, ____emptyArray_5)); }
	inline PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyMetadataU5BU5D_t83F74A5D2982F75FB2BA62237F9EE041FA226D18* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t204ED194F7491586BD4C0F217FEF0CD759D4A543* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C, ____array_0)); }
	inline WriterContextU5BU5D_t204ED194F7491586BD4C0F217FEF0CD759D4A543* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t204ED194F7491586BD4C0F217FEF0CD759D4A543** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t204ED194F7491586BD4C0F217FEF0CD759D4A543* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// LitJson.ArrayMetadata
struct  ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};

// LitJson.ObjectMetadata
struct  ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// LitJson.PropertyMetadata
struct  PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.DictionaryEntry
struct  DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// LitJson.Condition
struct  Condition_t7F80D760BCADB7C2C46F94DF87353C319E637858 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_t7F80D760BCADB7C2C46F94DF87353C319E637858, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringWriter
struct  StringWriter_t194EF1526E072B93984370042AA80926C2EB6139  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_t6E0E60A1D7A4BECF9901B00EB286FFC2B57F6356 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureData_1)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_compareInfo_4)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureInfo_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendar_17)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dayNames_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthNames_25)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_eraNames_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dateWords_53)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// LitJson.ExporterFunc
struct  ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct  ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.JsonException
struct  JsonException_t798FD591291FF350BB74596BF9B591234440016B  : public ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mEB3B115A14852A872F878BCE017AA3357541FB79_gshared (Dictionary_2_t20319D0D4A8067323E2F41E950DEE556F0A8636C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m951A813299423FBD27D294A787403B95F7C262E0_gshared (Dictionary_2_t8CD147976B726DF5DF74AFCE7869F3140A1F7B56 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0_gshared (List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mB892D933D8982A0702F4E09E2F0D7B0C33E2A4E1_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m7B66A2F3D04DFA96EA724F6F985B477366BD6D78_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mC61EBA30FB5C38A2AA2DBCBA68BED91953C8EE57_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);

// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308 (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m2F6602C0AA7460BE984C764943D0C7556A7068BF (Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283 *, const RuntimeMethod*))Dictionary_2__ctor_mEB3B115A14852A872F878BCE017AA3357541FB79_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_m7248DAC65302215E921FE0ACF6F57AC2533A0485 (Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m8A64385D0226206258E5BAD18707C013151B384E (Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A *, const RuntimeMethod*))Dictionary_2__ctor_m951A813299423FBD27D294A787403B95F7C262E0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_m539EE8AE6ECF8524341CA82FDCF7019E33A1D393 (Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m1530231EE19BD253D2619D6EC214203F1248C099 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC (Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D (Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mABB89F6F9B7E0B146FB26330095EA6AC6A9D26D3 (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m06B3693983795AA291251312E4E3A5AE6E8B5075 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<LitJson.PropertyMetadata>::.ctor()
inline void List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0 (List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2 *, const RuntimeMethod*))List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0_gshared)(__this, method);
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0 (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4 (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_m1B72E70911CA9C0666FCACB6F939DAC01274F6CA (Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684 (JsonException_t798FD591291FF350BB74596BF9B591234440016B * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * JsonWriter_get_TextWriter_mBD62C7BEBF27334937F5EF548F5BD8283C2D9D24_inline (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m70BF39665E97BA8C18D3B6DB0D1988070B61DAED (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, double ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF49D96D54DEFF0ADAA727D58D54E566FAF8035E4 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, bool ___boolean0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m79AA57886FFFBA2EB9C4581BB29FC270DA400A86 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m3BD9ACCA9512DA3687C8369BF999BA2916F0EA15 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0 (RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m5637186DC83BDD463E99ADDB2FE9C033D4EA0500_inline (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___property_name0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m4B3DE9043323AB6C84FCD25C8610030572D67AE6_inline (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mD40DEBF43B888513BAE87214F8478021C75DC04E (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m0715B4E60E6909F03FF7302B6E20B1AB88DA84B1 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m1728F6BC726458EFD08AF9B326E6901D5C4C0FF4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mAAABAF2E9F4D1148E7255AFA40A20DA93226E984 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3CF281174B9F346B0F9B37F4875F59EC1806A50C (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF (uint8_t ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mB05CF17B1E9E543E8864561331FB08D0128442BB (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC (uint32_t ___value0, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772 (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28 (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mA334EC600A5E8F3EAC9EE6674D24F0D0E72862EC (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m05076AFECE0F9AF86250C30E2FEA1061608F5A9B (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, const RuntimeMethod*))Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717 (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016 (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D *, const RuntimeMethod*))Stack_1_Push_mB892D933D8982A0702F4E09E2F0D7B0C33E2A4E1_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1F0920BFEAB543CB2FF3425D854E9A47D9DB0049 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mCE02072A2EDF925B20A9CB52982B5009E5B68257 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Clear()
inline void Stack_1_Clear_mF9C19F0A9FE8098442198548881CD407CE0F7407 (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, const RuntimeMethod*))Stack_1_Clear_m7B66A2F3D04DFA96EA724F6F985B477366BD6D78_gshared)(__this, method);
}
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9 (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m00914ED6FF7164725BD316B99F7FDDCC60E0EF20 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mD065F1EAE4037A681AF59A3414D4030617F376DA (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, const RuntimeMethod*))Stack_1_Pop_mD632EB4DA13E5CAEC62EECFAD1C88818F1223E20_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_inline (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, const RuntimeMethod*))Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256 (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * (*) (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *, const RuntimeMethod*))Stack_1_Peek_mC61EBA30FB5C38A2AA2DBCBA68BED91953C8EE57_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE6B2B609664E7927B29ACA8DCF529D3BCD97BDA2 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m93067F78ADF4B431C233AEBE720636985D56E2C9 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E (String_t* __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_pinvoke(const ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743& unmarshaled, ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_pinvoke_back(const ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_pinvoke& marshaled, ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_pinvoke_cleanup(ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_com(const ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743& unmarshaled, ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_com_back(const ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_com& marshaled, ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshal_com_cleanup(ArrayMetadata_t1AA21D740D87DA1D4CA52D42A316D2A00457B743_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0 (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_mD40DEBF43B888513BAE87214F8478021C75DC04E (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___writer1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___obj0) - 1), ___writer1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m77F4A0C532FAAD3DEF6A69B5AE18E366CBF6F454 (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m6AB7E603684AC154E3B4E9E176641098995102D5 (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4 (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m02B20E8230208F3E0E5543B25749D8A279A4A9D2 (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___input0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_m4AEA3045A0B5512825D39ECF5E66F81CD2A48DEE (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * __this, RuntimeObject * ___input0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_mF23A21FE68B20C4C66687A3CB85502A9BE0598C2 (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684 (JsonException_t798FD591291FF350BB74596BF9B591234440016B * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_m64B1B4DD6ADADC80F89F97AB4D3006FC7C635675 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper__cctor_m64B1B4DD6ADADC80F89F97AB4D3006FC7C635675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_1, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_3, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_4, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283 * L_5 = (Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283 *)il2cpp_codegen_object_new(Dictionary_2_tAB9008AE5C8028B86200BCB92BA4DF44028C4283_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2F6602C0AA7460BE984C764943D0C7556A7068BF(L_5, /*hidden argument*/Dictionary_2__ctor_m2F6602C0AA7460BE984C764943D0C7556A7068BF_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56 * L_6 = (Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56 *)il2cpp_codegen_object_new(Dictionary_2_t2D3E302FE1F8722AB6756DE2DB697C3A50263A56_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m7248DAC65302215E921FE0ACF6F57AC2533A0485(L_6, /*hidden argument*/Dictionary_2__ctor_m7248DAC65302215E921FE0ACF6F57AC2533A0485_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A * L_7 = (Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A *)il2cpp_codegen_object_new(Dictionary_2_t118611B09DB99BD12E0471F802A373518A0BA18A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8A64385D0226206258E5BAD18707C013151B384E(L_7, /*hidden argument*/Dictionary_2__ctor_m8A64385D0226206258E5BAD18707C013151B384E_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D * L_8 = (Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D *)il2cpp_codegen_object_new(Dictionary_2_tD9A7510D42C118E3F31ACE40FDCFB088F0F86C8D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m539EE8AE6ECF8524341CA82FDCF7019E33A1D393(L_8, /*hidden argument*/Dictionary_2__ctor_m539EE8AE6ECF8524341CA82FDCF7019E33A1D393_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_9 = (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 *)il2cpp_codegen_object_new(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m1530231EE19BD253D2619D6EC214203F1248C099(L_9, /*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_10 = DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC(/*hidden argument*/NULL);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 * L_11 = (Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 *)il2cpp_codegen_object_new(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC(L_11, /*hidden argument*/Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 * L_12 = (Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2 *)il2cpp_codegen_object_new(Dictionary_2_t182D08FA7072F3F141734FAE1CC003FC303B30C2_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC(L_12, /*hidden argument*/Dictionary_2__ctor_m67667E131E35A5E89F93B23B409308680F4877EC_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D * L_13 = (Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D *)il2cpp_codegen_object_new(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D(L_13, /*hidden argument*/Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D * L_14 = (Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D *)il2cpp_codegen_object_new(Dictionary_2_t62E937B48321E2625389CFB906DC0C8CFC37336D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D(L_14, /*hidden argument*/Dictionary_2__ctor_mB066E021EF6E11F7773CC58C96AFA79029E92D0D_RuntimeMethod_var);
		((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mABB89F6F9B7E0B146FB26330095EA6AC6A9D26D3(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m06B3693983795AA291251312E4E3A5AE6E8B5075(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddTypeProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddTypeProperties_m1728F6BC726458EFD08AF9B326E6901D5C4C0FF4 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddTypeProperties_m1728F6BC726458EFD08AF9B326E6901D5C4C0FF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t * V_3 = NULL;
	PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  V_4;
	memset((&V_4), 0, sizeof(V_4));
	FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* V_5 = NULL;
	FieldInfo_t * V_6 = NULL;
	PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject * V_8 = NULL;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::ContainsKey(!0) */, IDictionary_2_tDC8D0DC4BAB2B00ADF2865768EBB4E95EBBCC918_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2 * L_3 = (List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2 *)il2cpp_codegen_object_new(List_1_t65EBF7E81608B3F88748AC2ECAB4E137186BD6B2_il2cpp_TypeInfo_var);
		List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0(L_3, /*hidden argument*/List_1__ctor_m50B26DB71D9A799E86B7161DC9A0A2A85BC8F9F0_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_3;
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_5 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0059;
	}

IL_001f:
	{
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		PropertyInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		PropertyInfo_t * L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		bool L_12 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_11, _stringLiteralECDDA59AEA5EE67D7D854C969CCF7F4F4B4A4C54, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0055;
		}
	}
	{
		il2cpp_codegen_initobj((&V_4), sizeof(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38 ));
		PropertyInfo_t * L_13 = V_3;
		(&V_4)->set_Info_0(L_13);
		(&V_4)->set_IsField_1((bool)0);
		RuntimeObject* L_14 = V_0;
		PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_15 = V_4;
		NullCheck(L_14);
		InterfaceActionInvoker1< PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_tD598C9A8F1064E85BE8C9DCF637702C78EB281EF_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0055:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0059:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))))
		{
			goto IL_001f;
		}
	}
	{
		Type_t * L_19 = ___type0;
		NullCheck(L_19);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_20 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		V_2 = 0;
		goto IL_0096;
	}

IL_006b:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_21 = V_5;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FieldInfo_t * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = L_24;
		il2cpp_codegen_initobj((&V_7), sizeof(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38 ));
		FieldInfo_t * L_25 = V_6;
		(&V_7)->set_Info_0(L_25);
		(&V_7)->set_IsField_1((bool)1);
		RuntimeObject* L_26 = V_0;
		PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_27 = V_7;
		NullCheck(L_26);
		InterfaceActionInvoker1< PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<LitJson.PropertyMetadata>::Add(!0) */, ICollection_1_tD598C9A8F1064E85BE8C9DCF637702C78EB281EF_il2cpp_TypeInfo_var, L_26, L_27);
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0096:
	{
		int32_t L_29 = V_2;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_30 = V_5;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))))
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject * L_31 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_type_properties_lock_13();
		V_8 = L_31;
		V_9 = (bool)0;
	}

IL_00a7:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_32 = V_8;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_32, (bool*)(&V_9), /*hidden argument*/NULL);
		}

IL_00b0:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			RuntimeObject* L_33 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_type_properties_12();
			Type_t * L_34 = ___type0;
			RuntimeObject* L_35 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::Add(!0,!1) */, IDictionary_2_tDC8D0DC4BAB2B00ADF2865768EBB4E95EBBCC918_il2cpp_TypeInfo_var, L_33, L_34, L_35);
			IL2CPP_LEAVE(0xCD, FINALLY_00c1);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00be;
			throw e;
		}

CATCH_00be:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0xCD, FINALLY_00c1);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			bool L_36 = V_9;
			if (!L_36)
			{
				goto IL_00cc;
			}
		}

IL_00c5:
		{
			RuntimeObject * L_37 = V_8;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_37, /*hidden argument*/NULL);
		}

IL_00cc:
		{
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCD, IL_00cd)
	}

IL_00cd:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mABB89F6F9B7E0B146FB26330095EA6AC6A9D26D3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseExporters_mABB89F6F9B7E0B146FB26330095EA6AC6A9D26D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B2_0 = NULL;
	Type_t * G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B1_0 = NULL;
	Type_t * G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B4_0 = NULL;
	Type_t * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B6_0 = NULL;
	Type_t * G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B5_0 = NULL;
	Type_t * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B8_0 = NULL;
	Type_t * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B7_0 = NULL;
	Type_t * G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B10_0 = NULL;
	Type_t * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B9_0 = NULL;
	Type_t * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B12_0 = NULL;
	Type_t * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B11_0 = NULL;
	Type_t * G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B14_0 = NULL;
	Type_t * G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B13_0 = NULL;
	Type_t * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B16_0 = NULL;
	Type_t * G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B15_0 = NULL;
	Type_t * G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B18_0 = NULL;
	Type_t * G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * G_B17_0 = NULL;
	Type_t * G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_3 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_0;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_5 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_6 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m5146CB79B673266F25C5DC02D55E47C867CB972E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_7 = L_6;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002e:
	{
		NullCheck(G_B2_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B2_2, G_B2_1, G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_11 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_2();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		G_B3_2 = L_8;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			G_B4_2 = L_8;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_13 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_14 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mF759BC578947A2F55FA7C1F9D90899317A597F76_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_15 = L_14;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_2(L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0061:
	{
		NullCheck(G_B4_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_19 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_2_3();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = L_16;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = L_16;
			goto IL_0094;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_21 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_22 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCED6B1FEC85233173B0379E0AD080E9BD0B9345C_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_23 = L_22;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_2_3(L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0094:
	{
		NullCheck(G_B6_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_27 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_3_4();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_28 = L_27;
		G_B7_0 = L_28;
		G_B7_1 = L_26;
		G_B7_2 = L_24;
		if (L_28)
		{
			G_B8_0 = L_28;
			G_B8_1 = L_26;
			G_B8_2 = L_24;
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_29 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_30 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m713166FC0847A274EFA46C4E40C2D962AF062ED8_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_31 = L_30;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_3_4(L_31);
		G_B8_0 = L_31;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00c7:
	{
		NullCheck(G_B8_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B8_2, G_B8_1, G_B8_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_35 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_4_5();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_36 = L_35;
		G_B9_0 = L_36;
		G_B9_1 = L_34;
		G_B9_2 = L_32;
		if (L_36)
		{
			G_B10_0 = L_36;
			G_B10_1 = L_34;
			G_B10_2 = L_32;
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_37 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_38 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mDC2E4B811FB8E7EA3226FD65A12F285E053BBAFF_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_39 = L_38;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_4_5(L_39);
		G_B10_0 = L_39;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00fa:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_43 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_5_6();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_44 = L_43;
		G_B11_0 = L_44;
		G_B11_1 = L_42;
		G_B11_2 = L_40;
		if (L_44)
		{
			G_B12_0 = L_44;
			G_B12_1 = L_42;
			G_B12_2 = L_40;
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_45 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_46 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_46, L_45, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mABC2C8FA56F1555FCE439778A2F618045314C801_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_47 = L_46;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_5_6(L_47);
		G_B12_0 = L_47;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_012d:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_48 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_49 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_51 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_6_7();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_52 = L_51;
		G_B13_0 = L_52;
		G_B13_1 = L_50;
		G_B13_2 = L_48;
		if (L_52)
		{
			G_B14_0 = L_52;
			G_B14_1 = L_50;
			G_B14_2 = L_48;
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_53 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_54 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_54, L_53, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m86A6EFF746D055705F6006072B4D3FE1376923B0_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_55 = L_54;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_6_7(L_55);
		G_B14_0 = L_55;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_0160:
	{
		NullCheck(G_B14_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B14_2, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_56 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_57 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_59 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_7_8();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_60 = L_59;
		G_B15_0 = L_60;
		G_B15_1 = L_58;
		G_B15_2 = L_56;
		if (L_60)
		{
			G_B16_0 = L_60;
			G_B16_1 = L_58;
			G_B16_2 = L_56;
			goto IL_0193;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_61 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_62 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_62, L_61, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mF76D14B3437A8D04446FB265116105806C72672C_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_63 = L_62;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_7_8(L_63);
		G_B16_0 = L_63;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0193:
	{
		NullCheck(G_B16_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B16_2, G_B16_1, G_B16_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_64 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_65 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_67 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__24_8_9();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_68 = L_67;
		G_B17_0 = L_68;
		G_B17_1 = L_66;
		G_B17_2 = L_64;
		if (L_68)
		{
			G_B18_0 = L_68;
			G_B18_1 = L_66;
			G_B18_2 = L_64;
			goto IL_01c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_69 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_70 = (ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *)il2cpp_codegen_object_new(ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_mE4502D9B49B38D93BB4FDDCFFE6647674C9BC9E0(L_70, L_69, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m6C19507554C2E950BCC585BE0FFFE3BFF2E78471_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_71 = L_70;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__24_8_9(L_71);
		G_B18_0 = L_71;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_01c6:
	{
		NullCheck(G_B18_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, G_B18_2, G_B18_1, G_B18_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m06B3693983795AA291251312E4E3A5AE6E8B5075 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseImporters_m06B3693983795AA291251312E4E3A5AE6E8B5075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * V_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B2_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B1_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B4_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B3_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B6_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B5_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B8_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B7_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B10_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B9_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B12_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B11_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B14_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B13_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B16_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B15_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B18_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B17_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B20_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B19_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B22_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B21_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B24_0 = NULL;
	ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * G_B23_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_0 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_0_10();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_2 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_3 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mBBAFFA79F8B7E5D7CF2254DD913F8780FB507C7A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_4 = L_3;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_0_10(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_10 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_5, L_7, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_11 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_1_11();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_13 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_14 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m1629CB3D44BABE295664610372601E3995432FDE_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_15 = L_14;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_1_11(L_15);
		G_B4_0 = L_15;
	}

IL_005e:
	{
		V_0 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_19, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_21 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_22 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_2_12();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_23 = L_22;
		G_B5_0 = L_23;
		if (L_23)
		{
			G_B6_0 = L_23;
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_24 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_25 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m0C4D0E2E81249BC375F17BD09BDAFFE8942100FA_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_26 = L_25;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_2_12(L_26);
		G_B6_0 = L_26;
	}

IL_009d:
	{
		V_0 = G_B6_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_27 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_30 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		Type_t * L_31 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_30, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_32 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_33 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_3_13();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_34 = L_33;
		G_B7_0 = L_34;
		if (L_34)
		{
			G_B8_0 = L_34;
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_35 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_36 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m8511D5E90726C24AFF43E2A1BBF1F892395DF3E4_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_37 = L_36;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_3_13(L_37);
		G_B8_0 = L_37;
	}

IL_00dc:
	{
		V_0 = G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_38 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_39 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_39, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_43 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_38, L_40, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_44 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_4_14();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_45 = L_44;
		G_B9_0 = L_45;
		if (L_45)
		{
			G_B10_0 = L_45;
			goto IL_011b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_46 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_47 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m6B96E498309C1A444C51D19C6D75003094DD6AD3_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_48 = L_47;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_4_14(L_48);
		G_B10_0 = L_48;
	}

IL_011b:
	{
		V_0 = G_B10_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_50 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_50, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_52 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		Type_t * L_53 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_52, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_54 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_49, L_51, L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_55 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_5_15();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_56 = L_55;
		G_B11_0 = L_56;
		if (L_56)
		{
			G_B12_0 = L_56;
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_57 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_58 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_58, L_57, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m605573289B5D02F55793463208F06ABBF56B5C16_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_59 = L_58;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_5_15(L_59);
		G_B12_0 = L_59;
	}

IL_015a:
	{
		V_0 = G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_60 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_61 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_61, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_63 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_64 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_63, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_65 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_60, L_62, L_64, L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_66 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_6_16();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_67 = L_66;
		G_B13_0 = L_67;
		if (L_67)
		{
			G_B14_0 = L_67;
			goto IL_0199;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_68 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_69 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_69, L_68, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m384860319972D4130A9A7DCD59A6F2200349B1B5_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_70 = L_69;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_6_16(L_70);
		G_B14_0 = L_70;
	}

IL_0199:
	{
		V_0 = G_B14_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_71 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_72 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_72, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_74 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		Type_t * L_75 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_74, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_76 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_71, L_73, L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_77 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_7_17();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_78 = L_77;
		G_B15_0 = L_78;
		if (L_78)
		{
			G_B16_0 = L_78;
			goto IL_01d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_79 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_80 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_80, L_79, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m7A2C9D5C1323108BAD338AE3D3A9AE0031181F51_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_81 = L_80;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_7_17(L_81);
		G_B16_0 = L_81;
	}

IL_01d8:
	{
		V_0 = G_B16_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_82 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_83 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_84 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_83, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_85 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		Type_t * L_86 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_85, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_87 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_82, L_84, L_86, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_88 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_8_18();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_89 = L_88;
		G_B17_0 = L_89;
		if (L_89)
		{
			G_B18_0 = L_89;
			goto IL_0217;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_90 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_91 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_91, L_90, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBC90C1ABE6A24CED2C93CFF3F46FA697B836D4A1_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_92 = L_91;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_8_18(L_92);
		G_B18_0 = L_92;
	}

IL_0217:
	{
		V_0 = G_B18_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_93 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_94 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_96 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		Type_t * L_97 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_96, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_98 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_99 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_9_19();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_100 = L_99;
		G_B19_0 = L_100;
		if (L_100)
		{
			G_B20_0 = L_100;
			goto IL_0256;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_101 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_102 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_102, L_101, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mB1BEF5897297C03EB624B9BABFB1F82967C9EA9E_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_103 = L_102;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_9_19(L_103);
		G_B20_0 = L_103;
	}

IL_0256:
	{
		V_0 = G_B20_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_104 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_105 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_107 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_108 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_107, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_109 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_110 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_10_20();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_111 = L_110;
		G_B21_0 = L_111;
		if (L_111)
		{
			G_B22_0 = L_111;
			goto IL_0295;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_112 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_113 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_113, L_112, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_mFCC72942A3DA0CD74A6E3C089DD744A15941B7B2_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_114 = L_113;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_10_20(L_114);
		G_B22_0 = L_114;
	}

IL_0295:
	{
		V_0 = G_B22_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_115 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_116 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_117 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_116, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_118 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		Type_t * L_119 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_118, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_120 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_115, L_117, L_119, L_120, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_121 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9__25_11_21();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_122 = L_121;
		G_B23_0 = L_122;
		if (L_122)
		{
			G_B24_0 = L_122;
			goto IL_02d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_123 = ((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_124 = (ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B *)il2cpp_codegen_object_new(ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m3746E4E1C9E577E7BF7B4EE4959C025EA6ED36C4(L_124, L_123, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m0FC284FA2EA0E451EC4AAECEDA316474B862573E_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_125 = L_124;
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9__25_11_21(L_125);
		G_B24_0 = L_125;
	}

IL_02d4:
	{
		V_0 = G_B24_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_126 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_127 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_128 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_127, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_129 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		Type_t * L_130 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_129, /*hidden argument*/NULL);
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_131 = V_0;
		JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478(L_126, L_128, L_130, L_131, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterImporter_m9467BC697182FF3F0DFE7B81397D8A44AFD83478_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tC16B0A05A41A0EDB42A902D6C3916A53E7F881BE_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66 * L_5 = (Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66 *)il2cpp_codegen_object_new(Dictionary_2_t07BC02354DFC9B307871E141E4B90369823C6C66_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1B72E70911CA9C0666FCACB6F939DAC01274F6CA(L_5, /*hidden argument*/Dictionary_2__ctor_m1B72E70911CA9C0666FCACB6F939DAC01274F6CA_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_tC16B0A05A41A0EDB42A902D6C3916A53E7F881BE_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0015:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tC16B0A05A41A0EDB42A902D6C3916A53E7F881BE_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_tC3D54B435B2C70626B5C94667EBA122569C8CB2B * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t402A106D3F4F34CB11C5CA96548C96AB3F143508_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonMapper::WriteValue(System.Object,LitJson.JsonWriter,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0 (RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, bool ___writer_is_private2, int32_t ___depth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Type_t * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  V_7;
	memset((&V_7), 0, sizeof(V_7));
	PropertyInfo_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = ___depth3;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		int32_t L_1 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_max_nesting_depth_0();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_2, /*hidden argument*/NULL);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF562D2B4D709BCB5B85B55894D84370AD77BC28A, L_3, /*hidden argument*/NULL);
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_5 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeObject * L_6 = ___obj0;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_7 = ___writer1;
		NullCheck(L_7);
		JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB(L_7, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_0029:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_8, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var)))
		{
			goto IL_0058;
		}
	}
	{
		bool L_9 = ___writer_is_private2;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_10 = ___writer1;
		NullCheck(L_10);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_11 = JsonWriter_get_TextWriter_mBD62C7BEBF27334937F5EF548F5BD8283C2D9D24_inline(L_10, /*hidden argument*/NULL);
		RuntimeObject * L_12 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var)));
		String_t* L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String LitJson.IJsonWrapper::ToJson() */, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_13);
		return;
	}

IL_004b:
	{
		RuntimeObject * L_14 = ___obj0;
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_15 = ___writer1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * >::Invoke(1 /* System.Void LitJson.IJsonWrapper::ToJson(LitJson.JsonWriter) */, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IJsonWrapper_t83FB172F3C38343B48B19879DC610DB02E763E90_il2cpp_TypeInfo_var)), L_15);
		return;
	}

IL_0058:
	{
		RuntimeObject * L_16 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_16, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_006d;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_17 = ___writer1;
		RuntimeObject * L_18 = ___obj0;
		NullCheck(L_17);
		JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB(L_17, ((String_t*)CastclassSealed((RuntimeObject*)L_18, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}

IL_006d:
	{
		RuntimeObject * L_19 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_19, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_20 = ___writer1;
		RuntimeObject * L_21 = ___obj0;
		NullCheck(L_20);
		JsonWriter_Write_m70BF39665E97BA8C18D3B6DB0D1988070B61DAED(L_20, ((*(double*)((double*)UnBox(L_21, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0082:
	{
		RuntimeObject * L_22 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_0097;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_23 = ___writer1;
		RuntimeObject * L_24 = ___obj0;
		NullCheck(L_23);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_23, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0097:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_00ac;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_26 = ___writer1;
		RuntimeObject * L_27 = ___obj0;
		NullCheck(L_26);
		JsonWriter_Write_mF49D96D54DEFF0ADAA727D58D54E566FAF8035E4(L_26, ((*(bool*)((bool*)UnBox(L_27, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00ac:
	{
		RuntimeObject * L_28 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_28, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_00c1;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_29 = ___writer1;
		RuntimeObject * L_30 = ___obj0;
		NullCheck(L_29);
		JsonWriter_Write_m79AA57886FFFBA2EB9C4581BB29FC270DA400A86(L_29, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_00c1:
	{
		RuntimeObject * L_31 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_31, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_010f;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_32 = ___writer1;
		NullCheck(L_32);
		JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_33 = ___obj0;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)));
		RuntimeObject* L_34 = Array_GetEnumerator_m3BD9ACCA9512DA3687C8369BF999BA2916F0EA15(((RuntimeArray *)CastclassClass((RuntimeObject*)L_33, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = L_34;
	}

IL_00db:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ed;
		}

IL_00dd:
		{
			RuntimeObject* L_35 = V_1;
			NullCheck(L_35);
			RuntimeObject * L_36 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_35);
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_37 = ___writer1;
			bool L_38 = ___writer_is_private2;
			int32_t L_39 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_36, L_37, L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_00ed:
		{
			RuntimeObject* L_40 = V_1;
			NullCheck(L_40);
			bool L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_00dd;
			}
		}

IL_00f5:
		{
			IL2CPP_LEAVE(0x108, FINALLY_00f7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f7;
	}

FINALLY_00f7:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_42, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_43 = V_2;
			if (!L_43)
			{
				goto IL_0107;
			}
		}

IL_0101:
		{
			RuntimeObject* L_44 = V_2;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_44);
		}

IL_0107:
		{
			IL2CPP_END_FINALLY(247)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(247)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x108, IL_0108)
	}

IL_0108:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_45 = ___writer1;
		NullCheck(L_45);
		JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601(L_45, /*hidden argument*/NULL);
		return;
	}

IL_010f:
	{
		RuntimeObject * L_46 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_46, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var)))
		{
			goto IL_015d;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_47 = ___writer1;
		NullCheck(L_47);
		JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56(L_47, /*hidden argument*/NULL);
		RuntimeObject * L_48 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_48, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var)));
		RuntimeObject* L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_48, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var)));
		V_1 = L_49;
	}

IL_0129:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013b;
		}

IL_012b:
		{
			RuntimeObject* L_50 = V_1;
			NullCheck(L_50);
			RuntimeObject * L_51 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_50);
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_52 = ___writer1;
			bool L_53 = ___writer_is_private2;
			int32_t L_54 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_51, L_52, L_53, ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_013b:
		{
			RuntimeObject* L_55 = V_1;
			NullCheck(L_55);
			bool L_56 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_55);
			if (L_56)
			{
				goto IL_012b;
			}
		}

IL_0143:
		{
			IL2CPP_LEAVE(0x156, FINALLY_0145);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0145;
	}

FINALLY_0145:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_57 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_57, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_58 = V_2;
			if (!L_58)
			{
				goto IL_0155;
			}
		}

IL_014f:
		{
			RuntimeObject* L_59 = V_2;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_59);
		}

IL_0155:
		{
			IL2CPP_END_FINALLY(325)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(325)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x156, IL_0156)
	}

IL_0156:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_60 = ___writer1;
		NullCheck(L_60);
		JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601(L_60, /*hidden argument*/NULL);
		return;
	}

IL_015d:
	{
		RuntimeObject * L_61 = ___obj0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_61, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)))
		{
			goto IL_01cb;
		}
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_62 = ___writer1;
		NullCheck(L_62);
		JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14(L_62, /*hidden argument*/NULL);
		RuntimeObject * L_63 = ___obj0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_63, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)));
		RuntimeObject* L_64 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_63, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)));
		V_3 = L_64;
	}

IL_0177:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a9;
		}

IL_0179:
		{
			RuntimeObject* L_65 = V_3;
			NullCheck(L_65);
			RuntimeObject * L_66 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_65);
			V_4 = ((*(DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 *)((DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 *)UnBox(L_66, DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4_il2cpp_TypeInfo_var))));
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_67 = ___writer1;
			RuntimeObject * L_68 = DictionaryEntry_get_Key_m5637186DC83BDD463E99ADDB2FE9C033D4EA0500_inline((DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 *)(&V_4), /*hidden argument*/NULL);
			NullCheck(L_67);
			JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A(L_67, ((String_t*)CastclassSealed((RuntimeObject*)L_68, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_69 = DictionaryEntry_get_Value_m4B3DE9043323AB6C84FCD25C8610030572D67AE6_inline((DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 *)(&V_4), /*hidden argument*/NULL);
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_70 = ___writer1;
			bool L_71 = ___writer_is_private2;
			int32_t L_72 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_69, L_70, L_71, ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_01a9:
		{
			RuntimeObject* L_73 = V_3;
			NullCheck(L_73);
			bool L_74 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_73);
			if (L_74)
			{
				goto IL_0179;
			}
		}

IL_01b1:
		{
			IL2CPP_LEAVE(0x1C4, FINALLY_01b3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b3;
	}

FINALLY_01b3:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_75 = V_3;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_75, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_76 = V_2;
			if (!L_76)
			{
				goto IL_01c3;
			}
		}

IL_01bd:
		{
			RuntimeObject* L_77 = V_2;
			NullCheck(L_77);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_77);
		}

IL_01c3:
		{
			IL2CPP_END_FINALLY(435)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(435)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C4, IL_01c4)
	}

IL_01c4:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_78 = ___writer1;
		NullCheck(L_78);
		JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5(L_78, /*hidden argument*/NULL);
		return;
	}

IL_01cb:
	{
		RuntimeObject * L_79 = ___obj0;
		NullCheck(L_79);
		Type_t * L_80 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_79, /*hidden argument*/NULL);
		V_0 = L_80;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_81 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_82 = V_0;
		NullCheck(L_81);
		bool L_83 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, L_81, L_82);
		if (!L_83)
		{
			goto IL_01f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_84 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_custom_exporters_table_3();
		Type_t * L_85 = V_0;
		NullCheck(L_84);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_86 = InterfaceFuncInvoker1< ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, L_84, L_85);
		RuntimeObject * L_87 = ___obj0;
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_88 = ___writer1;
		NullCheck(L_86);
		ExporterFunc_Invoke_mD40DEBF43B888513BAE87214F8478021C75DC04E(L_86, L_87, L_88, /*hidden argument*/NULL);
		return;
	}

IL_01f2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_89 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_90 = V_0;
		NullCheck(L_89);
		bool L_91 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::ContainsKey(!0) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, L_89, L_90);
		if (!L_91)
		{
			goto IL_0212;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_92 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		Type_t * L_93 = V_0;
		NullCheck(L_92);
		ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 * L_94 = InterfaceFuncInvoker1< ExporterFunc_t0A9B90DA6DD16BF22108F5942FF51067654DFB42 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::get_Item(!0) */, IDictionary_2_t37090025DCAA64AB9270956BA687734CBCED928D_il2cpp_TypeInfo_var, L_92, L_93);
		RuntimeObject * L_95 = ___obj0;
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_96 = ___writer1;
		NullCheck(L_94);
		ExporterFunc_Invoke_mD40DEBF43B888513BAE87214F8478021C75DC04E(L_94, L_95, L_96, /*hidden argument*/NULL);
		return;
	}

IL_0212:
	{
		RuntimeObject * L_97 = ___obj0;
		if (!((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)IsInstClass((RuntimeObject*)L_97, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var)))
		{
			goto IL_0275;
		}
	}
	{
		Type_t * L_98 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		Type_t * L_99 = Enum_GetUnderlyingType_m0715B4E60E6909F03FF7302B6E20B1AB88DA84B1(L_98, /*hidden argument*/NULL);
		V_5 = L_99;
		Type_t * L_100 = V_5;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_101 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_102 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_101, /*hidden argument*/NULL);
		bool L_103 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_100, L_102, /*hidden argument*/NULL);
		if (L_103)
		{
			goto IL_025b;
		}
	}
	{
		Type_t * L_104 = V_5;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_105 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_105, /*hidden argument*/NULL);
		bool L_107 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_104, L_106, /*hidden argument*/NULL);
		if (L_107)
		{
			goto IL_025b;
		}
	}
	{
		Type_t * L_108 = V_5;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_109 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_110 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_109, /*hidden argument*/NULL);
		bool L_111 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_108, L_110, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0268;
		}
	}

IL_025b:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_112 = ___writer1;
		RuntimeObject * L_113 = ___obj0;
		NullCheck(L_112);
		JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3(L_112, ((*(uint64_t*)((uint64_t*)UnBox(L_113, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0268:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_114 = ___writer1;
		RuntimeObject * L_115 = ___obj0;
		NullCheck(L_114);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_114, ((*(int32_t*)((int32_t*)UnBox(L_115, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}

IL_0275:
	{
		Type_t * L_116 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		JsonMapper_AddTypeProperties_m1728F6BC726458EFD08AF9B326E6901D5C4C0FF4(L_116, /*hidden argument*/NULL);
		RuntimeObject* L_117 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_type_properties_12();
		Type_t * L_118 = V_0;
		NullCheck(L_117);
		RuntimeObject* L_119 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::get_Item(!0) */, IDictionary_2_tDC8D0DC4BAB2B00ADF2865768EBB4E95EBBCC918_il2cpp_TypeInfo_var, L_117, L_118);
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_120 = ___writer1;
		NullCheck(L_120);
		JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14(L_120, /*hidden argument*/NULL);
		NullCheck(L_119);
		RuntimeObject* L_121 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<LitJson.PropertyMetadata>::GetEnumerator() */, IEnumerable_1_t73EC79021050AF0E7EC2FA640B91E4DC42BE3E28_il2cpp_TypeInfo_var, L_119);
		V_6 = L_121;
	}

IL_0293:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0313;
		}

IL_0295:
		{
			RuntimeObject* L_122 = V_6;
			NullCheck(L_122);
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_123 = InterfaceFuncInvoker0< PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<LitJson.PropertyMetadata>::get_Current() */, IEnumerator_1_t4AC410A5F5129A1599B005A41C73B8EB61811128_il2cpp_TypeInfo_var, L_122);
			V_7 = L_123;
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_124 = V_7;
			bool L_125 = L_124.get_IsField_1();
			if (!L_125)
			{
				goto IL_02d7;
			}
		}

IL_02a7:
		{
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_126 = ___writer1;
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_127 = V_7;
			MemberInfo_t * L_128 = L_127.get_Info_0();
			NullCheck(L_128);
			String_t* L_129 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_128);
			NullCheck(L_126);
			JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A(L_126, L_129, /*hidden argument*/NULL);
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_130 = V_7;
			MemberInfo_t * L_131 = L_130.get_Info_0();
			RuntimeObject * L_132 = ___obj0;
			NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_131, FieldInfo_t_il2cpp_TypeInfo_var)));
			RuntimeObject * L_133 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_131, FieldInfo_t_il2cpp_TypeInfo_var)), L_132);
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_134 = ___writer1;
			bool L_135 = ___writer_is_private2;
			int32_t L_136 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_133, L_134, L_135, ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1)), /*hidden argument*/NULL);
			goto IL_0313;
		}

IL_02d7:
		{
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_137 = V_7;
			MemberInfo_t * L_138 = L_137.get_Info_0();
			V_8 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_138, PropertyInfo_t_il2cpp_TypeInfo_var));
			PropertyInfo_t * L_139 = V_8;
			NullCheck(L_139);
			bool L_140 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_139);
			if (!L_140)
			{
				goto IL_0313;
			}
		}

IL_02ee:
		{
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_141 = ___writer1;
			PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38  L_142 = V_7;
			MemberInfo_t * L_143 = L_142.get_Info_0();
			NullCheck(L_143);
			String_t* L_144 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_143);
			NullCheck(L_141);
			JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A(L_141, L_144, /*hidden argument*/NULL);
			PropertyInfo_t * L_145 = V_8;
			RuntimeObject * L_146 = ___obj0;
			NullCheck(L_145);
			RuntimeObject * L_147 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_145, L_146, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
			JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_148 = ___writer1;
			bool L_149 = ___writer_is_private2;
			int32_t L_150 = ___depth3;
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
			JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_147, L_148, L_149, ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1)), /*hidden argument*/NULL);
		}

IL_0313:
		{
			RuntimeObject* L_151 = V_6;
			NullCheck(L_151);
			bool L_152 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_151);
			if (L_152)
			{
				goto IL_0295;
			}
		}

IL_031f:
		{
			IL2CPP_LEAVE(0x32D, FINALLY_0321);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0321;
	}

FINALLY_0321:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_153 = V_6;
			if (!L_153)
			{
				goto IL_032c;
			}
		}

IL_0325:
		{
			RuntimeObject* L_154 = V_6;
			NullCheck(L_154);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_154);
		}

IL_032c:
		{
			IL2CPP_END_FINALLY(801)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(801)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32D, IL_032d)
	}

IL_032d:
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_155 = ___writer1;
		NullCheck(L_155);
		JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5(L_155, /*hidden argument*/NULL);
		return;
	}
}
// System.String LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m430C7B882FED6F475271791E804F74A95CF206F2 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToJson_m430C7B882FED6F475271791E804F74A95CF206F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_static_writer_lock_15();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_2 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_2);
		JsonWriter_Reset_mAAABAF2E9F4D1148E7255AFA40A20DA93226E984(L_2, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___obj0;
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_4 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_static_writer_14();
		JsonMapper_WriteValue_mAD41D41ED7CE72B6F0D5E69821BE8C20DDDD65A0(L_3, L_4, (bool)1, 0, /*hidden argument*/NULL);
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_5 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_static_writer_14();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_2 = L_6;
		IL2CPP_LEAVE(0x3E, FINALLY_0034);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_003d;
			}
		}

IL_0037:
		{
			RuntimeObject * L_8 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_8, /*hidden argument*/NULL);
		}

IL_003d:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
	}

IL_003e:
	{
		String_t* L_9 = V_2;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonMapper_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m462AB8026F75327EB792CBC814FE348DCE4A3E8F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m462AB8026F75327EB792CBC814FE348DCE4A3E8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * L_0 = (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 *)il2cpp_codegen_object_new(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3CF281174B9F346B0F9B37F4875F59EC1806A50C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3CF281174B9F346B0F9B37F4875F59EC1806A50C (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m5146CB79B673266F25C5DC02D55E47C867CB972E (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m5146CB79B673266F25C5DC02D55E47C867CB972E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mF759BC578947A2F55FA7C1F9D90899317A597F76 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mF759BC578947A2F55FA7C1F9D90899317A597F76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCED6B1FEC85233173B0379E0AD080E9BD0B9345C (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCED6B1FEC85233173B0379E0AD080E9BD0B9345C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425(((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m713166FC0847A274EFA46C4E40C2D962AF062ED8 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m713166FC0847A274EFA46C4E40C2D962AF062ED8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mB05CF17B1E9E543E8864561331FB08D0128442BB(L_0, ((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_1, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mDC2E4B811FB8E7EA3226FD65A12F285E053BBAFF (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_mDC2E4B811FB8E7EA3226FD65A12F285E053BBAFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mABC2C8FA56F1555FCE439778A2F618045314C801 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_mABC2C8FA56F1555FCE439778A2F618045314C801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m86A6EFF746D055705F6006072B4D3FE1376923B0 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m86A6EFF746D055705F6006072B4D3FE1376923B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mF76D14B3437A8D04446FB265116105806C72672C (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_mF76D14B3437A8D04446FB265116105806C72672C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m6C19507554C2E950BCC585BE0FFFE3BFF2E78471 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___obj0, JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m6C19507554C2E950BCC585BE0FFFE3BFF2E78471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mBBAFFA79F8B7E5D7CF2254DD913F8780FB507C7A (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mBBAFFA79F8B7E5D7CF2254DD913F8780FB507C7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m1629CB3D44BABE295664610372601E3995432FDE (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m1629CB3D44BABE295664610372601E3995432FDE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m0C4D0E2E81249BC375F17BD09BDAFFE8942100FA (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m0C4D0E2E81249BC375F17BD09BDAFFE8942100FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m8511D5E90726C24AFF43E2A1BBF1F892395DF3E4 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m8511D5E90726C24AFF43E2A1BBF1F892395DF3E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m6B96E498309C1A444C51D19C6D75003094DD6AD3 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m6B96E498309C1A444C51D19C6D75003094DD6AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m605573289B5D02F55793463208F06ABBF56B5C16 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m605573289B5D02F55793463208F06ABBF56B5C16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m384860319972D4130A9A7DCD59A6F2200349B1B5 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m384860319972D4130A9A7DCD59A6F2200349B1B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m7A2C9D5C1323108BAD338AE3D3A9AE0031181F51 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m7A2C9D5C1323108BAD338AE3D3A9AE0031181F51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBC90C1ABE6A24CED2C93CFF3F46FA697B836D4A1 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_mBC90C1ABE6A24CED2C93CFF3F46FA697B836D4A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE(((*(double*)((double*)UnBox(L_0, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mB1BEF5897297C03EB624B9BABFB1F82967C9EA9E (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mB1BEF5897297C03EB624B9BABFB1F82967C9EA9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_mFCC72942A3DA0CD74A6E3C089DD744A15941B7B2 (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_mFCC72942A3DA0CD74A6E3C089DD744A15941B7B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m0FC284FA2EA0E451EC4AAECEDA316474B862573E (U3CU3Ec_tCD32F402F8FC5A781AD105B357C452641C267B70 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_m0FC284FA2EA0E451EC4AAECEDA316474B862573E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tB2D5ECA4F80002098B3A76B93F36C9C41200D43C_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IO.TextWriter LitJson.JsonWriter::get_TextWriter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * JsonWriter_get_TextWriter_mBD62C7BEBF27334937F5EF548F5BD8283C2D9D24 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = __this->get_writer_11();
		return L_0;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_mB04E15491BA15CF05B57A98259E38724C280D3C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__cctor_mB04E15491BA15CF05B57A98259E38724C280D3C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_0 = NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D(/*hidden argument*/NULL);
		((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m1530231EE19BD253D2619D6EC214203F1248C099 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m1530231EE19BD253D2619D6EC214203F1248C099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * L_2 = (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 *)il2cpp_codegen_object_new(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var);
		StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_11(L_2);
		JsonWriter_Init_mA334EC600A5E8F3EAC9EE6674D24F0D0E72862EC(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_2 = __this->get_context_1();
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0020:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_7 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_7, _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return;
	}

IL_0057:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_9 = __this->get_context_1();
		NullCheck(L_9);
		bool L_10 = L_9->get_InArray_1();
		if (L_10)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_11 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_11, _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_0072:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_12 = __this->get_context_1();
		NullCheck(L_12);
		bool L_13 = L_12->get_InObject_2();
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_ExpectingValue_3();
		if (!L_15)
		{
			goto IL_0116;
		}
	}

IL_008f:
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_16 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_16, _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_009a:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_17 = __this->get_context_1();
		NullCheck(L_17);
		bool L_18 = L_17->get_InObject_2();
		if (!L_18)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_19 = __this->get_context_1();
		NullCheck(L_19);
		bool L_20 = L_19->get_ExpectingValue_3();
		if (L_20)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_21 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_21, _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_00bf:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_22 = __this->get_context_1();
		NullCheck(L_22);
		bool L_23 = L_22->get_InObject_2();
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_ExpectingValue_3();
		if (!L_25)
		{
			goto IL_0116;
		}
	}

IL_00d9:
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_26 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_26, _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_00e4:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_27 = __this->get_context_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_InArray_1();
		if (L_28)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_29 = __this->get_context_1();
		NullCheck(L_29);
		bool L_30 = L_29->get_InObject_2();
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_31 = __this->get_context_1();
		NullCheck(L_31);
		bool L_32 = L_31->get_ExpectingValue_3();
		if (L_32)
		{
			goto IL_0116;
		}
	}

IL_010b:
	{
		JsonException_t798FD591291FF350BB74596BF9B591234440016B * L_33 = (JsonException_t798FD591291FF350BB74596BF9B591234440016B *)il2cpp_codegen_object_new(JsonException_t798FD591291FF350BB74596BF9B591234440016B_il2cpp_TypeInfo_var);
		JsonException__ctor_mF17D828F3655FA33C6611FDBB1BC1F2B73ED3684(L_33, _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0_RuntimeMethod_var);
	}

IL_0116:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_mA334EC600A5E8F3EAC9EE6674D24F0D0E72862EC (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Init_mA334EC600A5E8F3EAC9EE6674D24F0D0E72862EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		__this->set_lower_case_properties_10((bool)0);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_1 = (Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C *)il2cpp_codegen_object_new(Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C_il2cpp_TypeInfo_var);
		Stack_1__ctor_m05076AFECE0F9AF86250C30E2FEA1061608F5A9B(L_1, /*hidden argument*/Stack_1__ctor_m05076AFECE0F9AF86250C30E2FEA1061608F5A9B_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_2 = (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D *)il2cpp_codegen_object_new(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D_il2cpp_TypeInfo_var);
		WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_3 = __this->get_ctx_stack_2();
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016(L_3, L_4, /*hidden argument*/Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_mCE02072A2EDF925B20A9CB52982B5009E5B68257 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4))))));
		goto IL_0027;
	}

IL_001a:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10)))))))));
	}

IL_0027:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m93067F78ADF4B431C233AEBE720636985D56E2C9 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_3 = __this->get_writer_11();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_7 = __this->get_writer_11();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m1F0920BFEAB543CB2FF3425D854E9A47D9DB0049(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1F0920BFEAB543CB2FF3425D854E9A47D9DB0049 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_5 = __this->get_writer_11();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_9 = __this->get_writer_11();
		NullCheck(L_9);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_9, ((int32_t)10));
	}

IL_004d:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = __this->get_writer_11();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_10 = __this->get_writer_11();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8);
		goto IL_0141;
	}

IL_0072:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_11 = __this->get_writer_11();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01);
		goto IL_0141;
	}

IL_0087:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_12 = __this->get_writer_11();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7);
		goto IL_0141;
	}

IL_009c:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_13 = __this->get_writer_11();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_14 = __this->get_writer_11();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0141;
	}

IL_00c0:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385);
		goto IL_0141;
	}

IL_00d2:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_19 = __this->get_writer_11();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5);
		goto IL_0141;
	}

IL_00e4:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_26 = __this->get_writer_11();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0141;
	}

IL_010e:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_mCE02072A2EDF925B20A9CB52982B5009E5B68257(L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_34 = __this->get_writer_11();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_35 = __this->get_writer_11();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_40 = __this->get_writer_11();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE6B2B609664E7927B29ACA8DCF529D3BCD97BDA2 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_mB9A661022BD1F9D7AADAD52E294ABD5014933860 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_ToString_mB9A661022BD1F9D7AADAD52E294ABD5014933860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Reset_mAAABAF2E9F4D1148E7255AFA40A20DA93226E984 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Reset_mAAABAF2E9F4D1148E7255AFA40A20DA93226E984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Clear_mF9C19F0A9FE8098442198548881CD407CE0F7407(L_0, /*hidden argument*/Stack_1_Clear_mF9C19F0A9FE8098442198548881CD407CE0F7407_RuntimeMethod_var);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D *)il2cpp_codegen_object_new(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D_il2cpp_TypeInfo_var);
		WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717(L_1, /*hidden argument*/NULL);
		__this->set_context_1(L_1);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_2 = __this->get_ctx_stack_2();
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016(L_2, L_3, /*hidden argument*/Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016_RuntimeMethod_var);
		StringBuilder_t * L_4 = __this->get_inst_string_builder_7();
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t * L_5 = __this->get_inst_string_builder_7();
		StringBuilder_t * L_6 = __this->get_inst_string_builder_7();
		NullCheck(L_6);
		int32_t L_7 = StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9(L_5, 0, L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF49D96D54DEFF0ADAA727D58D54E566FAF8035E4 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_mF49D96D54DEFF0ADAA727D58D54E566FAF8035E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * G_B2_0 = NULL;
	JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mB05CF17B1E9E543E8864561331FB08D0128442BB (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_mB05CF17B1E9E543E8864561331FB08D0128442BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m70BF39665E97BA8C18D3B6DB0D1988070B61DAED (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m70BF39665E97BA8C18D3B6DB0D1988070B61DAED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m00914ED6FF7164725BD316B99F7FDDCC60E0EF20(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_8 = __this->get_writer_11();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralA39F7616B9BB60D3C3FD2BCDCC6E09F4CE6A8CB1);
	}

IL_0046:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_mEB4CD7F7BE71C2E9BD65B352EB7A677441B32162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m79AA57886FFFBA2EB9C4581BB29FC270DA400A86 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m79AA57886FFFBA2EB9C4581BB29FC270DA400A86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_mD065F1EAE4037A681AF59A3414D4030617F376DA(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m7FBAA91CE6C4F59B61F5A550D0CBFAE6594C98AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814(__this, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m5490205D295DD2D050E878FD0DE541D300823BE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayEnd_m81D8DB8C722D65B1D78D6E396CB793E48A342601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1F0920BFEAB543CB2FF3425D854E9A47D9DB0049(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B(L_0, /*hidden argument*/Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B_RuntimeMethod_var);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_inline(L_1, /*hidden argument*/Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_4 = Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256(L_3, /*hidden argument*/Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_mE6B2B609664E7927B29ACA8DCF529D3BCD97BDA2(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteArrayStart_mA4C1A177274522C9275A669A0398C8ED9F308B56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, _stringLiteral1E5C2F367F02E47A8C160CDA1CD9D91DECBAC441, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_0 = (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D *)il2cpp_codegen_object_new(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D_il2cpp_TypeInfo_var);
		WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_2 = __this->get_ctx_stack_2();
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016(L_2, L_3, /*hidden argument*/Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016_RuntimeMethod_var);
		JsonWriter_Indent_m93067F78ADF4B431C233AEBE720636985D56E2C9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectEnd_m6640DD08A09F714EB542B8A12F9CA790DFC469F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1F0920BFEAB543CB2FF3425D854E9A47D9DB0049(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B(L_0, /*hidden argument*/Stack_1_Pop_mE74A7B9179E90BAF679935C9019927763D21BC0B_RuntimeMethod_var);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_1 = __this->get_ctx_stack_2();
		NullCheck(L_1);
		int32_t L_2 = Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_inline(L_1, /*hidden argument*/Stack_1_get_Count_mB5E54006BA2F67BE540351EEF8FE5448930BF2FD_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_3 = __this->get_ctx_stack_2();
		NullCheck(L_3);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_4 = Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256(L_3, /*hidden argument*/Stack_1_Peek_m29F2ACEA42F32F6C9AA5BEAC101B557C9E10C256_RuntimeMethod_var);
		__this->set_context_1(L_4);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_5 = __this->get_context_1();
		NullCheck(L_5);
		L_5->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_mE6B2B609664E7927B29ACA8DCF529D3BCD97BDA2(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14 (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WriteObjectStart_m85AF9EC2C2E9D8F8E4661C8D51C79F7A25AE4E14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		JsonWriter_Put_m0C2681134B3C4CB29491AC13CE9BA107E4A8D86B(__this, _stringLiteral60BA4B2DAA4ED4D070FEC06687E249E0E6F9EE45, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_0 = (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D *)il2cpp_codegen_object_new(WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D_il2cpp_TypeInfo_var);
		WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_tE3A8B54851247C9779AE3DD4CE40C21FD6D08D8C * L_2 = __this->get_ctx_stack_2();
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016(L_2, L_3, /*hidden argument*/Stack_1_Push_mD85FDBC338A462938D8A390750DFB77299678016_RuntimeMethod_var);
		JsonWriter_Indent_m93067F78ADF4B431C233AEBE720636985D56E2C9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_WritePropertyName_m0A06501F81269DC42EFAD1BCCA003C90AB395C2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	{
		JsonWriter_DoValidation_mDCA0EB64296092FAC7F938DAFE684C62A1F51CA0(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mDC9BF7970526AA0282003ED0AE137D420DB933F8(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = __this->get_lower_case_properties_10();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		String_t* L_3 = String_ToLowerInvariant_m197BD65B6582DC546FF1BC398161EEFA708F799E(L_2, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		String_t* L_4 = ___property_name0;
		G_B4_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		String_t* L_5 = V_0;
		JsonWriter_PutString_mB2FC3F8DB99FB4553FA44906AE835F32810C5814(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_11 = __this->get_context_1();
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_Padding_4(L_13);
	}

IL_0055:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_14 = __this->get_context_1();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Padding_4();
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_16, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_17));
		goto IL_007b;
	}

IL_006a:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, ((int32_t)32));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_21 = __this->get_writer_11();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, _stringLiteralCECA32E904728D1645727CB2B9CDEAA153807D77);
		goto IL_009e;
	}

IL_0091:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_22 = __this->get_writer_11();
		NullCheck(L_22);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_22, ((int32_t)58));
	}

IL_009e:
	{
		WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * L_23 = __this->get_context_1();
		NullCheck(L_23);
		L_23->set_ExpectingValue_3((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_pinvoke(const ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D& unmarshaled, ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_pinvoke_back(const ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_pinvoke& marshaled, ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_pinvoke_cleanup(ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_com(const ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D& unmarshaled, ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_com_back(const ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_com& marshaled, ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshal_com_cleanup(ObjectMetadata_t7FED6997F602987CAD1A2108A3F513E56CEFCF5D_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_pinvoke(const PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38& unmarshaled, PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_pinvoke_back(const PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_pinvoke& marshaled, PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_pinvoke_cleanup(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_com(const PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38& unmarshaled, PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_com_back(const PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_com& marshaled, PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshal_com_cleanup(PropertyMetadata_t9680385224C8B7594289C82A7D86770344997B38_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_mEB661321E0C863F3B3DBEC8936F01EBFF69E8717 (WriterContext_t856C22C6B596EDBDD4D1A1880192D31A1C02961D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * JsonWriter_get_TextWriter_mBD62C7BEBF27334937F5EF548F5BD8283C2D9D24_inline (JsonWriter_tE5B27A6C4B2F22A23B65F072134BA57D73F65432 * __this, const RuntimeMethod* method)
{
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_0 = __this->get_writer_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m5637186DC83BDD463E99ADDB2FE9C033D4EA0500_inline (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m4B3DE9043323AB6C84FCD25C8610030572D67AE6_inline (DictionaryEntry_tB5348A26B94274FCC1DD77185BD5946E283B11A4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m8803B4178385D39338A1EDDC39FE6D8152F01A1D_gshared_inline (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
