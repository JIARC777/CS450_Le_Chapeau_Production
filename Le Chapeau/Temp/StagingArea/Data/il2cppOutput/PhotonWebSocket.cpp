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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// ExitGames.Client.Photon.EventData
struct EventData_t4BD1B2CB11F280FB36B3B114EE0BBE0487EEA375;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t16280713274BB2E78CDC45D03F3A8EAC1F040095;
// ExitGames.Client.Photon.NCommand
struct NCommand_t9FAD53AE3EE931BF2BCFDCAAD9758FDF68438857;
// ExitGames.Client.Photon.NCommandPool
struct NCommandPool_t1CA0DA32D07C30A65CE27C6D2708B3726300370B;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t8D40B91FD9D34AC4865EBD40F88A999EF39085D7;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t90B35860CCF25FE27F3598C3F0176EB1F58AAFCD;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12
struct U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_tAA00C72BE565B6F16F48A5992A2A825791B5E569;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_tBFCBC92CA9F7707D67994B726A6028264B5F4D73;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t9161B8DFF664B5FF74049CE2C362C97D79AFE2DF;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Random
struct Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// WebSocket
struct WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t239FD2FDDED03A8F3091A57EBB47E180839F25A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_t7D0FA3513A2804FE9C56E732973ADE1697F466E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03ABDBB1D2AAD35AB98B15EB780567CFE3049D55;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7A0D63AA274B8DC5DD1262CBBD62BBBA93C18;
IL2CPP_EXTERN_C String_t* _stringLiteral110BE4F4AA851DA91271D7D722097AD2AEEAD525;
IL2CPP_EXTERN_C String_t* _stringLiteral1121626CDA8822F6C270AC85EA7EC7F26F8ACDDB;
IL2CPP_EXTERN_C String_t* _stringLiteral1457B75DC8C5500C0F1D4503CF801B60DEB045A4;
IL2CPP_EXTERN_C String_t* _stringLiteral1948936FA67836750CFAD635F543D2432102F2C8;
IL2CPP_EXTERN_C String_t* _stringLiteral43E8D3616C9020CA1F920A91B916FDFC68C9FAB7;
IL2CPP_EXTERN_C String_t* _stringLiteral498118096F2D17F55E0FAC7A2793779D847AF121;
IL2CPP_EXTERN_C String_t* _stringLiteral4CE93410B4EA19AEDAC5AC09A95AF9631E8BCC73;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0F1931205BEB656BDBEE03B33372A5D2708DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7B2A3AD8BDDBE3384049CE9FB992B14DABAF7BB8;
IL2CPP_EXTERN_C String_t* _stringLiteral8BEFC06B50F7D6242FE4EEB12EC7AE67DD15D9CB;
IL2CPP_EXTERN_C String_t* _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA24EDDB576D89118750EEEF34A826C66FCFB96;
IL2CPP_EXTERN_C String_t* _stringLiteralBA2B0DD158763C472A7D7B22AEF6FF6571B9365C;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E415532AEDFF33CF1D61EE70F18E1F52637895;
IL2CPP_EXTERN_C String_t* _stringLiteralCA881053856A40960971364BD00D2EC97D0F9AE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCCFA3E06472B96F7C2C1B003D7AB4B66602E04FE;
IL2CPP_EXTERN_C String_t* _stringLiteralD28E20F790C8A4363F46ED50CE5B0A7F04B69304;
IL2CPP_EXTERN_C String_t* _stringLiteralE195846A0092CA96F9669413CD1682EE524A1508;
IL2CPP_EXTERN_C String_t* _stringLiteralE37C4CFBAB05794477AF10FD4166E8AE5B3F2247;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62_m2BDB16A91BD72D7BFD24E899E59A050F3C183BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m937706ABF1C5019A7E243A62DE5D564852D12146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp_Connect_m6C42A78E9138498FC45D5BAAFA50C6BCD5628314_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp_Disconnect_m02753D61D41DF0F28806333CFDD46E9C0B084E95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp_Dispose_mD73D71D21C4D7AF4F35D5E63034C589E44E47514_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp_ReceiveLoop_m1186161C3A6AE16E7D3671555CE847A013F44E70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp_Send_m38322896DD1584529859D53EC97EFD094C9BF48F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SocketWebTcp__ctor_m0F4F1DF0C9E1EDC0F42A531638FAAA36F40DF199_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReceiveLoopU3Ed__12_MoveNext_mD0BDF116134D6EA3C97E70685F10F839A03E221B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m937706ABF1C5019A7E243A62DE5D564852D12146_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2D35D876FED2BDD175BE36DB8283DBD59BA7B06E 
{
public:

public:
};


// System.Object


// ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12
struct  U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::<>4__this
	SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * ___U3CU3E4__this_2;
	// System.Byte[] ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::<inBuff>5__1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CinBuffU3E5__1_3;
	// System.Exception ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::<e>5__2
	Exception_t * ___U3CeU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18, ___U3CU3E4__this_2)); }
	inline SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinBuffU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18, ___U3CinBuffU3E5__1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CinBuffU3E5__1_3() const { return ___U3CinBuffU3E5__1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CinBuffU3E5__1_3() { return &___U3CinBuffU3E5__1_3; }
	inline void set_U3CinBuffU3E5__1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CinBuffU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinBuffU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18, ___U3CeU3E5__2_4)); }
	inline Exception_t * get_U3CeU3E5__2_4() const { return ___U3CeU3E5__2_4; }
	inline Exception_t ** get_address_of_U3CeU3E5__2_4() { return &___U3CeU3E5__2_4; }
	inline void set_U3CeU3E5__2_4(Exception_t * value)
	{
		___U3CeU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CeU3E5__2_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// WebSocket
struct  WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1  : public RuntimeObject
{
public:
	// System.Uri WebSocket::mUrl
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___mUrl_0;
	// System.String WebSocket::protocols
	String_t* ___protocols_1;
	// System.Int32 WebSocket::m_NativeRef
	int32_t ___m_NativeRef_2;

public:
	inline static int32_t get_offset_of_mUrl_0() { return static_cast<int32_t>(offsetof(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1, ___mUrl_0)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_mUrl_0() const { return ___mUrl_0; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_mUrl_0() { return &___mUrl_0; }
	inline void set_mUrl_0(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___mUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_protocols_1() { return static_cast<int32_t>(offsetof(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1, ___protocols_1)); }
	inline String_t* get_protocols_1() const { return ___protocols_1; }
	inline String_t** get_address_of_protocols_1() { return &___protocols_1; }
	inline void set_protocols_1(String_t* value)
	{
		___protocols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___protocols_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_NativeRef_2() { return static_cast<int32_t>(offsetof(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1, ___m_NativeRef_2)); }
	inline int32_t get_m_NativeRef_2() const { return ___m_NativeRef_2; }
	inline int32_t* get_address_of_m_NativeRef_2() { return &___m_NativeRef_2; }
	inline void set_m_NativeRef_2(int32_t value)
	{
		___m_NativeRef_2 = value;
	}
};


// ExitGames.Client.Photon.WaitForRealSeconds
struct  WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;

public:
	inline static int32_t get_offset_of__endTime_0() { return static_cast<int32_t>(offsetof(WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B, ____endTime_0)); }
	inline float get__endTime_0() const { return ____endTime_0; }
	inline float* get_address_of__endTime_0() { return &____endTime_0; }
	inline void set__endTime_0(float value)
	{
		____endTime_0 = value;
	}
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


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t8CB081E639C80F0C15D431DC73720F67553B219F 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t8CB081E639C80F0C15D431DC73720F67553B219F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.ConnectionStateValue
struct  ConnectionStateValue_tD59A7A4580A4F2E18D3E68526155879DF3D1F84D 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionStateValue::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionStateValue_tD59A7A4580A4F2E18D3E68526155879DF3D1F84D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t7DA42F6FB5B38D7DB5A26A130F0FD10524F3CAE0 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_t7DA42F6FB5B38D7DB5A26A130F0FD10524F3CAE0, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketError
struct  PhotonSocketError_tA38FB5A32921FDDC5322B3B3F35F0416A72F6FE7 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketError_tA38FB5A32921FDDC5322B3B3F35F0416A72F6FE7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonSocketState
struct  PhotonSocketState_t239FD2FDDED03A8F3091A57EBB47E180839F25A4 
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PhotonSocketState_t239FD2FDDED03A8F3091A57EBB47E180839F25A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.StatusCode
struct  StatusCode_tCFAA114CDE9F595AD6DF9260B8A0ABBFD84C40C4 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusCode_tCFAA114CDE9F595AD6DF9260B8A0ABBFD84C40C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.HideFlags
struct  HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_peerBase_0() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___peerBase_0)); }
	inline PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * get_peerBase_0() const { return ___peerBase_0; }
	inline PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 ** get_address_of_peerBase_0() { return &___peerBase_0; }
	inline void set_peerBase_0(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * value)
	{
		___peerBase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_0), (void*)value);
	}

	inline static int32_t get_offset_of_Protocol_1() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___Protocol_1)); }
	inline uint8_t get_Protocol_1() const { return ___Protocol_1; }
	inline uint8_t* get_address_of_Protocol_1() { return &___Protocol_1; }
	inline void set_Protocol_1(uint8_t value)
	{
		___Protocol_1 = value;
	}

	inline static int32_t get_offset_of_PollReceive_2() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___PollReceive_2)); }
	inline bool get_PollReceive_2() const { return ___PollReceive_2; }
	inline bool* get_address_of_PollReceive_2() { return &___PollReceive_2; }
	inline void set_PollReceive_2(bool value)
	{
		___PollReceive_2 = value;
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CStateU3Ek__BackingField_3)); }
	inline int32_t get_U3CStateU3Ek__BackingField_3() const { return ___U3CStateU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_3() { return &___U3CStateU3Ek__BackingField_3; }
	inline void set_U3CStateU3Ek__BackingField_3(int32_t value)
	{
		___U3CStateU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_ConnectAddress_4() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___ConnectAddress_4)); }
	inline String_t* get_ConnectAddress_4() const { return ___ConnectAddress_4; }
	inline String_t** get_address_of_ConnectAddress_4() { return &___ConnectAddress_4; }
	inline void set_ConnectAddress_4(String_t* value)
	{
		___ConnectAddress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAddress_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CServerPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CServerPortU3Ek__BackingField_8() const { return ___U3CServerPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CServerPortU3Ek__BackingField_8() { return &___U3CServerPortU3Ek__BackingField_8; }
	inline void set_U3CServerPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CServerPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9)); }
	inline bool get_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() const { return ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAddressResolvedAsIpv6U3Ek__BackingField_9() { return &___U3CAddressResolvedAsIpv6U3Ek__BackingField_9; }
	inline void set_U3CAddressResolvedAsIpv6U3Ek__BackingField_9(bool value)
	{
		___U3CAddressResolvedAsIpv6U3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUrlProtocolU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CUrlProtocolU3Ek__BackingField_10)); }
	inline String_t* get_U3CUrlProtocolU3Ek__BackingField_10() const { return ___U3CUrlProtocolU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUrlProtocolU3Ek__BackingField_10() { return &___U3CUrlProtocolU3Ek__BackingField_10; }
	inline void set_U3CUrlProtocolU3Ek__BackingField_10(String_t* value)
	{
		___U3CUrlProtocolU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlProtocolU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUrlPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587, ___U3CUrlPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CUrlPathU3Ek__BackingField_11() const { return ___U3CUrlPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CUrlPathU3Ek__BackingField_11() { return &___U3CUrlPathU3Ek__BackingField_11; }
	inline void set_U3CUrlPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CUrlPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUrlPathU3Ek__BackingField_11), (void*)value);
	}
};

struct IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587_StaticFields
{
public:
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CServerIpAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587_StaticFields, ___U3CServerIpAddressU3Ek__BackingField_7)); }
	inline String_t* get_U3CServerIpAddressU3Ek__BackingField_7() const { return ___U3CServerIpAddressU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CServerIpAddressU3Ek__BackingField_7() { return &___U3CServerIpAddressU3Ek__BackingField_7; }
	inline void set_U3CServerIpAddressU3Ek__BackingField_7(String_t* value)
	{
		___U3CServerIpAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerIpAddressU3Ek__BackingField_7), (void*)value);
	}
};


// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t90B35860CCF25FE27F3598C3F0176EB1F58AAFCD * ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t16280713274BB2E78CDC45D03F3A8EAC1F040095 * ___SerializationProtocol_1;
	// ExitGames.Client.Photon.NCommandPool ExitGames.Client.Photon.PeerBase::nCommandPool
	NCommandPool_t1CA0DA32D07C30A65CE27C6D2708B3726300370B * ___nCommandPool_2;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_3;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * ___PhotonSocket_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_9;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t9FAD53AE3EE931BF2BCFDCAAD9758FDF68438857 * ___CommandInCurrentDispatch_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_11;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_12;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase_MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_tBFCBC92CA9F7707D67994B726A6028264B5F4D73 * ___ActionQueue_13;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_14;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_21;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_22;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_24;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject * ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t4BD1B2CB11F280FB36B3B114EE0BBE0487EEA375 * ___reusableEventData_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_39;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * ___lagRandomizer_40;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * ___NetSimListOutgoing_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * ___NetSimListIncoming_42;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t8D40B91FD9D34AC4865EBD40F88A999EF39085D7 * ___networkSimulationSettings_43;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_44;

public:
	inline static int32_t get_offset_of_photonPeer_0() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___photonPeer_0)); }
	inline PhotonPeer_t90B35860CCF25FE27F3598C3F0176EB1F58AAFCD * get_photonPeer_0() const { return ___photonPeer_0; }
	inline PhotonPeer_t90B35860CCF25FE27F3598C3F0176EB1F58AAFCD ** get_address_of_photonPeer_0() { return &___photonPeer_0; }
	inline void set_photonPeer_0(PhotonPeer_t90B35860CCF25FE27F3598C3F0176EB1F58AAFCD * value)
	{
		___photonPeer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPeer_0), (void*)value);
	}

	inline static int32_t get_offset_of_SerializationProtocol_1() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___SerializationProtocol_1)); }
	inline IProtocol_t16280713274BB2E78CDC45D03F3A8EAC1F040095 * get_SerializationProtocol_1() const { return ___SerializationProtocol_1; }
	inline IProtocol_t16280713274BB2E78CDC45D03F3A8EAC1F040095 ** get_address_of_SerializationProtocol_1() { return &___SerializationProtocol_1; }
	inline void set_SerializationProtocol_1(IProtocol_t16280713274BB2E78CDC45D03F3A8EAC1F040095 * value)
	{
		___SerializationProtocol_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializationProtocol_1), (void*)value);
	}

	inline static int32_t get_offset_of_nCommandPool_2() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___nCommandPool_2)); }
	inline NCommandPool_t1CA0DA32D07C30A65CE27C6D2708B3726300370B * get_nCommandPool_2() const { return ___nCommandPool_2; }
	inline NCommandPool_t1CA0DA32D07C30A65CE27C6D2708B3726300370B ** get_address_of_nCommandPool_2() { return &___nCommandPool_2; }
	inline void set_nCommandPool_2(NCommandPool_t1CA0DA32D07C30A65CE27C6D2708B3726300370B * value)
	{
		___nCommandPool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nCommandPool_2), (void*)value);
	}

	inline static int32_t get_offset_of_usedTransportProtocol_3() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___usedTransportProtocol_3)); }
	inline uint8_t get_usedTransportProtocol_3() const { return ___usedTransportProtocol_3; }
	inline uint8_t* get_address_of_usedTransportProtocol_3() { return &___usedTransportProtocol_3; }
	inline void set_usedTransportProtocol_3(uint8_t value)
	{
		___usedTransportProtocol_3 = value;
	}

	inline static int32_t get_offset_of_PhotonSocket_4() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___PhotonSocket_4)); }
	inline IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * get_PhotonSocket_4() const { return ___PhotonSocket_4; }
	inline IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 ** get_address_of_PhotonSocket_4() { return &___PhotonSocket_4; }
	inline void set_PhotonSocket_4(IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * value)
	{
		___PhotonSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhotonSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerAddressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___U3CServerAddressU3Ek__BackingField_5)); }
	inline String_t* get_U3CServerAddressU3Ek__BackingField_5() const { return ___U3CServerAddressU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CServerAddressU3Ek__BackingField_5() { return &___U3CServerAddressU3Ek__BackingField_5; }
	inline void set_U3CServerAddressU3Ek__BackingField_5(String_t* value)
	{
		___U3CServerAddressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServerAddressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProxyServerAddressU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___U3CProxyServerAddressU3Ek__BackingField_6)); }
	inline String_t* get_U3CProxyServerAddressU3Ek__BackingField_6() const { return ___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CProxyServerAddressU3Ek__BackingField_6() { return &___U3CProxyServerAddressU3Ek__BackingField_6; }
	inline void set_U3CProxyServerAddressU3Ek__BackingField_6(String_t* value)
	{
		___U3CProxyServerAddressU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProxyServerAddressU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_peerConnectionState_7() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___peerConnectionState_7)); }
	inline uint8_t get_peerConnectionState_7() const { return ___peerConnectionState_7; }
	inline uint8_t* get_address_of_peerConnectionState_7() { return &___peerConnectionState_7; }
	inline void set_peerConnectionState_7(uint8_t value)
	{
		___peerConnectionState_7 = value;
	}

	inline static int32_t get_offset_of_ByteCountLastOperation_8() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___ByteCountLastOperation_8)); }
	inline int32_t get_ByteCountLastOperation_8() const { return ___ByteCountLastOperation_8; }
	inline int32_t* get_address_of_ByteCountLastOperation_8() { return &___ByteCountLastOperation_8; }
	inline void set_ByteCountLastOperation_8(int32_t value)
	{
		___ByteCountLastOperation_8 = value;
	}

	inline static int32_t get_offset_of_ByteCountCurrentDispatch_9() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___ByteCountCurrentDispatch_9)); }
	inline int32_t get_ByteCountCurrentDispatch_9() const { return ___ByteCountCurrentDispatch_9; }
	inline int32_t* get_address_of_ByteCountCurrentDispatch_9() { return &___ByteCountCurrentDispatch_9; }
	inline void set_ByteCountCurrentDispatch_9(int32_t value)
	{
		___ByteCountCurrentDispatch_9 = value;
	}

	inline static int32_t get_offset_of_CommandInCurrentDispatch_10() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___CommandInCurrentDispatch_10)); }
	inline NCommand_t9FAD53AE3EE931BF2BCFDCAAD9758FDF68438857 * get_CommandInCurrentDispatch_10() const { return ___CommandInCurrentDispatch_10; }
	inline NCommand_t9FAD53AE3EE931BF2BCFDCAAD9758FDF68438857 ** get_address_of_CommandInCurrentDispatch_10() { return &___CommandInCurrentDispatch_10; }
	inline void set_CommandInCurrentDispatch_10(NCommand_t9FAD53AE3EE931BF2BCFDCAAD9758FDF68438857 * value)
	{
		___CommandInCurrentDispatch_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CommandInCurrentDispatch_10), (void*)value);
	}

	inline static int32_t get_offset_of_packetLossByCrc_11() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___packetLossByCrc_11)); }
	inline int32_t get_packetLossByCrc_11() const { return ___packetLossByCrc_11; }
	inline int32_t* get_address_of_packetLossByCrc_11() { return &___packetLossByCrc_11; }
	inline void set_packetLossByCrc_11(int32_t value)
	{
		___packetLossByCrc_11 = value;
	}

	inline static int32_t get_offset_of_packetLossByChallenge_12() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___packetLossByChallenge_12)); }
	inline int32_t get_packetLossByChallenge_12() const { return ___packetLossByChallenge_12; }
	inline int32_t* get_address_of_packetLossByChallenge_12() { return &___packetLossByChallenge_12; }
	inline void set_packetLossByChallenge_12(int32_t value)
	{
		___packetLossByChallenge_12 = value;
	}

	inline static int32_t get_offset_of_ActionQueue_13() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___ActionQueue_13)); }
	inline Queue_1_tBFCBC92CA9F7707D67994B726A6028264B5F4D73 * get_ActionQueue_13() const { return ___ActionQueue_13; }
	inline Queue_1_tBFCBC92CA9F7707D67994B726A6028264B5F4D73 ** get_address_of_ActionQueue_13() { return &___ActionQueue_13; }
	inline void set_ActionQueue_13(Queue_1_tBFCBC92CA9F7707D67994B726A6028264B5F4D73 * value)
	{
		___ActionQueue_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionQueue_13), (void*)value);
	}

	inline static int32_t get_offset_of_peerID_14() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___peerID_14)); }
	inline int16_t get_peerID_14() const { return ___peerID_14; }
	inline int16_t* get_address_of_peerID_14() { return &___peerID_14; }
	inline void set_peerID_14(int16_t value)
	{
		___peerID_14 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffset_15() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___serverTimeOffset_15)); }
	inline int32_t get_serverTimeOffset_15() const { return ___serverTimeOffset_15; }
	inline int32_t* get_address_of_serverTimeOffset_15() { return &___serverTimeOffset_15; }
	inline void set_serverTimeOffset_15(int32_t value)
	{
		___serverTimeOffset_15 = value;
	}

	inline static int32_t get_offset_of_serverTimeOffsetIsAvailable_16() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___serverTimeOffsetIsAvailable_16)); }
	inline bool get_serverTimeOffsetIsAvailable_16() const { return ___serverTimeOffsetIsAvailable_16; }
	inline bool* get_address_of_serverTimeOffsetIsAvailable_16() { return &___serverTimeOffsetIsAvailable_16; }
	inline void set_serverTimeOffsetIsAvailable_16(bool value)
	{
		___serverTimeOffsetIsAvailable_16 = value;
	}

	inline static int32_t get_offset_of_roundTripTime_17() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___roundTripTime_17)); }
	inline int32_t get_roundTripTime_17() const { return ___roundTripTime_17; }
	inline int32_t* get_address_of_roundTripTime_17() { return &___roundTripTime_17; }
	inline void set_roundTripTime_17(int32_t value)
	{
		___roundTripTime_17 = value;
	}

	inline static int32_t get_offset_of_roundTripTimeVariance_18() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___roundTripTimeVariance_18)); }
	inline int32_t get_roundTripTimeVariance_18() const { return ___roundTripTimeVariance_18; }
	inline int32_t* get_address_of_roundTripTimeVariance_18() { return &___roundTripTimeVariance_18; }
	inline void set_roundTripTimeVariance_18(int32_t value)
	{
		___roundTripTimeVariance_18 = value;
	}

	inline static int32_t get_offset_of_lastRoundTripTime_19() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___lastRoundTripTime_19)); }
	inline int32_t get_lastRoundTripTime_19() const { return ___lastRoundTripTime_19; }
	inline int32_t* get_address_of_lastRoundTripTime_19() { return &___lastRoundTripTime_19; }
	inline void set_lastRoundTripTime_19(int32_t value)
	{
		___lastRoundTripTime_19 = value;
	}

	inline static int32_t get_offset_of_lowestRoundTripTime_20() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___lowestRoundTripTime_20)); }
	inline int32_t get_lowestRoundTripTime_20() const { return ___lowestRoundTripTime_20; }
	inline int32_t* get_address_of_lowestRoundTripTime_20() { return &___lowestRoundTripTime_20; }
	inline void set_lowestRoundTripTime_20(int32_t value)
	{
		___lowestRoundTripTime_20 = value;
	}

	inline static int32_t get_offset_of_highestRoundTripTimeVariance_21() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___highestRoundTripTimeVariance_21)); }
	inline int32_t get_highestRoundTripTimeVariance_21() const { return ___highestRoundTripTimeVariance_21; }
	inline int32_t* get_address_of_highestRoundTripTimeVariance_21() { return &___highestRoundTripTimeVariance_21; }
	inline void set_highestRoundTripTimeVariance_21(int32_t value)
	{
		___highestRoundTripTimeVariance_21 = value;
	}

	inline static int32_t get_offset_of_timestampOfLastReceive_22() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timestampOfLastReceive_22)); }
	inline int32_t get_timestampOfLastReceive_22() const { return ___timestampOfLastReceive_22; }
	inline int32_t* get_address_of_timestampOfLastReceive_22() { return &___timestampOfLastReceive_22; }
	inline void set_timestampOfLastReceive_22(int32_t value)
	{
		___timestampOfLastReceive_22 = value;
	}

	inline static int32_t get_offset_of_bytesOut_24() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___bytesOut_24)); }
	inline int64_t get_bytesOut_24() const { return ___bytesOut_24; }
	inline int64_t* get_address_of_bytesOut_24() { return &___bytesOut_24; }
	inline void set_bytesOut_24(int64_t value)
	{
		___bytesOut_24 = value;
	}

	inline static int32_t get_offset_of_bytesIn_25() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___bytesIn_25)); }
	inline int64_t get_bytesIn_25() const { return ___bytesIn_25; }
	inline int64_t* get_address_of_bytesIn_25() { return &___bytesIn_25; }
	inline void set_bytesIn_25(int64_t value)
	{
		___bytesIn_25 = value;
	}

	inline static int32_t get_offset_of_CustomInitData_26() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___CustomInitData_26)); }
	inline RuntimeObject * get_CustomInitData_26() const { return ___CustomInitData_26; }
	inline RuntimeObject ** get_address_of_CustomInitData_26() { return &___CustomInitData_26; }
	inline void set_CustomInitData_26(RuntimeObject * value)
	{
		___CustomInitData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomInitData_26), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_27() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___AppId_27)); }
	inline String_t* get_AppId_27() const { return ___AppId_27; }
	inline String_t** get_address_of_AppId_27() { return &___AppId_27; }
	inline void set_AppId_27(String_t* value)
	{
		___AppId_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_27), (void*)value);
	}

	inline static int32_t get_offset_of_reusableEventData_28() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___reusableEventData_28)); }
	inline EventData_t4BD1B2CB11F280FB36B3B114EE0BBE0487EEA375 * get_reusableEventData_28() const { return ___reusableEventData_28; }
	inline EventData_t4BD1B2CB11F280FB36B3B114EE0BBE0487EEA375 ** get_address_of_reusableEventData_28() { return &___reusableEventData_28; }
	inline void set_reusableEventData_28(EventData_t4BD1B2CB11F280FB36B3B114EE0BBE0487EEA375 * value)
	{
		___reusableEventData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableEventData_28), (void*)value);
	}

	inline static int32_t get_offset_of_timeBase_29() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timeBase_29)); }
	inline int32_t get_timeBase_29() const { return ___timeBase_29; }
	inline int32_t* get_address_of_timeBase_29() { return &___timeBase_29; }
	inline void set_timeBase_29(int32_t value)
	{
		___timeBase_29 = value;
	}

	inline static int32_t get_offset_of_timeoutInt_30() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timeoutInt_30)); }
	inline int32_t get_timeoutInt_30() const { return ___timeoutInt_30; }
	inline int32_t* get_address_of_timeoutInt_30() { return &___timeoutInt_30; }
	inline void set_timeoutInt_30(int32_t value)
	{
		___timeoutInt_30 = value;
	}

	inline static int32_t get_offset_of_timeLastAckReceive_31() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timeLastAckReceive_31)); }
	inline int32_t get_timeLastAckReceive_31() const { return ___timeLastAckReceive_31; }
	inline int32_t* get_address_of_timeLastAckReceive_31() { return &___timeLastAckReceive_31; }
	inline void set_timeLastAckReceive_31(int32_t value)
	{
		___timeLastAckReceive_31 = value;
	}

	inline static int32_t get_offset_of_longestSentCall_32() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___longestSentCall_32)); }
	inline int32_t get_longestSentCall_32() const { return ___longestSentCall_32; }
	inline int32_t* get_address_of_longestSentCall_32() { return &___longestSentCall_32; }
	inline void set_longestSentCall_32(int32_t value)
	{
		___longestSentCall_32 = value;
	}

	inline static int32_t get_offset_of_timeLastSendAck_33() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timeLastSendAck_33)); }
	inline int32_t get_timeLastSendAck_33() const { return ___timeLastSendAck_33; }
	inline int32_t* get_address_of_timeLastSendAck_33() { return &___timeLastSendAck_33; }
	inline void set_timeLastSendAck_33(int32_t value)
	{
		___timeLastSendAck_33 = value;
	}

	inline static int32_t get_offset_of_timeLastSendOutgoing_34() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___timeLastSendOutgoing_34)); }
	inline int32_t get_timeLastSendOutgoing_34() const { return ___timeLastSendOutgoing_34; }
	inline int32_t* get_address_of_timeLastSendOutgoing_34() { return &___timeLastSendOutgoing_34; }
	inline void set_timeLastSendOutgoing_34(int32_t value)
	{
		___timeLastSendOutgoing_34 = value;
	}

	inline static int32_t get_offset_of_ApplicationIsInitialized_35() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___ApplicationIsInitialized_35)); }
	inline bool get_ApplicationIsInitialized_35() const { return ___ApplicationIsInitialized_35; }
	inline bool* get_address_of_ApplicationIsInitialized_35() { return &___ApplicationIsInitialized_35; }
	inline void set_ApplicationIsInitialized_35(bool value)
	{
		___ApplicationIsInitialized_35 = value;
	}

	inline static int32_t get_offset_of_isEncryptionAvailable_36() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___isEncryptionAvailable_36)); }
	inline bool get_isEncryptionAvailable_36() const { return ___isEncryptionAvailable_36; }
	inline bool* get_address_of_isEncryptionAvailable_36() { return &___isEncryptionAvailable_36; }
	inline void set_isEncryptionAvailable_36(bool value)
	{
		___isEncryptionAvailable_36 = value;
	}

	inline static int32_t get_offset_of_outgoingCommandsInStream_37() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___outgoingCommandsInStream_37)); }
	inline int32_t get_outgoingCommandsInStream_37() const { return ___outgoingCommandsInStream_37; }
	inline int32_t* get_address_of_outgoingCommandsInStream_37() { return &___outgoingCommandsInStream_37; }
	inline void set_outgoingCommandsInStream_37(int32_t value)
	{
		___outgoingCommandsInStream_37 = value;
	}

	inline static int32_t get_offset_of_CryptoProvider_39() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___CryptoProvider_39)); }
	inline RuntimeObject* get_CryptoProvider_39() const { return ___CryptoProvider_39; }
	inline RuntimeObject** get_address_of_CryptoProvider_39() { return &___CryptoProvider_39; }
	inline void set_CryptoProvider_39(RuntimeObject* value)
	{
		___CryptoProvider_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CryptoProvider_39), (void*)value);
	}

	inline static int32_t get_offset_of_lagRandomizer_40() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___lagRandomizer_40)); }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * get_lagRandomizer_40() const { return ___lagRandomizer_40; }
	inline Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F ** get_address_of_lagRandomizer_40() { return &___lagRandomizer_40; }
	inline void set_lagRandomizer_40(Random_t18A28484F67EFA289C256F508A5C71D9E6DEE09F * value)
	{
		___lagRandomizer_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lagRandomizer_40), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListOutgoing_41() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___NetSimListOutgoing_41)); }
	inline LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * get_NetSimListOutgoing_41() const { return ___NetSimListOutgoing_41; }
	inline LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 ** get_address_of_NetSimListOutgoing_41() { return &___NetSimListOutgoing_41; }
	inline void set_NetSimListOutgoing_41(LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * value)
	{
		___NetSimListOutgoing_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListOutgoing_41), (void*)value);
	}

	inline static int32_t get_offset_of_NetSimListIncoming_42() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___NetSimListIncoming_42)); }
	inline LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * get_NetSimListIncoming_42() const { return ___NetSimListIncoming_42; }
	inline LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 ** get_address_of_NetSimListIncoming_42() { return &___NetSimListIncoming_42; }
	inline void set_NetSimListIncoming_42(LinkedList_1_t2012FA1715E42F21E1C255C3C7F1960455F6C653 * value)
	{
		___NetSimListIncoming_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NetSimListIncoming_42), (void*)value);
	}

	inline static int32_t get_offset_of_networkSimulationSettings_43() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___networkSimulationSettings_43)); }
	inline NetworkSimulationSet_t8D40B91FD9D34AC4865EBD40F88A999EF39085D7 * get_networkSimulationSettings_43() const { return ___networkSimulationSettings_43; }
	inline NetworkSimulationSet_t8D40B91FD9D34AC4865EBD40F88A999EF39085D7 ** get_address_of_networkSimulationSettings_43() { return &___networkSimulationSettings_43; }
	inline void set_networkSimulationSettings_43(NetworkSimulationSet_t8D40B91FD9D34AC4865EBD40F88A999EF39085D7 * value)
	{
		___networkSimulationSettings_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkSimulationSettings_43), (void*)value);
	}

	inline static int32_t get_offset_of_TrafficPackageHeaderSize_44() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884, ___TrafficPackageHeaderSize_44)); }
	inline int32_t get_TrafficPackageHeaderSize_44() const { return ___TrafficPackageHeaderSize_44; }
	inline int32_t* get_address_of_TrafficPackageHeaderSize_44() { return &___TrafficPackageHeaderSize_44; }
	inline void set_TrafficPackageHeaderSize_44(int32_t value)
	{
		___TrafficPackageHeaderSize_44 = value;
	}
};

struct PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884_StaticFields
{
public:
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_23;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t9161B8DFF664B5FF74049CE2C362C97D79AFE2DF * ___MessageBufferPool_38;

public:
	inline static int32_t get_offset_of_peerCount_23() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884_StaticFields, ___peerCount_23)); }
	inline int16_t get_peerCount_23() const { return ___peerCount_23; }
	inline int16_t* get_address_of_peerCount_23() { return &___peerCount_23; }
	inline void set_peerCount_23(int16_t value)
	{
		___peerCount_23 = value;
	}

	inline static int32_t get_offset_of_MessageBufferPool_38() { return static_cast<int32_t>(offsetof(PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884_StaticFields, ___MessageBufferPool_38)); }
	inline Queue_1_t9161B8DFF664B5FF74049CE2C362C97D79AFE2DF * get_MessageBufferPool_38() const { return ___MessageBufferPool_38; }
	inline Queue_1_t9161B8DFF664B5FF74049CE2C362C97D79AFE2DF ** get_address_of_MessageBufferPool_38() { return &___MessageBufferPool_38; }
	inline void set_MessageBufferPool_38(Queue_1_t9161B8DFF664B5FF74049CE2C362C97D79AFE2DF * value)
	{
		___MessageBufferPool_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageBufferPool_38), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_15)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_18)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp
struct  SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05  : public IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587
{
public:
	// WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject * ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___websocketConnectionObject_14;

public:
	inline static int32_t get_offset_of_sock_12() { return static_cast<int32_t>(offsetof(SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05, ___sock_12)); }
	inline WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * get_sock_12() const { return ___sock_12; }
	inline WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 ** get_address_of_sock_12() { return &___sock_12; }
	inline void set_sock_12(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * value)
	{
		___sock_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sock_12), (void*)value);
	}

	inline static int32_t get_offset_of_syncer_13() { return static_cast<int32_t>(offsetof(SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05, ___syncer_13)); }
	inline RuntimeObject * get_syncer_13() const { return ___syncer_13; }
	inline RuntimeObject ** get_address_of_syncer_13() { return &___syncer_13; }
	inline void set_syncer_13(RuntimeObject * value)
	{
		___syncer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncer_13), (void*)value);
	}

	inline static int32_t get_offset_of_websocketConnectionObject_14() { return static_cast<int32_t>(offsetof(SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05, ___websocketConnectionObject_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_websocketConnectionObject_14() const { return ___websocketConnectionObject_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_websocketConnectionObject_14() { return &___websocketConnectionObject_14; }
	inline void set_websocketConnectionObject_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___websocketConnectionObject_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___websocketConnectionObject_14), (void*)value);
	}
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


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ExitGames.Client.Photon.SocketWebTcp_MonoBehaviourExt
struct  MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_mA0C8A34D0778116D5C56115CA48E8B358DE8D2FA (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * ___peerBase0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m624A582F149AC965BC9FC10C174060A0D2D61FB0_inline (PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m910219EE93B8B1D338F86AB111DC5B0DF22D1B96_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6 (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6 (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m1C81E20F99151E858869D09376F1AE424B9C0E5D (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method);
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m6B90FA1A407C8656164EF39654DC599A59D89A39 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_m10CCC336C219196818A745EAD556E48343B03D6D (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt>()
inline MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62 * GameObject_AddComponent_TisMonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62_m2BDB16A91BD72D7BFD24E899E59A050F3C183BE1 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m80EDFEAC4927F588A7A702F81524EDBFA8603FE2_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.IPhotonSocket::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_SerializationProtocol_m3A7A47D1F23FC2F33D6DB9CFA51C9A97CD6DCBD8 (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method);
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___url0, String_t* ___serialization1, const RuntimeMethod* method);
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m718C25341A77457BEF505EBB148B7D8F136BD750 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m1186161C3A6AE16E7D3671555CE847A013F44E70 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ByteArrayToString_m0AEC0C182463201F5E1C78D9C9908E16B33782E1 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___list0, const RuntimeMethod* method);
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mACD0C71153FD5E84CD2027379B702F64CC59A70A (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m5232021581951F91F5167F6012090EEE88E610F9 (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, int32_t ___statusCode0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_mD84B898C6C4D7FF90EBEDDD300DA387BD196C21F (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m5D74E80850385FFB772B318E99AC587BD306106C (WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B * __this, float ___seconds0, const RuntimeMethod* method);
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.IPhotonSocket::get_ServerPort()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m85638BB2174A42FB9AB49E39E1F6D611E5F22028_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_m54B1ADEC42A1B461E5DC1F9BF30EE03186E842B3 (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m8904F854B2067C30E91AEFFB00EB0E5CD482A438 (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m9EBA5464DB624650083C7D0F1DD3164E2D333484 (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mF5D7669F0A55DC6F5FD72A84C25D665D8B33AA55 (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m2E87311952C480797C579A66CFF38B955599BC70 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method);
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mD92515A97D30554F43355DDA18C08BA09D272CB2 (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m0F9859F79B80FA190FB9DB0AE55B283C643C13DB (int32_t ___socketInstance0, const RuntimeMethod* method);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m90E2FF27FC4F47C5B081EA2193AE92451770940A (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method);
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
// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp__ctor_m0F4F1DF0C9E1EDC0F42A531638FAAA36F40DF199 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * ___npeer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp__ctor_m0F4F1DF0C9E1EDC0F42A531638FAAA36F40DF199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// private readonly object syncer = new object();
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_syncer_13(L_0);
		// public SocketWebTcp(PeerBase npeer) : base(npeer)
		PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * L_1 = ___npeer0;
		IPhotonSocket__ctor_mA0C8A34D0778116D5C56115CA48E8B358DE8D2FA(__this, L_1, /*hidden argument*/NULL);
		// this.ServerAddress = npeer.ServerAddress;
		PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * L_2 = ___npeer0;
		String_t* L_3 = PeerBase_get_ServerAddress_m624A582F149AC965BC9FC10C174060A0D2D61FB0_inline(L_2, /*hidden argument*/NULL);
		IPhotonSocket_set_ServerAddress_m910219EE93B8B1D338F86AB111DC5B0DF22D1B96_inline(__this, L_3, /*hidden argument*/NULL);
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_4 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(__this, 3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "new SocketWebTcp() for Unity. Server: " + this.ServerAddress);
		RuntimeObject* L_6 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(__this, /*hidden argument*/NULL);
		String_t* L_7 = IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline(__this, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCA881053856A40960971364BD00D2EC97D0F9AE0, L_7, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_6, 3, L_8);
	}

IL_004b:
	{
		// this.PollReceive = false;
		((IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 *)__this)->set_PollReceive_2((bool)0);
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp_Dispose_mD73D71D21C4D7AF4F35D5E63034C589E44E47514 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp_Dispose_mD73D71D21C4D7AF4F35D5E63034C589E44E47514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(__this, 3, /*hidden argument*/NULL);
		// if (this.sock != null)
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_0 = __this->get_sock_12();
		V_0 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_2 = __this->get_sock_12();
			bool L_3 = WebSocket_get_Connected_m1C81E20F99151E858869D09376F1AE424B9C0E5D(L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			// if (this.sock.Connected) this.sock.Close();
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_5 = __this->get_sock_12();
			WebSocket_Close_m6B90FA1A407C8656164EF39654DC599A59D89A39(L_5, /*hidden argument*/NULL);
		}

IL_0033:
		{
			goto IL_004e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t *)__exception_local);
		// this.EnqueueDebugReturn(DebugLevel.INFO, "Exception in Dispose(): " + ex);
		Exception_t * L_6 = V_2;
		String_t* L_7 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral5C0F1931205BEB656BDBEE03B33372A5D2708DA5, L_6, /*hidden argument*/NULL);
		IPhotonSocket_EnqueueDebugReturn_m10CCC336C219196818A745EAD556E48343B03D6D(__this, 3, L_7, /*hidden argument*/NULL);
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
	}

IL_004f:
	{
		// this.sock = null;
		__this->set_sock_12((WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)NULL);
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Connect_m6C42A78E9138498FC45D5BAAFA50C6BCD5628314 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp_Connect_m6C42A78E9138498FC45D5BAAFA50C6BCD5628314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// this.State = PhotonSocketState.Connecting;
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(__this, 1, /*hidden argument*/NULL);
		// if (this.websocketConnectionObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_websocketConnectionObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_websocketConnectionObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// this.websocketConnectionObject = new GameObject("websocketConnectionObject");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_4, _stringLiteral498118096F2D17F55E0FAC7A2793779D847AF121, /*hidden argument*/NULL);
		__this->set_websocketConnectionObject_14(L_4);
		// MonoBehaviour mb = this.websocketConnectionObject.AddComponent<MonoBehaviourExt>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_websocketConnectionObject_14();
		MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62 * L_6 = GameObject_AddComponent_TisMonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62_m2BDB16A91BD72D7BFD24E899E59A050F3C183BE1(L_5, /*hidden argument*/GameObject_AddComponent_TisMonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62_m2BDB16A91BD72D7BFD24E899E59A050F3C183BE1_RuntimeMethod_var);
		V_0 = L_6;
		// this.websocketConnectionObject.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_websocketConnectionObject_14();
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_7, 1, /*hidden argument*/NULL);
		// UnityEngine.Object.DontDestroyOnLoad(this.websocketConnectionObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_websocketConnectionObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_8, /*hidden argument*/NULL);
		// this.sock = new WebSocket(new Uri(this.ConnectAddress), this.SerializationProtocol);
		String_t* L_9 = ((IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 *)__this)->get_ConnectAddress_4();
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_10 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mBA69907A1D799CD12ED44B611985B25FE4C626A2(L_10, L_9, /*hidden argument*/NULL);
		String_t* L_11 = IPhotonSocket_get_SerializationProtocol_m3A7A47D1F23FC2F33D6DB9CFA51C9A97CD6DCBD8(__this, /*hidden argument*/NULL);
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_12 = (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)il2cpp_codegen_object_new(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1_il2cpp_TypeInfo_var);
		WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20(L_12, L_10, L_11, /*hidden argument*/NULL);
		__this->set_sock_12(L_12);
		// this.sock.Connect();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_13 = __this->get_sock_12();
		WebSocket_Connect_m718C25341A77457BEF505EBB148B7D8F136BD750(L_13, /*hidden argument*/NULL);
		// mb.StartCoroutine(this.ReceiveLoop());
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_14 = V_0;
		RuntimeObject* L_15 = SocketWebTcp_ReceiveLoop_m1186161C3A6AE16E7D3671555CE847A013F44E70(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_14, L_15, /*hidden argument*/NULL);
		// return true;
		V_2 = (bool)1;
		goto IL_0095;
	}

IL_0095:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Disconnect_m02753D61D41DF0F28806333CFDD46E9C0B084E95 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp_Disconnect_m02753D61D41DF0F28806333CFDD46E9C0B084E95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_0 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "SocketWebTcp.Disconnect()");
		RuntimeObject* L_2 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(__this, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_2, 3, _stringLiteralE37C4CFBAB05794477AF10FD4166E8AE5B3F2247);
	}

IL_0020:
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(__this, 3, /*hidden argument*/NULL);
		// lock (this.syncer)
		RuntimeObject * L_3 = __this->get_syncer_13();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_0031:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_4 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (this.sock != null)
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_5 = __this->get_sock_12();
			V_3 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0080;
			}
		}

IL_0048:
		{
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			// this.sock.Close();
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_7 = __this->get_sock_12();
			WebSocket_Close_m6B90FA1A407C8656164EF39654DC599A59D89A39(L_7, /*hidden argument*/NULL);
			goto IL_0078;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0059;
			throw e;
		}

CATCH_0059:
		{ // begin catch(System.Exception)
			// catch (Exception ex)
			V_4 = ((Exception_t *)__exception_local);
			// this.Listener.DebugReturn(DebugLevel.ERROR, "Exception in Disconnect(): " + ex);
			RuntimeObject* L_8 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(__this, /*hidden argument*/NULL);
			Exception_t * L_9 = V_4;
			String_t* L_10 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralC5E415532AEDFF33CF1D61EE70F18E1F52637895, L_9, /*hidden argument*/NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_8, 1, L_10);
			goto IL_0078;
		} // end catch (depth: 2)

IL_0078:
		{
			// this.sock = null;
			__this->set_sock_12((WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)NULL);
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		{
			bool L_11 = V_2;
			if (!L_11)
			{
				goto IL_008d;
			}
		}

IL_0086:
		{
			RuntimeObject * L_12 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_12, /*hidden argument*/NULL);
		}

IL_008d:
		{
			IL2CPP_END_FINALLY(131)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		// if (this.websocketConnectionObject != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_websocketConnectionObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_13, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00ae;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_websocketConnectionObject_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_16, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(__this, 0, /*hidden argument*/NULL);
		// return true;
		V_6 = (bool)1;
		goto IL_00bb;
	}

IL_00bb:
	{
		// }
		bool L_17 = V_6;
		return L_17;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Send_m38322896DD1584529859D53EC97EFD094C9BF48F (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp_Send_m38322896DD1584529859D53EC97EFD094C9BF48F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (this.State != PhotonSocketState.Connected)
		int32_t L_0 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return PhotonSocketError.Skipped;
		V_1 = 1;
		goto IL_00c9;
	}

IL_0019:
	{
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			// if (data.Length > length)
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___data0;
			int32_t L_3 = ___length1;
			V_2 = (bool)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) > ((int32_t)L_3))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c;
			}
		}

IL_0025:
		{
			// byte[] trimmedData = new byte[length];
			int32_t L_5 = ___length1;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_5);
			V_3 = L_6;
			// Buffer.BlockCopy(data, 0, trimmedData, 0, length);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = ___data0;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_3;
			int32_t L_9 = ___length1;
			Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_7, 0, (RuntimeArray *)(RuntimeArray *)L_8, 0, L_9, /*hidden argument*/NULL);
			// data = trimmedData;
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_3;
			___data0 = L_10;
		}

IL_003c:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ALL))
			bool L_11 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(__this, 5, /*hidden argument*/NULL);
			V_4 = L_11;
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_0068;
			}
		}

IL_0049:
		{
			// this.Listener.DebugReturn(DebugLevel.ALL, "Sending: " + SupportClassPun.ByteArrayToString(data));
			RuntimeObject* L_13 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(__this, /*hidden argument*/NULL);
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = ___data0;
			IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t7D0FA3513A2804FE9C56E732973ADE1697F466E7_il2cpp_TypeInfo_var);
			String_t* L_15 = SupportClass_ByteArrayToString_m0AEC0C182463201F5E1C78D9C9908E16B33782E1(L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1121626CDA8822F6C270AC85EA7EC7F26F8ACDDB, L_15, /*hidden argument*/NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_13, 5, L_16);
		}

IL_0068:
		{
			// if (this.sock != null)
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_17 = __this->get_sock_12();
			V_5 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_17) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_18 = V_5;
			if (!L_18)
			{
				goto IL_0086;
			}
		}

IL_0077:
		{
			// this.sock.Send(data);
			WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_19 = __this->get_sock_12();
			ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = ___data0;
			WebSocket_Send_mACD0C71153FD5E84CD2027379B702F64CC59A70A(L_19, L_20, /*hidden argument*/NULL);
		}

IL_0086:
		{
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0089;
		throw e;
	}

CATCH_0089:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t *)__exception_local);
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Cannot send to: " + this.ServerAddress + ". " + e.Message);
		RuntimeObject* L_21 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(__this, /*hidden argument*/NULL);
		String_t* L_22 = IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline(__this, /*hidden argument*/NULL);
		Exception_t * L_23 = V_6;
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		String_t* L_25 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralCCFA3E06472B96F7C2C1B003D7AB4B66602E04FE, L_22, _stringLiteral94C67DA09E3C3949480AC8458C225636B0DD8B77, L_24, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_21, 1, L_25);
		// this.HandleException(StatusCode.Exception);
		IPhotonSocket_HandleException_m5232021581951F91F5167F6012090EEE88E610F9(__this, ((int32_t)1026), /*hidden argument*/NULL);
		// return PhotonSocketError.Exception;
		V_1 = 3;
		goto IL_00c9;
	} // end catch (depth: 1)

IL_00c5:
	{
		// return PhotonSocketError.Success;
		V_1 = 0;
		goto IL_00c9;
	}

IL_00c9:
	{
		// }
		int32_t L_26 = V_1;
		return L_26;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Receive_m1D94A61941F63E15B7F4C173976EC87A18ACE2DB (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// data = null;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** L_0 = ___data0;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// return PhotonSocketError.NoData;
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m1186161C3A6AE16E7D3671555CE847A013F44E70 (SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SocketWebTcp_ReceiveLoop_m1186161C3A6AE16E7D3671555CE847A013F44E70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * L_0 = (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 *)il2cpp_codegen_object_new(U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18_il2cpp_TypeInfo_var);
		U3CReceiveLoopU3Ed__12__ctor_mD84B898C6C4D7FF90EBEDDD300DA387BD196C21F(L_0, 0, /*hidden argument*/NULL);
		U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
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
// System.Void ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12__ctor_mD84B898C6C4D7FF90EBEDDD300DA387BD196C21F (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_IDisposable_Dispose_m45EE99B4D723F3A3047D9CEF7CC5034DC1688E26 (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__12_MoveNext_mD0BDF116134D6EA3C97E70685F10F839A03E221B (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReceiveLoopU3Ed__12_MoveNext_mD0BDF116134D6EA3C97E70685F10F839A03E221B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Exception_t * V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B14_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B38_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0060;
	}

IL_001f:
	{
		goto IL_02b9;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (this.sock != null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_2 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_3 = L_2->get_sock_12();
		V_1 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0436;
		}
	}
	{
		goto IL_0068;
	}

IL_0046:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B * L_5 = (WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B *)il2cpp_codegen_object_new(WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m5D74E80850385FFB772B318E99AC587BD306106C(L_5, (0.1f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0060:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0068:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_6 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_7 = L_6->get_sock_12();
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_8 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_9 = L_8->get_sock_12();
		bool L_10 = WebSocket_get_Connected_m1C81E20F99151E858869D09376F1AE424B9C0E5D(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_11 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_12 = L_11->get_sock_12();
		String_t* L_13 = WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492(L_12, /*hidden argument*/NULL);
		G_B14_0 = ((((RuntimeObject*)(String_t*)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B14_0 = 0;
	}

IL_009d:
	{
		V_2 = (bool)G_B14_0;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.sock != null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_15 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_16 = L_15->get_sock_12();
		V_3 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_16) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0435;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_18 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_19 = L_18->get_sock_12();
		String_t* L_20 = WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492(L_19, /*hidden argument*/NULL);
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0154;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_22 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_23 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(L_22, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_24;
		ArrayElementTypeCheck (L_25, _stringLiteral8BEFC06B50F7D6242FE4EEB12EC7AE67DD15D9CB);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral8BEFC06B50F7D6242FE4EEB12EC7AE67DD15D9CB);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_27 = __this->get_U3CU3E4__this_2();
		String_t* L_28 = IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline(L_27, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_26;
		ArrayElementTypeCheck (L_29, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = L_29;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_31 = __this->get_U3CU3E4__this_2();
		int32_t L_32 = IPhotonSocket_get_ServerPort_m85638BB2174A42FB9AB49E39E1F6D611E5F22028_inline(L_31, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_33);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_30;
		ArrayElementTypeCheck (L_35, _stringLiteral4CE93410B4EA19AEDAC5AC09A95AF9631E8BCC73);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral4CE93410B4EA19AEDAC5AC09A95AF9631E8BCC73);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_35;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_37 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_38 = L_37->get_sock_12();
		String_t* L_39 = WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492(L_38, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_39);
		String_t* L_40 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_36, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_23, 1, L_40);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_41 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_HandleException_m5232021581951F91F5167F6012090EEE88E610F9(L_41, ((int32_t)1023), /*hidden argument*/NULL);
		goto IL_0434;
	}

IL_0154:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_42 = __this->get_U3CU3E4__this_2();
		bool L_43 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(L_42, 5, /*hidden argument*/NULL);
		V_5 = L_43;
		bool L_44 = V_5;
		if (!L_44)
		{
			goto IL_0195;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_45 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_46 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(L_45, /*hidden argument*/NULL);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_47 = __this->get_U3CU3E4__this_2();
		int32_t L_48 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(L_47, /*hidden argument*/NULL);
		int32_t L_49 = L_48;
		RuntimeObject * L_50 = Box(PhotonSocketState_t239FD2FDDED03A8F3091A57EBB47E180839F25A4_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralE195846A0092CA96F9669413CD1682EE524A1508, L_50, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_46, 5, L_51);
	}

IL_0195:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_52 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline(L_52, 2, /*hidden argument*/NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_53 = __this->get_U3CU3E4__this_2();
		PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * L_54 = ((IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 *)L_53)->get_peerBase_0();
		VirtActionInvoker0::Invoke(11 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_54);
		goto IL_041c;
	}

IL_01b8:
	{
		// if (this.sock != null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_55 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_56 = L_55->get_sock_12();
		V_6 = (bool)((!(((RuntimeObject*)(WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 *)L_56) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_57 = V_6;
		if (!L_57)
		{
			goto IL_041b;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_58 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_59 = L_58->get_sock_12();
		String_t* L_60 = WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492(L_59, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(String_t*)L_60) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_61 = V_7;
		if (!L_61)
		{
			goto IL_026d;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + ":" + this.ServerPort + " Error: " + this.sock.Error);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_62 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_63 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(L_62, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_64 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = L_64;
		ArrayElementTypeCheck (L_65, _stringLiteralD28E20F790C8A4363F46ED50CE5B0A7F04B69304);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD28E20F790C8A4363F46ED50CE5B0A7F04B69304);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = L_65;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_67 = __this->get_U3CU3E4__this_2();
		String_t* L_68 = IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline(L_67, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_66, L_68);
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_68);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = L_66;
		ArrayElementTypeCheck (L_69, _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = L_69;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_71 = __this->get_U3CU3E4__this_2();
		int32_t L_72 = IPhotonSocket_get_ServerPort_m85638BB2174A42FB9AB49E39E1F6D611E5F22028_inline(L_71, /*hidden argument*/NULL);
		int32_t L_73 = L_72;
		RuntimeObject * L_74 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_73);
		ArrayElementTypeCheck (L_70, L_74);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_74);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_75 = L_70;
		ArrayElementTypeCheck (L_75, _stringLiteral4CE93410B4EA19AEDAC5AC09A95AF9631E8BCC73);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral4CE93410B4EA19AEDAC5AC09A95AF9631E8BCC73);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_76 = L_75;
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_77 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_78 = L_77->get_sock_12();
		String_t* L_79 = WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492(L_78, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_76, L_79);
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_79);
		String_t* L_80 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_76, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_63, 1, L_80);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_81 = __this->get_U3CU3E4__this_2();
		IPhotonSocket_HandleException_m5232021581951F91F5167F6012090EEE88E610F9(L_81, ((int32_t)1039), /*hidden argument*/NULL);
		// break;
		goto IL_0433;
	}

IL_026d:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_82 = __this->get_U3CU3E4__this_2();
		WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * L_83 = L_82->get_sock_12();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_84 = WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006(L_83, /*hidden argument*/NULL);
		__this->set_U3CinBuffU3E5__1_3(L_84);
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_85 = __this->get_U3CinBuffU3E5__1_3();
		if (!L_85)
		{
			goto IL_0298;
		}
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_86 = __this->get_U3CinBuffU3E5__1_3();
		G_B27_0 = ((((int32_t)(((RuntimeArray*)L_86)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0299;
	}

IL_0298:
	{
		G_B27_0 = 1;
	}

IL_0299:
	{
		V_8 = (bool)G_B27_0;
		bool L_87 = V_8;
		if (!L_87)
		{
			goto IL_02c5;
		}
	}
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B * L_88 = (WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B *)il2cpp_codegen_object_new(WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_m5D74E80850385FFB772B318E99AC587BD306106C(L_88, (0.02f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_88);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_02b9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// continue;
		goto IL_041c;
	}

IL_02c5:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_89 = __this->get_U3CU3E4__this_2();
		bool L_90 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(L_89, 5, /*hidden argument*/NULL);
		V_9 = L_90;
		bool L_91 = V_9;
		if (!L_91)
		{
			goto IL_0324;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "TCP << " + inBuff.Length + " = " + SupportClassPun.ByteArrayToString(inBuff));
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_92 = __this->get_U3CU3E4__this_2();
		RuntimeObject* L_93 = IPhotonSocket_get_Listener_mD1EA4CB7E8EE267CAE4B155459F005EF7FC5F1A6(L_92, /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_94 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_95 = L_94;
		ArrayElementTypeCheck (L_95, _stringLiteral43E8D3616C9020CA1F920A91B916FDFC68C9FAB7);
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral43E8D3616C9020CA1F920A91B916FDFC68C9FAB7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = L_95;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_97 = __this->get_U3CinBuffU3E5__1_3();
		int32_t L_98 = (((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length))));
		RuntimeObject * L_99 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_98);
		ArrayElementTypeCheck (L_96, L_99);
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_99);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_100 = L_96;
		ArrayElementTypeCheck (L_100, _stringLiteral110BE4F4AA851DA91271D7D722097AD2AEEAD525);
		(L_100)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral110BE4F4AA851DA91271D7D722097AD2AEEAD525);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_101 = L_100;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_102 = __this->get_U3CinBuffU3E5__1_3();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t7D0FA3513A2804FE9C56E732973ADE1697F466E7_il2cpp_TypeInfo_var);
		String_t* L_103 = SupportClass_ByteArrayToString_m0AEC0C182463201F5E1C78D9C9908E16B33782E1(L_102, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_101, L_103);
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_103);
		String_t* L_104 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_101, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t5C75CAE77B55813CF71287B751C138F38B86382D_il2cpp_TypeInfo_var, L_93, 5, L_104);
	}

IL_0324:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_105 = __this->get_U3CinBuffU3E5__1_3();
		V_10 = (bool)((!(((uint32_t)(((RuntimeArray*)L_105)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_106 = V_10;
		if (!L_106)
		{
			goto IL_0412;
		}
	}
	{
	}

IL_0338:
	try
	{ // begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_107 = __this->get_U3CU3E4__this_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_108 = __this->get_U3CinBuffU3E5__1_3();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_109 = __this->get_U3CinBuffU3E5__1_3();
		IPhotonSocket_HandleReceivedDatagram_m54B1ADEC42A1B461E5DC1F9BF30EE03186E842B3(L_107, L_108, (((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length)))), (bool)0, /*hidden argument*/NULL);
		goto IL_0411;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_035a;
		throw e;
	}

CATCH_035a:
	{ // begin catch(System.Exception)
		{
			// catch (Exception e)
			V_11 = ((Exception_t *)__exception_local);
			Exception_t * L_110 = V_11;
			__this->set_U3CeU3E5__2_4(L_110);
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_111 = __this->get_U3CU3E4__this_2();
			int32_t L_112 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(L_111, /*hidden argument*/NULL);
			if ((((int32_t)L_112) == ((int32_t)3)))
			{
				goto IL_0383;
			}
		}

IL_0373:
		{
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_113 = __this->get_U3CU3E4__this_2();
			int32_t L_114 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(L_113, /*hidden argument*/NULL);
			G_B38_0 = ((!(((uint32_t)L_114) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0384;
		}

IL_0383:
		{
			G_B38_0 = 0;
		}

IL_0384:
		{
			V_12 = (bool)G_B38_0;
			bool L_115 = V_12;
			if (!L_115)
			{
				goto IL_040e;
			}
		}

IL_038d:
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_116 = __this->get_U3CU3E4__this_2();
			bool L_117 = IPhotonSocket_ReportDebugOfLevel_m9DBA900028D0A9AD070023AD6AC88CBF5B6CC7A6(L_116, 1, /*hidden argument*/NULL);
			V_13 = L_117;
			bool L_118 = V_13;
			if (!L_118)
			{
				goto IL_03fc;
			}
		}

IL_03a0:
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_119 = __this->get_U3CU3E4__this_2();
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_120 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_121 = L_120;
			ArrayElementTypeCheck (L_121, _stringLiteral7B2A3AD8BDDBE3384049CE9FB992B14DABAF7BB8);
			(L_121)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral7B2A3AD8BDDBE3384049CE9FB992B14DABAF7BB8);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_122 = L_121;
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_123 = __this->get_U3CU3E4__this_2();
			int32_t L_124 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(L_123, /*hidden argument*/NULL);
			int32_t L_125 = L_124;
			RuntimeObject * L_126 = Box(PhotonSocketState_t239FD2FDDED03A8F3091A57EBB47E180839F25A4_il2cpp_TypeInfo_var, &L_125);
			ArrayElementTypeCheck (L_122, L_126);
			(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_126);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_127 = L_122;
			ArrayElementTypeCheck (L_127, _stringLiteral0EA7A0D63AA274B8DC5DD1262CBBD62BBBA93C18);
			(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral0EA7A0D63AA274B8DC5DD1262CBBD62BBBA93C18);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_128 = L_127;
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_129 = __this->get_U3CU3E4__this_2();
			String_t* L_130 = IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline(L_129, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_128, L_130);
			(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_130);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_131 = L_128;
			ArrayElementTypeCheck (L_131, _stringLiteral1948936FA67836750CFAD635F543D2432102F2C8);
			(L_131)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1948936FA67836750CFAD635F543D2432102F2C8);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_132 = L_131;
			Exception_t * L_133 = __this->get_U3CeU3E5__2_4();
			ArrayElementTypeCheck (L_132, L_133);
			(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_133);
			String_t* L_134 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_132, /*hidden argument*/NULL);
			IPhotonSocket_EnqueueDebugReturn_m10CCC336C219196818A745EAD556E48343B03D6D(L_119, 1, L_134, /*hidden argument*/NULL);
		}

IL_03fc:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_135 = __this->get_U3CU3E4__this_2();
			IPhotonSocket_HandleException_m5232021581951F91F5167F6012090EEE88E610F9(L_135, ((int32_t)1039), /*hidden argument*/NULL);
		}

IL_040e:
		{
			goto IL_0411;
		}
	} // end catch (depth: 1)

IL_0411:
	{
	}

IL_0412:
	{
		__this->set_U3CinBuffU3E5__1_3((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
	}

IL_041b:
	{
	}

IL_041c:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_136 = __this->get_U3CU3E4__this_2();
		int32_t L_137 = IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline(L_136, /*hidden argument*/NULL);
		V_14 = (bool)((((int32_t)L_137) == ((int32_t)2))? 1 : 0);
		bool L_138 = V_14;
		if (L_138)
		{
			goto IL_01b8;
		}
	}

IL_0433:
	{
	}

IL_0434:
	{
	}

IL_0435:
	{
	}

IL_0436:
	{
		// this.Disconnect();
		SocketWebTcp_t0E15655CB224F0EEFE304B5733B4FBDD80714B05 * L_139 = __this->get_U3CU3E4__this_2();
		VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_139);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5709C874CA651AE846C6A851817D6E9F2BFBED9C (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m937706ABF1C5019A7E243A62DE5D564852D12146 (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m937706ABF1C5019A7E243A62DE5D564852D12146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_Reset_m937706ABF1C5019A7E243A62DE5D564852D12146_RuntimeMethod_var);
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp_<ReceiveLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReceiveLoopU3Ed__12_System_Collections_IEnumerator_get_Current_m2E2E317CF955E4D93E94617EC7F4886C82668E73 (U3CReceiveLoopU3Ed__12_t77B5096D7436C92E32F8D1AC35E66C06A261CF18 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void ExitGames.Client.Photon.SocketWebTcp_MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_m3424CBBA1BD2C0D3AB229C237661AC92ACD7FA62 (MonoBehaviourExt_t0B1A35C69ACC1530B6A574415DBEBBE483D42F62 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean ExitGames.Client.Photon.WaitForRealSeconds::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRealSeconds_get_keepWaiting_m16B8FDB6CF7600B101B2307507C9F1EB2864B781 (WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		float L_0 = __this->get__endTime_0();
		float L_1 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_m5D74E80850385FFB772B318E99AC587BD306106C (WaitForRealSeconds_t3E54B03AA8DED1346FB3696E24A1FC6C04288B1B * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		// public WaitForRealSeconds(float seconds)
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5(__this, /*hidden argument*/NULL);
		// this._endTime = Time.realtimeSinceStartup + seconds;
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_1 = ___seconds0;
		__this->set__endTime_0(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
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
// System.Void WebSocket::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___url0, String_t* ___serialization1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// private string protocols = "GpBinaryV16";
		__this->set_protocols_1(_stringLiteralAEA24EDDB576D89118750EEEF34A826C66FCFB96);
		// int m_NativeRef = 0;
		__this->set_m_NativeRef_2(0);
		// public WebSocket(Uri url, string serialization = null)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.mUrl = url;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___url0;
		__this->set_mUrl_0(L_0);
		// if (serialization != null)
		String_t* L_1 = ___serialization1;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// this.protocols = serialization;
		String_t* L_3 = ___serialization1;
		__this->set_protocols_1(L_3);
	}

IL_0032:
	{
		// string protocol = mUrl.Scheme;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = __this->get_mUrl_0();
		String_t* L_5 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_6 = V_0;
		bool L_7 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_6, _stringLiteral1457B75DC8C5500C0F1D4503CF801B60DEB045A4, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_8, _stringLiteralBA2B0DD158763C472A7D7B22AEF6FF6571B9365C, /*hidden argument*/NULL);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B5_0 = 0;
	}

IL_005c:
	{
		V_2 = (bool)G_B5_0;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_11 = V_0;
		String_t* L_12 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral03ABDBB1D2AAD35AB98B15EB780567CFE3049D55, L_11, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_13 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, WebSocket__ctor_mB9AD0AE90FBA24AD356BD335684A3A9B52606B20_RuntimeMethod_var);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_mE96F6A6EEA92613D8955B99DA6155116E2C9833F (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	{
		// Send(Encoding.UTF8.GetBytes (str));
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_0 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mACD0C71153FD5E84CD2027379B702F64CC59A70A(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m02E9D4BCED1B11F467612476ADDF41E299CC9849 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		V_2 = (String_t*)NULL;
		goto IL_0022;
	}

IL_0014:
	{
		// return Encoding.UTF8.GetString (retval);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_3 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_0;
		String_t* L_5 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		V_2 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
// System.Int32 WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_m2E87311952C480797C579A66CFF38B955599BC70 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter '___protocols1' to native representation
	char* ____protocols1_marshaled = NULL;
	____protocols1_marshaled = il2cpp_codegen_marshal_string(___protocols1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled, ____protocols1_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter '___protocols1' native representation
	il2cpp_codegen_marshal_free(____protocols1_marshaled);
	____protocols1_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
// System.Int32 WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m0F9859F79B80FA190FB9DB0AE55B283C643C13DB (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
// System.Void WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_m8904F854B2067C30E91AEFFB00EB0E5CD482A438 (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
// System.Void WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_mF5D7669F0A55DC6F5FD72A84C25D665D8B33AA55 (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
// System.Int32 WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_m9EBA5464DB624650083C7D0F1DD3164E2D333484 (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
// System.Void WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mD92515A97D30554F43355DDA18C08BA09D272CB2 (int32_t ___socketInstance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
// System.Int32 WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m90E2FF27FC4F47C5B081EA2193AE92451770940A (int32_t ___socketInstance0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ptr1, int32_t ___length2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mACD0C71153FD5E84CD2027379B702F64CC59A70A (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		WebSocket_SocketSend_m8904F854B2067C30E91AEFFB00EB0E5CD482A438(L_0, L_1, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte[] WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_Recv_m68C3B57C63B3FAA28FE958E05207619957C37006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_3 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1 = WebSocket_SocketRecvLength_m9EBA5464DB624650083C7D0F1DD3164E2D333484(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_3 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		goto IL_0032;
	}

IL_0019:
	{
		// byte[] buffer = new byte[length];
		int32_t L_4 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_6 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		int32_t L_8 = V_0;
		WebSocket_SocketRecv_mF5D7669F0A55DC6F5FD72A84C25D665D8B33AA55(L_6, L_7, L_8, /*hidden argument*/NULL);
		// return buffer;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = V_1;
		V_3 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_3;
		return L_10;
	}
}
// System.Void WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m718C25341A77457BEF505EBB148B7D8F136BD750 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = __this->get_mUrl_0();
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->get_protocols_1();
		int32_t L_3 = WebSocket_SocketCreate_m2E87311952C480797C579A66CFF38B955599BC70(L_1, L_2, /*hidden argument*/NULL);
		__this->set_m_NativeRef_2(L_3);
		// }
		return;
	}
}
// System.Void WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_m6B90FA1A407C8656164EF39654DC599A59D89A39 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->get_m_NativeRef_2();
		WebSocket_SocketClose_mD92515A97D30554F43355DDA18C08BA09D272CB2(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_m1C81E20F99151E858869D09376F1AE424B9C0E5D (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->get_m_NativeRef_2();
		int32_t L_1 = WebSocket_SocketState_m0F9859F79B80FA190FB9DB0AE55B283C643C13DB(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// get { return SocketState(m_NativeRef) != 0; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492 (WebSocket_t9488887110689CBAFF2BDB3FDC4A80B67EDA72C1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebSocket_get_Error_m8AFCBCFB183165725FDDE649138FE476FACAA492_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->get_m_NativeRef_2();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = V_0;
		int32_t L_3 = WebSocket_SocketError_m90E2FF27FC4F47C5B081EA2193AE92451770940A(L_1, L_2, ((int32_t)1024), /*hidden argument*/NULL);
		V_1 = L_3;
		// if (result == 0)
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_0038;
	}

IL_002a:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_6 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		String_t* L_8 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		V_3 = L_8;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		String_t* L_9 = V_3;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_m624A582F149AC965BC9FC10C174060A0D2D61FB0_inline (PeerBase_t0BA5615C035C8038B9DD9E1EBC7AF075C5A0A884 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m910219EE93B8B1D338F86AB111DC5B0DF22D1B96_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CServerAddressU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_m75985516BDFAD41E605C263DADC941C7C2C8C747_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CServerAddressU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m0E96C71A7FF033BFCDEF7AF86690C9E2ECEEAE11_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_m2BB88F3C42E8D60573B3A0B8BBDA60112E8C589E_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_ServerPort_m85638BB2174A42FB9AB49E39E1F6D611E5F22028_inline (IPhotonSocket_t5BA9F3C8946D00B51353CB1C0AC6B60BC2ECF587 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CServerPortU3Ek__BackingField_8();
		return L_0;
	}
}
