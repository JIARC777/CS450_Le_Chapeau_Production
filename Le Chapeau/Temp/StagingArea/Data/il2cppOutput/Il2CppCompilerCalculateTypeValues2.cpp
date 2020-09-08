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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Photon.Pun.PhotonView
struct PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// PlayerUIContainer[]
struct PlayerUIContainerU5BU5D_tF549C1C91527B25E18F601D75B13E9C893A60D83;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GameManager_<>c__DisplayClass18_0
struct  U3CU3Ec__DisplayClass18_0_t43E9975021FEC2660E37BCB42DC083E15387E60F  : public RuntimeObject
{
public:
	// System.Int32 GameManager_<>c__DisplayClass18_0::playerId
	int32_t ___playerId_0;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t43E9975021FEC2660E37BCB42DC083E15387E60F, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}
};


// GameManager_<>c__DisplayClass19_0
struct  U3CU3Ec__DisplayClass19_0_tA2EA056706881E59940A02D79F22E0F992FAAFEE  : public RuntimeObject
{
public:
	// UnityEngine.GameObject GameManager_<>c__DisplayClass19_0::playerObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___playerObject_0;

public:
	inline static int32_t get_offset_of_playerObject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tA2EA056706881E59940A02D79F22E0F992FAAFEE, ___playerObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_playerObject_0() const { return ___playerObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_playerObject_0() { return &___playerObject_0; }
	inline void set_playerObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___playerObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerObject_0), (void*)value);
	}
};


// PlayerUIContainer
struct  PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9  : public RuntimeObject
{
public:
	// UnityEngine.GameObject PlayerUIContainer::obj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj_0;
	// TMPro.TextMeshProUGUI PlayerUIContainer::nameText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___nameText_1;
	// UnityEngine.UI.Slider PlayerUIContainer::hatTimeSlider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___hatTimeSlider_2;

public:
	inline static int32_t get_offset_of_obj_0() { return static_cast<int32_t>(offsetof(PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9, ___obj_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_obj_0() const { return ___obj_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_obj_0() { return &___obj_0; }
	inline void set_obj_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_0), (void*)value);
	}

	inline static int32_t get_offset_of_nameText_1() { return static_cast<int32_t>(offsetof(PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9, ___nameText_1)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_nameText_1() const { return ___nameText_1; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_nameText_1() { return &___nameText_1; }
	inline void set_nameText_1(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___nameText_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_1), (void*)value);
	}

	inline static int32_t get_offset_of_hatTimeSlider_2() { return static_cast<int32_t>(offsetof(PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9, ___hatTimeSlider_2)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_hatTimeSlider_2() const { return ___hatTimeSlider_2; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_hatTimeSlider_2() { return &___hatTimeSlider_2; }
	inline void set_hatTimeSlider_2(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___hatTimeSlider_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hatTimeSlider_2), (void*)value);
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// GameUI
struct  GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// PlayerUIContainer[] GameUI::playerContainers
	PlayerUIContainerU5BU5D_tF549C1C91527B25E18F601D75B13E9C893A60D83* ___playerContainers_4;
	// TMPro.TextMeshProUGUI GameUI::winText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___winText_5;

public:
	inline static int32_t get_offset_of_playerContainers_4() { return static_cast<int32_t>(offsetof(GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0, ___playerContainers_4)); }
	inline PlayerUIContainerU5BU5D_tF549C1C91527B25E18F601D75B13E9C893A60D83* get_playerContainers_4() const { return ___playerContainers_4; }
	inline PlayerUIContainerU5BU5D_tF549C1C91527B25E18F601D75B13E9C893A60D83** get_address_of_playerContainers_4() { return &___playerContainers_4; }
	inline void set_playerContainers_4(PlayerUIContainerU5BU5D_tF549C1C91527B25E18F601D75B13E9C893A60D83* value)
	{
		___playerContainers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerContainers_4), (void*)value);
	}

	inline static int32_t get_offset_of_winText_5() { return static_cast<int32_t>(offsetof(GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0, ___winText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_winText_5() const { return ___winText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_winText_5() { return &___winText_5; }
	inline void set_winText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___winText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winText_5), (void*)value);
	}
};

struct GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0_StaticFields
{
public:
	// GameUI GameUI::instance
	GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0_StaticFields, ___instance_6)); }
	inline GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0 * get_instance_6() const { return ___instance_6; }
	inline GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct  MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A, ___pvCache_4)); }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t9781C6CA59BA006553D186D4FC011AECA4C9BE0B * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct  MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D  : public MonoBehaviourPun_t41335C3B2B6804088B520155103E3A0EEA4F814A
{
public:

public:
};


// Hat
struct  Hat_t0CE11059C8305648B29A91D6495DFE8041EEE09F  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// UnityEngine.GameObject Hat::hatRef
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___hatRef_5;

public:
	inline static int32_t get_offset_of_hatRef_5() { return static_cast<int32_t>(offsetof(Hat_t0CE11059C8305648B29A91D6495DFE8041EEE09F, ___hatRef_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_hatRef_5() const { return ___hatRef_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_hatRef_5() { return &___hatRef_5; }
	inline void set_hatRef_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___hatRef_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hatRef_5), (void*)value);
	}
};


// Menu
struct  Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// UnityEngine.GameObject Menu::mainScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mainScreen_5;
	// UnityEngine.GameObject Menu::lobbyScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___lobbyScreen_6;
	// UnityEngine.UI.Button Menu::createRoomButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___createRoomButton_7;
	// UnityEngine.UI.Button Menu::joinRoomButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___joinRoomButton_8;
	// TMPro.TextMeshProUGUI Menu::playerListText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___playerListText_9;
	// UnityEngine.UI.Button Menu::startGameButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___startGameButton_10;

public:
	inline static int32_t get_offset_of_mainScreen_5() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___mainScreen_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mainScreen_5() const { return ___mainScreen_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mainScreen_5() { return &___mainScreen_5; }
	inline void set_mainScreen_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mainScreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainScreen_5), (void*)value);
	}

	inline static int32_t get_offset_of_lobbyScreen_6() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___lobbyScreen_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_lobbyScreen_6() const { return ___lobbyScreen_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_lobbyScreen_6() { return &___lobbyScreen_6; }
	inline void set_lobbyScreen_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___lobbyScreen_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyScreen_6), (void*)value);
	}

	inline static int32_t get_offset_of_createRoomButton_7() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___createRoomButton_7)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_createRoomButton_7() const { return ___createRoomButton_7; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_createRoomButton_7() { return &___createRoomButton_7; }
	inline void set_createRoomButton_7(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___createRoomButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createRoomButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_joinRoomButton_8() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___joinRoomButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_joinRoomButton_8() const { return ___joinRoomButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_joinRoomButton_8() { return &___joinRoomButton_8; }
	inline void set_joinRoomButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___joinRoomButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joinRoomButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_playerListText_9() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___playerListText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_playerListText_9() const { return ___playerListText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_playerListText_9() { return &___playerListText_9; }
	inline void set_playerListText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___playerListText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerListText_9), (void*)value);
	}

	inline static int32_t get_offset_of_startGameButton_10() { return static_cast<int32_t>(offsetof(Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129, ___startGameButton_10)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_startGameButton_10() const { return ___startGameButton_10; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_startGameButton_10() { return &___startGameButton_10; }
	inline void set_startGameButton_10(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___startGameButton_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startGameButton_10), (void*)value);
	}
};


// NetworkManager
struct  NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:

public:
};

struct NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields
{
public:
	// NetworkManager NetworkManager::instance
	NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields, ___instance_5)); }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * get_instance_5() const { return ___instance_5; }
	inline NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public MonoBehaviourPunCallbacks_t1C6D230D24896A20359CB7016C7AD6E4654B885D
{
public:
	// System.Int32 PlayerController::id
	int32_t ___id_5;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_6;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_7;
	// UnityEngine.GameObject PlayerController::hatObj
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___hatObj_8;
	// System.Single PlayerController::currentHatTime
	float ___currentHatTime_9;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___rb_10;
	// Photon.Realtime.Player PlayerController::photonPlayer
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___photonPlayer_11;

public:
	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___id_5)); }
	inline int32_t get_id_5() const { return ___id_5; }
	inline int32_t* get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(int32_t value)
	{
		___id_5 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_hatObj_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___hatObj_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_hatObj_8() const { return ___hatObj_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_hatObj_8() { return &___hatObj_8; }
	inline void set_hatObj_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___hatObj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hatObj_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentHatTime_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___currentHatTime_9)); }
	inline float get_currentHatTime_9() const { return ___currentHatTime_9; }
	inline float* get_address_of_currentHatTime_9() { return &___currentHatTime_9; }
	inline void set_currentHatTime_9(float value)
	{
		___currentHatTime_9 = value;
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rb_10)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_10), (void*)value);
	}

	inline static int32_t get_offset_of_photonPlayer_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___photonPlayer_11)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_photonPlayer_11() const { return ___photonPlayer_11; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_photonPlayer_11() { return &___photonPlayer_11; }
	inline void set_photonPlayer_11(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___photonPlayer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonPlayer_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3809;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3809 = { sizeof (U3CU3Ec__DisplayClass18_0_t43E9975021FEC2660E37BCB42DC083E15387E60F), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3809[1] = 
{
	U3CU3Ec__DisplayClass18_0_t43E9975021FEC2660E37BCB42DC083E15387E60F::get_offset_of_playerId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3810;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3810 = { sizeof (U3CU3Ec__DisplayClass19_0_tA2EA056706881E59940A02D79F22E0F992FAAFEE), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3810[1] = 
{
	U3CU3Ec__DisplayClass19_0_tA2EA056706881E59940A02D79F22E0F992FAAFEE::get_offset_of_playerObject_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3811;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3811 = { sizeof (PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3811[3] = 
{
	PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9::get_offset_of_obj_0(),
	PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9::get_offset_of_nameText_1(),
	PlayerUIContainer_tC3483707625EE62F4EB3E8CEB955CF77B72151B9::get_offset_of_hatTimeSlider_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3812;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3812 = { sizeof (GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0), -1, sizeof(GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0_StaticFields), 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3812[3] = 
{
	GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0::get_offset_of_playerContainers_4(),
	GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0::get_offset_of_winText_5(),
	GameUI_t2AE58A49AA3DB38B703507989122E9C6361388F0_StaticFields::get_offset_of_instance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3813;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3813 = { sizeof (Hat_t0CE11059C8305648B29A91D6495DFE8041EEE09F), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3813[1] = 
{
	Hat_t0CE11059C8305648B29A91D6495DFE8041EEE09F::get_offset_of_hatRef_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3814;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3814 = { sizeof (Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3814[6] = 
{
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_mainScreen_5(),
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_lobbyScreen_6(),
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_createRoomButton_7(),
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_joinRoomButton_8(),
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_playerListText_9(),
	Menu_t7D066A010AF240D53C2DDA2B05DF31FD0B5F3129::get_offset_of_startGameButton_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3815;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3815 = { sizeof (NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C), -1, sizeof(NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields), 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3815[1] = 
{
	NetworkManager_t8C47AF687E3AE680C2E3CB815EA99DE9C944DE8C_StaticFields::get_offset_of_instance_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3816;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize3816 = { sizeof (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85), -1, 0, 0 };
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable3816[7] = 
{
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_id_5(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_moveSpeed_6(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_jumpForce_7(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_hatObj_8(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_currentHatTime_9(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_rb_10(),
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85::get_offset_of_photonPlayer_11(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
