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


// AudioService
struct AudioService_t3306317363;
// LoginSystem
struct LoginSystem_t1302229287;
// MainCitySystem
struct MainCitySystem_t3182791129;
// MapConfigures
struct MapConfigures_t4238555288;
// NetService
struct NetService_t2879592265;
// PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>
struct PESocket_2_t4073481024;
// PlayerController
struct PlayerController_t2064355688;
// ResourceService
struct ResourceService_t2066374285;
// System.Action
struct Action_t1264377477;
// System.Action`2<System.String,System.Int32>
struct Action_2_t778698442;
// System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>
struct Dictionary_2_t3127268619;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3466145964;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Queue`1<PEProtocol.GameMessage>
struct Queue_1_t2885912163;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1693710183;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UICreatWindow
struct UICreatWindow_t3575057914;
// UIInfoWindow
struct UIInfoWindow_t2497120935;
// UILoginWindow
struct UILoginWindow_t2411734088;
// UIMainCityWindow
struct UIMainCityWindow_t2652100507;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CENTERMAINCITYU3EC__ANONSTOREY0_T1476212760_H
#define U3CENTERMAINCITYU3EC__ANONSTOREY0_T1476212760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCitySystem/<EnterMainCity>c__AnonStorey0
struct  U3CEnterMainCityU3Ec__AnonStorey0_t1476212760  : public RuntimeObject
{
public:
	// MapConfigures MainCitySystem/<EnterMainCity>c__AnonStorey0::mapConfigure
	MapConfigures_t4238555288 * ___mapConfigure_0;
	// MainCitySystem MainCitySystem/<EnterMainCity>c__AnonStorey0::$this
	MainCitySystem_t3182791129 * ___U24this_1;

public:
	inline static int32_t get_offset_of_mapConfigure_0() { return static_cast<int32_t>(offsetof(U3CEnterMainCityU3Ec__AnonStorey0_t1476212760, ___mapConfigure_0)); }
	inline MapConfigures_t4238555288 * get_mapConfigure_0() const { return ___mapConfigure_0; }
	inline MapConfigures_t4238555288 ** get_address_of_mapConfigure_0() { return &___mapConfigure_0; }
	inline void set_mapConfigure_0(MapConfigures_t4238555288 * value)
	{
		___mapConfigure_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapConfigure_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CEnterMainCityU3Ec__AnonStorey0_t1476212760, ___U24this_1)); }
	inline MainCitySystem_t3182791129 * get_U24this_1() const { return ___U24this_1; }
	inline MainCitySystem_t3182791129 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MainCitySystem_t3182791129 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENTERMAINCITYU3EC__ANONSTOREY0_T1476212760_H
#ifndef U3CASYNCLOADSCENEU3EC__ANONSTOREY0_T758247840_H
#define U3CASYNCLOADSCENEU3EC__ANONSTOREY0_T758247840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceService/<AsyncLoadScene>c__AnonStorey0
struct  U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840  : public RuntimeObject
{
public:
	// UnityEngine.AsyncOperation ResourceService/<AsyncLoadScene>c__AnonStorey0::progress
	AsyncOperation_t1445031843 * ___progress_0;
	// System.Action ResourceService/<AsyncLoadScene>c__AnonStorey0::OnLoaded
	Action_t1264377477 * ___OnLoaded_1;
	// ResourceService ResourceService/<AsyncLoadScene>c__AnonStorey0::$this
	ResourceService_t2066374285 * ___U24this_2;

public:
	inline static int32_t get_offset_of_progress_0() { return static_cast<int32_t>(offsetof(U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840, ___progress_0)); }
	inline AsyncOperation_t1445031843 * get_progress_0() const { return ___progress_0; }
	inline AsyncOperation_t1445031843 ** get_address_of_progress_0() { return &___progress_0; }
	inline void set_progress_0(AsyncOperation_t1445031843 * value)
	{
		___progress_0 = value;
		Il2CppCodeGenWriteBarrier((&___progress_0), value);
	}

	inline static int32_t get_offset_of_OnLoaded_1() { return static_cast<int32_t>(offsetof(U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840, ___OnLoaded_1)); }
	inline Action_t1264377477 * get_OnLoaded_1() const { return ___OnLoaded_1; }
	inline Action_t1264377477 ** get_address_of_OnLoaded_1() { return &___OnLoaded_1; }
	inline void set_OnLoaded_1(Action_t1264377477 * value)
	{
		___OnLoaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnLoaded_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840, ___U24this_2)); }
	inline ResourceService_t2066374285 * get_U24this_2() const { return ___U24this_2; }
	inline ResourceService_t2066374285 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(ResourceService_t2066374285 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CASYNCLOADSCENEU3EC__ANONSTOREY0_T758247840_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CANIMATIONDONEU3EC__ITERATOR0_T2226895225_H
#define U3CANIMATIONDONEU3EC__ITERATOR0_T2226895225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDynamicWindow/<AnimationDone>c__Iterator0
struct  U3CAnimationDoneU3Ec__Iterator0_t2226895225  : public RuntimeObject
{
public:
	// System.Single UIDynamicWindow/<AnimationDone>c__Iterator0::time
	float ___time_0;
	// System.Action UIDynamicWindow/<AnimationDone>c__Iterator0::aniDone
	Action_t1264377477 * ___aniDone_1;
	// System.Object UIDynamicWindow/<AnimationDone>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UIDynamicWindow/<AnimationDone>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UIDynamicWindow/<AnimationDone>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CAnimationDoneU3Ec__Iterator0_t2226895225, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_aniDone_1() { return static_cast<int32_t>(offsetof(U3CAnimationDoneU3Ec__Iterator0_t2226895225, ___aniDone_1)); }
	inline Action_t1264377477 * get_aniDone_1() const { return ___aniDone_1; }
	inline Action_t1264377477 ** get_address_of_aniDone_1() { return &___aniDone_1; }
	inline void set_aniDone_1(Action_t1264377477 * value)
	{
		___aniDone_1 = value;
		Il2CppCodeGenWriteBarrier((&___aniDone_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CAnimationDoneU3Ec__Iterator0_t2226895225, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CAnimationDoneU3Ec__Iterator0_t2226895225, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CAnimationDoneU3Ec__Iterator0_t2226895225, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CANIMATIONDONEU3EC__ITERATOR0_T2226895225_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SINGLETON_1_T188196812_H
#define SINGLETON_1_T188196812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<AudioService>
struct  Singleton_1_t188196812  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t188196812_StaticFields
{
public:
	// T Singleton`1::m_Instance
	AudioService_t3306317363 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t188196812_StaticFields, ___m_Instance_4)); }
	inline AudioService_t3306317363 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline AudioService_t3306317363 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(AudioService_t3306317363 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T188196812_H
#ifndef SINGLETON_1_T2479076032_H
#define SINGLETON_1_T2479076032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<LoginSystem>
struct  Singleton_1_t2479076032  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t2479076032_StaticFields
{
public:
	// T Singleton`1::m_Instance
	LoginSystem_t1302229287 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t2479076032_StaticFields, ___m_Instance_4)); }
	inline LoginSystem_t1302229287 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline LoginSystem_t1302229287 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(LoginSystem_t1302229287 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2479076032_H
#ifndef SINGLETON_1_T64670578_H
#define SINGLETON_1_T64670578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<MainCitySystem>
struct  Singleton_1_t64670578  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t64670578_StaticFields
{
public:
	// T Singleton`1::m_Instance
	MainCitySystem_t3182791129 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t64670578_StaticFields, ___m_Instance_4)); }
	inline MainCitySystem_t3182791129 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline MainCitySystem_t3182791129 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(MainCitySystem_t3182791129 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T64670578_H
#ifndef SINGLETON_1_T4056439010_H
#define SINGLETON_1_T4056439010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<NetService>
struct  Singleton_1_t4056439010  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t4056439010_StaticFields
{
public:
	// T Singleton`1::m_Instance
	NetService_t2879592265 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t4056439010_StaticFields, ___m_Instance_4)); }
	inline NetService_t2879592265 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline NetService_t2879592265 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(NetService_t2879592265 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T4056439010_H
#ifndef SINGLETON_1_T3243221030_H
#define SINGLETON_1_T3243221030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<ResourceService>
struct  Singleton_1_t3243221030  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t3243221030_StaticFields
{
public:
	// T Singleton`1::m_Instance
	ResourceService_t2066374285 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t3243221030_StaticFields, ___m_Instance_4)); }
	inline ResourceService_t2066374285 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline ResourceService_t2066374285 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(ResourceService_t2066374285 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T3243221030_H
#ifndef TEST_T650638817_H
#define TEST_T650638817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test
struct  Test_t650638817  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Test::yRotation
	float ___yRotation_4;
	// UnityEngine.Transform Test::Target
	Transform_t3600365921 * ___Target_5;

public:
	inline static int32_t get_offset_of_yRotation_4() { return static_cast<int32_t>(offsetof(Test_t650638817, ___yRotation_4)); }
	inline float get_yRotation_4() const { return ___yRotation_4; }
	inline float* get_address_of_yRotation_4() { return &___yRotation_4; }
	inline void set_yRotation_4(float value)
	{
		___yRotation_4 = value;
	}

	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(Test_t650638817, ___Target_5)); }
	inline Transform_t3600365921 * get_Target_5() const { return ___Target_5; }
	inline Transform_t3600365921 ** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(Transform_t3600365921 * value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier((&___Target_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEST_T650638817_H
#ifndef UIWINDOWROOT_T2933752109_H
#define UIWINDOWROOT_T2933752109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIWindowRoot
struct  UIWindowRoot_t2933752109  : public MonoBehaviour_t3962482529
{
public:
	// ResourceService UIWindowRoot::resourceService
	ResourceService_t2066374285 * ___resourceService_4;
	// AudioService UIWindowRoot::audioService
	AudioService_t3306317363 * ___audioService_5;
	// NetService UIWindowRoot::netService
	NetService_t2879592265 * ___netService_6;

public:
	inline static int32_t get_offset_of_resourceService_4() { return static_cast<int32_t>(offsetof(UIWindowRoot_t2933752109, ___resourceService_4)); }
	inline ResourceService_t2066374285 * get_resourceService_4() const { return ___resourceService_4; }
	inline ResourceService_t2066374285 ** get_address_of_resourceService_4() { return &___resourceService_4; }
	inline void set_resourceService_4(ResourceService_t2066374285 * value)
	{
		___resourceService_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceService_4), value);
	}

	inline static int32_t get_offset_of_audioService_5() { return static_cast<int32_t>(offsetof(UIWindowRoot_t2933752109, ___audioService_5)); }
	inline AudioService_t3306317363 * get_audioService_5() const { return ___audioService_5; }
	inline AudioService_t3306317363 ** get_address_of_audioService_5() { return &___audioService_5; }
	inline void set_audioService_5(AudioService_t3306317363 * value)
	{
		___audioService_5 = value;
		Il2CppCodeGenWriteBarrier((&___audioService_5), value);
	}

	inline static int32_t get_offset_of_netService_6() { return static_cast<int32_t>(offsetof(UIWindowRoot_t2933752109, ___netService_6)); }
	inline NetService_t2879592265 * get_netService_6() const { return ___netService_6; }
	inline NetService_t2879592265 ** get_address_of_netService_6() { return &___netService_6; }
	inline void set_netService_6(NetService_t2879592265 * value)
	{
		___netService_6 = value;
		Il2CppCodeGenWriteBarrier((&___netService_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIWINDOWROOT_T2933752109_H
#ifndef AUDIOSERVICE_T3306317363_H
#define AUDIOSERVICE_T3306317363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioService
struct  AudioService_t3306317363  : public Singleton_1_t188196812
{
public:
	// UnityEngine.AudioSource AudioService::BGMAudioSource
	AudioSource_t3935305588 * ___BGMAudioSource_5;
	// UnityEngine.AudioSource AudioService::EffectAudioSource
	AudioSource_t3935305588 * ___EffectAudioSource_6;

public:
	inline static int32_t get_offset_of_BGMAudioSource_5() { return static_cast<int32_t>(offsetof(AudioService_t3306317363, ___BGMAudioSource_5)); }
	inline AudioSource_t3935305588 * get_BGMAudioSource_5() const { return ___BGMAudioSource_5; }
	inline AudioSource_t3935305588 ** get_address_of_BGMAudioSource_5() { return &___BGMAudioSource_5; }
	inline void set_BGMAudioSource_5(AudioSource_t3935305588 * value)
	{
		___BGMAudioSource_5 = value;
		Il2CppCodeGenWriteBarrier((&___BGMAudioSource_5), value);
	}

	inline static int32_t get_offset_of_EffectAudioSource_6() { return static_cast<int32_t>(offsetof(AudioService_t3306317363, ___EffectAudioSource_6)); }
	inline AudioSource_t3935305588 * get_EffectAudioSource_6() const { return ___EffectAudioSource_6; }
	inline AudioSource_t3935305588 ** get_address_of_EffectAudioSource_6() { return &___EffectAudioSource_6; }
	inline void set_EffectAudioSource_6(AudioSource_t3935305588 * value)
	{
		___EffectAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___EffectAudioSource_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSERVICE_T3306317363_H
#ifndef NETSERVICE_T2879592265_H
#define NETSERVICE_T2879592265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetService
struct  NetService_t2879592265  : public Singleton_1_t4056439010
{
public:
	// PENet.PESocket`2<ClientSession,PEProtocol.GameMessage> NetService::client
	PESocket_2_t4073481024 * ___client_5;
	// System.Collections.Generic.Queue`1<PEProtocol.GameMessage> NetService::msgQueue
	Queue_1_t2885912163 * ___msgQueue_6;

public:
	inline static int32_t get_offset_of_client_5() { return static_cast<int32_t>(offsetof(NetService_t2879592265, ___client_5)); }
	inline PESocket_2_t4073481024 * get_client_5() const { return ___client_5; }
	inline PESocket_2_t4073481024 ** get_address_of_client_5() { return &___client_5; }
	inline void set_client_5(PESocket_2_t4073481024 * value)
	{
		___client_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_5), value);
	}

	inline static int32_t get_offset_of_msgQueue_6() { return static_cast<int32_t>(offsetof(NetService_t2879592265, ___msgQueue_6)); }
	inline Queue_1_t2885912163 * get_msgQueue_6() const { return ___msgQueue_6; }
	inline Queue_1_t2885912163 ** get_address_of_msgQueue_6() { return &___msgQueue_6; }
	inline void set_msgQueue_6(Queue_1_t2885912163 * value)
	{
		___msgQueue_6 = value;
		Il2CppCodeGenWriteBarrier((&___msgQueue_6), value);
	}
};

struct NetService_t2879592265_StaticFields
{
public:
	// System.String NetService::obj
	String_t* ___obj_7;
	// System.Action`2<System.String,System.Int32> NetService::<>f__am$cache0
	Action_2_t778698442 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_obj_7() { return static_cast<int32_t>(offsetof(NetService_t2879592265_StaticFields, ___obj_7)); }
	inline String_t* get_obj_7() const { return ___obj_7; }
	inline String_t** get_address_of_obj_7() { return &___obj_7; }
	inline void set_obj_7(String_t* value)
	{
		___obj_7 = value;
		Il2CppCodeGenWriteBarrier((&___obj_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(NetService_t2879592265_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline Action_2_t778698442 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline Action_2_t778698442 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(Action_2_t778698442 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSERVICE_T2879592265_H
#ifndef RESOURCESERVICE_T2066374285_H
#define RESOURCESERVICE_T2066374285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResourceService
struct  ResourceService_t2066374285  : public Singleton_1_t3243221030
{
public:
	// System.Action ResourceService::OnSceceLoad
	Action_t1264377477 * ___OnSceceLoad_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip> ResourceService::m_Audios
	Dictionary_2_t3466145964 * ___m_Audios_6;
	// System.Collections.Generic.List`1<System.String> ResourceService::m_Surname
	List_1_t3319525431 * ___m_Surname_7;
	// System.Collections.Generic.List`1<System.String> ResourceService::m_MaleName
	List_1_t3319525431 * ___m_MaleName_8;
	// System.Collections.Generic.List`1<System.String> ResourceService::m_FemaleName
	List_1_t3319525431 * ___m_FemaleName_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures> ResourceService::m_MapDict
	Dictionary_2_t3127268619 * ___m_MapDict_10;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ResourceService::m_Player
	Dictionary_2_t898892918 * ___m_Player_11;

public:
	inline static int32_t get_offset_of_OnSceceLoad_5() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___OnSceceLoad_5)); }
	inline Action_t1264377477 * get_OnSceceLoad_5() const { return ___OnSceceLoad_5; }
	inline Action_t1264377477 ** get_address_of_OnSceceLoad_5() { return &___OnSceceLoad_5; }
	inline void set_OnSceceLoad_5(Action_t1264377477 * value)
	{
		___OnSceceLoad_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnSceceLoad_5), value);
	}

	inline static int32_t get_offset_of_m_Audios_6() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_Audios_6)); }
	inline Dictionary_2_t3466145964 * get_m_Audios_6() const { return ___m_Audios_6; }
	inline Dictionary_2_t3466145964 ** get_address_of_m_Audios_6() { return &___m_Audios_6; }
	inline void set_m_Audios_6(Dictionary_2_t3466145964 * value)
	{
		___m_Audios_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Audios_6), value);
	}

	inline static int32_t get_offset_of_m_Surname_7() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_Surname_7)); }
	inline List_1_t3319525431 * get_m_Surname_7() const { return ___m_Surname_7; }
	inline List_1_t3319525431 ** get_address_of_m_Surname_7() { return &___m_Surname_7; }
	inline void set_m_Surname_7(List_1_t3319525431 * value)
	{
		___m_Surname_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Surname_7), value);
	}

	inline static int32_t get_offset_of_m_MaleName_8() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_MaleName_8)); }
	inline List_1_t3319525431 * get_m_MaleName_8() const { return ___m_MaleName_8; }
	inline List_1_t3319525431 ** get_address_of_m_MaleName_8() { return &___m_MaleName_8; }
	inline void set_m_MaleName_8(List_1_t3319525431 * value)
	{
		___m_MaleName_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaleName_8), value);
	}

	inline static int32_t get_offset_of_m_FemaleName_9() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_FemaleName_9)); }
	inline List_1_t3319525431 * get_m_FemaleName_9() const { return ___m_FemaleName_9; }
	inline List_1_t3319525431 ** get_address_of_m_FemaleName_9() { return &___m_FemaleName_9; }
	inline void set_m_FemaleName_9(List_1_t3319525431 * value)
	{
		___m_FemaleName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_FemaleName_9), value);
	}

	inline static int32_t get_offset_of_m_MapDict_10() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_MapDict_10)); }
	inline Dictionary_2_t3127268619 * get_m_MapDict_10() const { return ___m_MapDict_10; }
	inline Dictionary_2_t3127268619 ** get_address_of_m_MapDict_10() { return &___m_MapDict_10; }
	inline void set_m_MapDict_10(Dictionary_2_t3127268619 * value)
	{
		___m_MapDict_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_MapDict_10), value);
	}

	inline static int32_t get_offset_of_m_Player_11() { return static_cast<int32_t>(offsetof(ResourceService_t2066374285, ___m_Player_11)); }
	inline Dictionary_2_t898892918 * get_m_Player_11() const { return ___m_Player_11; }
	inline Dictionary_2_t898892918 ** get_address_of_m_Player_11() { return &___m_Player_11; }
	inline void set_m_Player_11(Dictionary_2_t898892918 * value)
	{
		___m_Player_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Player_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESERVICE_T2066374285_H
#ifndef SYSTEMROOT_1_T2075122454_H
#define SYSTEMROOT_1_T2075122454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SystemRoot`1<LoginSystem>
struct  SystemRoot_1_t2075122454  : public Singleton_1_t2479076032
{
public:
	// AudioService SystemRoot`1::audioService
	AudioService_t3306317363 * ___audioService_5;
	// ResourceService SystemRoot`1::resourceService
	ResourceService_t2066374285 * ___resourceService_6;
	// NetService SystemRoot`1::netService
	NetService_t2879592265 * ___netService_7;

public:
	inline static int32_t get_offset_of_audioService_5() { return static_cast<int32_t>(offsetof(SystemRoot_1_t2075122454, ___audioService_5)); }
	inline AudioService_t3306317363 * get_audioService_5() const { return ___audioService_5; }
	inline AudioService_t3306317363 ** get_address_of_audioService_5() { return &___audioService_5; }
	inline void set_audioService_5(AudioService_t3306317363 * value)
	{
		___audioService_5 = value;
		Il2CppCodeGenWriteBarrier((&___audioService_5), value);
	}

	inline static int32_t get_offset_of_resourceService_6() { return static_cast<int32_t>(offsetof(SystemRoot_1_t2075122454, ___resourceService_6)); }
	inline ResourceService_t2066374285 * get_resourceService_6() const { return ___resourceService_6; }
	inline ResourceService_t2066374285 ** get_address_of_resourceService_6() { return &___resourceService_6; }
	inline void set_resourceService_6(ResourceService_t2066374285 * value)
	{
		___resourceService_6 = value;
		Il2CppCodeGenWriteBarrier((&___resourceService_6), value);
	}

	inline static int32_t get_offset_of_netService_7() { return static_cast<int32_t>(offsetof(SystemRoot_1_t2075122454, ___netService_7)); }
	inline NetService_t2879592265 * get_netService_7() const { return ___netService_7; }
	inline NetService_t2879592265 ** get_address_of_netService_7() { return &___netService_7; }
	inline void set_netService_7(NetService_t2879592265 * value)
	{
		___netService_7 = value;
		Il2CppCodeGenWriteBarrier((&___netService_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMROOT_1_T2075122454_H
#ifndef SYSTEMROOT_1_T3955684296_H
#define SYSTEMROOT_1_T3955684296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SystemRoot`1<MainCitySystem>
struct  SystemRoot_1_t3955684296  : public Singleton_1_t64670578
{
public:
	// AudioService SystemRoot`1::audioService
	AudioService_t3306317363 * ___audioService_5;
	// ResourceService SystemRoot`1::resourceService
	ResourceService_t2066374285 * ___resourceService_6;
	// NetService SystemRoot`1::netService
	NetService_t2879592265 * ___netService_7;

public:
	inline static int32_t get_offset_of_audioService_5() { return static_cast<int32_t>(offsetof(SystemRoot_1_t3955684296, ___audioService_5)); }
	inline AudioService_t3306317363 * get_audioService_5() const { return ___audioService_5; }
	inline AudioService_t3306317363 ** get_address_of_audioService_5() { return &___audioService_5; }
	inline void set_audioService_5(AudioService_t3306317363 * value)
	{
		___audioService_5 = value;
		Il2CppCodeGenWriteBarrier((&___audioService_5), value);
	}

	inline static int32_t get_offset_of_resourceService_6() { return static_cast<int32_t>(offsetof(SystemRoot_1_t3955684296, ___resourceService_6)); }
	inline ResourceService_t2066374285 * get_resourceService_6() const { return ___resourceService_6; }
	inline ResourceService_t2066374285 ** get_address_of_resourceService_6() { return &___resourceService_6; }
	inline void set_resourceService_6(ResourceService_t2066374285 * value)
	{
		___resourceService_6 = value;
		Il2CppCodeGenWriteBarrier((&___resourceService_6), value);
	}

	inline static int32_t get_offset_of_netService_7() { return static_cast<int32_t>(offsetof(SystemRoot_1_t3955684296, ___netService_7)); }
	inline NetService_t2879592265 * get_netService_7() const { return ___netService_7; }
	inline NetService_t2879592265 ** get_address_of_netService_7() { return &___netService_7; }
	inline void set_netService_7(NetService_t2879592265 * value)
	{
		___netService_7 = value;
		Il2CppCodeGenWriteBarrier((&___netService_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMROOT_1_T3955684296_H
#ifndef UICREATWINDOW_T3575057914_H
#define UICREATWINDOW_T3575057914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UICreatWindow
struct  UICreatWindow_t3575057914  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.UI.InputField UICreatWindow::iptName
	InputField_t3762917431 * ___iptName_7;

public:
	inline static int32_t get_offset_of_iptName_7() { return static_cast<int32_t>(offsetof(UICreatWindow_t3575057914, ___iptName_7)); }
	inline InputField_t3762917431 * get_iptName_7() const { return ___iptName_7; }
	inline InputField_t3762917431 ** get_address_of_iptName_7() { return &___iptName_7; }
	inline void set_iptName_7(InputField_t3762917431 * value)
	{
		___iptName_7 = value;
		Il2CppCodeGenWriteBarrier((&___iptName_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICREATWINDOW_T3575057914_H
#ifndef UIDYNAMICWINDOW_T887270669_H
#define UIDYNAMICWINDOW_T887270669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIDynamicWindow
struct  UIDynamicWindow_t887270669  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.UI.Text UIDynamicWindow::TipsText
	Text_t1901882714 * ___TipsText_7;
	// UnityEngine.Animation UIDynamicWindow::TipsAnimation
	Animation_t3648466861 * ___TipsAnimation_8;
	// System.Collections.Generic.Queue`1<System.String> UIDynamicWindow::m_TipsQue
	Queue_1_t1693710183 * ___m_TipsQue_9;
	// System.Boolean UIDynamicWindow::isTipsShow
	bool ___isTipsShow_10;

public:
	inline static int32_t get_offset_of_TipsText_7() { return static_cast<int32_t>(offsetof(UIDynamicWindow_t887270669, ___TipsText_7)); }
	inline Text_t1901882714 * get_TipsText_7() const { return ___TipsText_7; }
	inline Text_t1901882714 ** get_address_of_TipsText_7() { return &___TipsText_7; }
	inline void set_TipsText_7(Text_t1901882714 * value)
	{
		___TipsText_7 = value;
		Il2CppCodeGenWriteBarrier((&___TipsText_7), value);
	}

	inline static int32_t get_offset_of_TipsAnimation_8() { return static_cast<int32_t>(offsetof(UIDynamicWindow_t887270669, ___TipsAnimation_8)); }
	inline Animation_t3648466861 * get_TipsAnimation_8() const { return ___TipsAnimation_8; }
	inline Animation_t3648466861 ** get_address_of_TipsAnimation_8() { return &___TipsAnimation_8; }
	inline void set_TipsAnimation_8(Animation_t3648466861 * value)
	{
		___TipsAnimation_8 = value;
		Il2CppCodeGenWriteBarrier((&___TipsAnimation_8), value);
	}

	inline static int32_t get_offset_of_m_TipsQue_9() { return static_cast<int32_t>(offsetof(UIDynamicWindow_t887270669, ___m_TipsQue_9)); }
	inline Queue_1_t1693710183 * get_m_TipsQue_9() const { return ___m_TipsQue_9; }
	inline Queue_1_t1693710183 ** get_address_of_m_TipsQue_9() { return &___m_TipsQue_9; }
	inline void set_m_TipsQue_9(Queue_1_t1693710183 * value)
	{
		___m_TipsQue_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TipsQue_9), value);
	}

	inline static int32_t get_offset_of_isTipsShow_10() { return static_cast<int32_t>(offsetof(UIDynamicWindow_t887270669, ___isTipsShow_10)); }
	inline bool get_isTipsShow_10() const { return ___isTipsShow_10; }
	inline bool* get_address_of_isTipsShow_10() { return &___isTipsShow_10; }
	inline void set_isTipsShow_10(bool value)
	{
		___isTipsShow_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIDYNAMICWINDOW_T887270669_H
#ifndef UIINFOWINDOW_T2497120935_H
#define UIINFOWINDOW_T2497120935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIInfoWindow
struct  UIInfoWindow_t2497120935  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.UI.RawImage UIInfoWindow::CharShowRaw
	RawImage_t3182918964 * ___CharShowRaw_7;
	// UnityEngine.UI.Text UIInfoWindow::NameAndLevelText
	Text_t1901882714 * ___NameAndLevelText_8;
	// UnityEngine.UI.Text UIInfoWindow::ExpText
	Text_t1901882714 * ___ExpText_9;
	// UnityEngine.UI.Image UIInfoWindow::ExpImage
	Image_t2670269651 * ___ExpImage_10;
	// UnityEngine.UI.Text UIInfoWindow::PowerText
	Text_t1901882714 * ___PowerText_11;
	// UnityEngine.UI.Image UIInfoWindow::PowerImage
	Image_t2670269651 * ___PowerImage_12;
	// UnityEngine.UI.Text UIInfoWindow::FightText
	Text_t1901882714 * ___FightText_13;
	// UnityEngine.UI.Text UIInfoWindow::HPText
	Text_t1901882714 * ___HPText_14;
	// UnityEngine.UI.Text UIInfoWindow::DamageText
	Text_t1901882714 * ___DamageText_15;
	// UnityEngine.UI.Text UIInfoWindow::DefenceText
	Text_t1901882714 * ___DefenceText_16;
	// UnityEngine.Vector2 UIInfoWindow::StartPos
	Vector2_t2156229523  ___StartPos_17;

public:
	inline static int32_t get_offset_of_CharShowRaw_7() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___CharShowRaw_7)); }
	inline RawImage_t3182918964 * get_CharShowRaw_7() const { return ___CharShowRaw_7; }
	inline RawImage_t3182918964 ** get_address_of_CharShowRaw_7() { return &___CharShowRaw_7; }
	inline void set_CharShowRaw_7(RawImage_t3182918964 * value)
	{
		___CharShowRaw_7 = value;
		Il2CppCodeGenWriteBarrier((&___CharShowRaw_7), value);
	}

	inline static int32_t get_offset_of_NameAndLevelText_8() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___NameAndLevelText_8)); }
	inline Text_t1901882714 * get_NameAndLevelText_8() const { return ___NameAndLevelText_8; }
	inline Text_t1901882714 ** get_address_of_NameAndLevelText_8() { return &___NameAndLevelText_8; }
	inline void set_NameAndLevelText_8(Text_t1901882714 * value)
	{
		___NameAndLevelText_8 = value;
		Il2CppCodeGenWriteBarrier((&___NameAndLevelText_8), value);
	}

	inline static int32_t get_offset_of_ExpText_9() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___ExpText_9)); }
	inline Text_t1901882714 * get_ExpText_9() const { return ___ExpText_9; }
	inline Text_t1901882714 ** get_address_of_ExpText_9() { return &___ExpText_9; }
	inline void set_ExpText_9(Text_t1901882714 * value)
	{
		___ExpText_9 = value;
		Il2CppCodeGenWriteBarrier((&___ExpText_9), value);
	}

	inline static int32_t get_offset_of_ExpImage_10() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___ExpImage_10)); }
	inline Image_t2670269651 * get_ExpImage_10() const { return ___ExpImage_10; }
	inline Image_t2670269651 ** get_address_of_ExpImage_10() { return &___ExpImage_10; }
	inline void set_ExpImage_10(Image_t2670269651 * value)
	{
		___ExpImage_10 = value;
		Il2CppCodeGenWriteBarrier((&___ExpImage_10), value);
	}

	inline static int32_t get_offset_of_PowerText_11() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___PowerText_11)); }
	inline Text_t1901882714 * get_PowerText_11() const { return ___PowerText_11; }
	inline Text_t1901882714 ** get_address_of_PowerText_11() { return &___PowerText_11; }
	inline void set_PowerText_11(Text_t1901882714 * value)
	{
		___PowerText_11 = value;
		Il2CppCodeGenWriteBarrier((&___PowerText_11), value);
	}

	inline static int32_t get_offset_of_PowerImage_12() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___PowerImage_12)); }
	inline Image_t2670269651 * get_PowerImage_12() const { return ___PowerImage_12; }
	inline Image_t2670269651 ** get_address_of_PowerImage_12() { return &___PowerImage_12; }
	inline void set_PowerImage_12(Image_t2670269651 * value)
	{
		___PowerImage_12 = value;
		Il2CppCodeGenWriteBarrier((&___PowerImage_12), value);
	}

	inline static int32_t get_offset_of_FightText_13() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___FightText_13)); }
	inline Text_t1901882714 * get_FightText_13() const { return ___FightText_13; }
	inline Text_t1901882714 ** get_address_of_FightText_13() { return &___FightText_13; }
	inline void set_FightText_13(Text_t1901882714 * value)
	{
		___FightText_13 = value;
		Il2CppCodeGenWriteBarrier((&___FightText_13), value);
	}

	inline static int32_t get_offset_of_HPText_14() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___HPText_14)); }
	inline Text_t1901882714 * get_HPText_14() const { return ___HPText_14; }
	inline Text_t1901882714 ** get_address_of_HPText_14() { return &___HPText_14; }
	inline void set_HPText_14(Text_t1901882714 * value)
	{
		___HPText_14 = value;
		Il2CppCodeGenWriteBarrier((&___HPText_14), value);
	}

	inline static int32_t get_offset_of_DamageText_15() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___DamageText_15)); }
	inline Text_t1901882714 * get_DamageText_15() const { return ___DamageText_15; }
	inline Text_t1901882714 ** get_address_of_DamageText_15() { return &___DamageText_15; }
	inline void set_DamageText_15(Text_t1901882714 * value)
	{
		___DamageText_15 = value;
		Il2CppCodeGenWriteBarrier((&___DamageText_15), value);
	}

	inline static int32_t get_offset_of_DefenceText_16() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___DefenceText_16)); }
	inline Text_t1901882714 * get_DefenceText_16() const { return ___DefenceText_16; }
	inline Text_t1901882714 ** get_address_of_DefenceText_16() { return &___DefenceText_16; }
	inline void set_DefenceText_16(Text_t1901882714 * value)
	{
		___DefenceText_16 = value;
		Il2CppCodeGenWriteBarrier((&___DefenceText_16), value);
	}

	inline static int32_t get_offset_of_StartPos_17() { return static_cast<int32_t>(offsetof(UIInfoWindow_t2497120935, ___StartPos_17)); }
	inline Vector2_t2156229523  get_StartPos_17() const { return ___StartPos_17; }
	inline Vector2_t2156229523 * get_address_of_StartPos_17() { return &___StartPos_17; }
	inline void set_StartPos_17(Vector2_t2156229523  value)
	{
		___StartPos_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIINFOWINDOW_T2497120935_H
#ifndef UILOADINGWINDOW_T3075121329_H
#define UILOADINGWINDOW_T3075121329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILoadingWindow
struct  UILoadingWindow_t3075121329  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.UI.Text UILoadingWindow::m_TipsText
	Text_t1901882714 * ___m_TipsText_7;
	// UnityEngine.UI.Text UILoadingWindow::m_ProgressText
	Text_t1901882714 * ___m_ProgressText_8;
	// UnityEngine.UI.Image UILoadingWindow::m_Container
	Image_t2670269651 * ___m_Container_9;
	// UnityEngine.UI.Image UILoadingWindow::m_PointImage
	Image_t2670269651 * ___m_PointImage_10;
	// UnityEngine.UI.Image UILoadingWindow::m_ProgressImage
	Image_t2670269651 * ___m_ProgressImage_11;
	// System.Single UILoadingWindow::m_ContainerW
	float ___m_ContainerW_12;

public:
	inline static int32_t get_offset_of_m_TipsText_7() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_TipsText_7)); }
	inline Text_t1901882714 * get_m_TipsText_7() const { return ___m_TipsText_7; }
	inline Text_t1901882714 ** get_address_of_m_TipsText_7() { return &___m_TipsText_7; }
	inline void set_m_TipsText_7(Text_t1901882714 * value)
	{
		___m_TipsText_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TipsText_7), value);
	}

	inline static int32_t get_offset_of_m_ProgressText_8() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_ProgressText_8)); }
	inline Text_t1901882714 * get_m_ProgressText_8() const { return ___m_ProgressText_8; }
	inline Text_t1901882714 ** get_address_of_m_ProgressText_8() { return &___m_ProgressText_8; }
	inline void set_m_ProgressText_8(Text_t1901882714 * value)
	{
		___m_ProgressText_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProgressText_8), value);
	}

	inline static int32_t get_offset_of_m_Container_9() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_Container_9)); }
	inline Image_t2670269651 * get_m_Container_9() const { return ___m_Container_9; }
	inline Image_t2670269651 ** get_address_of_m_Container_9() { return &___m_Container_9; }
	inline void set_m_Container_9(Image_t2670269651 * value)
	{
		___m_Container_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Container_9), value);
	}

	inline static int32_t get_offset_of_m_PointImage_10() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_PointImage_10)); }
	inline Image_t2670269651 * get_m_PointImage_10() const { return ___m_PointImage_10; }
	inline Image_t2670269651 ** get_address_of_m_PointImage_10() { return &___m_PointImage_10; }
	inline void set_m_PointImage_10(Image_t2670269651 * value)
	{
		___m_PointImage_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointImage_10), value);
	}

	inline static int32_t get_offset_of_m_ProgressImage_11() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_ProgressImage_11)); }
	inline Image_t2670269651 * get_m_ProgressImage_11() const { return ___m_ProgressImage_11; }
	inline Image_t2670269651 ** get_address_of_m_ProgressImage_11() { return &___m_ProgressImage_11; }
	inline void set_m_ProgressImage_11(Image_t2670269651 * value)
	{
		___m_ProgressImage_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProgressImage_11), value);
	}

	inline static int32_t get_offset_of_m_ContainerW_12() { return static_cast<int32_t>(offsetof(UILoadingWindow_t3075121329, ___m_ContainerW_12)); }
	inline float get_m_ContainerW_12() const { return ___m_ContainerW_12; }
	inline float* get_address_of_m_ContainerW_12() { return &___m_ContainerW_12; }
	inline void set_m_ContainerW_12(float value)
	{
		___m_ContainerW_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILOADINGWINDOW_T3075121329_H
#ifndef UILOGINWINDOW_T2411734088_H
#define UILOGINWINDOW_T2411734088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UILoginWindow
struct  UILoginWindow_t2411734088  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.UI.InputField UILoginWindow::m_AccountField
	InputField_t3762917431 * ___m_AccountField_7;
	// UnityEngine.UI.InputField UILoginWindow::m_PasswordField
	InputField_t3762917431 * ___m_PasswordField_8;
	// UnityEngine.UI.Button UILoginWindow::m_NoticeBtn
	Button_t4055032469 * ___m_NoticeBtn_9;
	// UnityEngine.UI.Button UILoginWindow::EnterGameBtn
	Button_t4055032469 * ___EnterGameBtn_10;

public:
	inline static int32_t get_offset_of_m_AccountField_7() { return static_cast<int32_t>(offsetof(UILoginWindow_t2411734088, ___m_AccountField_7)); }
	inline InputField_t3762917431 * get_m_AccountField_7() const { return ___m_AccountField_7; }
	inline InputField_t3762917431 ** get_address_of_m_AccountField_7() { return &___m_AccountField_7; }
	inline void set_m_AccountField_7(InputField_t3762917431 * value)
	{
		___m_AccountField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AccountField_7), value);
	}

	inline static int32_t get_offset_of_m_PasswordField_8() { return static_cast<int32_t>(offsetof(UILoginWindow_t2411734088, ___m_PasswordField_8)); }
	inline InputField_t3762917431 * get_m_PasswordField_8() const { return ___m_PasswordField_8; }
	inline InputField_t3762917431 ** get_address_of_m_PasswordField_8() { return &___m_PasswordField_8; }
	inline void set_m_PasswordField_8(InputField_t3762917431 * value)
	{
		___m_PasswordField_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_PasswordField_8), value);
	}

	inline static int32_t get_offset_of_m_NoticeBtn_9() { return static_cast<int32_t>(offsetof(UILoginWindow_t2411734088, ___m_NoticeBtn_9)); }
	inline Button_t4055032469 * get_m_NoticeBtn_9() const { return ___m_NoticeBtn_9; }
	inline Button_t4055032469 ** get_address_of_m_NoticeBtn_9() { return &___m_NoticeBtn_9; }
	inline void set_m_NoticeBtn_9(Button_t4055032469 * value)
	{
		___m_NoticeBtn_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_NoticeBtn_9), value);
	}

	inline static int32_t get_offset_of_EnterGameBtn_10() { return static_cast<int32_t>(offsetof(UILoginWindow_t2411734088, ___EnterGameBtn_10)); }
	inline Button_t4055032469 * get_EnterGameBtn_10() const { return ___EnterGameBtn_10; }
	inline Button_t4055032469 ** get_address_of_EnterGameBtn_10() { return &___EnterGameBtn_10; }
	inline void set_EnterGameBtn_10(Button_t4055032469 * value)
	{
		___EnterGameBtn_10 = value;
		Il2CppCodeGenWriteBarrier((&___EnterGameBtn_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILOGINWINDOW_T2411734088_H
#ifndef UIMAINCITYWINDOW_T2652100507_H
#define UIMAINCITYWINDOW_T2652100507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIMainCityWindow
struct  UIMainCityWindow_t2652100507  : public UIWindowRoot_t2933752109
{
public:
	// UnityEngine.Animation UIMainCityWindow::MenuAnimation
	Animation_t3648466861 * ___MenuAnimation_7;
	// UnityEngine.UI.Button UIMainCityWindow::MenuBtn
	Button_t4055032469 * ___MenuBtn_8;
	// UnityEngine.UI.Text UIMainCityWindow::LevelText
	Text_t1901882714 * ___LevelText_9;
	// UnityEngine.UI.Text UIMainCityWindow::FlightText
	Text_t1901882714 * ___FlightText_10;
	// UnityEngine.UI.Text UIMainCityWindow::PowerText
	Text_t1901882714 * ___PowerText_11;
	// UnityEngine.UI.Image UIMainCityWindow::PowerImage
	Image_t2670269651 * ___PowerImage_12;
	// UnityEngine.UI.Text UIMainCityWindow::NameText
	Text_t1901882714 * ___NameText_13;
	// UnityEngine.UI.Text UIMainCityWindow::ExperienceText
	Text_t1901882714 * ___ExperienceText_14;
	// UnityEngine.Transform UIMainCityWindow::expRect
	Transform_t3600365921 * ___expRect_15;
	// UnityEngine.UI.Image UIMainCityWindow::TouchArea
	Image_t2670269651 * ___TouchArea_16;
	// UnityEngine.UI.Image UIMainCityWindow::TouchBGImage
	Image_t2670269651 * ___TouchBGImage_17;
	// UnityEngine.UI.Image UIMainCityWindow::TouchPointImage
	Image_t2670269651 * ___TouchPointImage_18;
	// System.Boolean UIMainCityWindow::IsExpand
	bool ___IsExpand_19;
	// UnityEngine.Vector2 UIMainCityWindow::defalutBGPos
	Vector2_t2156229523  ___defalutBGPos_20;
	// UnityEngine.Vector2 UIMainCityWindow::startPos
	Vector2_t2156229523  ___startPos_21;
	// System.Single UIMainCityWindow::pointDistance
	float ___pointDistance_22;

public:
	inline static int32_t get_offset_of_MenuAnimation_7() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___MenuAnimation_7)); }
	inline Animation_t3648466861 * get_MenuAnimation_7() const { return ___MenuAnimation_7; }
	inline Animation_t3648466861 ** get_address_of_MenuAnimation_7() { return &___MenuAnimation_7; }
	inline void set_MenuAnimation_7(Animation_t3648466861 * value)
	{
		___MenuAnimation_7 = value;
		Il2CppCodeGenWriteBarrier((&___MenuAnimation_7), value);
	}

	inline static int32_t get_offset_of_MenuBtn_8() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___MenuBtn_8)); }
	inline Button_t4055032469 * get_MenuBtn_8() const { return ___MenuBtn_8; }
	inline Button_t4055032469 ** get_address_of_MenuBtn_8() { return &___MenuBtn_8; }
	inline void set_MenuBtn_8(Button_t4055032469 * value)
	{
		___MenuBtn_8 = value;
		Il2CppCodeGenWriteBarrier((&___MenuBtn_8), value);
	}

	inline static int32_t get_offset_of_LevelText_9() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___LevelText_9)); }
	inline Text_t1901882714 * get_LevelText_9() const { return ___LevelText_9; }
	inline Text_t1901882714 ** get_address_of_LevelText_9() { return &___LevelText_9; }
	inline void set_LevelText_9(Text_t1901882714 * value)
	{
		___LevelText_9 = value;
		Il2CppCodeGenWriteBarrier((&___LevelText_9), value);
	}

	inline static int32_t get_offset_of_FlightText_10() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___FlightText_10)); }
	inline Text_t1901882714 * get_FlightText_10() const { return ___FlightText_10; }
	inline Text_t1901882714 ** get_address_of_FlightText_10() { return &___FlightText_10; }
	inline void set_FlightText_10(Text_t1901882714 * value)
	{
		___FlightText_10 = value;
		Il2CppCodeGenWriteBarrier((&___FlightText_10), value);
	}

	inline static int32_t get_offset_of_PowerText_11() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___PowerText_11)); }
	inline Text_t1901882714 * get_PowerText_11() const { return ___PowerText_11; }
	inline Text_t1901882714 ** get_address_of_PowerText_11() { return &___PowerText_11; }
	inline void set_PowerText_11(Text_t1901882714 * value)
	{
		___PowerText_11 = value;
		Il2CppCodeGenWriteBarrier((&___PowerText_11), value);
	}

	inline static int32_t get_offset_of_PowerImage_12() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___PowerImage_12)); }
	inline Image_t2670269651 * get_PowerImage_12() const { return ___PowerImage_12; }
	inline Image_t2670269651 ** get_address_of_PowerImage_12() { return &___PowerImage_12; }
	inline void set_PowerImage_12(Image_t2670269651 * value)
	{
		___PowerImage_12 = value;
		Il2CppCodeGenWriteBarrier((&___PowerImage_12), value);
	}

	inline static int32_t get_offset_of_NameText_13() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___NameText_13)); }
	inline Text_t1901882714 * get_NameText_13() const { return ___NameText_13; }
	inline Text_t1901882714 ** get_address_of_NameText_13() { return &___NameText_13; }
	inline void set_NameText_13(Text_t1901882714 * value)
	{
		___NameText_13 = value;
		Il2CppCodeGenWriteBarrier((&___NameText_13), value);
	}

	inline static int32_t get_offset_of_ExperienceText_14() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___ExperienceText_14)); }
	inline Text_t1901882714 * get_ExperienceText_14() const { return ___ExperienceText_14; }
	inline Text_t1901882714 ** get_address_of_ExperienceText_14() { return &___ExperienceText_14; }
	inline void set_ExperienceText_14(Text_t1901882714 * value)
	{
		___ExperienceText_14 = value;
		Il2CppCodeGenWriteBarrier((&___ExperienceText_14), value);
	}

	inline static int32_t get_offset_of_expRect_15() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___expRect_15)); }
	inline Transform_t3600365921 * get_expRect_15() const { return ___expRect_15; }
	inline Transform_t3600365921 ** get_address_of_expRect_15() { return &___expRect_15; }
	inline void set_expRect_15(Transform_t3600365921 * value)
	{
		___expRect_15 = value;
		Il2CppCodeGenWriteBarrier((&___expRect_15), value);
	}

	inline static int32_t get_offset_of_TouchArea_16() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___TouchArea_16)); }
	inline Image_t2670269651 * get_TouchArea_16() const { return ___TouchArea_16; }
	inline Image_t2670269651 ** get_address_of_TouchArea_16() { return &___TouchArea_16; }
	inline void set_TouchArea_16(Image_t2670269651 * value)
	{
		___TouchArea_16 = value;
		Il2CppCodeGenWriteBarrier((&___TouchArea_16), value);
	}

	inline static int32_t get_offset_of_TouchBGImage_17() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___TouchBGImage_17)); }
	inline Image_t2670269651 * get_TouchBGImage_17() const { return ___TouchBGImage_17; }
	inline Image_t2670269651 ** get_address_of_TouchBGImage_17() { return &___TouchBGImage_17; }
	inline void set_TouchBGImage_17(Image_t2670269651 * value)
	{
		___TouchBGImage_17 = value;
		Il2CppCodeGenWriteBarrier((&___TouchBGImage_17), value);
	}

	inline static int32_t get_offset_of_TouchPointImage_18() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___TouchPointImage_18)); }
	inline Image_t2670269651 * get_TouchPointImage_18() const { return ___TouchPointImage_18; }
	inline Image_t2670269651 ** get_address_of_TouchPointImage_18() { return &___TouchPointImage_18; }
	inline void set_TouchPointImage_18(Image_t2670269651 * value)
	{
		___TouchPointImage_18 = value;
		Il2CppCodeGenWriteBarrier((&___TouchPointImage_18), value);
	}

	inline static int32_t get_offset_of_IsExpand_19() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___IsExpand_19)); }
	inline bool get_IsExpand_19() const { return ___IsExpand_19; }
	inline bool* get_address_of_IsExpand_19() { return &___IsExpand_19; }
	inline void set_IsExpand_19(bool value)
	{
		___IsExpand_19 = value;
	}

	inline static int32_t get_offset_of_defalutBGPos_20() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___defalutBGPos_20)); }
	inline Vector2_t2156229523  get_defalutBGPos_20() const { return ___defalutBGPos_20; }
	inline Vector2_t2156229523 * get_address_of_defalutBGPos_20() { return &___defalutBGPos_20; }
	inline void set_defalutBGPos_20(Vector2_t2156229523  value)
	{
		___defalutBGPos_20 = value;
	}

	inline static int32_t get_offset_of_startPos_21() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___startPos_21)); }
	inline Vector2_t2156229523  get_startPos_21() const { return ___startPos_21; }
	inline Vector2_t2156229523 * get_address_of_startPos_21() { return &___startPos_21; }
	inline void set_startPos_21(Vector2_t2156229523  value)
	{
		___startPos_21 = value;
	}

	inline static int32_t get_offset_of_pointDistance_22() { return static_cast<int32_t>(offsetof(UIMainCityWindow_t2652100507, ___pointDistance_22)); }
	inline float get_pointDistance_22() const { return ___pointDistance_22; }
	inline float* get_address_of_pointDistance_22() { return &___pointDistance_22; }
	inline void set_pointDistance_22(float value)
	{
		___pointDistance_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMAINCITYWINDOW_T2652100507_H
#ifndef LOGINSYSTEM_T1302229287_H
#define LOGINSYSTEM_T1302229287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginSystem
struct  LoginSystem_t1302229287  : public SystemRoot_1_t2075122454
{
public:
	// UILoginWindow LoginSystem::LoginWindow
	UILoginWindow_t2411734088 * ___LoginWindow_8;
	// UICreatWindow LoginSystem::UICreatWindow
	UICreatWindow_t3575057914 * ___UICreatWindow_9;

public:
	inline static int32_t get_offset_of_LoginWindow_8() { return static_cast<int32_t>(offsetof(LoginSystem_t1302229287, ___LoginWindow_8)); }
	inline UILoginWindow_t2411734088 * get_LoginWindow_8() const { return ___LoginWindow_8; }
	inline UILoginWindow_t2411734088 ** get_address_of_LoginWindow_8() { return &___LoginWindow_8; }
	inline void set_LoginWindow_8(UILoginWindow_t2411734088 * value)
	{
		___LoginWindow_8 = value;
		Il2CppCodeGenWriteBarrier((&___LoginWindow_8), value);
	}

	inline static int32_t get_offset_of_UICreatWindow_9() { return static_cast<int32_t>(offsetof(LoginSystem_t1302229287, ___UICreatWindow_9)); }
	inline UICreatWindow_t3575057914 * get_UICreatWindow_9() const { return ___UICreatWindow_9; }
	inline UICreatWindow_t3575057914 ** get_address_of_UICreatWindow_9() { return &___UICreatWindow_9; }
	inline void set_UICreatWindow_9(UICreatWindow_t3575057914 * value)
	{
		___UICreatWindow_9 = value;
		Il2CppCodeGenWriteBarrier((&___UICreatWindow_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINSYSTEM_T1302229287_H
#ifndef MAINCITYSYSTEM_T3182791129_H
#define MAINCITYSYSTEM_T3182791129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCitySystem
struct  MainCitySystem_t3182791129  : public SystemRoot_1_t3955684296
{
public:
	// UIMainCityWindow MainCitySystem::MainCityWindow
	UIMainCityWindow_t2652100507 * ___MainCityWindow_8;
	// UIInfoWindow MainCitySystem::UIInfoWindow
	UIInfoWindow_t2497120935 * ___UIInfoWindow_9;
	// PlayerController MainCitySystem::playerController
	PlayerController_t2064355688 * ___playerController_10;
	// UnityEngine.Transform MainCitySystem::CharShowcam
	Transform_t3600365921 * ___CharShowcam_11;

public:
	inline static int32_t get_offset_of_MainCityWindow_8() { return static_cast<int32_t>(offsetof(MainCitySystem_t3182791129, ___MainCityWindow_8)); }
	inline UIMainCityWindow_t2652100507 * get_MainCityWindow_8() const { return ___MainCityWindow_8; }
	inline UIMainCityWindow_t2652100507 ** get_address_of_MainCityWindow_8() { return &___MainCityWindow_8; }
	inline void set_MainCityWindow_8(UIMainCityWindow_t2652100507 * value)
	{
		___MainCityWindow_8 = value;
		Il2CppCodeGenWriteBarrier((&___MainCityWindow_8), value);
	}

	inline static int32_t get_offset_of_UIInfoWindow_9() { return static_cast<int32_t>(offsetof(MainCitySystem_t3182791129, ___UIInfoWindow_9)); }
	inline UIInfoWindow_t2497120935 * get_UIInfoWindow_9() const { return ___UIInfoWindow_9; }
	inline UIInfoWindow_t2497120935 ** get_address_of_UIInfoWindow_9() { return &___UIInfoWindow_9; }
	inline void set_UIInfoWindow_9(UIInfoWindow_t2497120935 * value)
	{
		___UIInfoWindow_9 = value;
		Il2CppCodeGenWriteBarrier((&___UIInfoWindow_9), value);
	}

	inline static int32_t get_offset_of_playerController_10() { return static_cast<int32_t>(offsetof(MainCitySystem_t3182791129, ___playerController_10)); }
	inline PlayerController_t2064355688 * get_playerController_10() const { return ___playerController_10; }
	inline PlayerController_t2064355688 ** get_address_of_playerController_10() { return &___playerController_10; }
	inline void set_playerController_10(PlayerController_t2064355688 * value)
	{
		___playerController_10 = value;
		Il2CppCodeGenWriteBarrier((&___playerController_10), value);
	}

	inline static int32_t get_offset_of_CharShowcam_11() { return static_cast<int32_t>(offsetof(MainCitySystem_t3182791129, ___CharShowcam_11)); }
	inline Transform_t3600365921 * get_CharShowcam_11() const { return ___CharShowcam_11; }
	inline Transform_t3600365921 ** get_address_of_CharShowcam_11() { return &___CharShowcam_11; }
	inline void set_CharShowcam_11(Transform_t3600365921 * value)
	{
		___CharShowcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___CharShowcam_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINCITYSYSTEM_T3182791129_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (AudioService_t3306317363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[2] = 
{
	AudioService_t3306317363::get_offset_of_BGMAudioSource_5(),
	AudioService_t3306317363::get_offset_of_EffectAudioSource_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (NetService_t2879592265), -1, sizeof(NetService_t2879592265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2501[4] = 
{
	NetService_t2879592265::get_offset_of_client_5(),
	NetService_t2879592265::get_offset_of_msgQueue_6(),
	NetService_t2879592265_StaticFields::get_offset_of_obj_7(),
	NetService_t2879592265_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (ResourceService_t2066374285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2502[7] = 
{
	ResourceService_t2066374285::get_offset_of_OnSceceLoad_5(),
	ResourceService_t2066374285::get_offset_of_m_Audios_6(),
	ResourceService_t2066374285::get_offset_of_m_Surname_7(),
	ResourceService_t2066374285::get_offset_of_m_MaleName_8(),
	ResourceService_t2066374285::get_offset_of_m_FemaleName_9(),
	ResourceService_t2066374285::get_offset_of_m_MapDict_10(),
	ResourceService_t2066374285::get_offset_of_m_Player_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2503[3] = 
{
	U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840::get_offset_of_progress_0(),
	U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840::get_offset_of_OnLoaded_1(),
	U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840::get_offset_of_U24this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (LoginSystem_t1302229287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2505[2] = 
{
	LoginSystem_t1302229287::get_offset_of_LoginWindow_8(),
	LoginSystem_t1302229287::get_offset_of_UICreatWindow_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (MainCitySystem_t3182791129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[4] = 
{
	MainCitySystem_t3182791129::get_offset_of_MainCityWindow_8(),
	MainCitySystem_t3182791129::get_offset_of_UIInfoWindow_9(),
	MainCitySystem_t3182791129::get_offset_of_playerController_10(),
	MainCitySystem_t3182791129::get_offset_of_CharShowcam_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (U3CEnterMainCityU3Ec__AnonStorey0_t1476212760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[2] = 
{
	U3CEnterMainCityU3Ec__AnonStorey0_t1476212760::get_offset_of_mapConfigure_0(),
	U3CEnterMainCityU3Ec__AnonStorey0_t1476212760::get_offset_of_U24this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (UICreatWindow_t3575057914), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[1] = 
{
	UICreatWindow_t3575057914::get_offset_of_iptName_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (UIDynamicWindow_t887270669), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[4] = 
{
	UIDynamicWindow_t887270669::get_offset_of_TipsText_7(),
	UIDynamicWindow_t887270669::get_offset_of_TipsAnimation_8(),
	UIDynamicWindow_t887270669::get_offset_of_m_TipsQue_9(),
	UIDynamicWindow_t887270669::get_offset_of_isTipsShow_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (U3CAnimationDoneU3Ec__Iterator0_t2226895225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2510[5] = 
{
	U3CAnimationDoneU3Ec__Iterator0_t2226895225::get_offset_of_time_0(),
	U3CAnimationDoneU3Ec__Iterator0_t2226895225::get_offset_of_aniDone_1(),
	U3CAnimationDoneU3Ec__Iterator0_t2226895225::get_offset_of_U24current_2(),
	U3CAnimationDoneU3Ec__Iterator0_t2226895225::get_offset_of_U24disposing_3(),
	U3CAnimationDoneU3Ec__Iterator0_t2226895225::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (UIInfoWindow_t2497120935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[11] = 
{
	UIInfoWindow_t2497120935::get_offset_of_CharShowRaw_7(),
	UIInfoWindow_t2497120935::get_offset_of_NameAndLevelText_8(),
	UIInfoWindow_t2497120935::get_offset_of_ExpText_9(),
	UIInfoWindow_t2497120935::get_offset_of_ExpImage_10(),
	UIInfoWindow_t2497120935::get_offset_of_PowerText_11(),
	UIInfoWindow_t2497120935::get_offset_of_PowerImage_12(),
	UIInfoWindow_t2497120935::get_offset_of_FightText_13(),
	UIInfoWindow_t2497120935::get_offset_of_HPText_14(),
	UIInfoWindow_t2497120935::get_offset_of_DamageText_15(),
	UIInfoWindow_t2497120935::get_offset_of_DefenceText_16(),
	UIInfoWindow_t2497120935::get_offset_of_StartPos_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (UILoadingWindow_t3075121329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[6] = 
{
	UILoadingWindow_t3075121329::get_offset_of_m_TipsText_7(),
	UILoadingWindow_t3075121329::get_offset_of_m_ProgressText_8(),
	UILoadingWindow_t3075121329::get_offset_of_m_Container_9(),
	UILoadingWindow_t3075121329::get_offset_of_m_PointImage_10(),
	UILoadingWindow_t3075121329::get_offset_of_m_ProgressImage_11(),
	UILoadingWindow_t3075121329::get_offset_of_m_ContainerW_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (UILoginWindow_t2411734088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[4] = 
{
	UILoginWindow_t2411734088::get_offset_of_m_AccountField_7(),
	UILoginWindow_t2411734088::get_offset_of_m_PasswordField_8(),
	UILoginWindow_t2411734088::get_offset_of_m_NoticeBtn_9(),
	UILoginWindow_t2411734088::get_offset_of_EnterGameBtn_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (UIMainCityWindow_t2652100507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[16] = 
{
	UIMainCityWindow_t2652100507::get_offset_of_MenuAnimation_7(),
	UIMainCityWindow_t2652100507::get_offset_of_MenuBtn_8(),
	UIMainCityWindow_t2652100507::get_offset_of_LevelText_9(),
	UIMainCityWindow_t2652100507::get_offset_of_FlightText_10(),
	UIMainCityWindow_t2652100507::get_offset_of_PowerText_11(),
	UIMainCityWindow_t2652100507::get_offset_of_PowerImage_12(),
	UIMainCityWindow_t2652100507::get_offset_of_NameText_13(),
	UIMainCityWindow_t2652100507::get_offset_of_ExperienceText_14(),
	UIMainCityWindow_t2652100507::get_offset_of_expRect_15(),
	UIMainCityWindow_t2652100507::get_offset_of_TouchArea_16(),
	UIMainCityWindow_t2652100507::get_offset_of_TouchBGImage_17(),
	UIMainCityWindow_t2652100507::get_offset_of_TouchPointImage_18(),
	UIMainCityWindow_t2652100507::get_offset_of_IsExpand_19(),
	UIMainCityWindow_t2652100507::get_offset_of_defalutBGPos_20(),
	UIMainCityWindow_t2652100507::get_offset_of_startPos_21(),
	UIMainCityWindow_t2652100507::get_offset_of_pointDistance_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (Test_t650638817), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2515[2] = 
{
	Test_t650638817::get_offset_of_yRotation_4(),
	Test_t650638817::get_offset_of_Target_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
