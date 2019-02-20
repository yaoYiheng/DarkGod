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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AudioService
struct AudioService_t3306317363;
// BaseData`1<MapConfigures>
struct BaseData_1_t2861350217;
// BaseData`1<System.Object>
struct BaseData_1_t1702901093;
// ClientSession
struct ClientSession_t2495232797;
// Consts
struct Consts_t1749595333;
// GameRoot
struct GameRoot_t1219302553;
// Listener
struct Listener_t973447673;
// LoginSystem
struct LoginSystem_t1302229287;
// LoopAnimation
struct LoopAnimation_t570301632;
// MainCitySystem
struct MainCitySystem_t3182791129;
// MainCitySystem/<EnterMainCity>c__AnonStorey0
struct U3CEnterMainCityU3Ec__AnonStorey0_t1476212760;
// MapConfigures
struct MapConfigures_t4238555288;
// MapConfigures[]
struct MapConfiguresU5BU5D_t1306630665;
// NetService
struct NetService_t2879592265;
// PENet.PESession`1<PEProtocol.GameMessage>
struct PESession_1_t634736186;
// PENet.PESession`1<System.Object>
struct PESession_1_t675189681;
// PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>
struct PESocket_2_t4073481024;
// PENet.PESocket`2<System.Object,System.Object>
struct PESocket_2_t2746076900;
// PEProtocol.GameMessage
struct GameMessage_t3039652669;
// PEProtocol.GameMessage[]
struct GameMessageU5BU5D_t558454576;
// PEProtocol.LoginRequest
struct LoginRequest_t3434883421;
// PEProtocol.LoginRespond
struct LoginRespond_t4248255773;
// PEProtocol.PlayerData
struct PlayerData_t3254915629;
// PEProtocol.RenameRequest
struct RenameRequest_t1391400285;
// PEProtocol.RenameRespond
struct RenameRespond_t122899175;
// PlayerController
struct PlayerController_t2064355688;
// ResourceService
struct ResourceService_t2066374285;
// ResourceService/<AsyncLoadScene>c__AnonStorey0
struct U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840;
// Singleton`1<AudioService>
struct Singleton_1_t188196812;
// Singleton`1<GameRoot>
struct Singleton_1_t2396149298;
// Singleton`1<NetService>
struct Singleton_1_t4056439010;
// Singleton`1<ResourceService>
struct Singleton_1_t3243221030;
// Singleton`1<System.Object>
struct Singleton_1_t4256952909;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Action`1<UnityEngine.EventSystems.PointerEventData>
struct Action_1_t3980368687;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.Action`2<System.Object,System.Int32>
struct Action_2_t2340848427;
// System.Action`2<System.String,System.Int32>
struct Action_2_t778698442;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,MapConfigures,System.Collections.DictionaryEntry>
struct Transform_1_t910969509;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.AudioClip,System.Collections.DictionaryEntry>
struct Transform_1_t3288600416;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,UnityEngine.GameObject,System.Collections.DictionaryEntry>
struct Transform_1_t2179010862;
// System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>
struct Dictionary_2_t3127268619;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct Dictionary_2_t3466145964;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t898892918;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<ClientSession>
struct List_1_t3967307539;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t4142344393;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.Queue`1<PEProtocol.GameMessage>
struct Queue_1_t2885912163;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2926365658;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_t1693710183;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Random
struct Random_t108471755;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.XmlAttribute
struct XmlAttribute_t1173852259;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2316283784;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1073099671;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// SystemRoot`1<LoginSystem>
struct SystemRoot_1_t2075122454;
// SystemRoot`1<MainCitySystem>
struct SystemRoot_1_t3955684296;
// SystemRoot`1<System.Object>
struct SystemRoot_1_t3852999331;
// Test
struct Test_t650638817;
// Tools
struct Tools_t613821292;
// UICreatWindow
struct UICreatWindow_t3575057914;
// UIDynamicWindow
struct UIDynamicWindow_t887270669;
// UIDynamicWindow/<AnimationDone>c__Iterator0
struct U3CAnimationDoneU3Ec__Iterator0_t2226895225;
// UIInfoWindow
struct UIInfoWindow_t2497120935;
// UILoadingWindow
struct UILoadingWindow_t3075121329;
// UILoginWindow
struct UILoginWindow_t2411734088;
// UIMainCityWindow
struct UIMainCityWindow_t2652100507;
// UIWindowRoot
struct UIWindowRoot_t2933752109;
// UnityEngine.Animation
struct Animation_t3648466861;
// UnityEngine.AnimationClip
struct AnimationClip_t2318505987;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Button
struct Button_t4055032469;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t3046220461;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;

extern RuntimeClass* Action_1_t3980368687_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_2_t778698442_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* CMD_t3832546052_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Consts_t1749595333_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3127268619_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t3466145964_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t898892918_il2cpp_TypeInfo_var;
extern RuntimeClass* GameMessage_t3039652669_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* LoginRequest_t3434883421_il2cpp_TypeInfo_var;
extern RuntimeClass* MapConfigures_t4238555288_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NetService_t2879592265_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* PESocket_2_t4073481024_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t1693710183_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t2885912163_il2cpp_TypeInfo_var;
extern RuntimeClass* Random_t108471755_il2cpp_TypeInfo_var;
extern RuntimeClass* RenameRequest_t1391400285_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t188196812_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t2396149298_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t2479076032_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t3243221030_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t4056439010_il2cpp_TypeInfo_var;
extern RuntimeClass* Singleton_1_t64670578_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CAnimationDoneU3Ec__Iterator0_t2226895225_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CEnterMainCityU3Ec__AnonStorey0_t1476212760_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDocument_t2837193595_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlElement_t561603118_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1071670944;
extern String_t* _stringLiteral1119318821;
extern String_t* _stringLiteral1125707235;
extern String_t* _stringLiteral1167972383;
extern String_t* _stringLiteral1186888474;
extern String_t* _stringLiteral1232765888;
extern String_t* _stringLiteral132627211;
extern String_t* _stringLiteral1422226232;
extern String_t* _stringLiteral1549170980;
extern String_t* _stringLiteral1696464136;
extern String_t* _stringLiteral1873156398;
extern String_t* _stringLiteral2061933626;
extern String_t* _stringLiteral2077544886;
extern String_t* _stringLiteral209474577;
extern String_t* _stringLiteral212297809;
extern String_t* _stringLiteral2137372031;
extern String_t* _stringLiteral2147493199;
extern String_t* _stringLiteral2241765580;
extern String_t* _stringLiteral2315954190;
extern String_t* _stringLiteral2323074440;
extern String_t* _stringLiteral2328036797;
extern String_t* _stringLiteral2401556453;
extern String_t* _stringLiteral2444094392;
extern String_t* _stringLiteral2524060802;
extern String_t* _stringLiteral2630203384;
extern String_t* _stringLiteral2721545641;
extern String_t* _stringLiteral2741517327;
extern String_t* _stringLiteral2764797858;
extern String_t* _stringLiteral2808814373;
extern String_t* _stringLiteral2861292902;
extern String_t* _stringLiteral287134643;
extern String_t* _stringLiteral3107451843;
extern String_t* _stringLiteral3188740527;
extern String_t* _stringLiteral320356273;
extern String_t* _stringLiteral3450189712;
extern String_t* _stringLiteral3452614523;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3456546791;
extern String_t* _stringLiteral3509781335;
extern String_t* _stringLiteral3540633302;
extern String_t* _stringLiteral3706862587;
extern String_t* _stringLiteral3824027216;
extern String_t* _stringLiteral3837363785;
extern String_t* _stringLiteral3932804698;
extern String_t* _stringLiteral3963756750;
extern String_t* _stringLiteral3989844744;
extern String_t* _stringLiteral3992809584;
extern String_t* _stringLiteral4063765202;
extern String_t* _stringLiteral4072509719;
extern String_t* _stringLiteral4106635535;
extern String_t* _stringLiteral4122949500;
extern String_t* _stringLiteral412600963;
extern String_t* _stringLiteral419160293;
extern String_t* _stringLiteral4205598462;
extern String_t* _stringLiteral430578126;
extern String_t* _stringLiteral580789550;
extern String_t* _stringLiteral59834828;
extern String_t* _stringLiteral631709905;
extern String_t* _stringLiteral667794066;
extern String_t* _stringLiteral714695879;
extern String_t* _stringLiteral759101246;
extern String_t* _stringLiteral826933651;
extern String_t* _stringLiteral85363722;
extern String_t* _stringLiteral906327219;
extern String_t* _stringLiteral915894615;
extern String_t* _stringLiteral951102123;
extern String_t* _stringLiteral98096755;
extern const RuntimeMethod* Action_1_Invoke_m3141868843_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3630593146_RuntimeMethod_var;
extern const RuntimeMethod* Action_2__ctor_m313498710_RuntimeMethod_var;
extern const RuntimeMethod* BaseData_1__ctor_m2259500906_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1235394044_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3779660703_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1300232330_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2873266050_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2923550377_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1312219566_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m19875156_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m856528887_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m4152141881_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3346958548_RuntimeMethod_var;
extern const RuntimeMethod* LoginSystem_U3CEnterLoginU3Em__0_m898347876_RuntimeMethod_var;
extern const RuntimeMethod* NetService_U3CInitU3Em__0_m3835110316_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var;
extern const RuntimeMethod* PESession_1_SendMsg_m1443557105_RuntimeMethod_var;
extern const RuntimeMethod* PESession_1__ctor_m1149094845_RuntimeMethod_var;
extern const RuntimeMethod* PESocket_2_SetLog_m3690170799_RuntimeMethod_var;
extern const RuntimeMethod* PESocket_2_StartAsClient_m3560707570_RuntimeMethod_var;
extern const RuntimeMethod* PESocket_2__ctor_m1643435129_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m1924377868_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m313156729_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m2174174058_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m3056590024_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m383305675_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m4171879767_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m2387284005_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m741591674_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var;
extern const RuntimeMethod* Resources_Load_TisTextAsset_t3022178571_m724759995_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1__ctor_m1060664987_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1__ctor_m250225138_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1__ctor_m2723480633_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1__ctor_m2804516655_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m1023393517_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m1105072615_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m2437137635_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m3381088662_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m3962788585_RuntimeMethod_var;
extern const RuntimeMethod* Singleton_1_get_Instance_m4104515756_RuntimeMethod_var;
extern const RuntimeMethod* SystemRoot_1_Init_m1772934450_RuntimeMethod_var;
extern const RuntimeMethod* SystemRoot_1_Init_m912773789_RuntimeMethod_var;
extern const RuntimeMethod* SystemRoot_1__ctor_m344869798_RuntimeMethod_var;
extern const RuntimeMethod* SystemRoot_1__ctor_m846942004_RuntimeMethod_var;
extern const RuntimeMethod* U3CAnimationDoneU3Ec__Iterator0_Reset_m1726041594_RuntimeMethod_var;
extern const RuntimeMethod* U3CAsyncLoadSceneU3Ec__AnonStorey0_U3CU3Em__0_m3067507315_RuntimeMethod_var;
extern const RuntimeMethod* U3CEnterMainCityU3Ec__AnonStorey0_U3CU3Em__0_m142346156_RuntimeMethod_var;
extern const RuntimeMethod* UIDynamicWindow_U3CShowTipsU3Em__0_m3058052237_RuntimeMethod_var;
extern const RuntimeMethod* UIInfoWindow_U3CRegisterEventsU3Em__0_m442573536_RuntimeMethod_var;
extern const RuntimeMethod* UIInfoWindow_U3CRegisterEventsU3Em__1_m201352028_RuntimeMethod_var;
extern const RuntimeMethod* UIMainCityWindow_U3CRegisteTouchEventsU3Em__0_m793139840_RuntimeMethod_var;
extern const RuntimeMethod* UIMainCityWindow_U3CRegisteTouchEventsU3Em__1_m2864813875_RuntimeMethod_var;
extern const RuntimeMethod* UIMainCityWindow_U3CRegisteTouchEventsU3Em__2_m2358102889_RuntimeMethod_var;
extern const RuntimeMethod* UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612_RuntimeMethod_var;
extern const uint32_t AudioService_Init_m1729719964_MetadataUsageId;
extern const uint32_t AudioService_PlayBGMusic_m684665367_MetadataUsageId;
extern const uint32_t AudioService_PlayEffect_m3443281718_MetadataUsageId;
extern const uint32_t AudioService__ctor_m3644083228_MetadataUsageId;
extern const uint32_t ClientSession_OnConnected_m2454334940_MetadataUsageId;
extern const uint32_t ClientSession_OnDisConnected_m455781023_MetadataUsageId;
extern const uint32_t ClientSession_OnReciveMsg_m2904425533_MetadataUsageId;
extern const uint32_t ClientSession__ctor_m3650452727_MetadataUsageId;
extern const uint32_t Consts__cctor_m142380206_MetadataUsageId;
extern const uint32_t GameRoot_AddTips_m3871248750_MetadataUsageId;
extern const uint32_t GameRoot_ClearUI_m1148787738_MetadataUsageId;
extern const uint32_t GameRoot_PlayEffect_m2002588247_MetadataUsageId;
extern const uint32_t GameRoot_Start_m1398674756_MetadataUsageId;
extern const uint32_t GameRoot__ctor_m1525162918_MetadataUsageId;
extern const uint32_t Listener_OnDrag_m1412363767_MetadataUsageId;
extern const uint32_t Listener_OnPointerDown_m3287325241_MetadataUsageId;
extern const uint32_t Listener_OnPointerUp_m1286960215_MetadataUsageId;
extern const uint32_t LoginSystem_EnterLogin_m692613556_MetadataUsageId;
extern const uint32_t LoginSystem_Init_m2356485445_MetadataUsageId;
extern const uint32_t LoginSystem_RenameRespond_m2316697537_MetadataUsageId;
extern const uint32_t LoginSystem_ReqLogin_m2485907898_MetadataUsageId;
extern const uint32_t LoginSystem_U3CEnterLoginU3Em__0_m898347876_MetadataUsageId;
extern const uint32_t LoginSystem__ctor_m1675726064_MetadataUsageId;
extern const uint32_t LoopAnimation_Awake_m644748016_MetadataUsageId;
extern const uint32_t LoopAnimation_PlayAnimation_m423179822_MetadataUsageId;
extern const uint32_t LoopAnimation_Start_m2392886314_MetadataUsageId;
extern const uint32_t MainCitySystem_EnterMainCity_m703939264_MetadataUsageId;
extern const uint32_t MainCitySystem_Init_m969370344_MetadataUsageId;
extern const uint32_t MainCitySystem_LoadPrefab_m2605182113_MetadataUsageId;
extern const uint32_t MainCitySystem_MoveCharator_m3672229562_MetadataUsageId;
extern const uint32_t MainCitySystem_RotateCamera_m629685191_MetadataUsageId;
extern const uint32_t MainCitySystem_ShowInfoWindow_m4121297113_MetadataUsageId;
extern const uint32_t MainCitySystem__ctor_m159781211_MetadataUsageId;
extern const uint32_t MapConfigures__ctor_m2426975784_MetadataUsageId;
extern const uint32_t NetService_AddMessage_m487009610_MetadataUsageId;
extern const uint32_t NetService_HandleMessage_m982056862_MetadataUsageId;
extern const uint32_t NetService_Init_m3288727343_MetadataUsageId;
extern const uint32_t NetService_SendMessages_m3951671737_MetadataUsageId;
extern const uint32_t NetService_U3CInitU3Em__0_m3835110316_MetadataUsageId;
extern const uint32_t NetService_Update_m1183946907_MetadataUsageId;
extern const uint32_t NetService__cctor_m1915974662_MetadataUsageId;
extern const uint32_t NetService__ctor_m1501005763_MetadataUsageId;
extern const uint32_t PlayerController_CameraFollow_m316258585_MetadataUsageId;
extern const uint32_t PlayerController_InitCharator_m3477137428_MetadataUsageId;
extern const uint32_t PlayerController_Moving_m2764425608_MetadataUsageId;
extern const uint32_t PlayerController_UpdateDirection_m183858564_MetadataUsageId;
extern const uint32_t PlayerController_UpdateMixBlend_m2291897277_MetadataUsageId;
extern const uint32_t PlayerController_set_Direction_m3826813410_MetadataUsageId;
extern const uint32_t ResourceService_AsyncLoadScene_m3641494555_MetadataUsageId;
extern const uint32_t ResourceService_GetConfigures_m1819441321_MetadataUsageId;
extern const uint32_t ResourceService_GetPlayer_m2440938853_MetadataUsageId;
extern const uint32_t ResourceService_GetRandomName_m3616470161_MetadataUsageId;
extern const uint32_t ResourceService_Init_m1934196099_MetadataUsageId;
extern const uint32_t ResourceService_LoadClip_m19073935_MetadataUsageId;
extern const uint32_t ResourceService_LoadFromFile_m3276529980_MetadataUsageId;
extern const uint32_t ResourceService_LoadMapConfigure_m3296367951_MetadataUsageId;
extern const uint32_t ResourceService__ctor_m1344387670_MetadataUsageId;
extern const uint32_t Test_Update_m782915918_MetadataUsageId;
extern const uint32_t Tools_RandomInt_m425305703_MetadataUsageId;
extern const uint32_t U3CAnimationDoneU3Ec__Iterator0_MoveNext_m2616830004_MetadataUsageId;
extern const uint32_t U3CAnimationDoneU3Ec__Iterator0_Reset_m1726041594_MetadataUsageId;
extern const uint32_t U3CAsyncLoadSceneU3Ec__AnonStorey0_U3CU3Em__0_m3067507315_MetadataUsageId;
extern const uint32_t U3CEnterMainCityU3Ec__AnonStorey0_U3CU3Em__0_m142346156_MetadataUsageId;
extern const uint32_t UICreatWindow_InitUIwindow_m393514560_MetadataUsageId;
extern const uint32_t UICreatWindow_OnEnterGameClick_m3592079662_MetadataUsageId;
extern const uint32_t UICreatWindow_OnRandomButtonClick_m3395607769_MetadataUsageId;
extern const uint32_t UIDynamicWindow_AddTips_m457295066_MetadataUsageId;
extern const uint32_t UIDynamicWindow_AnimationDone_m4080457287_MetadataUsageId;
extern const uint32_t UIDynamicWindow_InitUIwindow_m275278780_MetadataUsageId;
extern const uint32_t UIDynamicWindow_ShowTips_m2451846051_MetadataUsageId;
extern const uint32_t UIDynamicWindow_Update_m2254735012_MetadataUsageId;
extern const uint32_t UIDynamicWindow__ctor_m696654532_MetadataUsageId;
extern const uint32_t UIInfoWindow_HideInfoWindow_m1152280344_MetadataUsageId;
extern const uint32_t UIInfoWindow_RegisterEvents_m627132418_MetadataUsageId;
extern const uint32_t UIInfoWindow_U3CRegisterEventsU3Em__1_m201352028_MetadataUsageId;
extern const uint32_t UIInfoWindow_UpdateUI_m3463701794_MetadataUsageId;
extern const uint32_t UILoadingWindow_Awake_m443660287_MetadataUsageId;
extern const uint32_t UILoadingWindow_InitUIwindow_m1878530741_MetadataUsageId;
extern const uint32_t UILoadingWindow_UpdateUI_m1243689125_MetadataUsageId;
extern const uint32_t UILoginWindow_InitUIwindow_m990358586_MetadataUsageId;
extern const uint32_t UILoginWindow_OnEnterClick_m1025767136_MetadataUsageId;
extern const uint32_t UILoginWindow_OnNoticeClick_m2815904919_MetadataUsageId;
extern const uint32_t UIMainCityWindow_InitUIwindow_m2996559092_MetadataUsageId;
extern const uint32_t UIMainCityWindow_OnHeadClick_m3745259107_MetadataUsageId;
extern const uint32_t UIMainCityWindow_OnMenuBtnClick_m508289125_MetadataUsageId;
extern const uint32_t UIMainCityWindow_RegisteTouchEvents_m1139448742_MetadataUsageId;
extern const uint32_t UIMainCityWindow_U3CRegisteTouchEventsU3Em__0_m793139840_MetadataUsageId;
extern const uint32_t UIMainCityWindow_U3CRegisteTouchEventsU3Em__1_m2864813875_MetadataUsageId;
extern const uint32_t UIMainCityWindow_U3CRegisteTouchEventsU3Em__2_m2358102889_MetadataUsageId;
extern const uint32_t UIMainCityWindow_UpdateUI_m1491293131_MetadataUsageId;
extern const uint32_t UIWindowRoot_InitUIwindow_m4047047953_MetadataUsageId;
extern const uint32_t UIWindowRoot_OnClickDown_m3587515208_MetadataUsageId;
extern const uint32_t UIWindowRoot_OnClickUp_m587039422_MetadataUsageId;
extern const uint32_t UIWindowRoot_OnDrag_m3207549021_MetadataUsageId;
extern const uint32_t UIWindowRoot_UpdateText_m1362930005_MetadataUsageId;
extern const uint32_t UIWindowRoot_UpdateText_m1796495085_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef BASEDATA_1_T2861350217_H
#define BASEDATA_1_T2861350217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseData`1<MapConfigures>
struct  BaseData_1_t2861350217  : public RuntimeObject
{
public:
	// System.Int32 BaseData`1::ID
	int32_t ___ID_0;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(BaseData_1_t2861350217, ___ID_0)); }
	inline int32_t get_ID_0() const { return ___ID_0; }
	inline int32_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int32_t value)
	{
		___ID_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDATA_1_T2861350217_H
#ifndef CONSTS_T1749595333_H
#define CONSTS_T1749595333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595333  : public RuntimeObject
{
public:

public:
};

struct Consts_t1749595333_StaticFields
{
public:
	// System.String Consts::AudioPath
	String_t* ___AudioPath_0;
	// System.String Consts::RdNamePath
	String_t* ___RdNamePath_1;
	// System.String Consts::MapCfgPath
	String_t* ___MapCfgPath_2;
	// System.String Consts::PrefabPath
	String_t* ___PrefabPath_3;

public:
	inline static int32_t get_offset_of_AudioPath_0() { return static_cast<int32_t>(offsetof(Consts_t1749595333_StaticFields, ___AudioPath_0)); }
	inline String_t* get_AudioPath_0() const { return ___AudioPath_0; }
	inline String_t** get_address_of_AudioPath_0() { return &___AudioPath_0; }
	inline void set_AudioPath_0(String_t* value)
	{
		___AudioPath_0 = value;
		Il2CppCodeGenWriteBarrier((&___AudioPath_0), value);
	}

	inline static int32_t get_offset_of_RdNamePath_1() { return static_cast<int32_t>(offsetof(Consts_t1749595333_StaticFields, ___RdNamePath_1)); }
	inline String_t* get_RdNamePath_1() const { return ___RdNamePath_1; }
	inline String_t** get_address_of_RdNamePath_1() { return &___RdNamePath_1; }
	inline void set_RdNamePath_1(String_t* value)
	{
		___RdNamePath_1 = value;
		Il2CppCodeGenWriteBarrier((&___RdNamePath_1), value);
	}

	inline static int32_t get_offset_of_MapCfgPath_2() { return static_cast<int32_t>(offsetof(Consts_t1749595333_StaticFields, ___MapCfgPath_2)); }
	inline String_t* get_MapCfgPath_2() const { return ___MapCfgPath_2; }
	inline String_t** get_address_of_MapCfgPath_2() { return &___MapCfgPath_2; }
	inline void set_MapCfgPath_2(String_t* value)
	{
		___MapCfgPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___MapCfgPath_2), value);
	}

	inline static int32_t get_offset_of_PrefabPath_3() { return static_cast<int32_t>(offsetof(Consts_t1749595333_StaticFields, ___PrefabPath_3)); }
	inline String_t* get_PrefabPath_3() const { return ___PrefabPath_3; }
	inline String_t** get_address_of_PrefabPath_3() { return &___PrefabPath_3; }
	inline void set_PrefabPath_3(String_t* value)
	{
		___PrefabPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___PrefabPath_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595333_H
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
#ifndef PEMSG_T3742698931_H
#define PEMSG_T3742698931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PENet.PEMsg
struct  PEMsg_t3742698931  : public RuntimeObject
{
public:
	// System.Int32 PENet.PEMsg::seq
	int32_t ___seq_0;
	// System.Int32 PENet.PEMsg::cmd
	int32_t ___cmd_1;
	// System.Int32 PENet.PEMsg::err
	int32_t ___err_2;

public:
	inline static int32_t get_offset_of_seq_0() { return static_cast<int32_t>(offsetof(PEMsg_t3742698931, ___seq_0)); }
	inline int32_t get_seq_0() const { return ___seq_0; }
	inline int32_t* get_address_of_seq_0() { return &___seq_0; }
	inline void set_seq_0(int32_t value)
	{
		___seq_0 = value;
	}

	inline static int32_t get_offset_of_cmd_1() { return static_cast<int32_t>(offsetof(PEMsg_t3742698931, ___cmd_1)); }
	inline int32_t get_cmd_1() const { return ___cmd_1; }
	inline int32_t* get_address_of_cmd_1() { return &___cmd_1; }
	inline void set_cmd_1(int32_t value)
	{
		___cmd_1 = value;
	}

	inline static int32_t get_offset_of_err_2() { return static_cast<int32_t>(offsetof(PEMsg_t3742698931, ___err_2)); }
	inline int32_t get_err_2() const { return ___err_2; }
	inline int32_t* get_address_of_err_2() { return &___err_2; }
	inline void set_err_2(int32_t value)
	{
		___err_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEMSG_T3742698931_H
#ifndef PESESSION_1_T634736186_H
#define PESESSION_1_T634736186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PENet.PESession`1<PEProtocol.GameMessage>
struct  PESession_1_t634736186  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket PENet.PESession`1::skt
	Socket_t1119025450 * ___skt_0;
	// System.Action PENet.PESession`1::closeCB
	Action_t1264377477 * ___closeCB_1;

public:
	inline static int32_t get_offset_of_skt_0() { return static_cast<int32_t>(offsetof(PESession_1_t634736186, ___skt_0)); }
	inline Socket_t1119025450 * get_skt_0() const { return ___skt_0; }
	inline Socket_t1119025450 ** get_address_of_skt_0() { return &___skt_0; }
	inline void set_skt_0(Socket_t1119025450 * value)
	{
		___skt_0 = value;
		Il2CppCodeGenWriteBarrier((&___skt_0), value);
	}

	inline static int32_t get_offset_of_closeCB_1() { return static_cast<int32_t>(offsetof(PESession_1_t634736186, ___closeCB_1)); }
	inline Action_t1264377477 * get_closeCB_1() const { return ___closeCB_1; }
	inline Action_t1264377477 ** get_address_of_closeCB_1() { return &___closeCB_1; }
	inline void set_closeCB_1(Action_t1264377477 * value)
	{
		___closeCB_1 = value;
		Il2CppCodeGenWriteBarrier((&___closeCB_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PESESSION_1_T634736186_H
#ifndef PESOCKET_2_T4073481024_H
#define PESOCKET_2_T4073481024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>
struct  PESocket_2_t4073481024  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket PENet.PESocket`2::skt
	Socket_t1119025450 * ___skt_0;
	// T PENet.PESocket`2::session
	ClientSession_t2495232797 * ___session_1;
	// System.Int32 PENet.PESocket`2::backlog
	int32_t ___backlog_2;
	// System.Collections.Generic.List`1<T> PENet.PESocket`2::sessionLst
	List_1_t3967307539 * ___sessionLst_3;

public:
	inline static int32_t get_offset_of_skt_0() { return static_cast<int32_t>(offsetof(PESocket_2_t4073481024, ___skt_0)); }
	inline Socket_t1119025450 * get_skt_0() const { return ___skt_0; }
	inline Socket_t1119025450 ** get_address_of_skt_0() { return &___skt_0; }
	inline void set_skt_0(Socket_t1119025450 * value)
	{
		___skt_0 = value;
		Il2CppCodeGenWriteBarrier((&___skt_0), value);
	}

	inline static int32_t get_offset_of_session_1() { return static_cast<int32_t>(offsetof(PESocket_2_t4073481024, ___session_1)); }
	inline ClientSession_t2495232797 * get_session_1() const { return ___session_1; }
	inline ClientSession_t2495232797 ** get_address_of_session_1() { return &___session_1; }
	inline void set_session_1(ClientSession_t2495232797 * value)
	{
		___session_1 = value;
		Il2CppCodeGenWriteBarrier((&___session_1), value);
	}

	inline static int32_t get_offset_of_backlog_2() { return static_cast<int32_t>(offsetof(PESocket_2_t4073481024, ___backlog_2)); }
	inline int32_t get_backlog_2() const { return ___backlog_2; }
	inline int32_t* get_address_of_backlog_2() { return &___backlog_2; }
	inline void set_backlog_2(int32_t value)
	{
		___backlog_2 = value;
	}

	inline static int32_t get_offset_of_sessionLst_3() { return static_cast<int32_t>(offsetof(PESocket_2_t4073481024, ___sessionLst_3)); }
	inline List_1_t3967307539 * get_sessionLst_3() const { return ___sessionLst_3; }
	inline List_1_t3967307539 ** get_address_of_sessionLst_3() { return &___sessionLst_3; }
	inline void set_sessionLst_3(List_1_t3967307539 * value)
	{
		___sessionLst_3 = value;
		Il2CppCodeGenWriteBarrier((&___sessionLst_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PESOCKET_2_T4073481024_H
#ifndef LOGINREQUEST_T3434883421_H
#define LOGINREQUEST_T3434883421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.LoginRequest
struct  LoginRequest_t3434883421  : public RuntimeObject
{
public:
	// System.String PEProtocol.LoginRequest::Account
	String_t* ___Account_0;
	// System.String PEProtocol.LoginRequest::Password
	String_t* ___Password_1;

public:
	inline static int32_t get_offset_of_Account_0() { return static_cast<int32_t>(offsetof(LoginRequest_t3434883421, ___Account_0)); }
	inline String_t* get_Account_0() const { return ___Account_0; }
	inline String_t** get_address_of_Account_0() { return &___Account_0; }
	inline void set_Account_0(String_t* value)
	{
		___Account_0 = value;
		Il2CppCodeGenWriteBarrier((&___Account_0), value);
	}

	inline static int32_t get_offset_of_Password_1() { return static_cast<int32_t>(offsetof(LoginRequest_t3434883421, ___Password_1)); }
	inline String_t* get_Password_1() const { return ___Password_1; }
	inline String_t** get_address_of_Password_1() { return &___Password_1; }
	inline void set_Password_1(String_t* value)
	{
		___Password_1 = value;
		Il2CppCodeGenWriteBarrier((&___Password_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINREQUEST_T3434883421_H
#ifndef LOGINRESPOND_T4248255773_H
#define LOGINRESPOND_T4248255773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.LoginRespond
struct  LoginRespond_t4248255773  : public RuntimeObject
{
public:
	// PEProtocol.PlayerData PEProtocol.LoginRespond::playerData
	PlayerData_t3254915629 * ___playerData_0;

public:
	inline static int32_t get_offset_of_playerData_0() { return static_cast<int32_t>(offsetof(LoginRespond_t4248255773, ___playerData_0)); }
	inline PlayerData_t3254915629 * get_playerData_0() const { return ___playerData_0; }
	inline PlayerData_t3254915629 ** get_address_of_playerData_0() { return &___playerData_0; }
	inline void set_playerData_0(PlayerData_t3254915629 * value)
	{
		___playerData_0 = value;
		Il2CppCodeGenWriteBarrier((&___playerData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINRESPOND_T4248255773_H
#ifndef PLAYERDATA_T3254915629_H
#define PLAYERDATA_T3254915629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.PlayerData
struct  PlayerData_t3254915629  : public RuntimeObject
{
public:
	// System.Int32 PEProtocol.PlayerData::id
	int32_t ___id_0;
	// System.String PEProtocol.PlayerData::name
	String_t* ___name_1;
	// System.Int32 PEProtocol.PlayerData::level
	int32_t ___level_2;
	// System.Int32 PEProtocol.PlayerData::experience
	int32_t ___experience_3;
	// System.Int32 PEProtocol.PlayerData::power
	int32_t ___power_4;
	// System.Int32 PEProtocol.PlayerData::coin
	int32_t ___coin_5;
	// System.Int32 PEProtocol.PlayerData::diamond
	int32_t ___diamond_6;
	// System.Int32 PEProtocol.PlayerData::hp
	int32_t ___hp_7;
	// System.Int32 PEProtocol.PlayerData::ad
	int32_t ___ad_8;
	// System.Int32 PEProtocol.PlayerData::ap
	int32_t ___ap_9;
	// System.Int32 PEProtocol.PlayerData::addef
	int32_t ___addef_10;
	// System.Int32 PEProtocol.PlayerData::apdef
	int32_t ___apdef_11;
	// System.Int32 PEProtocol.PlayerData::dodge
	int32_t ___dodge_12;
	// System.Int32 PEProtocol.PlayerData::pierce
	int32_t ___pierce_13;
	// System.Int32 PEProtocol.PlayerData::critical
	int32_t ___critical_14;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_level_2() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___level_2)); }
	inline int32_t get_level_2() const { return ___level_2; }
	inline int32_t* get_address_of_level_2() { return &___level_2; }
	inline void set_level_2(int32_t value)
	{
		___level_2 = value;
	}

	inline static int32_t get_offset_of_experience_3() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___experience_3)); }
	inline int32_t get_experience_3() const { return ___experience_3; }
	inline int32_t* get_address_of_experience_3() { return &___experience_3; }
	inline void set_experience_3(int32_t value)
	{
		___experience_3 = value;
	}

	inline static int32_t get_offset_of_power_4() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___power_4)); }
	inline int32_t get_power_4() const { return ___power_4; }
	inline int32_t* get_address_of_power_4() { return &___power_4; }
	inline void set_power_4(int32_t value)
	{
		___power_4 = value;
	}

	inline static int32_t get_offset_of_coin_5() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___coin_5)); }
	inline int32_t get_coin_5() const { return ___coin_5; }
	inline int32_t* get_address_of_coin_5() { return &___coin_5; }
	inline void set_coin_5(int32_t value)
	{
		___coin_5 = value;
	}

	inline static int32_t get_offset_of_diamond_6() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___diamond_6)); }
	inline int32_t get_diamond_6() const { return ___diamond_6; }
	inline int32_t* get_address_of_diamond_6() { return &___diamond_6; }
	inline void set_diamond_6(int32_t value)
	{
		___diamond_6 = value;
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___hp_7)); }
	inline int32_t get_hp_7() const { return ___hp_7; }
	inline int32_t* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(int32_t value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_ad_8() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___ad_8)); }
	inline int32_t get_ad_8() const { return ___ad_8; }
	inline int32_t* get_address_of_ad_8() { return &___ad_8; }
	inline void set_ad_8(int32_t value)
	{
		___ad_8 = value;
	}

	inline static int32_t get_offset_of_ap_9() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___ap_9)); }
	inline int32_t get_ap_9() const { return ___ap_9; }
	inline int32_t* get_address_of_ap_9() { return &___ap_9; }
	inline void set_ap_9(int32_t value)
	{
		___ap_9 = value;
	}

	inline static int32_t get_offset_of_addef_10() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___addef_10)); }
	inline int32_t get_addef_10() const { return ___addef_10; }
	inline int32_t* get_address_of_addef_10() { return &___addef_10; }
	inline void set_addef_10(int32_t value)
	{
		___addef_10 = value;
	}

	inline static int32_t get_offset_of_apdef_11() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___apdef_11)); }
	inline int32_t get_apdef_11() const { return ___apdef_11; }
	inline int32_t* get_address_of_apdef_11() { return &___apdef_11; }
	inline void set_apdef_11(int32_t value)
	{
		___apdef_11 = value;
	}

	inline static int32_t get_offset_of_dodge_12() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___dodge_12)); }
	inline int32_t get_dodge_12() const { return ___dodge_12; }
	inline int32_t* get_address_of_dodge_12() { return &___dodge_12; }
	inline void set_dodge_12(int32_t value)
	{
		___dodge_12 = value;
	}

	inline static int32_t get_offset_of_pierce_13() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___pierce_13)); }
	inline int32_t get_pierce_13() const { return ___pierce_13; }
	inline int32_t* get_address_of_pierce_13() { return &___pierce_13; }
	inline void set_pierce_13(int32_t value)
	{
		___pierce_13 = value;
	}

	inline static int32_t get_offset_of_critical_14() { return static_cast<int32_t>(offsetof(PlayerData_t3254915629, ___critical_14)); }
	inline int32_t get_critical_14() const { return ___critical_14; }
	inline int32_t* get_address_of_critical_14() { return &___critical_14; }
	inline void set_critical_14(int32_t value)
	{
		___critical_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERDATA_T3254915629_H
#ifndef RENAMEREQUEST_T1391400285_H
#define RENAMEREQUEST_T1391400285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.RenameRequest
struct  RenameRequest_t1391400285  : public RuntimeObject
{
public:
	// System.String PEProtocol.RenameRequest::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenameRequest_t1391400285, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENAMEREQUEST_T1391400285_H
#ifndef RENAMERESPOND_T122899175_H
#define RENAMERESPOND_T122899175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.RenameRespond
struct  RenameRespond_t122899175  : public RuntimeObject
{
public:
	// System.String PEProtocol.RenameRespond::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RenameRespond_t122899175, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENAMERESPOND_T122899175_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3127268619_H
#define DICTIONARY_2_T3127268619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>
struct  Dictionary_2_t3127268619  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	MapConfiguresU5BU5D_t1306630665* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___valueSlots_7)); }
	inline MapConfiguresU5BU5D_t1306630665* get_valueSlots_7() const { return ___valueSlots_7; }
	inline MapConfiguresU5BU5D_t1306630665** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(MapConfiguresU5BU5D_t1306630665* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3127268619_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t910969509 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3127268619_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t910969509 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t910969509 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t910969509 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3127268619_H
#ifndef DICTIONARY_2_T3466145964_H
#define DICTIONARY_2_T3466145964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>
struct  Dictionary_2_t3466145964  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	AudioClipU5BU5D_t143221404* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___valueSlots_7)); }
	inline AudioClipU5BU5D_t143221404* get_valueSlots_7() const { return ___valueSlots_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(AudioClipU5BU5D_t143221404* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3466145964_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3288600416 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3466145964_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3288600416 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3288600416 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3288600416 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3466145964_H
#ifndef DICTIONARY_2_T898892918_H
#define DICTIONARY_2_T898892918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct  Dictionary_2_t898892918  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	GameObjectU5BU5D_t3328599146* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___valueSlots_7)); }
	inline GameObjectU5BU5D_t3328599146* get_valueSlots_7() const { return ___valueSlots_7; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(GameObjectU5BU5D_t3328599146* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t898892918_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2179010862 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t898892918_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2179010862 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2179010862 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2179010862 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T898892918_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef QUEUE_1_T2885912163_H
#define QUEUE_1_T2885912163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<PEProtocol.GameMessage>
struct  Queue_1_t2885912163  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameMessageU5BU5D_t558454576* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t2885912163, ____array_0)); }
	inline GameMessageU5BU5D_t558454576* get__array_0() const { return ____array_0; }
	inline GameMessageU5BU5D_t558454576** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameMessageU5BU5D_t558454576* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t2885912163, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t2885912163, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t2885912163, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t2885912163, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T2885912163_H
#ifndef QUEUE_1_T1693710183_H
#define QUEUE_1_T1693710183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.String>
struct  Queue_1_t1693710183  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_t1281789340* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____array_0)); }
	inline StringU5BU5D_t1281789340* get__array_0() const { return ____array_0; }
	inline StringU5BU5D_t1281789340** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StringU5BU5D_t1281789340* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1693710183, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1693710183_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map44
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map44_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map44_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map44_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map44_4() const { return ___U3CU3Ef__switchU24map44_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map44_4() { return &___U3CU3Ef__switchU24map44_4; }
	inline void set_U3CU3Ef__switchU24map44_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map44_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map44_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef XMLNODELIST_T2551693786_H
#define XMLNODELIST_T2551693786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t2551693786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T2551693786_H
#ifndef TOOLS_T613821292_H
#define TOOLS_T613821292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tools
struct  Tools_t613821292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLS_T613821292_H
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef CLIENTSESSION_T2495232797_H
#define CLIENTSESSION_T2495232797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClientSession
struct  ClientSession_t2495232797  : public PESession_1_t634736186
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSION_T2495232797_H
#ifndef GAMEMESSAGE_T3039652669_H
#define GAMEMESSAGE_T3039652669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.GameMessage
struct  GameMessage_t3039652669  : public PEMsg_t3742698931
{
public:
	// PEProtocol.LoginRequest PEProtocol.GameMessage::loginRequest
	LoginRequest_t3434883421 * ___loginRequest_3;
	// PEProtocol.LoginRespond PEProtocol.GameMessage::loginRespond
	LoginRespond_t4248255773 * ___loginRespond_4;
	// PEProtocol.RenameRequest PEProtocol.GameMessage::renameRequest
	RenameRequest_t1391400285 * ___renameRequest_5;
	// PEProtocol.RenameRespond PEProtocol.GameMessage::renameRespond
	RenameRespond_t122899175 * ___renameRespond_6;

public:
	inline static int32_t get_offset_of_loginRequest_3() { return static_cast<int32_t>(offsetof(GameMessage_t3039652669, ___loginRequest_3)); }
	inline LoginRequest_t3434883421 * get_loginRequest_3() const { return ___loginRequest_3; }
	inline LoginRequest_t3434883421 ** get_address_of_loginRequest_3() { return &___loginRequest_3; }
	inline void set_loginRequest_3(LoginRequest_t3434883421 * value)
	{
		___loginRequest_3 = value;
		Il2CppCodeGenWriteBarrier((&___loginRequest_3), value);
	}

	inline static int32_t get_offset_of_loginRespond_4() { return static_cast<int32_t>(offsetof(GameMessage_t3039652669, ___loginRespond_4)); }
	inline LoginRespond_t4248255773 * get_loginRespond_4() const { return ___loginRespond_4; }
	inline LoginRespond_t4248255773 ** get_address_of_loginRespond_4() { return &___loginRespond_4; }
	inline void set_loginRespond_4(LoginRespond_t4248255773 * value)
	{
		___loginRespond_4 = value;
		Il2CppCodeGenWriteBarrier((&___loginRespond_4), value);
	}

	inline static int32_t get_offset_of_renameRequest_5() { return static_cast<int32_t>(offsetof(GameMessage_t3039652669, ___renameRequest_5)); }
	inline RenameRequest_t1391400285 * get_renameRequest_5() const { return ___renameRequest_5; }
	inline RenameRequest_t1391400285 ** get_address_of_renameRequest_5() { return &___renameRequest_5; }
	inline void set_renameRequest_5(RenameRequest_t1391400285 * value)
	{
		___renameRequest_5 = value;
		Il2CppCodeGenWriteBarrier((&___renameRequest_5), value);
	}

	inline static int32_t get_offset_of_renameRespond_6() { return static_cast<int32_t>(offsetof(GameMessage_t3039652669, ___renameRespond_6)); }
	inline RenameRespond_t122899175 * get_renameRespond_6() const { return ___renameRespond_6; }
	inline RenameRespond_t122899175 ** get_address_of_renameRespond_6() { return &___renameRespond_6; }
	inline void set_renameRespond_6(RenameRespond_t122899175 * value)
	{
		___renameRespond_6 = value;
		Il2CppCodeGenWriteBarrier((&___renameRespond_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMESSAGE_T3039652669_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef XMLATTRIBUTE_T1173852259_H
#define XMLATTRIBUTE_T1173852259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t1173852259  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t1073099671 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	RuntimeObject* ___schemaInfo_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___name_5)); }
	inline XmlNameEntry_t1073099671 * get_name_5() const { return ___name_5; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XmlNameEntry_t1073099671 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_isDefault_6() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___isDefault_6)); }
	inline bool get_isDefault_6() const { return ___isDefault_6; }
	inline bool* get_address_of_isDefault_6() { return &___isDefault_6; }
	inline void set_isDefault_6(bool value)
	{
		___isDefault_6 = value;
	}

	inline static int32_t get_offset_of_lastLinkedChild_7() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___lastLinkedChild_7)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_7() const { return ___lastLinkedChild_7; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_7() { return &___lastLinkedChild_7; }
	inline void set_lastLinkedChild_7(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_7 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_7), value);
	}

	inline static int32_t get_offset_of_schemaInfo_8() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___schemaInfo_8)); }
	inline RuntimeObject* get_schemaInfo_8() const { return ___schemaInfo_8; }
	inline RuntimeObject** get_address_of_schemaInfo_8() { return &___schemaInfo_8; }
	inline void set_schemaInfo_8(RuntimeObject* value)
	{
		___schemaInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTE_T1173852259_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.XmlAttribute System.Xml.XmlDocument::nsNodeXml
	XmlAttribute_t1173852259 * ___nsNodeXml_16;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_17;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_18;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_24;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_25;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_nsNodeXml_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nsNodeXml_16)); }
	inline XmlAttribute_t1173852259 * get_nsNodeXml_16() const { return ___nsNodeXml_16; }
	inline XmlAttribute_t1173852259 ** get_address_of_nsNodeXml_16() { return &___nsNodeXml_16; }
	inline void set_nsNodeXml_16(XmlAttribute_t1173852259 * value)
	{
		___nsNodeXml_16 = value;
		Il2CppCodeGenWriteBarrier((&___nsNodeXml_16), value);
	}

	inline static int32_t get_offset_of_schemas_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_17)); }
	inline XmlSchemaSet_t266093086 * get_schemas_17() const { return ___schemas_17; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_17() { return &___schemas_17; }
	inline void set_schemas_17(XmlSchemaSet_t266093086 * value)
	{
		___schemas_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_17), value);
	}

	inline static int32_t get_offset_of_schemaInfo_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_18)); }
	inline RuntimeObject* get_schemaInfo_18() const { return ___schemaInfo_18; }
	inline RuntimeObject** get_address_of_schemaInfo_18() { return &___schemaInfo_18; }
	inline void set_schemaInfo_18(RuntimeObject* value)
	{
		___schemaInfo_18 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_18), value);
	}

	inline static int32_t get_offset_of_loadMode_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_19)); }
	inline bool get_loadMode_19() const { return ___loadMode_19; }
	inline bool* get_address_of_loadMode_19() { return &___loadMode_19; }
	inline void set_loadMode_19(bool value)
	{
		___loadMode_19 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_20() const { return ___NodeChanged_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_20() { return &___NodeChanged_20; }
	inline void set_NodeChanged_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_20), value);
	}

	inline static int32_t get_offset_of_NodeChanging_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_21() const { return ___NodeChanging_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_21() { return &___NodeChanging_21; }
	inline void set_NodeChanging_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_21), value);
	}

	inline static int32_t get_offset_of_NodeInserted_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_22() const { return ___NodeInserted_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_22() { return &___NodeInserted_22; }
	inline void set_NodeInserted_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_22), value);
	}

	inline static int32_t get_offset_of_NodeInserting_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_23() const { return ___NodeInserting_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_23() { return &___NodeInserting_23; }
	inline void set_NodeInserting_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_24() const { return ___NodeRemoved_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_24() { return &___NodeRemoved_24; }
	inline void set_NodeRemoved_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_24), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_25() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_25)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_25() const { return ___NodeRemoving_25; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_25() { return &___NodeRemoving_25; }
	inline void set_NodeRemoving_25(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_25 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_25), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef LOGTYPE_T3384459201_H
#define LOGTYPE_T3384459201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LogType
struct  LogType_t3384459201 
{
public:
	// System.Int32 LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t3384459201, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T3384459201_H
#ifndef MAPCONFIGURES_T4238555288_H
#define MAPCONFIGURES_T4238555288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapConfigures
struct  MapConfigures_t4238555288  : public BaseData_1_t2861350217
{
public:
	// System.String MapConfigures::mapName
	String_t* ___mapName_1;
	// System.String MapConfigures::sceneName
	String_t* ___sceneName_2;
	// UnityEngine.Vector3 MapConfigures::mainCamPos
	Vector3_t3722313464  ___mainCamPos_3;
	// UnityEngine.Vector3 MapConfigures::mainCamRot
	Vector3_t3722313464  ___mainCamRot_4;
	// UnityEngine.Vector3 MapConfigures::playerBornPos
	Vector3_t3722313464  ___playerBornPos_5;
	// UnityEngine.Vector3 MapConfigures::playerBornRot
	Vector3_t3722313464  ___playerBornRot_6;

public:
	inline static int32_t get_offset_of_mapName_1() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___mapName_1)); }
	inline String_t* get_mapName_1() const { return ___mapName_1; }
	inline String_t** get_address_of_mapName_1() { return &___mapName_1; }
	inline void set_mapName_1(String_t* value)
	{
		___mapName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mapName_1), value);
	}

	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier((&___sceneName_2), value);
	}

	inline static int32_t get_offset_of_mainCamPos_3() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___mainCamPos_3)); }
	inline Vector3_t3722313464  get_mainCamPos_3() const { return ___mainCamPos_3; }
	inline Vector3_t3722313464 * get_address_of_mainCamPos_3() { return &___mainCamPos_3; }
	inline void set_mainCamPos_3(Vector3_t3722313464  value)
	{
		___mainCamPos_3 = value;
	}

	inline static int32_t get_offset_of_mainCamRot_4() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___mainCamRot_4)); }
	inline Vector3_t3722313464  get_mainCamRot_4() const { return ___mainCamRot_4; }
	inline Vector3_t3722313464 * get_address_of_mainCamRot_4() { return &___mainCamRot_4; }
	inline void set_mainCamRot_4(Vector3_t3722313464  value)
	{
		___mainCamRot_4 = value;
	}

	inline static int32_t get_offset_of_playerBornPos_5() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___playerBornPos_5)); }
	inline Vector3_t3722313464  get_playerBornPos_5() const { return ___playerBornPos_5; }
	inline Vector3_t3722313464 * get_address_of_playerBornPos_5() { return &___playerBornPos_5; }
	inline void set_playerBornPos_5(Vector3_t3722313464  value)
	{
		___playerBornPos_5 = value;
	}

	inline static int32_t get_offset_of_playerBornRot_6() { return static_cast<int32_t>(offsetof(MapConfigures_t4238555288, ___playerBornRot_6)); }
	inline Vector3_t3722313464  get_playerBornRot_6() const { return ___playerBornRot_6; }
	inline Vector3_t3722313464 * get_address_of_playerBornRot_6() { return &___playerBornRot_6; }
	inline void set_playerBornRot_6(Vector3_t3722313464  value)
	{
		___playerBornRot_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPCONFIGURES_T4238555288_H
#ifndef CMD_T3832546052_H
#define CMD_T3832546052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.CMD
struct  CMD_t3832546052 
{
public:
	// System.Int32 PEProtocol.CMD::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CMD_t3832546052, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CMD_T3832546052_H
#ifndef ERRORCODE_T1475889061_H
#define ERRORCODE_T1475889061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEProtocol.ErrorCode
struct  ErrorCode_t1475889061 
{
public:
	// System.Int32 PEProtocol.ErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ErrorCode_t1475889061, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_T1475889061_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef XMLELEMENT_T561603118_H
#define XMLELEMENT_T561603118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlElement
struct  XmlElement_t561603118  : public XmlLinkedNode_t1437094927
{
public:
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t2316283784 * ___attributes_6;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t1073099671 * ___name_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_8;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty_9;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	RuntimeObject* ___schemaInfo_10;

public:
	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___attributes_6)); }
	inline XmlAttributeCollection_t2316283784 * get_attributes_6() const { return ___attributes_6; }
	inline XmlAttributeCollection_t2316283784 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(XmlAttributeCollection_t2316283784 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___name_7)); }
	inline XmlNameEntry_t1073099671 * get_name_7() const { return ___name_7; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(XmlNameEntry_t1073099671 * value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_8), value);
	}

	inline static int32_t get_offset_of_isNotEmpty_9() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___isNotEmpty_9)); }
	inline bool get_isNotEmpty_9() const { return ___isNotEmpty_9; }
	inline bool* get_address_of_isNotEmpty_9() { return &___isNotEmpty_9; }
	inline void set_isNotEmpty_9(bool value)
	{
		___isNotEmpty_9 = value;
	}

	inline static int32_t get_offset_of_schemaInfo_10() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___schemaInfo_10)); }
	inline RuntimeObject* get_schemaInfo_10() const { return ___schemaInfo_10; }
	inline RuntimeObject** get_address_of_schemaInfo_10() { return &___schemaInfo_10; }
	inline void set_schemaInfo_10(RuntimeObject* value)
	{
		___schemaInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLELEMENT_T561603118_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef COLLISIONFLAGS_T1776808576_H
#define COLLISIONFLAGS_T1776808576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionFlags
struct  CollisionFlags_t1776808576 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionFlags_t1776808576, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONFLAGS_T1776808576_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef DRIVENTRANSFORMPROPERTIES_T3813433528_H
#define DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3813433528 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3813433528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENTRANSFORMPROPERTIES_T3813433528_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
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
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTANCHOR_T2035777396_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef AXIS_T3613393006_H
#define AXIS_T3613393006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Axis
struct  Axis_t3613393006 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t3613393006, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXIS_T3613393006_H
#ifndef CONSTRAINT_T814224393_H
#define CONSTRAINT_T814224393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Constraint
struct  Constraint_t814224393 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Constraint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Constraint_t814224393, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T814224393_H
#ifndef CORNER_T1493259673_H
#define CORNER_T1493259673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Corner
struct  Corner_t1493259673 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Corner::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Corner_t1493259673, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CORNER_T1493259673_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T1787303396_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1770400679_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T4214648469_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
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
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MOTION_T1110556653_H
#define MOTION_T1110556653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Motion
struct  Motion_t1110556653  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOTION_T1110556653_H
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T3980368687_H
#define ACTION_1_T3980368687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.EventSystems.PointerEventData>
struct  Action_1_t3980368687  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3980368687_H
#ifndef ACTION_2_T778698442_H
#define ACTION_2_T778698442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`2<System.String,System.Int32>
struct  Action_2_t778698442  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_2_T778698442_H
#ifndef ANIMATIONCLIP_T2318505987_H
#define ANIMATIONCLIP_T2318505987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationClip
struct  AnimationClip_t2318505987  : public Motion_t1110556653
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIP_T2318505987_H
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
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:
	// System.Int32 UnityEngine.Transform::<hierarchyCount>k__BackingField
	int32_t ___U3ChierarchyCountU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ChierarchyCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Transform_t3600365921, ___U3ChierarchyCountU3Ek__BackingField_4)); }
	inline int32_t get_U3ChierarchyCountU3Ek__BackingField_4() const { return ___U3ChierarchyCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3ChierarchyCountU3Ek__BackingField_4() { return &___U3ChierarchyCountU3Ek__BackingField_4; }
	inline void set_U3ChierarchyCountU3Ek__BackingField_4(int32_t value)
	{
		___U3ChierarchyCountU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
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
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:
	// UnityEngine.Object UnityEngine.RectTransform::<drivenByObject>k__BackingField
	Object_t631007953 * ___U3CdrivenByObjectU3Ek__BackingField_6;
	// UnityEngine.DrivenTransformProperties UnityEngine.RectTransform::<drivenProperties>k__BackingField
	int32_t ___U3CdrivenPropertiesU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CdrivenByObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenByObjectU3Ek__BackingField_6)); }
	inline Object_t631007953 * get_U3CdrivenByObjectU3Ek__BackingField_6() const { return ___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline Object_t631007953 ** get_address_of_U3CdrivenByObjectU3Ek__BackingField_6() { return &___U3CdrivenByObjectU3Ek__BackingField_6; }
	inline void set_U3CdrivenByObjectU3Ek__BackingField_6(Object_t631007953 * value)
	{
		___U3CdrivenByObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdrivenByObjectU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025, ___U3CdrivenPropertiesU3Ek__BackingField_7)); }
	inline int32_t get_U3CdrivenPropertiesU3Ek__BackingField_7() const { return ___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CdrivenPropertiesU3Ek__BackingField_7() { return &___U3CdrivenPropertiesU3Ek__BackingField_7; }
	inline void set_U3CdrivenPropertiesU3Ek__BackingField_7(int32_t value)
	{
		___U3CdrivenPropertiesU3Ek__BackingField_7 = value;
	}
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_5;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_5() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_5)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_5() const { return ___reapplyDrivenProperties_5; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_5() { return &___reapplyDrivenProperties_5; }
	inline void set_reapplyDrivenProperties_5(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_5 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef LISTENER_T973447673_H
#define LISTENER_T973447673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Listener
struct  Listener_t973447673  : public MonoBehaviour_t3962482529
{
public:
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> Listener::onClickDown
	Action_1_t3980368687 * ___onClickDown_4;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> Listener::onClickUp
	Action_1_t3980368687 * ___onClickUp_5;
	// System.Action`1<UnityEngine.EventSystems.PointerEventData> Listener::onDrag
	Action_1_t3980368687 * ___onDrag_6;

public:
	inline static int32_t get_offset_of_onClickDown_4() { return static_cast<int32_t>(offsetof(Listener_t973447673, ___onClickDown_4)); }
	inline Action_1_t3980368687 * get_onClickDown_4() const { return ___onClickDown_4; }
	inline Action_1_t3980368687 ** get_address_of_onClickDown_4() { return &___onClickDown_4; }
	inline void set_onClickDown_4(Action_1_t3980368687 * value)
	{
		___onClickDown_4 = value;
		Il2CppCodeGenWriteBarrier((&___onClickDown_4), value);
	}

	inline static int32_t get_offset_of_onClickUp_5() { return static_cast<int32_t>(offsetof(Listener_t973447673, ___onClickUp_5)); }
	inline Action_1_t3980368687 * get_onClickUp_5() const { return ___onClickUp_5; }
	inline Action_1_t3980368687 ** get_address_of_onClickUp_5() { return &___onClickUp_5; }
	inline void set_onClickUp_5(Action_1_t3980368687 * value)
	{
		___onClickUp_5 = value;
		Il2CppCodeGenWriteBarrier((&___onClickUp_5), value);
	}

	inline static int32_t get_offset_of_onDrag_6() { return static_cast<int32_t>(offsetof(Listener_t973447673, ___onDrag_6)); }
	inline Action_1_t3980368687 * get_onDrag_6() const { return ___onDrag_6; }
	inline Action_1_t3980368687 ** get_address_of_onDrag_6() { return &___onDrag_6; }
	inline void set_onDrag_6(Action_1_t3980368687 * value)
	{
		___onDrag_6 = value;
		Il2CppCodeGenWriteBarrier((&___onDrag_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENER_T973447673_H
#ifndef LOOPANIMATION_T570301632_H
#define LOOPANIMATION_T570301632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoopAnimation
struct  LoopAnimation_t570301632  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation LoopAnimation::m_Animation
	Animation_t3648466861 * ___m_Animation_4;

public:
	inline static int32_t get_offset_of_m_Animation_4() { return static_cast<int32_t>(offsetof(LoopAnimation_t570301632, ___m_Animation_4)); }
	inline Animation_t3648466861 * get_m_Animation_4() const { return ___m_Animation_4; }
	inline Animation_t3648466861 ** get_address_of_m_Animation_4() { return &___m_Animation_4; }
	inline void set_m_Animation_4(Animation_t3648466861 * value)
	{
		___m_Animation_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Animation_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOOPANIMATION_T570301632_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PlayerController::animator
	Animator_t434523843 * ___animator_4;
	// UnityEngine.CharacterController PlayerController::character
	CharacterController_t1138636865 * ___character_5;
	// UnityEngine.Camera PlayerController::cam
	Camera_t4157153871 * ___cam_6;
	// System.Boolean PlayerController::isMoving
	bool ___isMoving_7;
	// UnityEngine.Vector2 PlayerController::direction
	Vector2_t2156229523  ___direction_8;
	// UnityEngine.Vector3 PlayerController::CamOffset
	Vector3_t3722313464  ___CamOffset_9;
	// System.Single PlayerController::targetBlend
	float ___targetBlend_10;
	// System.Single PlayerController::currentBlend
	float ___currentBlend_11;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___animator_4)); }
	inline Animator_t434523843 * get_animator_4() const { return ___animator_4; }
	inline Animator_t434523843 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t434523843 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((&___animator_4), value);
	}

	inline static int32_t get_offset_of_character_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___character_5)); }
	inline CharacterController_t1138636865 * get_character_5() const { return ___character_5; }
	inline CharacterController_t1138636865 ** get_address_of_character_5() { return &___character_5; }
	inline void set_character_5(CharacterController_t1138636865 * value)
	{
		___character_5 = value;
		Il2CppCodeGenWriteBarrier((&___character_5), value);
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___cam_6)); }
	inline Camera_t4157153871 * get_cam_6() const { return ___cam_6; }
	inline Camera_t4157153871 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(Camera_t4157153871 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((&___cam_6), value);
	}

	inline static int32_t get_offset_of_isMoving_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isMoving_7)); }
	inline bool get_isMoving_7() const { return ___isMoving_7; }
	inline bool* get_address_of_isMoving_7() { return &___isMoving_7; }
	inline void set_isMoving_7(bool value)
	{
		___isMoving_7 = value;
	}

	inline static int32_t get_offset_of_direction_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___direction_8)); }
	inline Vector2_t2156229523  get_direction_8() const { return ___direction_8; }
	inline Vector2_t2156229523 * get_address_of_direction_8() { return &___direction_8; }
	inline void set_direction_8(Vector2_t2156229523  value)
	{
		___direction_8 = value;
	}

	inline static int32_t get_offset_of_CamOffset_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___CamOffset_9)); }
	inline Vector3_t3722313464  get_CamOffset_9() const { return ___CamOffset_9; }
	inline Vector3_t3722313464 * get_address_of_CamOffset_9() { return &___CamOffset_9; }
	inline void set_CamOffset_9(Vector3_t3722313464  value)
	{
		___CamOffset_9 = value;
	}

	inline static int32_t get_offset_of_targetBlend_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___targetBlend_10)); }
	inline float get_targetBlend_10() const { return ___targetBlend_10; }
	inline float* get_address_of_targetBlend_10() { return &___targetBlend_10; }
	inline void set_targetBlend_10(float value)
	{
		___targetBlend_10 = value;
	}

	inline static int32_t get_offset_of_currentBlend_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___currentBlend_11)); }
	inline float get_currentBlend_11() const { return ___currentBlend_11; }
	inline float* get_address_of_currentBlend_11() { return &___currentBlend_11; }
	inline void set_currentBlend_11(float value)
	{
		___currentBlend_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
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
#ifndef SINGLETON_1_T2396149298_H
#define SINGLETON_1_T2396149298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<GameRoot>
struct  Singleton_1_t2396149298  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Singleton_1_t2396149298_StaticFields
{
public:
	// T Singleton`1::m_Instance
	GameRoot_t1219302553 * ___m_Instance_4;

public:
	inline static int32_t get_offset_of_m_Instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_t2396149298_StaticFields, ___m_Instance_4)); }
	inline GameRoot_t1219302553 * get_m_Instance_4() const { return ___m_Instance_4; }
	inline GameRoot_t1219302553 ** get_address_of_m_Instance_4() { return &___m_Instance_4; }
	inline void set_m_Instance_4(GameRoot_t1219302553 * value)
	{
		___m_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETON_1_T2396149298_H
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
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
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
#ifndef GAMEROOT_T1219302553_H
#define GAMEROOT_T1219302553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameRoot
struct  GameRoot_t1219302553  : public Singleton_1_t2396149298
{
public:
	// ResourceService GameRoot::resourceService
	ResourceService_t2066374285 * ___resourceService_5;
	// LoginSystem GameRoot::m_LoginSystem
	LoginSystem_t1302229287 * ___m_LoginSystem_6;
	// AudioService GameRoot::audioService
	AudioService_t3306317363 * ___audioService_7;
	// NetService GameRoot::netService
	NetService_t2879592265 * ___netService_8;
	// MainCitySystem GameRoot::m_MainCitySystem
	MainCitySystem_t3182791129 * ___m_MainCitySystem_9;
	// PEProtocol.PlayerData GameRoot::playerData
	PlayerData_t3254915629 * ___playerData_10;
	// UILoadingWindow GameRoot::UILoadingWindow
	UILoadingWindow_t3075121329 * ___UILoadingWindow_11;
	// UIDynamicWindow GameRoot::UIDynamicWindow
	UIDynamicWindow_t887270669 * ___UIDynamicWindow_12;

public:
	inline static int32_t get_offset_of_resourceService_5() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___resourceService_5)); }
	inline ResourceService_t2066374285 * get_resourceService_5() const { return ___resourceService_5; }
	inline ResourceService_t2066374285 ** get_address_of_resourceService_5() { return &___resourceService_5; }
	inline void set_resourceService_5(ResourceService_t2066374285 * value)
	{
		___resourceService_5 = value;
		Il2CppCodeGenWriteBarrier((&___resourceService_5), value);
	}

	inline static int32_t get_offset_of_m_LoginSystem_6() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___m_LoginSystem_6)); }
	inline LoginSystem_t1302229287 * get_m_LoginSystem_6() const { return ___m_LoginSystem_6; }
	inline LoginSystem_t1302229287 ** get_address_of_m_LoginSystem_6() { return &___m_LoginSystem_6; }
	inline void set_m_LoginSystem_6(LoginSystem_t1302229287 * value)
	{
		___m_LoginSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_LoginSystem_6), value);
	}

	inline static int32_t get_offset_of_audioService_7() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___audioService_7)); }
	inline AudioService_t3306317363 * get_audioService_7() const { return ___audioService_7; }
	inline AudioService_t3306317363 ** get_address_of_audioService_7() { return &___audioService_7; }
	inline void set_audioService_7(AudioService_t3306317363 * value)
	{
		___audioService_7 = value;
		Il2CppCodeGenWriteBarrier((&___audioService_7), value);
	}

	inline static int32_t get_offset_of_netService_8() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___netService_8)); }
	inline NetService_t2879592265 * get_netService_8() const { return ___netService_8; }
	inline NetService_t2879592265 ** get_address_of_netService_8() { return &___netService_8; }
	inline void set_netService_8(NetService_t2879592265 * value)
	{
		___netService_8 = value;
		Il2CppCodeGenWriteBarrier((&___netService_8), value);
	}

	inline static int32_t get_offset_of_m_MainCitySystem_9() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___m_MainCitySystem_9)); }
	inline MainCitySystem_t3182791129 * get_m_MainCitySystem_9() const { return ___m_MainCitySystem_9; }
	inline MainCitySystem_t3182791129 ** get_address_of_m_MainCitySystem_9() { return &___m_MainCitySystem_9; }
	inline void set_m_MainCitySystem_9(MainCitySystem_t3182791129 * value)
	{
		___m_MainCitySystem_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainCitySystem_9), value);
	}

	inline static int32_t get_offset_of_playerData_10() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___playerData_10)); }
	inline PlayerData_t3254915629 * get_playerData_10() const { return ___playerData_10; }
	inline PlayerData_t3254915629 ** get_address_of_playerData_10() { return &___playerData_10; }
	inline void set_playerData_10(PlayerData_t3254915629 * value)
	{
		___playerData_10 = value;
		Il2CppCodeGenWriteBarrier((&___playerData_10), value);
	}

	inline static int32_t get_offset_of_UILoadingWindow_11() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___UILoadingWindow_11)); }
	inline UILoadingWindow_t3075121329 * get_UILoadingWindow_11() const { return ___UILoadingWindow_11; }
	inline UILoadingWindow_t3075121329 ** get_address_of_UILoadingWindow_11() { return &___UILoadingWindow_11; }
	inline void set_UILoadingWindow_11(UILoadingWindow_t3075121329 * value)
	{
		___UILoadingWindow_11 = value;
		Il2CppCodeGenWriteBarrier((&___UILoadingWindow_11), value);
	}

	inline static int32_t get_offset_of_UIDynamicWindow_12() { return static_cast<int32_t>(offsetof(GameRoot_t1219302553, ___UIDynamicWindow_12)); }
	inline UIDynamicWindow_t887270669 * get_UIDynamicWindow_12() const { return ___UIDynamicWindow_12; }
	inline UIDynamicWindow_t887270669 ** get_address_of_UIDynamicWindow_12() { return &___UIDynamicWindow_12; }
	inline void set_UIDynamicWindow_12(UIDynamicWindow_t887270669 * value)
	{
		___UIDynamicWindow_12 = value;
		Il2CppCodeGenWriteBarrier((&___UIDynamicWindow_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEROOT_T1219302553_H
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
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef LAYOUTGROUP_T2436138090_H
#define LAYOUTGROUP_T2436138090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_4)); }
	inline RectOffset_t1369453676 * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_t1369453676 * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_4), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_8)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_9)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_10)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_11)); }
	inline List_1_t881764471 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t881764471 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2436138090_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
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
#ifndef GRIDLAYOUTGROUP_T3046220461_H
#define GRIDLAYOUTGROUP_T3046220461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup
struct  GridLayoutGroup_t3046220461  : public LayoutGroup_t2436138090
{
public:
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t2156229523  ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t2156229523  ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;

public:
	inline static int32_t get_offset_of_m_StartCorner_12() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartCorner_12)); }
	inline int32_t get_m_StartCorner_12() const { return ___m_StartCorner_12; }
	inline int32_t* get_address_of_m_StartCorner_12() { return &___m_StartCorner_12; }
	inline void set_m_StartCorner_12(int32_t value)
	{
		___m_StartCorner_12 = value;
	}

	inline static int32_t get_offset_of_m_StartAxis_13() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartAxis_13)); }
	inline int32_t get_m_StartAxis_13() const { return ___m_StartAxis_13; }
	inline int32_t* get_address_of_m_StartAxis_13() { return &___m_StartAxis_13; }
	inline void set_m_StartAxis_13(int32_t value)
	{
		___m_StartAxis_13 = value;
	}

	inline static int32_t get_offset_of_m_CellSize_14() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_CellSize_14)); }
	inline Vector2_t2156229523  get_m_CellSize_14() const { return ___m_CellSize_14; }
	inline Vector2_t2156229523 * get_address_of_m_CellSize_14() { return &___m_CellSize_14; }
	inline void set_m_CellSize_14(Vector2_t2156229523  value)
	{
		___m_CellSize_14 = value;
	}

	inline static int32_t get_offset_of_m_Spacing_15() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Spacing_15)); }
	inline Vector2_t2156229523  get_m_Spacing_15() const { return ___m_Spacing_15; }
	inline Vector2_t2156229523 * get_address_of_m_Spacing_15() { return &___m_Spacing_15; }
	inline void set_m_Spacing_15(Vector2_t2156229523  value)
	{
		___m_Spacing_15 = value;
	}

	inline static int32_t get_offset_of_m_Constraint_16() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Constraint_16)); }
	inline int32_t get_m_Constraint_16() const { return ___m_Constraint_16; }
	inline int32_t* get_address_of_m_Constraint_16() { return &___m_Constraint_16; }
	inline void set_m_Constraint_16(int32_t value)
	{
		___m_Constraint_16 = value;
	}

	inline static int32_t get_offset_of_m_ConstraintCount_17() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_ConstraintCount_17)); }
	inline int32_t get_m_ConstraintCount_17() const { return ___m_ConstraintCount_17; }
	inline int32_t* get_address_of_m_ConstraintCount_17() { return &___m_ConstraintCount_17; }
	inline void set_m_ConstraintCount_17(int32_t value)
	{
		___m_ConstraintCount_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDLAYOUTGROUP_T3046220461_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_18;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_21;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_22;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_23;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_24;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_25;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_26;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_27;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_28;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_29;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_30;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_31;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_33;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_35;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_36;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_38;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_41;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_43;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_44;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_45;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_46;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_47;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_48;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_49;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_50;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_51;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_54;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_55;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_56;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_57;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_59;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_60;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_61;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_62;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_64;

public:
	inline static int32_t get_offset_of_m_Keyboard_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_18)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_18() const { return ___m_Keyboard_18; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_18() { return &___m_Keyboard_18; }
	inline void set_m_Keyboard_18(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_18), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_20)); }
	inline Text_t1901882714 * get_m_TextComponent_20() const { return ___m_TextComponent_20; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_20() { return &___m_TextComponent_20; }
	inline void set_m_TextComponent_20(Text_t1901882714 * value)
	{
		___m_TextComponent_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_20), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_21)); }
	inline Graphic_t1660335611 * get_m_Placeholder_21() const { return ___m_Placeholder_21; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_21() { return &___m_Placeholder_21; }
	inline void set_m_Placeholder_21(Graphic_t1660335611 * value)
	{
		___m_Placeholder_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_21), value);
	}

	inline static int32_t get_offset_of_m_ContentType_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_22)); }
	inline int32_t get_m_ContentType_22() const { return ___m_ContentType_22; }
	inline int32_t* get_address_of_m_ContentType_22() { return &___m_ContentType_22; }
	inline void set_m_ContentType_22(int32_t value)
	{
		___m_ContentType_22 = value;
	}

	inline static int32_t get_offset_of_m_InputType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_23)); }
	inline int32_t get_m_InputType_23() const { return ___m_InputType_23; }
	inline int32_t* get_address_of_m_InputType_23() { return &___m_InputType_23; }
	inline void set_m_InputType_23(int32_t value)
	{
		___m_InputType_23 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_24)); }
	inline Il2CppChar get_m_AsteriskChar_24() const { return ___m_AsteriskChar_24; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_24() { return &___m_AsteriskChar_24; }
	inline void set_m_AsteriskChar_24(Il2CppChar value)
	{
		___m_AsteriskChar_24 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_25)); }
	inline int32_t get_m_KeyboardType_25() const { return ___m_KeyboardType_25; }
	inline int32_t* get_address_of_m_KeyboardType_25() { return &___m_KeyboardType_25; }
	inline void set_m_KeyboardType_25(int32_t value)
	{
		___m_KeyboardType_25 = value;
	}

	inline static int32_t get_offset_of_m_LineType_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_26)); }
	inline int32_t get_m_LineType_26() const { return ___m_LineType_26; }
	inline int32_t* get_address_of_m_LineType_26() { return &___m_LineType_26; }
	inline void set_m_LineType_26(int32_t value)
	{
		___m_LineType_26 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_27)); }
	inline bool get_m_HideMobileInput_27() const { return ___m_HideMobileInput_27; }
	inline bool* get_address_of_m_HideMobileInput_27() { return &___m_HideMobileInput_27; }
	inline void set_m_HideMobileInput_27(bool value)
	{
		___m_HideMobileInput_27 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_28)); }
	inline int32_t get_m_CharacterValidation_28() const { return ___m_CharacterValidation_28; }
	inline int32_t* get_address_of_m_CharacterValidation_28() { return &___m_CharacterValidation_28; }
	inline void set_m_CharacterValidation_28(int32_t value)
	{
		___m_CharacterValidation_28 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_29)); }
	inline int32_t get_m_CharacterLimit_29() const { return ___m_CharacterLimit_29; }
	inline int32_t* get_address_of_m_CharacterLimit_29() { return &___m_CharacterLimit_29; }
	inline void set_m_CharacterLimit_29(int32_t value)
	{
		___m_CharacterLimit_29 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_30)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_30() const { return ___m_OnEndEdit_30; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_30() { return &___m_OnEndEdit_30; }
	inline void set_m_OnEndEdit_30(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_30), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_31)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_31() const { return ___m_OnValueChanged_31; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_31() { return &___m_OnValueChanged_31; }
	inline void set_m_OnValueChanged_31(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_31), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_32)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_32() const { return ___m_OnValidateInput_32; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_32() { return &___m_OnValidateInput_32; }
	inline void set_m_OnValidateInput_32(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_32), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_33)); }
	inline Color_t2555686324  get_m_CaretColor_33() const { return ___m_CaretColor_33; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_33() { return &___m_CaretColor_33; }
	inline void set_m_CaretColor_33(Color_t2555686324  value)
	{
		___m_CaretColor_33 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_34)); }
	inline bool get_m_CustomCaretColor_34() const { return ___m_CustomCaretColor_34; }
	inline bool* get_address_of_m_CustomCaretColor_34() { return &___m_CustomCaretColor_34; }
	inline void set_m_CustomCaretColor_34(bool value)
	{
		___m_CustomCaretColor_34 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_35)); }
	inline Color_t2555686324  get_m_SelectionColor_35() const { return ___m_SelectionColor_35; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_35() { return &___m_SelectionColor_35; }
	inline void set_m_SelectionColor_35(Color_t2555686324  value)
	{
		___m_SelectionColor_35 = value;
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_36), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_37)); }
	inline float get_m_CaretBlinkRate_37() const { return ___m_CaretBlinkRate_37; }
	inline float* get_address_of_m_CaretBlinkRate_37() { return &___m_CaretBlinkRate_37; }
	inline void set_m_CaretBlinkRate_37(float value)
	{
		___m_CaretBlinkRate_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_38)); }
	inline int32_t get_m_CaretWidth_38() const { return ___m_CaretWidth_38; }
	inline int32_t* get_address_of_m_CaretWidth_38() { return &___m_CaretWidth_38; }
	inline void set_m_CaretWidth_38(int32_t value)
	{
		___m_CaretWidth_38 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_39)); }
	inline bool get_m_ReadOnly_39() const { return ___m_ReadOnly_39; }
	inline bool* get_address_of_m_ReadOnly_39() { return &___m_ReadOnly_39; }
	inline void set_m_ReadOnly_39(bool value)
	{
		___m_ReadOnly_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_40)); }
	inline int32_t get_m_CaretPosition_40() const { return ___m_CaretPosition_40; }
	inline int32_t* get_address_of_m_CaretPosition_40() { return &___m_CaretPosition_40; }
	inline void set_m_CaretPosition_40(int32_t value)
	{
		___m_CaretPosition_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_41)); }
	inline int32_t get_m_CaretSelectPosition_41() const { return ___m_CaretSelectPosition_41; }
	inline int32_t* get_address_of_m_CaretSelectPosition_41() { return &___m_CaretSelectPosition_41; }
	inline void set_m_CaretSelectPosition_41(int32_t value)
	{
		___m_CaretSelectPosition_41 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_42)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_42() const { return ___caretRectTrans_42; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_42() { return &___caretRectTrans_42; }
	inline void set_caretRectTrans_42(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_42 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_42), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_43)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_43() const { return ___m_CursorVerts_43; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_43() { return &___m_CursorVerts_43; }
	inline void set_m_CursorVerts_43(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_43), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_44)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_44() const { return ___m_InputTextCache_44; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_44() { return &___m_InputTextCache_44; }
	inline void set_m_InputTextCache_44(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_44 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_44), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_45)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_45() const { return ___m_CachedInputRenderer_45; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_45() { return &___m_CachedInputRenderer_45; }
	inline void set_m_CachedInputRenderer_45(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_45), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_46)); }
	inline bool get_m_PreventFontCallback_46() const { return ___m_PreventFontCallback_46; }
	inline bool* get_address_of_m_PreventFontCallback_46() { return &___m_PreventFontCallback_46; }
	inline void set_m_PreventFontCallback_46(bool value)
	{
		___m_PreventFontCallback_46 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_47)); }
	inline Mesh_t3648964284 * get_m_Mesh_47() const { return ___m_Mesh_47; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_47() { return &___m_Mesh_47; }
	inline void set_m_Mesh_47(Mesh_t3648964284 * value)
	{
		___m_Mesh_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_47), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_48)); }
	inline bool get_m_AllowInput_48() const { return ___m_AllowInput_48; }
	inline bool* get_address_of_m_AllowInput_48() { return &___m_AllowInput_48; }
	inline void set_m_AllowInput_48(bool value)
	{
		___m_AllowInput_48 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_49)); }
	inline bool get_m_ShouldActivateNextUpdate_49() const { return ___m_ShouldActivateNextUpdate_49; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_49() { return &___m_ShouldActivateNextUpdate_49; }
	inline void set_m_ShouldActivateNextUpdate_49(bool value)
	{
		___m_ShouldActivateNextUpdate_49 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_50() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_50)); }
	inline bool get_m_UpdateDrag_50() const { return ___m_UpdateDrag_50; }
	inline bool* get_address_of_m_UpdateDrag_50() { return &___m_UpdateDrag_50; }
	inline void set_m_UpdateDrag_50(bool value)
	{
		___m_UpdateDrag_50 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_51() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_51)); }
	inline bool get_m_DragPositionOutOfBounds_51() const { return ___m_DragPositionOutOfBounds_51; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_51() { return &___m_DragPositionOutOfBounds_51; }
	inline void set_m_DragPositionOutOfBounds_51(bool value)
	{
		___m_DragPositionOutOfBounds_51 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_54)); }
	inline bool get_m_CaretVisible_54() const { return ___m_CaretVisible_54; }
	inline bool* get_address_of_m_CaretVisible_54() { return &___m_CaretVisible_54; }
	inline void set_m_CaretVisible_54(bool value)
	{
		___m_CaretVisible_54 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_55)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_55() const { return ___m_BlinkCoroutine_55; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_55() { return &___m_BlinkCoroutine_55; }
	inline void set_m_BlinkCoroutine_55(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_55), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_56)); }
	inline float get_m_BlinkStartTime_56() const { return ___m_BlinkStartTime_56; }
	inline float* get_address_of_m_BlinkStartTime_56() { return &___m_BlinkStartTime_56; }
	inline void set_m_BlinkStartTime_56(float value)
	{
		___m_BlinkStartTime_56 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_57)); }
	inline int32_t get_m_DrawStart_57() const { return ___m_DrawStart_57; }
	inline int32_t* get_address_of_m_DrawStart_57() { return &___m_DrawStart_57; }
	inline void set_m_DrawStart_57(int32_t value)
	{
		___m_DrawStart_57 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_58)); }
	inline int32_t get_m_DrawEnd_58() const { return ___m_DrawEnd_58; }
	inline int32_t* get_address_of_m_DrawEnd_58() { return &___m_DrawEnd_58; }
	inline void set_m_DrawEnd_58(int32_t value)
	{
		___m_DrawEnd_58 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_59)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_59() const { return ___m_DragCoroutine_59; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_59() { return &___m_DragCoroutine_59; }
	inline void set_m_DragCoroutine_59(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_59), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_60)); }
	inline String_t* get_m_OriginalText_60() const { return ___m_OriginalText_60; }
	inline String_t** get_address_of_m_OriginalText_60() { return &___m_OriginalText_60; }
	inline void set_m_OriginalText_60(String_t* value)
	{
		___m_OriginalText_60 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_60), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_61() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_61)); }
	inline bool get_m_WasCanceled_61() const { return ___m_WasCanceled_61; }
	inline bool* get_address_of_m_WasCanceled_61() { return &___m_WasCanceled_61; }
	inline void set_m_WasCanceled_61(bool value)
	{
		___m_WasCanceled_61 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_62)); }
	inline bool get_m_HasDoneFocusTransition_62() const { return ___m_HasDoneFocusTransition_62; }
	inline bool* get_address_of_m_HasDoneFocusTransition_62() { return &___m_HasDoneFocusTransition_62; }
	inline void set_m_HasDoneFocusTransition_62(bool value)
	{
		___m_HasDoneFocusTransition_62 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_64() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_64)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_64() const { return ___m_ProcessingEvent_64; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_64() { return &___m_ProcessingEvent_64; }
	inline void set_m_ProcessingEvent_64(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_64 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_64), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_19;

public:
	inline static int32_t get_offset_of_kSeparators_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_19)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_19() const { return ___kSeparators_19; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_19() { return &___kSeparators_19; }
	inline void set_kSeparators_19(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_19 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_31;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_32;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_33;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_34;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_35;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_36;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_37;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_38;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_39;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_40;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_41;

public:
	inline static int32_t get_offset_of_m_Sprite_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_31)); }
	inline Sprite_t280657092 * get_m_Sprite_31() const { return ___m_Sprite_31; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_31() { return &___m_Sprite_31; }
	inline void set_m_Sprite_31(Sprite_t280657092 * value)
	{
		___m_Sprite_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_31), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_32)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_32() const { return ___m_OverrideSprite_32; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_32() { return &___m_OverrideSprite_32; }
	inline void set_m_OverrideSprite_32(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_32), value);
	}

	inline static int32_t get_offset_of_m_Type_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_33)); }
	inline int32_t get_m_Type_33() const { return ___m_Type_33; }
	inline int32_t* get_address_of_m_Type_33() { return &___m_Type_33; }
	inline void set_m_Type_33(int32_t value)
	{
		___m_Type_33 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_34)); }
	inline bool get_m_PreserveAspect_34() const { return ___m_PreserveAspect_34; }
	inline bool* get_address_of_m_PreserveAspect_34() { return &___m_PreserveAspect_34; }
	inline void set_m_PreserveAspect_34(bool value)
	{
		___m_PreserveAspect_34 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_35)); }
	inline bool get_m_FillCenter_35() const { return ___m_FillCenter_35; }
	inline bool* get_address_of_m_FillCenter_35() { return &___m_FillCenter_35; }
	inline void set_m_FillCenter_35(bool value)
	{
		___m_FillCenter_35 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_36)); }
	inline int32_t get_m_FillMethod_36() const { return ___m_FillMethod_36; }
	inline int32_t* get_address_of_m_FillMethod_36() { return &___m_FillMethod_36; }
	inline void set_m_FillMethod_36(int32_t value)
	{
		___m_FillMethod_36 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_37)); }
	inline float get_m_FillAmount_37() const { return ___m_FillAmount_37; }
	inline float* get_address_of_m_FillAmount_37() { return &___m_FillAmount_37; }
	inline void set_m_FillAmount_37(float value)
	{
		___m_FillAmount_37 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_38)); }
	inline bool get_m_FillClockwise_38() const { return ___m_FillClockwise_38; }
	inline bool* get_address_of_m_FillClockwise_38() { return &___m_FillClockwise_38; }
	inline void set_m_FillClockwise_38(bool value)
	{
		___m_FillClockwise_38 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_39() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_39)); }
	inline int32_t get_m_FillOrigin_39() const { return ___m_FillOrigin_39; }
	inline int32_t* get_address_of_m_FillOrigin_39() { return &___m_FillOrigin_39; }
	inline void set_m_FillOrigin_39(int32_t value)
	{
		___m_FillOrigin_39 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_40() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_40)); }
	inline float get_m_AlphaHitTestMinimumThreshold_40() const { return ___m_AlphaHitTestMinimumThreshold_40; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_40() { return &___m_AlphaHitTestMinimumThreshold_40; }
	inline void set_m_AlphaHitTestMinimumThreshold_40(float value)
	{
		___m_AlphaHitTestMinimumThreshold_40 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_41() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Tracked_41)); }
	inline bool get_m_Tracked_41() const { return ___m_Tracked_41; }
	inline bool* get_address_of_m_Tracked_41() { return &___m_Tracked_41; }
	inline void set_m_Tracked_41(bool value)
	{
		___m_Tracked_41 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_30;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_42;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_43;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_44;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_45;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t4142344393 * ___m_TrackedTexturelessImages_46;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_47;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.UI.Image::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_48;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_30() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_30)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_30() const { return ___s_ETC1DefaultUI_30; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_30() { return &___s_ETC1DefaultUI_30; }
	inline void set_s_ETC1DefaultUI_30(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_30), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_42)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_42() const { return ___s_VertScratch_42; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_42() { return &___s_VertScratch_42; }
	inline void set_s_VertScratch_42(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_42), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_43() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_43)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_43() const { return ___s_UVScratch_43; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_43() { return &___s_UVScratch_43; }
	inline void set_s_UVScratch_43(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_43 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_43), value);
	}

	inline static int32_t get_offset_of_s_Xy_44() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_44)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_44() const { return ___s_Xy_44; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_44() { return &___s_Xy_44; }
	inline void set_s_Xy_44(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_44 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_44), value);
	}

	inline static int32_t get_offset_of_s_Uv_45() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_45)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_45() const { return ___s_Uv_45; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_45() { return &___s_Uv_45; }
	inline void set_s_Uv_45(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_45 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_45), value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_46() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___m_TrackedTexturelessImages_46)); }
	inline List_1_t4142344393 * get_m_TrackedTexturelessImages_46() const { return ___m_TrackedTexturelessImages_46; }
	inline List_1_t4142344393 ** get_address_of_m_TrackedTexturelessImages_46() { return &___m_TrackedTexturelessImages_46; }
	inline void set_m_TrackedTexturelessImages_46(List_1_t4142344393 * value)
	{
		___m_TrackedTexturelessImages_46 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedTexturelessImages_46), value);
	}

	inline static int32_t get_offset_of_s_Initialized_47() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Initialized_47)); }
	inline bool get_s_Initialized_47() const { return ___s_Initialized_47; }
	inline bool* get_address_of_s_Initialized_47() { return &___s_Initialized_47; }
	inline void set_s_Initialized_47(bool value)
	{
		___s_Initialized_47 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_48() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___U3CU3Ef__mgU24cache0_48)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_48() const { return ___U3CU3Ef__mgU24cache0_48; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_48() { return &___U3CU3Ef__mgU24cache0_48; }
	inline void set_U3CU3Ef__mgU24cache0_48(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_48 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_48), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef RAWIMAGE_T3182918964_H
#define RAWIMAGE_T3182918964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t3182918964  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t3661962703 * ___m_Texture_30;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t2360479859  ___m_UVRect_31;

public:
	inline static int32_t get_offset_of_m_Texture_30() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_Texture_30)); }
	inline Texture_t3661962703 * get_m_Texture_30() const { return ___m_Texture_30; }
	inline Texture_t3661962703 ** get_address_of_m_Texture_30() { return &___m_Texture_30; }
	inline void set_m_Texture_30(Texture_t3661962703 * value)
	{
		___m_Texture_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_30), value);
	}

	inline static int32_t get_offset_of_m_UVRect_31() { return static_cast<int32_t>(offsetof(RawImage_t3182918964, ___m_UVRect_31)); }
	inline Rect_t2360479859  get_m_UVRect_31() const { return ___m_UVRect_31; }
	inline Rect_t2360479859 * get_address_of_m_UVRect_31() { return &___m_UVRect_31; }
	inline void set_m_UVRect_31(Rect_t2360479859  value)
	{
		___m_UVRect_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T3182918964_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void Singleton`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Singleton_1__ctor_m2322677222_gshared (Singleton_1_t4256952909 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m549117796_gshared (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void PENet.PESession`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PESession_1__ctor_m3800385567_gshared (PESession_1_t675189681 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void SystemRoot`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SystemRoot_1__ctor_m172075950_gshared (SystemRoot_1_t3852999331 * __this, const RuntimeMethod* method);
// System.Void SystemRoot`1<System.Object>::Init()
extern "C" IL2CPP_METHOD_ATTR void SystemRoot_1_Init_m4265021797_gshared (SystemRoot_1_t3852999331 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void BaseData`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BaseData_1__ctor_m3402147666_gshared (BaseData_1_t1702901093 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m3749217910_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void PENet.PESocket`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PESocket_2__ctor_m2183903854_gshared (PESocket_2_t2746076900 * __this, const RuntimeMethod* method);
// System.Void PENet.PESocket`2<System.Object,System.Object>::StartAsClient(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PESocket_2_StartAsClient_m3885846818_gshared (PESocket_2_t2746076900 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_2__ctor_m1095989290_gshared (Action_2_t2340848427 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void PENet.PESocket`2<System.Object,System.Object>::SetLog(System.Boolean,System.Action`2<System.String,System.Int32>)
extern "C" IL2CPP_METHOD_ATTR void PESocket_2_SetLog_m3522382711_gshared (PESocket_2_t2746076900 * __this, bool p0, Action_2_t778698442 * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1868480850_gshared (Queue_1_t2926365658 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m2496300460_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m3550993416_gshared (Queue_1_t2926365658 * __this, const RuntimeMethod* method);
// System.Void PENet.PESession`1<System.Object>::SendMsg(!0)
extern "C" IL2CPP_METHOD_ATTR void PESession_1_SendMsg_m796698135_gshared (PESession_1_t675189681 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::Load<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m597869152_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2059424751_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// T UIWindowRoot::GetOrAddCommponent<System.Object>(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UIWindowRoot_GetOrAddCommponent_TisRuntimeObject_m1388405977_gshared (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method);

// System.Void Singleton`1<AudioService>::.ctor()
inline void Singleton_1__ctor_m2723480633 (Singleton_1_t188196812 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t188196812 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// T Singleton`1<ResourceService>::get_Instance()
inline ResourceService_t2066374285 * Singleton_1_get_Instance_m3962788585 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  ResourceService_t2066374285 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// UnityEngine.AudioClip ResourceService::LoadClip(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * ResourceService_LoadClip_m19073935 (ResourceService_t2066374285 * __this, String_t* ___path0, bool ___cached1, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * AudioSource_get_clip_m1234340632 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_loop_m3659884460 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Void PENet.PESession`1<PEProtocol.GameMessage>::.ctor()
inline void PESession_1__ctor_m1149094845 (PESession_1_t634736186 * __this, const RuntimeMethod* method)
{
	((  void (*) (PESession_1_t634736186 *, const RuntimeMethod*))PESession_1__ctor_m3800385567_gshared)(__this, method);
}
// System.Void GameRoot::AddTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_AddTips_m3871248750 (RuntimeObject * __this /* static, unused */, String_t* ___tips0, const RuntimeMethod* method);
// System.Void Common::Log(System.String,LogType)
extern "C" IL2CPP_METHOD_ATTR void Common_Log_m1999533456 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// T Singleton`1<NetService>::get_Instance()
inline NetService_t2879592265 * Singleton_1_get_Instance_m1023393517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  NetService_t2879592265 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// System.Void NetService::AddMessage(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_AddMessage_m487009610 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void Singleton`1<GameRoot>::.ctor()
inline void Singleton_1__ctor_m1060664987 (Singleton_1_t2396149298 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t2396149298 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method);
}
// PEProtocol.PlayerData GameRoot::get_PlayerData()
extern "C" IL2CPP_METHOD_ATTR PlayerData_t3254915629 * GameRoot_get_PlayerData_m1744716642 (GameRoot_t1219302553 * __this, const RuntimeMethod* method);
// System.Void GameRoot::InitSystems()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_InitSystems_m4000911847 (GameRoot_t1219302553 * __this, const RuntimeMethod* method);
// System.Void LoginSystem::EnterLogin()
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_EnterLogin_m692613556 (LoginSystem_t1302229287 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// T Singleton`1<LoginSystem>::get_Instance()
inline LoginSystem_t1302229287 * Singleton_1_get_Instance_m3381088662 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  LoginSystem_t1302229287 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// T Singleton`1<AudioService>::get_Instance()
inline AudioService_t3306317363 * Singleton_1_get_Instance_m2437137635 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  AudioService_t3306317363 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// T Singleton`1<MainCitySystem>::get_Instance()
inline MainCitySystem_t3182791129 * Singleton_1_get_Instance_m1105072615 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  MainCitySystem_t3182791129 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// System.Void GameRoot::ClearUI()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_ClearUI_m1148787738 (GameRoot_t1219302553 * __this, const RuntimeMethod* method);
// System.Void UIWindowRoot::SetWindowState(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetWindowState_m1207802075 (UIWindowRoot_t2933752109 * __this, bool ___isActive0, const RuntimeMethod* method);
// T Singleton`1<GameRoot>::get_Instance()
inline GameRoot_t1219302553 * Singleton_1_get_Instance_m4104515756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	return ((  GameRoot_t1219302553 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))Singleton_1_get_Instance_m549117796_gshared)(__this /* static, unused */, method);
}
// System.Void AudioService::PlayEffect(System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioService_PlayEffect_m3443281718 (AudioService_t3306317363 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void UIDynamicWindow::AddTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_AddTips_m457295066 (UIDynamicWindow_t887270669 * __this, String_t* ___tips0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.PointerEventData>::Invoke(!0)
inline void Action_1_Invoke_m3141868843 (Action_1_t3980368687 * __this, PointerEventData_t3807901092 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3980368687 *, PointerEventData_t3807901092 *, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method);
}
// System.Void SystemRoot`1<LoginSystem>::.ctor()
inline void SystemRoot_1__ctor_m344869798 (SystemRoot_1_t2075122454 * __this, const RuntimeMethod* method)
{
	((  void (*) (SystemRoot_1_t2075122454 *, const RuntimeMethod*))SystemRoot_1__ctor_m172075950_gshared)(__this, method);
}
// System.Void SystemRoot`1<LoginSystem>::Init()
inline void SystemRoot_1_Init_m912773789 (SystemRoot_1_t2075122454 * __this, const RuntimeMethod* method)
{
	((  void (*) (SystemRoot_1_t2075122454 *, const RuntimeMethod*))SystemRoot_1_Init_m4265021797_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m2994342681 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void ResourceService::AsyncLoadScene(System.String,System.Action)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_AsyncLoadScene_m3641494555 (ResourceService_t2066374285 * __this, String_t* ___name0, Action_t1264377477 * ___OnLoaded1, const RuntimeMethod* method);
// System.Void GameRoot::set_PlayerData(PEProtocol.PlayerData)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_set_PlayerData_m2809959731 (GameRoot_t1219302553 * __this, PlayerData_t3254915629 * ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void MainCitySystem::EnterMainCity()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_EnterMainCity_m703939264 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method);
// System.Void GameRoot::ResetPlayerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_ResetPlayerName_m1169702375 (GameRoot_t1219302553 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void AudioService::PlayBGMusic(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioService_PlayBGMusic_m684665367 (AudioService_t3306317363 * __this, String_t* ___title0, bool ___isLoop1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
inline Animation_t3648466861 * Component_GetComponent_TisAnimation_t3648466861_m4214971628 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animation_t3648466861 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play()
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m2798573761 (Animation_t3648466861 * __this, const RuntimeMethod* method);
// System.Void SystemRoot`1<MainCitySystem>::.ctor()
inline void SystemRoot_1__ctor_m846942004 (SystemRoot_1_t3955684296 * __this, const RuntimeMethod* method)
{
	((  void (*) (SystemRoot_1_t3955684296 *, const RuntimeMethod*))SystemRoot_1__ctor_m172075950_gshared)(__this, method);
}
// System.Void SystemRoot`1<MainCitySystem>::Init()
inline void SystemRoot_1_Init_m1772934450 (SystemRoot_1_t3955684296 * __this, const RuntimeMethod* method)
{
	((  void (*) (SystemRoot_1_t3955684296 *, const RuntimeMethod*))SystemRoot_1_Init_m4265021797_gshared)(__this, method);
}
// System.Void MainCitySystem/<EnterMainCity>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterMainCityU3Ec__AnonStorey0__ctor_m1546023975 (U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * __this, const RuntimeMethod* method);
// MapConfigures ResourceService::GetConfigures(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MapConfigures_t4238555288 * ResourceService_GetConfigures_m1819441321 (ResourceService_t2066374285 * __this, int32_t ___id0, const RuntimeMethod* method);
// UnityEngine.GameObject ResourceService::GetPlayer(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ResourceService_GetPlayer_m2440938853 (ResourceService_t2066374285 * __this, String_t* ___name0, bool ___isCache1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m135219616 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t2064355688 * GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t2064355688 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void PlayerController::InitCharator()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_InitCharator_m3477137428 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" IL2CPP_METHOD_ATTR Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void PlayerController::SetBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_SetBlend_m1788204943 (PlayerController_t2064355688 * __this, float ___blend0, const RuntimeMethod* method);
// System.Void PlayerController::set_Direction(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_set_Direction_m3826813410 (PlayerController_t2064355688 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_eulerAngles_m2743581774 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UIInfoWindow::ShowInfoWindow()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_ShowInfoWindow_m1819017755 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Transform_RotateAround_m2651195670 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void MainCitySystem::LoadPrefab(MapConfigures)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_LoadPrefab_m2605182113 (MainCitySystem_t3182791129 * __this, MapConfigures_t4238555288 * ___map0, const RuntimeMethod* method);
// System.Void BaseData`1<MapConfigures>::.ctor()
inline void BaseData_1__ctor_m2259500906 (BaseData_1_t2861350217 * __this, const RuntimeMethod* method)
{
	((  void (*) (BaseData_1_t2861350217 *, const RuntimeMethod*))BaseData_1__ctor_m3402147666_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<PEProtocol.GameMessage>::.ctor()
inline void Queue_1__ctor_m383305675 (Queue_1_t2885912163 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2885912163 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void Singleton`1<NetService>::.ctor()
inline void Singleton_1__ctor_m2804516655 (Singleton_1_t4056439010 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t4056439010 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method);
}
// System.Void PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>::.ctor()
inline void PESocket_2__ctor_m1643435129 (PESocket_2_t4073481024 * __this, const RuntimeMethod* method)
{
	((  void (*) (PESocket_2_t4073481024 *, const RuntimeMethod*))PESocket_2__ctor_m2183903854_gshared)(__this, method);
}
// System.Void PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>::StartAsClient(System.String,System.Int32)
inline void PESocket_2_StartAsClient_m3560707570 (PESocket_2_t4073481024 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (PESocket_2_t4073481024 *, String_t*, int32_t, const RuntimeMethod*))PESocket_2_StartAsClient_m3885846818_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`2<System.String,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m313498710 (Action_2_t778698442 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t778698442 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m1095989290_gshared)(__this, p0, p1, method);
}
// System.Void PENet.PESocket`2<ClientSession,PEProtocol.GameMessage>::SetLog(System.Boolean,System.Action`2<System.String,System.Int32>)
inline void PESocket_2_SetLog_m3690170799 (PESocket_2_t4073481024 * __this, bool p0, Action_2_t778698442 * p1, const RuntimeMethod* method)
{
	((  void (*) (PESocket_2_t4073481024 *, bool, Action_2_t778698442 *, const RuntimeMethod*))PESocket_2_SetLog_m3522382711_gshared)(__this, p0, p1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<PEProtocol.GameMessage>::Enqueue(!0)
inline void Queue_1_Enqueue_m2174174058 (Queue_1_t2885912163 * __this, GameMessage_t3039652669 * p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2885912163 *, GameMessage_t3039652669 *, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<PEProtocol.GameMessage>::get_Count()
inline int32_t Queue_1_get_Count_m741591674 (Queue_1_t2885912163 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t2885912163 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<PEProtocol.GameMessage>::Dequeue()
inline GameMessage_t3039652669 * Queue_1_Dequeue_m313156729 (Queue_1_t2885912163 * __this, const RuntimeMethod* method)
{
	return ((  GameMessage_t3039652669 * (*) (Queue_1_t2885912163 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Void NetService::HandleMessage(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_HandleMessage_m982056862 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method);
// System.Void LoginSystem::ReqLogin(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_ReqLogin_m2485907898 (LoginSystem_t1302229287 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method);
// System.Void LoginSystem::RenameRespond(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_RenameRespond_m2316697537 (LoginSystem_t1302229287 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method);
// System.Void PENet.PESession`1<PEProtocol.GameMessage>::SendMsg(!0)
inline void PESession_1_SendMsg_m1443557105 (PESession_1_t634736186 * __this, GameMessage_t3039652669 * p0, const RuntimeMethod* method)
{
	((  void (*) (PESession_1_t634736186 *, GameMessage_t3039652669 *, const RuntimeMethod*))PESession_1_SendMsg_m796698135_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_m3858779880 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Void PlayerController::UpdateMixBlend()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_UpdateMixBlend_m2291897277 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// System.Void PlayerController::UpdateDirection()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_UpdateDirection_m183858564 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// System.Void PlayerController::Moving()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Moving_m2764425608 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// System.Void PlayerController::CameraFollow()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_CameraFollow_m316258585 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 PlayerController::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PlayerController_get_Direction_m2870697875 (PlayerController_t2064355688 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_SignedAngle_m1664554214 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR int32_t CharacterController_Move_m1547317252 (CharacterController_t1138636865 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetFloat_m1701463607 (Animator_t434523843 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::.ctor()
inline void Dictionary_2__ctor_m856528887 (Dictionary_2_t3466145964 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3466145964 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>::.ctor()
inline void Dictionary_2__ctor_m1312219566 (Dictionary_2_t3127268619 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3127268619 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m19875156 (Dictionary_2_t898892918 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t898892918 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void Singleton`1<ResourceService>::.ctor()
inline void Singleton_1__ctor_m250225138 (Singleton_1_t3243221030 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t3243221030 *, const RuntimeMethod*))Singleton_1__ctor_m2322677222_gshared)(__this, method);
}
// System.Void ResourceService::LoadFromFile(System.String)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_LoadFromFile_m3276529980 (ResourceService_t2066374285 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void ResourceService::LoadMapConfigure(System.String)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_LoadMapConfigure_m3296367951 (ResourceService_t2066374285 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void ResourceService/<AsyncLoadScene>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAsyncLoadSceneU3Ec__AnonStorey0__ctor_m905275126 (U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR AsyncOperation_t1445031843 * SceneManager_LoadSceneAsync_m18587237 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2923550377 (Dictionary_2_t3466145964 * __this, String_t* p0, AudioClip_t3680889665 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3466145964 *, String_t*, AudioClip_t3680889665 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_t3680889665 * Resources_Load_TisAudioClip_t3680889665_m1361768364 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  AudioClip_t3680889665 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.AudioClip>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4152141881 (Dictionary_2_t3466145964 * __this, String_t* p0, AudioClip_t3680889665 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3466145964 *, String_t*, AudioClip_t3680889665 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1300232330 (Dictionary_2_t3127268619 * __this, int32_t p0, MapConfigures_t4238555288 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3127268619 *, int32_t, MapConfigures_t4238555288 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.TextAsset>(System.String)
inline TextAsset_t3022178571 * Resources_Load_TisTextAsset_t3022178571_m724759995 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  TextAsset_t3022178571 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Xml.XmlDocument::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XmlDocument__ctor_m1447119458 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method);
// System.String UnityEngine.TextAsset::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m2027878391 (TextAsset_t3022178571 * __this, const RuntimeMethod* method);
// System.Xml.XmlNode System.Xml.XmlNode::SelectSingleNode(System.String)
extern "C" IL2CPP_METHOD_ATTR XmlNode_t3767805227 * XmlNode_SelectSingleNode_m2944339946 (XmlNode_t3767805227 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void MapConfigures::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MapConfigures__ctor_m2426975784 (MapConfigures_t4238555288 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Single System.Single::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR float Single_Parse_m364357836 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,MapConfigures>::Add(!0,!1)
inline void Dictionary_2_Add_m3779660703 (Dictionary_2_t3127268619 * __this, int32_t p0, MapConfigures_t4238555288 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3127268619 *, int32_t, MapConfigures_t4238555288 *, const RuntimeMethod*))Dictionary_2_Add_m2059424751_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m2276455407 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 Tools::RandomInt(System.Int32,System.Int32,System.Random)
extern "C" IL2CPP_METHOD_ATTR int32_t Tools_RandomInt_m425305703 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, Random_t108471755 * ___random2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m3346958548 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2873266050 (Dictionary_2_t898892918 * __this, String_t* p0, GameObject_t1113636619 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t898892918 *, String_t*, GameObject_t1113636619 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t1113636619 * Resources_Load_TisGameObject_t1113636619_m1734345100 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m597869152_gshared)(__this /* static, unused */, p0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m4070250708 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_m1235394044 (Dictionary_2_t898892918 * __this, String_t* p0, GameObject_t1113636619 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t898892918 *, String_t*, GameObject_t1113636619 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
extern "C" IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2461797197 (AsyncOperation_t1445031843 * __this, const RuntimeMethod* method);
// System.Void UILoadingWindow::UpdateUI(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UILoadingWindow_UpdateUI_m1243689125 (UILoadingWindow_t3075121329 * __this, float ___progress0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Random__ctor_m4122933043 (Random_t108471755 * __this, const RuntimeMethod* method);
// System.Void UIWindowRoot::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot__ctor_m3177337551 (UIWindowRoot_t2933752109 * __this, const RuntimeMethod* method);
// System.Void UIWindowRoot::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_InitUIwindow_m4047047953 (UIWindowRoot_t2933752109 * __this, const RuntimeMethod* method);
// System.String ResourceService::GetRandomName(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* ResourceService_GetRandomName_m3616470161 (ResourceService_t2066374285 * __this, bool ___isFamle0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void InputField_set_text_m1877260015 (InputField_t3762917431 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void GameRoot::PlayEffect(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_PlayEffect_m2002588247 (RuntimeObject * __this /* static, unused */, String_t* ___title0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method);
// System.Void PEProtocol.GameMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameMessage__ctor_m3852766301 (GameMessage_t3039652669 * __this, const RuntimeMethod* method);
// System.Void PEProtocol.RenameRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RenameRequest__ctor_m619206161 (RenameRequest_t1391400285 * __this, const RuntimeMethod* method);
// System.Void NetService::SendMessages(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_SendMessages_m3951671737 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
inline void Queue_1__ctor_m4171879767 (Queue_1_t1693710183 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1__ctor_m3749217910_gshared)(__this, method);
}
// System.Void UIWindowRoot::UpdateText(UnityEngine.UI.Text,System.String)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m1112851524 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___text0, String_t* ___context1, const RuntimeMethod* method);
// System.Void UIWindowRoot::SetActive(UnityEngine.UI.Text,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2555010490 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___go0, bool ___isActive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(!0)
inline void Queue_1_Enqueue_m3056590024 (Queue_1_t1693710183 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1693710183 *, String_t*, const RuntimeMethod*))Queue_1_Enqueue_m1868480850_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_m2387284005 (Queue_1_t1693710183 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1_get_Count_m2496300460_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_m1924377868 (Queue_1_t1693710183 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_t1693710183 *, const RuntimeMethod*))Queue_1_Dequeue_m3550993416_gshared)(__this, method);
}
// System.Void UIDynamicWindow::ShowTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_ShowTips_m2451846051 (UIDynamicWindow_t887270669 * __this, String_t* ___tips0, const RuntimeMethod* method);
// UnityEngine.AnimationClip UnityEngine.Animation::GetClip(System.String)
extern "C" IL2CPP_METHOD_ATTR AnimationClip_t2318505987 * Animation_GetClip_m732294439 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationClip::get_length()
extern "C" IL2CPP_METHOD_ATTR float AnimationClip_get_length_m3296085482 (AnimationClip_t2318505987 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UIDynamicWindow::AnimationDone(System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UIDynamicWindow_AnimationDone_m4080457287 (UIDynamicWindow_t887270669 * __this, float ___time0, Action_t1264377477 * ___aniDone1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void UIDynamicWindow/<AnimationDone>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAnimationDoneU3Ec__Iterator0__ctor_m1395670522 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void UIInfoWindow::RegisterEvents()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_RegisterEvents_m627132418 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method);
// System.Void UIInfoWindow::UpdateUI()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_UpdateUI_m3463701794 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.EventSystems.PointerEventData>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3630593146 (Action_1_t3980368687 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3980368687 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void UIWindowRoot::OnClickDown(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnClickDown_m3587515208 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method);
// System.Void UIWindowRoot::OnDrag(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnDrag_m3207549021 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Int32 Common::GetLevelUpExp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetLevelUpExp_m1507515188 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 Common::GetPowerLimit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetPowerLimit_m565199784 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Image_set_fillAmount_m3737925590 (Image_t2670269651 * __this, float p0, const RuntimeMethod* method);
// System.Int32 Common::GetFightPointByData(PEProtocol.PlayerData)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetFightPointByData_m4009535946 (RuntimeObject * __this /* static, unused */, PlayerData_t3254915629 * p0, const RuntimeMethod* method);
// System.Void UIWindowRoot::UpdateText(UnityEngine.UI.Text,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m3693408129 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___text0, int32_t ___context1, const RuntimeMethod* method);
// System.Void MainCitySystem::HideInfowWindow()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_HideInfowWindow_m3142704830 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PointerEventData_get_position_m437660275 (PointerEventData_t3807901092 * __this, const RuntimeMethod* method);
// System.Void MainCitySystem::RotateCamera(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_RotateCamera_m629685191 (MainCitySystem_t3182791129 * __this, float ___offset0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponentInChildren_TisText_t1901882714_m396351542 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t2670269651 * Component_GetComponent_TisImage_t2670269651_m980647750 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * Component_GetComponent_TisText_t1901882714_m4196288697 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" IL2CPP_METHOD_ATTR RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m2794939670 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void PEProtocol.LoginRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoginRequest__ctor_m2091653095 (LoginRequest_t3434883421 * __this, const RuntimeMethod* method);
// System.Void UIMainCityWindow::UpdateUI()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_UpdateUI_m1491293131 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method);
// System.Void UIMainCityWindow::RegisteTouchEvents()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_RegisteTouchEvents_m1139448742 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method);
// System.Void UIWindowRoot::SetActive(UnityEngine.UI.Image,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2207686297 (UIWindowRoot_t2933752109 * __this, Image_t2670269651 * ___go0, bool ___isActive1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UIWindowRoot::OnClickUp(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnClickUp_m587039422 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.GridLayoutGroup>()
inline GridLayoutGroup_t3046220461 * Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  GridLayoutGroup_t3046220461 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m2242080459 (GridLayoutGroup_t3046220461 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Animation_Play_m27531216 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void MainCitySystem::ShowInfoWindow()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_ShowInfoWindow_m4121297113 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Void MainCitySystem::MoveCharator(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_MoveCharator_m3672229562 (MainCitySystem_t3182791129 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_ClampMagnitude_m1438220061 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_normalized_m2683665860 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UIWindowRoot::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2035249310 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, bool ___isActive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// T UIWindowRoot::GetOrAddCommponent<Listener>(UnityEngine.GameObject)
inline Listener_t973447673 * UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, const RuntimeMethod* method)
{
	return ((  Listener_t973447673 * (*) (UIWindowRoot_t2933752109 *, GameObject_t1113636619 *, const RuntimeMethod*))UIWindowRoot_GetOrAddCommponent_TisRuntimeObject_m1388405977_gshared)(__this, ___go0, method);
}
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
// System.Void AudioService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AudioService__ctor_m3644083228 (AudioService_t3306317363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioService__ctor_m3644083228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t188196812_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m2723480633(__this, /*hidden argument*/Singleton_1__ctor_m2723480633_RuntimeMethod_var);
		return;
	}
}
// System.Void AudioService::Init()
extern "C" IL2CPP_METHOD_ATTR void AudioService_Init_m1729719964 (AudioService_t3306317363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioService_Init_m1729719964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral212297809, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AudioService::PlayBGMusic(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void AudioService_PlayBGMusic_m684665367 (AudioService_t3306317363 * __this, String_t* ___title0, bool ___isLoop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioService_PlayBGMusic_m684665367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AudioClip_t3680889665 * V_1 = NULL;
	{
		String_t* L_0 = ___title0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral287134643, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t3243221030_il2cpp_TypeInfo_var);
		ResourceService_t2066374285 * L_2 = Singleton_1_get_Instance_m3962788585(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3962788585_RuntimeMethod_var);
		String_t* L_3 = V_0;
		NullCheck(L_2);
		AudioClip_t3680889665 * L_4 = ResourceService_LoadClip_m19073935(L_2, L_3, (bool)1, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t3935305588 * L_5 = __this->get_BGMAudioSource_5();
		NullCheck(L_5);
		AudioClip_t3680889665 * L_6 = AudioSource_get_clip_m1234340632(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004a;
		}
	}
	{
		AudioSource_t3935305588 * L_8 = __this->get_BGMAudioSource_5();
		NullCheck(L_8);
		AudioClip_t3680889665 * L_9 = AudioSource_get_clip_m1234340632(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m4211327027(L_9, /*hidden argument*/NULL);
		String_t* L_11 = ___title0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006d;
		}
	}

IL_004a:
	{
		AudioSource_t3935305588 * L_13 = __this->get_BGMAudioSource_5();
		AudioClip_t3680889665 * L_14 = V_1;
		NullCheck(L_13);
		AudioSource_set_clip_m31653938(L_13, L_14, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_15 = __this->get_BGMAudioSource_5();
		bool L_16 = ___isLoop1;
		NullCheck(L_15);
		AudioSource_set_loop_m3659884460(L_15, L_16, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_17 = __this->get_BGMAudioSource_5();
		NullCheck(L_17);
		AudioSource_Play_m48294159(L_17, /*hidden argument*/NULL);
	}

IL_006d:
	{
		return;
	}
}
// System.Void AudioService::PlayEffect(System.String)
extern "C" IL2CPP_METHOD_ATTR void AudioService_PlayEffect_m3443281718 (AudioService_t3306317363 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioService_PlayEffect_m3443281718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AudioClip_t3680889665 * V_1 = NULL;
	{
		String_t* L_0 = ___title0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral287134643, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t3243221030_il2cpp_TypeInfo_var);
		ResourceService_t2066374285 * L_2 = Singleton_1_get_Instance_m3962788585(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3962788585_RuntimeMethod_var);
		String_t* L_3 = V_0;
		NullCheck(L_2);
		AudioClip_t3680889665 * L_4 = ResourceService_LoadClip_m19073935(L_2, L_3, (bool)1, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t3935305588 * L_5 = __this->get_EffectAudioSource_6();
		NullCheck(L_5);
		AudioSource_set_loop_m3659884460(L_5, (bool)0, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_6 = __this->get_EffectAudioSource_6();
		AudioClip_t3680889665 * L_7 = V_1;
		NullCheck(L_6);
		AudioSource_PlayOneShot_m1688286683(L_6, L_7, /*hidden argument*/NULL);
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
// System.Void ClientSession::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ClientSession__ctor_m3650452727 (ClientSession_t2495232797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSession__ctor_m3650452727_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PESession_1__ctor_m1149094845(__this, /*hidden argument*/PESession_1__ctor_m1149094845_RuntimeMethod_var);
		return;
	}
}
// System.Void ClientSession::OnConnected()
extern "C" IL2CPP_METHOD_ATTR void ClientSession_OnConnected_m2454334940 (ClientSession_t2495232797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSession_OnConnected_m2454334940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral2444094392, /*hidden argument*/NULL);
		Common_Log_m1999533456(NULL /*static, unused*/, _stringLiteral2444094392, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClientSession::OnDisConnected()
extern "C" IL2CPP_METHOD_ATTR void ClientSession_OnDisConnected_m455781023 (ClientSession_t2495232797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSession_OnDisConnected_m455781023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral2764797858, /*hidden argument*/NULL);
		Common_Log_m1999533456(NULL /*static, unused*/, _stringLiteral2444094392, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ClientSession::OnReciveMsg(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void ClientSession_OnReciveMsg_m2904425533 (ClientSession_t2495232797 * __this, GameMessage_t3039652669 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ClientSession_OnReciveMsg_m2904425533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		GameMessage_t3039652669 * L_0 = ___msg0;
		NullCheck(L_0);
		int32_t L_1 = ((PEMsg_t3742698931 *)L_0)->get_cmd_1();
		V_0 = L_1;
		RuntimeObject * L_2 = Box(CMD_t3832546052_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_0 = *(int32_t*)UnBox(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3992809584, L_3, /*hidden argument*/NULL);
		Common_Log_m1999533456(NULL /*static, unused*/, L_4, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t4056439010_il2cpp_TypeInfo_var);
		NetService_t2879592265 * L_5 = Singleton_1_get_Instance_m1023393517(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1023393517_RuntimeMethod_var);
		GameMessage_t3039652669 * L_6 = ___msg0;
		NullCheck(L_5);
		NetService_AddMessage_m487009610(L_5, L_6, /*hidden argument*/NULL);
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
// System.Void Consts::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Consts__ctor_m218126615 (Consts_t1749595333 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Consts::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Consts__cctor_m142380206 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Consts__cctor_m142380206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3963756750, /*hidden argument*/NULL);
		((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->set_AudioPath_0(L_1);
		((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->set_RdNamePath_1(_stringLiteral4106635535);
		((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->set_MapCfgPath_2(_stringLiteral85363722);
		((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->set_PrefabPath_3(_stringLiteral826933651);
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
// System.Void GameRoot::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameRoot__ctor_m1525162918 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameRoot__ctor_m1525162918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m1060664987(__this, /*hidden argument*/Singleton_1__ctor_m1060664987_RuntimeMethod_var);
		return;
	}
}
// PEProtocol.PlayerData GameRoot::get_PlayerData()
extern "C" IL2CPP_METHOD_ATTR PlayerData_t3254915629 * GameRoot_get_PlayerData_m1744716642 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	{
		PlayerData_t3254915629 * L_0 = __this->get_playerData_10();
		return L_0;
	}
}
// System.Void GameRoot::set_PlayerData(PEProtocol.PlayerData)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_set_PlayerData_m2809959731 (GameRoot_t1219302553 * __this, PlayerData_t3254915629 * ___value0, const RuntimeMethod* method)
{
	{
		PlayerData_t3254915629 * L_0 = ___value0;
		__this->set_playerData_10(L_0);
		return;
	}
}
// System.Void GameRoot::ResetPlayerName(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_ResetPlayerName_m1169702375 (GameRoot_t1219302553 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		PlayerData_t3254915629 * L_0 = GameRoot_get_PlayerData_m1744716642(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		L_0->set_name_1(L_1);
		return;
	}
}
// System.Void GameRoot::Init()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_Init_m3197310259 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	{
		ResourceService_t2066374285 * L_0 = __this->get_resourceService_5();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<ResourceService>::Init() */, L_0);
		AudioService_t3306317363 * L_1 = __this->get_audioService_7();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<AudioService>::Init() */, L_1);
		NetService_t2879592265 * L_2 = __this->get_netService_8();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<NetService>::Init() */, L_2);
		GameRoot_InitSystems_m4000911847(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameRoot::InitSystems()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_InitSystems_m4000911847 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	{
		LoginSystem_t1302229287 * L_0 = __this->get_m_LoginSystem_6();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<LoginSystem>::Init() */, L_0);
		MainCitySystem_t3182791129 * L_1 = __this->get_m_MainCitySystem_9();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<MainCitySystem>::Init() */, L_1);
		LoginSystem_t1302229287 * L_2 = __this->get_m_LoginSystem_6();
		NullCheck(L_2);
		LoginSystem_EnterLogin_m692613556(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameRoot::Start()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_Start_m1398674756 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameRoot_Start_m1398674756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2524060802, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t3243221030_il2cpp_TypeInfo_var);
		ResourceService_t2066374285 * L_1 = Singleton_1_get_Instance_m3962788585(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3962788585_RuntimeMethod_var);
		__this->set_resourceService_5(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2479076032_il2cpp_TypeInfo_var);
		LoginSystem_t1302229287 * L_2 = Singleton_1_get_Instance_m3381088662(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3381088662_RuntimeMethod_var);
		__this->set_m_LoginSystem_6(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t188196812_il2cpp_TypeInfo_var);
		AudioService_t3306317363 * L_3 = Singleton_1_get_Instance_m2437137635(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m2437137635_RuntimeMethod_var);
		__this->set_audioService_7(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t4056439010_il2cpp_TypeInfo_var);
		NetService_t2879592265 * L_4 = Singleton_1_get_Instance_m1023393517(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1023393517_RuntimeMethod_var);
		__this->set_netService_8(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_5 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		__this->set_m_MainCitySystem_9(L_5);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<GameRoot>::Init() */, __this);
		GameRoot_ClearUI_m1148787738(__this, /*hidden argument*/NULL);
		UIDynamicWindow_t887270669 * L_6 = __this->get_UIDynamicWindow_12();
		NullCheck(L_6);
		UIWindowRoot_SetWindowState_m1207802075(L_6, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameRoot::PlayEffect(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_PlayEffect_m2002588247 (RuntimeObject * __this /* static, unused */, String_t* ___title0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameRoot_PlayEffect_m2002588247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		AudioService_t3306317363 * L_1 = L_0->get_audioService_7();
		String_t* L_2 = ___title0;
		NullCheck(L_1);
		AudioService_PlayEffect_m3443281718(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameRoot::AddTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameRoot_AddTips_m3871248750 (RuntimeObject * __this /* static, unused */, String_t* ___tips0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameRoot_AddTips_m3871248750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		UIDynamicWindow_t887270669 * L_1 = L_0->get_UIDynamicWindow_12();
		String_t* L_2 = ___tips0;
		NullCheck(L_1);
		UIDynamicWindow_AddTips_m457295066(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameRoot::ClearUI()
extern "C" IL2CPP_METHOD_ATTR void GameRoot_ClearUI_m1148787738 (GameRoot_t1219302553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameRoot_ClearUI_m1148787738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Transform_Find_m1729760951(L_0, _stringLiteral2323074440, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0033;
	}

IL_0018:
	{
		Transform_t3600365921 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Transform_t3600365921 * L_5 = Transform_GetChild_m1092972975(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = Component_get_gameObject_m442555142(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_8 = V_1;
		Transform_t3600365921 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m3145433196(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
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
// System.Void Listener::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Listener__ctor_m3894670236 (Listener_t973447673 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Listener::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Listener_OnDrag_m1412363767 (Listener_t973447673 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_OnDrag_m1412363767_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3980368687 * L_0 = __this->get_onDrag_6();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t3980368687 * L_1 = __this->get_onDrag_6();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_m3141868843(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3141868843_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Listener::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Listener_OnPointerDown_m3287325241 (Listener_t973447673 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_OnPointerDown_m3287325241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3980368687 * L_0 = __this->get_onClickDown_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t3980368687 * L_1 = __this->get_onClickDown_4();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_m3141868843(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3141868843_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Listener::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void Listener_OnPointerUp_m1286960215 (Listener_t973447673 * __this, PointerEventData_t3807901092 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Listener_OnPointerUp_m1286960215_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t3980368687 * L_0 = __this->get_onClickUp_5();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t3980368687 * L_1 = __this->get_onClickUp_5();
		PointerEventData_t3807901092 * L_2 = ___eventData0;
		NullCheck(L_1);
		Action_1_Invoke_m3141868843(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3141868843_RuntimeMethod_var);
	}

IL_0017:
	{
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
// System.Void LoginSystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoginSystem__ctor_m1675726064 (LoginSystem_t1302229287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem__ctor_m1675726064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemRoot_1__ctor_m344869798(__this, /*hidden argument*/SystemRoot_1__ctor_m344869798_RuntimeMethod_var);
		return;
	}
}
// System.Void LoginSystem::Init()
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_Init_m2356485445 (LoginSystem_t1302229287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem_Init_m2356485445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemRoot_1_Init_m912773789(__this, /*hidden argument*/SystemRoot_1_Init_m912773789_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3824027216, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoginSystem::EnterLogin()
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_EnterLogin_m692613556 (LoginSystem_t1302229287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem_EnterLogin_m692613556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		ResourceService_t2066374285 * L_1 = L_0->get_resourceService_5();
		intptr_t L_2 = (intptr_t)LoginSystem_U3CEnterLoginU3Em__0_m898347876_RuntimeMethod_var;
		Action_t1264377477 * L_3 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ResourceService_AsyncLoadScene_m3641494555(L_1, _stringLiteral1873156398, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoginSystem::ReqLogin(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_ReqLogin_m2485907898 (LoginSystem_t1302229287 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem_ReqLogin_m2485907898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral2741517327, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		GameMessage_t3039652669 * L_1 = ___message0;
		NullCheck(L_1);
		LoginRespond_t4248255773 * L_2 = L_1->get_loginRespond_4();
		NullCheck(L_2);
		PlayerData_t3254915629 * L_3 = L_2->get_playerData_0();
		NullCheck(L_0);
		GameRoot_set_PlayerData_m2809959731(L_0, L_3, /*hidden argument*/NULL);
		GameMessage_t3039652669 * L_4 = ___message0;
		NullCheck(L_4);
		LoginRespond_t4248255773 * L_5 = L_4->get_loginRespond_4();
		NullCheck(L_5);
		PlayerData_t3254915629 * L_6 = L_5->get_playerData_0();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_name_1();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		UICreatWindow_t3575057914 * L_10 = __this->get_UICreatWindow_9();
		NullCheck(L_10);
		UIWindowRoot_SetWindowState_m1207802075(L_10, (bool)1, /*hidden argument*/NULL);
		goto IL_0059;
	}

IL_004f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_11 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		NullCheck(L_11);
		MainCitySystem_EnterMainCity_m703939264(L_11, /*hidden argument*/NULL);
	}

IL_0059:
	{
		UILoginWindow_t2411734088 * L_12 = __this->get_LoginWindow_8();
		NullCheck(L_12);
		UIWindowRoot_SetWindowState_m1207802075(L_12, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoginSystem::RenameRespond(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_RenameRespond_m2316697537 (LoginSystem_t1302229287 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem_RenameRespond_m2316697537_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		GameMessage_t3039652669 * L_1 = ___message0;
		NullCheck(L_1);
		RenameRespond_t122899175 * L_2 = L_1->get_renameRespond_6();
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_0();
		NullCheck(L_0);
		GameRoot_ResetPlayerName_m1169702375(L_0, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_4 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		NullCheck(L_4);
		MainCitySystem_EnterMainCity_m703939264(L_4, /*hidden argument*/NULL);
		UICreatWindow_t3575057914 * L_5 = __this->get_UICreatWindow_9();
		NullCheck(L_5);
		UIWindowRoot_SetWindowState_m1207802075(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoginSystem::<EnterLogin>m__0()
extern "C" IL2CPP_METHOD_ATTR void LoginSystem_U3CEnterLoginU3Em__0_m898347876 (LoginSystem_t1302229287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoginSystem_U3CEnterLoginU3Em__0_m898347876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UILoginWindow_t2411734088 * L_0 = __this->get_LoginWindow_8();
		NullCheck(L_0);
		UIWindowRoot_SetWindowState_m1207802075(L_0, (bool)1, /*hidden argument*/NULL);
		AudioService_t3306317363 * L_1 = ((SystemRoot_1_t2075122454 *)__this)->get_audioService_5();
		NullCheck(L_1);
		AudioService_PlayBGMusic_m684665367(L_1, _stringLiteral714695879, (bool)1, /*hidden argument*/NULL);
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
// System.Void LoopAnimation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoopAnimation__ctor_m3206889208 (LoopAnimation_t570301632 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoopAnimation::Awake()
extern "C" IL2CPP_METHOD_ATTR void LoopAnimation_Awake_m644748016 (LoopAnimation_t570301632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoopAnimation_Awake_m644748016_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t3648466861 * L_0 = Component_GetComponent_TisAnimation_t3648466861_m4214971628(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var);
		__this->set_m_Animation_4(L_0);
		return;
	}
}
// System.Void LoopAnimation::Start()
extern "C" IL2CPP_METHOD_ATTR void LoopAnimation_Start_m2392886314 (LoopAnimation_t570301632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoopAnimation_Start_m2392886314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t3648466861 * L_0 = __this->get_m_Animation_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral4205598462, (0.0f), (20.0f), /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Void LoopAnimation::PlayAnimation()
extern "C" IL2CPP_METHOD_ATTR void LoopAnimation_PlayAnimation_m423179822 (LoopAnimation_t570301632 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoopAnimation_PlayAnimation_m423179822_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animation_t3648466861 * L_0 = __this->get_m_Animation_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		Animation_t3648466861 * L_2 = __this->get_m_Animation_4();
		NullCheck(L_2);
		Animation_Play_m2798573761(L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
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
// System.Void MainCitySystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem__ctor_m159781211 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem__ctor_m159781211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemRoot_1__ctor_m846942004(__this, /*hidden argument*/SystemRoot_1__ctor_m846942004_RuntimeMethod_var);
		return;
	}
}
// System.Void MainCitySystem::Init()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_Init_m969370344 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_Init_m969370344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemRoot_1_Init_m1772934450(__this, /*hidden argument*/SystemRoot_1_Init_m1772934450_RuntimeMethod_var);
		Common_Log_m1999533456(NULL /*static, unused*/, _stringLiteral2315954190, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::EnterMainCity()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_EnterMainCity_m703939264 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_EnterMainCity_m703939264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * V_0 = NULL;
	{
		U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * L_0 = (U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 *)il2cpp_codegen_object_new(U3CEnterMainCityU3Ec__AnonStorey0_t1476212760_il2cpp_TypeInfo_var);
		U3CEnterMainCityU3Ec__AnonStorey0__ctor_m1546023975(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		UIMainCityWindow_t2652100507 * L_2 = __this->get_MainCityWindow_8();
		NullCheck(L_2);
		UIWindowRoot_SetWindowState_m1207802075(L_2, (bool)0, /*hidden argument*/NULL);
		U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * L_3 = V_0;
		ResourceService_t2066374285 * L_4 = ((SystemRoot_1_t3955684296 *)__this)->get_resourceService_6();
		NullCheck(L_4);
		MapConfigures_t4238555288 * L_5 = ResourceService_GetConfigures_m1819441321(L_4, ((int32_t)10000), /*hidden argument*/NULL);
		NullCheck(L_3);
		L_3->set_mapConfigure_0(L_5);
		ResourceService_t2066374285 * L_6 = ((SystemRoot_1_t3955684296 *)__this)->get_resourceService_6();
		U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * L_7 = V_0;
		NullCheck(L_7);
		MapConfigures_t4238555288 * L_8 = L_7->get_mapConfigure_0();
		NullCheck(L_8);
		String_t* L_9 = L_8->get_sceneName_2();
		U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * L_10 = V_0;
		intptr_t L_11 = (intptr_t)U3CEnterMainCityU3Ec__AnonStorey0_U3CU3Em__0_m142346156_RuntimeMethod_var;
		Action_t1264377477 * L_12 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_12, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_6);
		ResourceService_AsyncLoadScene_m3641494555(L_6, L_9, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::LoadPrefab(MapConfigures)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_LoadPrefab_m2605182113 (MainCitySystem_t3182791129 * __this, MapConfigures_t4238555288 * ___map0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_LoadPrefab_m2605182113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		ResourceService_t2066374285 * L_0 = ((SystemRoot_1_t3955684296 *)__this)->get_resourceService_6();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = ResourceService_GetPlayer_m2440938853(L_0, _stringLiteral667794066, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_t1113636619 * L_2 = V_0;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		MapConfigures_t4238555288 * L_4 = ___map0;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = L_4->get_playerBornPos_5();
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_5, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		MapConfigures_t4238555288 * L_8 = ___map0;
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = L_8->get_playerBornRot_6();
		NullCheck(L_7);
		Transform_set_eulerAngles_m135219616(L_7, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = V_0;
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), (1.4f), (1.4f), (1.4f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_m3053443106(L_11, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_0;
		NullCheck(L_13);
		PlayerController_t2064355688 * L_14 = GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(L_13, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var);
		__this->set_playerController_10(L_14);
		PlayerController_t2064355688 * L_15 = __this->get_playerController_10();
		NullCheck(L_15);
		PlayerController_InitCharator_m3477137428(L_15, /*hidden argument*/NULL);
		Camera_t4157153871 * L_16 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		MapConfigures_t4238555288 * L_19 = ___map0;
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = L_19->get_mainCamPos_3();
		NullCheck(L_18);
		Transform_set_position_m3387557959(L_18, L_20, /*hidden argument*/NULL);
		Camera_t4157153871 * L_21 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = Component_get_transform_m3162698980(L_22, /*hidden argument*/NULL);
		MapConfigures_t4238555288 * L_24 = ___map0;
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = L_24->get_mainCamRot_4();
		NullCheck(L_23);
		Transform_set_localEulerAngles_m4202601546(L_23, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::MoveCharator(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_MoveCharator_m3672229562 (MainCitySystem_t3182791129 * __this, Vector2_t2156229523  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_MoveCharator_m3672229562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		PlayerController_t2064355688 * L_3 = __this->get_playerController_10();
		NullCheck(L_3);
		PlayerController_SetBlend_m1788204943(L_3, (0.0f), /*hidden argument*/NULL);
		goto IL_0035;
	}

IL_0025:
	{
		PlayerController_t2064355688 * L_4 = __this->get_playerController_10();
		NullCheck(L_4);
		PlayerController_SetBlend_m1788204943(L_4, (1.0f), /*hidden argument*/NULL);
	}

IL_0035:
	{
		PlayerController_t2064355688 * L_5 = __this->get_playerController_10();
		Vector2_t2156229523  L_6 = ___direction0;
		NullCheck(L_5);
		PlayerController_set_Direction_m3826813410(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::ShowInfoWindow()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_ShowInfoWindow_m4121297113 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_ShowInfoWindow_m4121297113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3600365921 * L_0 = __this->get_CharShowcam_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		GameObject_t1113636619 * L_2 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral430578126, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		__this->set_CharShowcam_11(L_3);
	}

IL_0026:
	{
		Transform_t3600365921 * L_4 = __this->get_CharShowcam_11();
		PlayerController_t2064355688 * L_5 = __this->get_playerController_10();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		PlayerController_t2064355688 * L_8 = __this->get_playerController_10();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_forward_m747522392(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (3.0f), L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (0.0f), (1.2f), (0.0f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4128471975(L_4, L_14, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = __this->get_CharShowcam_11();
		PlayerController_t2064355688 * L_16 = __this->get_playerController_10();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_eulerAngles_m2743581774(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		float L_19 = (&V_0)->get_y_3();
		Vector3_t3722313464  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector3__ctor_m3353183577((&L_20), (0.0f), ((float)il2cpp_codegen_add((float)(180.0f), (float)L_19)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localEulerAngles_m4202601546(L_15, L_20, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = __this->get_CharShowcam_11();
		Vector3_t3722313464  L_22 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_m3053443106(L_21, L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_23 = __this->get_CharShowcam_11();
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m796801857(L_24, (bool)1, /*hidden argument*/NULL);
		UIInfoWindow_t2497120935 * L_25 = __this->get_UIInfoWindow_9();
		NullCheck(L_25);
		UIInfoWindow_ShowInfoWindow_m1819017755(L_25, /*hidden argument*/NULL);
		AudioService_t3306317363 * L_26 = ((SystemRoot_1_t3955684296 *)__this)->get_audioService_5();
		NullCheck(L_26);
		AudioService_PlayEffect_m3443281718(L_26, _stringLiteral412600963, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::HideInfowWindow()
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_HideInfowWindow_m3142704830 (MainCitySystem_t3182791129 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = __this->get_CharShowcam_11();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem::RotateCamera(System.Single)
extern "C" IL2CPP_METHOD_ATTR void MainCitySystem_RotateCamera_m629685191 (MainCitySystem_t3182791129 * __this, float ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCitySystem_RotateCamera_m629685191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = __this->get_CharShowcam_11();
		PlayerController_t2064355688 * L_1 = __this->get_playerController_10();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = ___offset0;
		float L_6 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_RotateAround_m2651195670(L_0, L_3, L_4, ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), /*hidden argument*/NULL);
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
// System.Void MainCitySystem/<EnterMainCity>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterMainCityU3Ec__AnonStorey0__ctor_m1546023975 (U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCitySystem/<EnterMainCity>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CEnterMainCityU3Ec__AnonStorey0_U3CU3Em__0_m142346156 (U3CEnterMainCityU3Ec__AnonStorey0_t1476212760 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CEnterMainCityU3Ec__AnonStorey0_U3CU3Em__0_m142346156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Common_Log_m1999533456(NULL /*static, unused*/, _stringLiteral3989844744, 0, /*hidden argument*/NULL);
		MainCitySystem_t3182791129 * L_0 = __this->get_U24this_1();
		NullCheck(L_0);
		UIMainCityWindow_t2652100507 * L_1 = L_0->get_MainCityWindow_8();
		NullCheck(L_1);
		UIWindowRoot_SetWindowState_m1207802075(L_1, (bool)1, /*hidden argument*/NULL);
		MainCitySystem_t3182791129 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		AudioService_t3306317363 * L_3 = ((SystemRoot_1_t3955684296 *)L_2)->get_audioService_5();
		NullCheck(L_3);
		AudioService_PlayBGMusic_m684665367(L_3, _stringLiteral1186888474, (bool)1, /*hidden argument*/NULL);
		MainCitySystem_t3182791129 * L_4 = __this->get_U24this_1();
		MapConfigures_t4238555288 * L_5 = __this->get_mapConfigure_0();
		NullCheck(L_4);
		MainCitySystem_LoadPrefab_m2605182113(L_4, L_5, /*hidden argument*/NULL);
		MainCitySystem_t3182791129 * L_6 = __this->get_U24this_1();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = L_6->get_CharShowcam_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_7, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		MainCitySystem_t3182791129 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = L_9->get_CharShowcam_11();
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_006f:
	{
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
// System.Void MapConfigures::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MapConfigures__ctor_m2426975784 (MapConfigures_t4238555288 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MapConfigures__ctor_m2426975784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseData_1__ctor_m2259500906(__this, /*hidden argument*/BaseData_1__ctor_m2259500906_RuntimeMethod_var);
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
// System.Void NetService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NetService__ctor_m1501005763 (NetService_t2879592265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService__ctor_m1501005763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t2885912163 * L_0 = (Queue_1_t2885912163 *)il2cpp_codegen_object_new(Queue_1_t2885912163_il2cpp_TypeInfo_var);
		Queue_1__ctor_m383305675(L_0, /*hidden argument*/Queue_1__ctor_m383305675_RuntimeMethod_var);
		__this->set_msgQueue_6(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t4056439010_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m2804516655(__this, /*hidden argument*/Singleton_1__ctor_m2804516655_RuntimeMethod_var);
		return;
	}
}
// System.Void NetService::Init()
extern "C" IL2CPP_METHOD_ATTR void NetService_Init_m3288727343 (NetService_t2879592265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_Init_m3288727343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	PESocket_2_t4073481024 * G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	PESocket_2_t4073481024 * G_B1_1 = NULL;
	{
		PESocket_2_t4073481024 * L_0 = (PESocket_2_t4073481024 *)il2cpp_codegen_object_new(PESocket_2_t4073481024_il2cpp_TypeInfo_var);
		PESocket_2__ctor_m1643435129(L_0, /*hidden argument*/PESocket_2__ctor_m1643435129_RuntimeMethod_var);
		__this->set_client_5(L_0);
		PESocket_2_t4073481024 * L_1 = __this->get_client_5();
		NullCheck(L_1);
		PESocket_2_StartAsClient_m3560707570(L_1, _stringLiteral4122949500, ((int32_t)17666), /*hidden argument*/PESocket_2_StartAsClient_m3560707570_RuntimeMethod_var);
		PESocket_2_t4073481024 * L_2 = __this->get_client_5();
		IL2CPP_RUNTIME_CLASS_INIT(NetService_t2879592265_il2cpp_TypeInfo_var);
		Action_2_t778698442 * L_3 = ((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		G_B1_0 = 1;
		G_B1_1 = L_2;
		if (L_3)
		{
			G_B2_0 = 1;
			G_B2_1 = L_2;
			goto IL_003f;
		}
	}
	{
		intptr_t L_4 = (intptr_t)NetService_U3CInitU3Em__0_m3835110316_RuntimeMethod_var;
		Action_2_t778698442 * L_5 = (Action_2_t778698442 *)il2cpp_codegen_object_new(Action_2_t778698442_il2cpp_TypeInfo_var);
		Action_2__ctor_m313498710(L_5, NULL, L_4, /*hidden argument*/Action_2__ctor_m313498710_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NetService_t2879592265_il2cpp_TypeInfo_var);
		((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_8(L_5);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetService_t2879592265_il2cpp_TypeInfo_var);
		Action_2_t778698442 * L_6 = ((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_8();
		NullCheck(G_B2_1);
		PESocket_2_SetLog_m3690170799(G_B2_1, (bool)G_B2_0, L_6, /*hidden argument*/PESocket_2_SetLog_m3690170799_RuntimeMethod_var);
		return;
	}
}
// System.Void NetService::AddMessage(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_AddMessage_m487009610 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_AddMessage_m487009610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetService_t2879592265_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->get_obj_7();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		Queue_1_t2885912163 * L_2 = __this->get_msgQueue_6();
		GameMessage_t3039652669 * L_3 = ___message0;
		NullCheck(L_2);
		Queue_1_Enqueue_m2174174058(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m2174174058_RuntimeMethod_var);
		IL2CPP_LEAVE(0x24, FINALLY_001d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001d;
	}

FINALLY_001d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(29)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(29)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		return;
	}
}
// System.Void NetService::Update()
extern "C" IL2CPP_METHOD_ATTR void NetService_Update_m1183946907 (NetService_t2879592265 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_Update_m1183946907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	GameMessage_t3039652669 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t2885912163 * L_0 = __this->get_msgQueue_6();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m741591674(L_0, /*hidden argument*/Queue_1_get_Count_m741591674_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NetService_t2879592265_il2cpp_TypeInfo_var);
		String_t* L_2 = ((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->get_obj_7();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		Queue_1_t2885912163 * L_4 = __this->get_msgQueue_6();
		NullCheck(L_4);
		GameMessage_t3039652669 * L_5 = Queue_1_Dequeue_m313156729(L_4, /*hidden argument*/Queue_1_Dequeue_m313156729_RuntimeMethod_var);
		V_1 = L_5;
		GameMessage_t3039652669 * L_6 = V_1;
		NetService_HandleMessage_m982056862(__this, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_0035);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0035;
	}

FINALLY_0035:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(53)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(53)
	{
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003c:
	{
		return;
	}
}
// System.Void NetService::HandleMessage(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_HandleMessage_m982056862 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_HandleMessage_m982056862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GameMessage_t3039652669 * L_0 = ___message0;
		NullCheck(L_0);
		int32_t L_1 = ((PEMsg_t3742698931 *)L_0)->get_err_2();
		if (!L_1)
		{
			goto IL_0071;
		}
	}
	{
		GameMessage_t3039652669 * L_2 = ___message0;
		NullCheck(L_2);
		int32_t L_3 = ((PEMsg_t3742698931 *)L_2)->get_err_2();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_003e;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_002f:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral2861292902, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_003e:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral1119318821, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_004d:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral1232765888, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_005c:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral3509781335, /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_006b:
	{
		goto IL_0070;
	}

IL_0070:
	{
		return;
	}

IL_0071:
	{
		GameMessage_t3039652669 * L_5 = ___message0;
		NullCheck(L_5);
		int32_t L_6 = ((PEMsg_t3742698931 *)L_5)->get_cmd_1();
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)102))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)104))))
		{
			goto IL_009d;
		}
	}
	{
		goto IL_00ad;
	}

IL_008d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2479076032_il2cpp_TypeInfo_var);
		LoginSystem_t1302229287 * L_9 = Singleton_1_get_Instance_m3381088662(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3381088662_RuntimeMethod_var);
		GameMessage_t3039652669 * L_10 = ___message0;
		NullCheck(L_9);
		LoginSystem_ReqLogin_m2485907898(L_9, L_10, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2479076032_il2cpp_TypeInfo_var);
		LoginSystem_t1302229287 * L_11 = Singleton_1_get_Instance_m3381088662(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3381088662_RuntimeMethod_var);
		GameMessage_t3039652669 * L_12 = ___message0;
		NullCheck(L_11);
		LoginSystem_RenameRespond_m2316697537(L_11, L_12, /*hidden argument*/NULL);
		goto IL_00b2;
	}

IL_00ad:
	{
		goto IL_00b2;
	}

IL_00b2:
	{
		return;
	}
}
// System.Void NetService::SendMessages(PEProtocol.GameMessage)
extern "C" IL2CPP_METHOD_ATTR void NetService_SendMessages_m3951671737 (NetService_t2879592265 * __this, GameMessage_t3039652669 * ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_SendMessages_m3951671737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PESocket_2_t4073481024 * L_0 = __this->get_client_5();
		NullCheck(L_0);
		ClientSession_t2495232797 * L_1 = L_0->get_session_1();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		PESocket_2_t4073481024 * L_2 = __this->get_client_5();
		NullCheck(L_2);
		ClientSession_t2495232797 * L_3 = L_2->get_session_1();
		GameMessage_t3039652669 * L_4 = ___message0;
		NullCheck(L_3);
		PESession_1_SendMsg_m1443557105(L_3, L_4, /*hidden argument*/PESession_1_SendMsg_m1443557105_RuntimeMethod_var);
		goto IL_0036;
	}

IL_0026:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral1125707235, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void Singleton`1<NetService>::Init() */, __this);
	}

IL_0036:
	{
		return;
	}
}
// System.Void NetService::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NetService__cctor_m1915974662 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService__cctor_m1915974662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NetService_t2879592265_StaticFields*)il2cpp_codegen_static_fields_for(NetService_t2879592265_il2cpp_TypeInfo_var))->set_obj_7(_stringLiteral1167972383);
		return;
	}
}
// System.Void NetService::<Init>m__0(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NetService_U3CInitU3Em__0_m3835110316 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, int32_t ___lv1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetService_U3CInitU3Em__0_m3835110316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___lv1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0063;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_001b:
	{
		String_t* L_1 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral951102123, L_1, /*hidden argument*/NULL);
		___msg0 = L_2;
		String_t* L_3 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0033:
	{
		String_t* L_4 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2401556453, L_4, /*hidden argument*/NULL);
		___msg0 = L_5;
		String_t* L_6 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_004b:
	{
		String_t* L_7 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral98096755, L_7, /*hidden argument*/NULL);
		___msg0 = L_8;
		String_t* L_9 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0063:
	{
		String_t* L_10 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3107451843, L_10, /*hidden argument*/NULL);
		___msg0 = L_11;
		String_t* L_12 = ___msg0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_007b:
	{
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
// System.Void PlayerController::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 PlayerController::get_Direction()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  PlayerController_get_Direction_m2870697875 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		Vector2_t2156229523  L_0 = __this->get_direction_8();
		return L_0;
	}
}
// System.Void PlayerController::set_Direction(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_set_Direction_m3826813410 (PlayerController_t2064355688 * __this, Vector2_t2156229523  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_set_Direction_m3826813410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = Vector2_op_Inequality_m3858779880(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		__this->set_isMoving_7((bool)1);
		goto IL_0023;
	}

IL_001c:
	{
		__this->set_isMoving_7((bool)0);
	}

IL_0023:
	{
		Vector2_t2156229523  L_3 = ___value0;
		__this->set_direction_8(L_3);
		return;
	}
}
// System.Void PlayerController::InitCharator()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_InitCharator_m3477137428 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_InitCharator_m3477137428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_cam_6(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_3 = __this->get_cam_6();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		__this->set_CamOffset_9(L_6);
		return;
	}
}
// System.Void PlayerController::Update()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_currentBlend_11();
		float L_1 = __this->get_targetBlend_10();
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_0017;
		}
	}
	{
		PlayerController_UpdateMixBlend_m2291897277(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		bool L_2 = __this->get_isMoving_7();
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		PlayerController_UpdateDirection_m183858564(__this, /*hidden argument*/NULL);
		PlayerController_Moving_m2764425608(__this, /*hidden argument*/NULL);
		PlayerController_CameraFollow_m316258585(__this, /*hidden argument*/NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void PlayerController::UpdateDirection()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_UpdateDirection_m183858564 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_UpdateDirection_m183858564_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Vector2_t2156229523  L_0 = PlayerController_get_Direction_m2870697875(__this, /*hidden argument*/NULL);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		float L_2 = Vector2_SignedAngle_m1664554214(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		Camera_t4157153871 * L_3 = __this->get_cam_6();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_eulerAngles_m2743581774(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_y_3();
		V_0 = ((float)il2cpp_codegen_add((float)L_2, (float)L_6));
		float L_7 = V_0;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_2), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = V_2;
		NullCheck(L_8);
		Transform_set_localEulerAngles_m4202601546(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Moving()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_Moving_m2764425608 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Moving_m2764425608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharacterController_t1138636865 * L_0 = __this->get_character_5();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_forward_m747522392(L_1, /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_4, (8.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		CharacterController_Move_m1547317252(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::CameraFollow()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_CameraFollow_m316258585 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_CameraFollow_m316258585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t4157153871 * L_0 = __this->get_cam_6();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = __this->get_CamOffset_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::SetBlend(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PlayerController_SetBlend_m1788204943 (PlayerController_t2064355688 * __this, float ___blend0, const RuntimeMethod* method)
{
	{
		float L_0 = ___blend0;
		__this->set_targetBlend_10(L_0);
		return;
	}
}
// System.Void PlayerController::UpdateMixBlend()
extern "C" IL2CPP_METHOD_ATTR void PlayerController_UpdateMixBlend_m2291897277 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_UpdateMixBlend_m2291897277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->get_targetBlend_10();
		float L_1 = __this->get_currentBlend_11();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = fabsf(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_3))))))
		{
			goto IL_0033;
		}
	}
	{
		float L_4 = __this->get_targetBlend_10();
		__this->set_currentBlend_11(L_4);
		goto IL_0079;
	}

IL_0033:
	{
		float L_5 = __this->get_targetBlend_10();
		float L_6 = __this->get_currentBlend_11();
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_0061;
		}
	}
	{
		float L_7 = __this->get_currentBlend_11();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentBlend_11(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_8)))));
		goto IL_0079;
	}

IL_0061:
	{
		float L_9 = __this->get_currentBlend_11();
		float L_10 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_currentBlend_11(((float)il2cpp_codegen_add((float)L_9, (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_10)))));
	}

IL_0079:
	{
		Animator_t434523843 * L_11 = __this->get_animator_4();
		float L_12 = __this->get_currentBlend_11();
		NullCheck(L_11);
		Animator_SetFloat_m1701463607(L_11, _stringLiteral2721545641, L_12, /*hidden argument*/NULL);
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
// System.Void ResourceService::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ResourceService__ctor_m1344387670 (ResourceService_t2066374285 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService__ctor_m1344387670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3466145964 * L_0 = (Dictionary_2_t3466145964 *)il2cpp_codegen_object_new(Dictionary_2_t3466145964_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m856528887(L_0, /*hidden argument*/Dictionary_2__ctor_m856528887_RuntimeMethod_var);
		__this->set_m_Audios_6(L_0);
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_1, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_Surname_7(L_1);
		List_1_t3319525431 * L_2 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_2, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_MaleName_8(L_2);
		List_1_t3319525431 * L_3 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_3, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_m_FemaleName_9(L_3);
		Dictionary_2_t3127268619 * L_4 = (Dictionary_2_t3127268619 *)il2cpp_codegen_object_new(Dictionary_2_t3127268619_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1312219566(L_4, /*hidden argument*/Dictionary_2__ctor_m1312219566_RuntimeMethod_var);
		__this->set_m_MapDict_10(L_4);
		Dictionary_2_t898892918 * L_5 = (Dictionary_2_t898892918 *)il2cpp_codegen_object_new(Dictionary_2_t898892918_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m19875156(L_5, /*hidden argument*/Dictionary_2__ctor_m19875156_RuntimeMethod_var);
		__this->set_m_Player_11(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t3243221030_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m250225138(__this, /*hidden argument*/Singleton_1__ctor_m250225138_RuntimeMethod_var);
		return;
	}
}
// System.Void ResourceService::Init()
extern "C" IL2CPP_METHOD_ATTR void ResourceService_Init_m1934196099 (ResourceService_t2066374285 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_Init_m1934196099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Consts_t1749595333_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->get_RdNamePath_1();
		ResourceService_LoadFromFile_m3276529980(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->get_MapCfgPath_2();
		ResourceService_LoadMapConfigure_m3296367951(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1549170980, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResourceService::AsyncLoadScene(System.String,System.Action)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_AsyncLoadScene_m3641494555 (ResourceService_t2066374285 * __this, String_t* ___name0, Action_t1264377477 * ___OnLoaded1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_AsyncLoadScene_m3641494555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * V_0 = NULL;
	{
		U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * L_0 = (U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 *)il2cpp_codegen_object_new(U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840_il2cpp_TypeInfo_var);
		U3CAsyncLoadSceneU3Ec__AnonStorey0__ctor_m905275126(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * L_1 = V_0;
		Action_t1264377477 * L_2 = ___OnLoaded1;
		NullCheck(L_1);
		L_1->set_OnLoaded_1(L_2);
		U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_4 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_4);
		UILoadingWindow_t3075121329 * L_5 = L_4->get_UILoadingWindow_11();
		NullCheck(L_5);
		UIWindowRoot_SetWindowState_m1207802075(L_5, (bool)1, /*hidden argument*/NULL);
		U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * L_6 = V_0;
		String_t* L_7 = ___name0;
		AsyncOperation_t1445031843 * L_8 = SceneManager_LoadSceneAsync_m18587237(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_progress_0(L_8);
		U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * L_9 = V_0;
		intptr_t L_10 = (intptr_t)U3CAsyncLoadSceneU3Ec__AnonStorey0_U3CU3Em__0_m3067507315_RuntimeMethod_var;
		Action_t1264377477 * L_11 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_11, L_9, L_10, /*hidden argument*/NULL);
		__this->set_OnSceceLoad_5(L_11);
		return;
	}
}
// UnityEngine.AudioClip ResourceService::LoadClip(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR AudioClip_t3680889665 * ResourceService_LoadClip_m19073935 (ResourceService_t2066374285 * __this, String_t* ___path0, bool ___cached1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_LoadClip_m19073935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioClip_t3680889665 * V_0 = NULL;
	{
		V_0 = (AudioClip_t3680889665 *)NULL;
		Dictionary_2_t3466145964 * L_0 = __this->get_m_Audios_6();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m2923550377(L_0, L_1, (AudioClip_t3680889665 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2923550377_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = ___path0;
		AudioClip_t3680889665 * L_4 = Resources_Load_TisAudioClip_t3680889665_m1361768364(NULL /*static, unused*/, L_3, /*hidden argument*/Resources_Load_TisAudioClip_t3680889665_m1361768364_RuntimeMethod_var);
		V_0 = L_4;
		bool L_5 = ___cached1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		Dictionary_2_t3466145964 * L_6 = __this->get_m_Audios_6();
		String_t* L_7 = ___path0;
		AudioClip_t3680889665 * L_8 = V_0;
		NullCheck(L_6);
		Dictionary_2_set_Item_m4152141881(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_set_Item_m4152141881_RuntimeMethod_var);
	}

IL_002f:
	{
		AudioClip_t3680889665 * L_9 = V_0;
		return L_9;
	}
}
// MapConfigures ResourceService::GetConfigures(System.Int32)
extern "C" IL2CPP_METHOD_ATTR MapConfigures_t4238555288 * ResourceService_GetConfigures_m1819441321 (ResourceService_t2066374285 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_GetConfigures_m1819441321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MapConfigures_t4238555288 * V_0 = NULL;
	{
		V_0 = (MapConfigures_t4238555288 *)NULL;
		Dictionary_2_t3127268619 * L_0 = __this->get_m_MapDict_10();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m1300232330(L_0, L_1, (MapConfigures_t4238555288 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1300232330_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		MapConfigures_t4238555288 * L_3 = V_0;
		return L_3;
	}

IL_0017:
	{
		return (MapConfigures_t4238555288 *)NULL;
	}
}
// System.Void ResourceService::LoadMapConfigure(System.String)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_LoadMapConfigure_m3296367951 (ResourceService_t2066374285 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_LoadMapConfigure_m3296367951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	XmlDocument_t2837193595 * V_1 = NULL;
	XmlNodeList_t2551693786 * V_2 = NULL;
	int32_t V_3 = 0;
	XmlElement_t561603118 * V_4 = NULL;
	int32_t V_5 = 0;
	MapConfigures_t4238555288 * V_6 = NULL;
	XmlElement_t561603118 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	String_t* V_9 = NULL;
	StringU5BU5D_t1281789340* V_10 = NULL;
	StringU5BU5D_t1281789340* V_11 = NULL;
	StringU5BU5D_t1281789340* V_12 = NULL;
	StringU5BU5D_t1281789340* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path0;
		TextAsset_t3022178571 * L_1 = Resources_Load_TisTextAsset_t3022178571_m724759995(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisTextAsset_t3022178571_m724759995_RuntimeMethod_var);
		V_0 = L_1;
		TextAsset_t3022178571 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral209474577, /*hidden argument*/NULL);
		goto IL_02bf;
	}

IL_0022:
	{
		XmlDocument_t2837193595 * L_4 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		XmlDocument_t2837193595 * L_5 = V_1;
		TextAsset_t3022178571 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = TextAsset_get_text_m2027878391(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_5, L_7);
		XmlDocument_t2837193595 * L_8 = V_1;
		NullCheck(L_8);
		XmlNode_t3767805227 * L_9 = XmlNode_SelectSingleNode_m2944339946(L_8, _stringLiteral2328036797, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		V_2 = L_10;
		V_3 = 0;
		goto IL_02b3;
	}

IL_004c:
	{
		XmlNodeList_t2551693786 * L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_11, L_12);
		V_4 = ((XmlElement_t561603118 *)IsInstClass((RuntimeObject*)L_13, XmlElement_t561603118_il2cpp_TypeInfo_var));
		XmlElement_t561603118 * L_14 = V_4;
		NullCheck(L_14);
		XmlAttribute_t1173852259 * L_15 = VirtFuncInvoker1< XmlAttribute_t1173852259 *, String_t* >::Invoke(41 /* System.Xml.XmlAttribute System.Xml.XmlElement::GetAttributeNode(System.String) */, L_14, _stringLiteral3456546791);
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_02af;
	}

IL_0070:
	{
		XmlElement_t561603118 * L_16 = V_4;
		NullCheck(L_16);
		XmlAttribute_t1173852259 * L_17 = VirtFuncInvoker1< XmlAttribute_t1173852259 *, String_t* >::Invoke(41 /* System.Xml.XmlAttribute System.Xml.XmlElement::GetAttributeNode(System.String) */, L_16, _stringLiteral3456546791);
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_17);
		int32_t L_19 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		MapConfigures_t4238555288 * L_20 = (MapConfigures_t4238555288 *)il2cpp_codegen_object_new(MapConfigures_t4238555288_il2cpp_TypeInfo_var);
		MapConfigures__ctor_m2426975784(L_20, /*hidden argument*/NULL);
		V_6 = L_20;
		MapConfigures_t4238555288 * L_21 = V_6;
		int32_t L_22 = V_5;
		NullCheck(L_21);
		((BaseData_1_t2861350217 *)L_21)->set_ID_0(L_22);
		XmlNodeList_t2551693786 * L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		XmlNode_t3767805227 * L_25 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_23, L_24);
		NullCheck(L_25);
		XmlNodeList_t2551693786 * L_26 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_25);
		NullCheck(L_26);
		RuntimeObject* L_27 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_26);
		V_8 = L_27;
	}

IL_00ab:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0278;
		}

IL_00b0:
		{
			RuntimeObject* L_28 = V_8;
			NullCheck(L_28);
			RuntimeObject * L_29 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_28);
			V_7 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_29, XmlElement_t561603118_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_30 = V_7;
			NullCheck(L_30);
			String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlNode::get_Name() */, L_30);
			V_9 = L_31;
			String_t* L_32 = V_9;
			if (!L_32)
			{
				goto IL_0273;
			}
		}

IL_00ce:
		{
			String_t* L_33 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_34 = String_op_Equality_m920492651(NULL /*static, unused*/, L_33, _stringLiteral3837363785, /*hidden argument*/NULL);
			if (L_34)
			{
				goto IL_0139;
			}
		}

IL_00df:
		{
			String_t* L_35 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_36 = String_op_Equality_m920492651(NULL /*static, unused*/, L_35, _stringLiteral3540633302, /*hidden argument*/NULL);
			if (L_36)
			{
				goto IL_014c;
			}
		}

IL_00f0:
		{
			String_t* L_37 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_38 = String_op_Equality_m920492651(NULL /*static, unused*/, L_37, _stringLiteral59834828, /*hidden argument*/NULL);
			if (L_38)
			{
				goto IL_015f;
			}
		}

IL_0101:
		{
			String_t* L_39 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_40 = String_op_Equality_m920492651(NULL /*static, unused*/, L_39, _stringLiteral759101246, /*hidden argument*/NULL);
			if (L_40)
			{
				goto IL_01a4;
			}
		}

IL_0112:
		{
			String_t* L_41 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_42 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, _stringLiteral580789550, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_01e9;
			}
		}

IL_0123:
		{
			String_t* L_43 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_44 = String_op_Equality_m920492651(NULL /*static, unused*/, L_43, _stringLiteral3706862587, /*hidden argument*/NULL);
			if (L_44)
			{
				goto IL_022e;
			}
		}

IL_0134:
		{
			goto IL_0273;
		}

IL_0139:
		{
			MapConfigures_t4238555288 * L_45 = V_6;
			XmlElement_t561603118 * L_46 = V_7;
			NullCheck(L_46);
			String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_46);
			NullCheck(L_45);
			L_45->set_mapName_1(L_47);
			goto IL_0278;
		}

IL_014c:
		{
			MapConfigures_t4238555288 * L_48 = V_6;
			XmlElement_t561603118 * L_49 = V_7;
			NullCheck(L_49);
			String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_49);
			NullCheck(L_48);
			L_48->set_sceneName_2(L_50);
			goto IL_0278;
		}

IL_015f:
		{
			XmlElement_t561603118 * L_51 = V_7;
			NullCheck(L_51);
			String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_51);
			CharU5BU5D_t3528271667* L_53 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t3528271667* L_54 = L_53;
			NullCheck(L_54);
			(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_52);
			StringU5BU5D_t1281789340* L_55 = String_Split_m3646115398(L_52, L_54, /*hidden argument*/NULL);
			V_10 = L_55;
			MapConfigures_t4238555288 * L_56 = V_6;
			StringU5BU5D_t1281789340* L_57 = V_10;
			NullCheck(L_57);
			int32_t L_58 = 0;
			String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
			float L_60 = Single_Parse_m364357836(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_61 = V_10;
			NullCheck(L_61);
			int32_t L_62 = 1;
			String_t* L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
			float L_64 = Single_Parse_m364357836(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_65 = V_10;
			NullCheck(L_65);
			int32_t L_66 = 2;
			String_t* L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
			float L_68 = Single_Parse_m364357836(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
			Vector3_t3722313464  L_69;
			memset(&L_69, 0, sizeof(L_69));
			Vector3__ctor_m3353183577((&L_69), L_60, L_64, L_68, /*hidden argument*/NULL);
			NullCheck(L_56);
			L_56->set_mainCamPos_3(L_69);
			goto IL_0278;
		}

IL_01a4:
		{
			XmlElement_t561603118 * L_70 = V_7;
			NullCheck(L_70);
			String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_70);
			CharU5BU5D_t3528271667* L_72 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t3528271667* L_73 = L_72;
			NullCheck(L_73);
			(L_73)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_71);
			StringU5BU5D_t1281789340* L_74 = String_Split_m3646115398(L_71, L_73, /*hidden argument*/NULL);
			V_11 = L_74;
			MapConfigures_t4238555288 * L_75 = V_6;
			StringU5BU5D_t1281789340* L_76 = V_11;
			NullCheck(L_76);
			int32_t L_77 = 0;
			String_t* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
			float L_79 = Single_Parse_m364357836(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_80 = V_11;
			NullCheck(L_80);
			int32_t L_81 = 1;
			String_t* L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
			float L_83 = Single_Parse_m364357836(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_84 = V_11;
			NullCheck(L_84);
			int32_t L_85 = 2;
			String_t* L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
			float L_87 = Single_Parse_m364357836(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
			Vector3_t3722313464  L_88;
			memset(&L_88, 0, sizeof(L_88));
			Vector3__ctor_m3353183577((&L_88), L_79, L_83, L_87, /*hidden argument*/NULL);
			NullCheck(L_75);
			L_75->set_mainCamRot_4(L_88);
			goto IL_0278;
		}

IL_01e9:
		{
			XmlElement_t561603118 * L_89 = V_7;
			NullCheck(L_89);
			String_t* L_90 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_89);
			CharU5BU5D_t3528271667* L_91 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t3528271667* L_92 = L_91;
			NullCheck(L_92);
			(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_90);
			StringU5BU5D_t1281789340* L_93 = String_Split_m3646115398(L_90, L_92, /*hidden argument*/NULL);
			V_12 = L_93;
			MapConfigures_t4238555288 * L_94 = V_6;
			StringU5BU5D_t1281789340* L_95 = V_12;
			NullCheck(L_95);
			int32_t L_96 = 0;
			String_t* L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
			float L_98 = Single_Parse_m364357836(NULL /*static, unused*/, L_97, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_99 = V_12;
			NullCheck(L_99);
			int32_t L_100 = 1;
			String_t* L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
			float L_102 = Single_Parse_m364357836(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_103 = V_12;
			NullCheck(L_103);
			int32_t L_104 = 2;
			String_t* L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
			float L_106 = Single_Parse_m364357836(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
			Vector3_t3722313464  L_107;
			memset(&L_107, 0, sizeof(L_107));
			Vector3__ctor_m3353183577((&L_107), L_98, L_102, L_106, /*hidden argument*/NULL);
			NullCheck(L_94);
			L_94->set_playerBornPos_5(L_107);
			goto IL_0278;
		}

IL_022e:
		{
			XmlElement_t561603118 * L_108 = V_7;
			NullCheck(L_108);
			String_t* L_109 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_108);
			CharU5BU5D_t3528271667* L_110 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t3528271667* L_111 = L_110;
			NullCheck(L_111);
			(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
			NullCheck(L_109);
			StringU5BU5D_t1281789340* L_112 = String_Split_m3646115398(L_109, L_111, /*hidden argument*/NULL);
			V_13 = L_112;
			MapConfigures_t4238555288 * L_113 = V_6;
			StringU5BU5D_t1281789340* L_114 = V_13;
			NullCheck(L_114);
			int32_t L_115 = 0;
			String_t* L_116 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
			float L_117 = Single_Parse_m364357836(NULL /*static, unused*/, L_116, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_118 = V_13;
			NullCheck(L_118);
			int32_t L_119 = 1;
			String_t* L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
			float L_121 = Single_Parse_m364357836(NULL /*static, unused*/, L_120, /*hidden argument*/NULL);
			StringU5BU5D_t1281789340* L_122 = V_13;
			NullCheck(L_122);
			int32_t L_123 = 2;
			String_t* L_124 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
			float L_125 = Single_Parse_m364357836(NULL /*static, unused*/, L_124, /*hidden argument*/NULL);
			Vector3_t3722313464  L_126;
			memset(&L_126, 0, sizeof(L_126));
			Vector3__ctor_m3353183577((&L_126), L_117, L_121, L_125, /*hidden argument*/NULL);
			NullCheck(L_113);
			L_113->set_playerBornRot_6(L_126);
			goto IL_0278;
		}

IL_0273:
		{
			goto IL_0278;
		}

IL_0278:
		{
			RuntimeObject* L_127 = V_8;
			NullCheck(L_127);
			bool L_128 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_127);
			if (L_128)
			{
				goto IL_00b0;
			}
		}

IL_0284:
		{
			IL2CPP_LEAVE(0x2A0, FINALLY_0289);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0289;
	}

FINALLY_0289:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_129 = V_8;
			RuntimeObject* L_130 = ((RuntimeObject*)IsInst((RuntimeObject*)L_129, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_14 = L_130;
			if (!L_130)
			{
				goto IL_029f;
			}
		}

IL_0298:
		{
			RuntimeObject* L_131 = V_14;
			NullCheck(L_131);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_131);
		}

IL_029f:
		{
			IL2CPP_END_FINALLY(649)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(649)
	{
		IL2CPP_JUMP_TBL(0x2A0, IL_02a0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02a0:
	{
		Dictionary_2_t3127268619 * L_132 = __this->get_m_MapDict_10();
		int32_t L_133 = V_5;
		MapConfigures_t4238555288 * L_134 = V_6;
		NullCheck(L_132);
		Dictionary_2_Add_m3779660703(L_132, L_133, L_134, /*hidden argument*/Dictionary_2_Add_m3779660703_RuntimeMethod_var);
	}

IL_02af:
	{
		int32_t L_135 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
	}

IL_02b3:
	{
		int32_t L_136 = V_3;
		XmlNodeList_t2551693786 * L_137 = V_2;
		NullCheck(L_137);
		int32_t L_138 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_137);
		if ((((int32_t)L_136) < ((int32_t)L_138)))
		{
			goto IL_004c;
		}
	}

IL_02bf:
	{
		return;
	}
}
// System.Void ResourceService::LoadFromFile(System.String)
extern "C" IL2CPP_METHOD_ATTR void ResourceService_LoadFromFile_m3276529980 (ResourceService_t2066374285 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_LoadFromFile_m3276529980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	XmlDocument_t2837193595 * V_1 = NULL;
	XmlNodeList_t2551693786 * V_2 = NULL;
	int32_t V_3 = 0;
	XmlElement_t561603118 * V_4 = NULL;
	XmlElement_t561603118 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path0;
		TextAsset_t3022178571 * L_1 = Resources_Load_TisTextAsset_t3022178571_m724759995(NULL /*static, unused*/, L_0, /*hidden argument*/Resources_Load_TisTextAsset_t3022178571_m724759995_RuntimeMethod_var);
		V_0 = L_1;
		TextAsset_t3022178571 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral209474577, /*hidden argument*/NULL);
		goto IL_0160;
	}

IL_0022:
	{
		XmlDocument_t2837193595 * L_4 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m1447119458(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		XmlDocument_t2837193595 * L_5 = V_1;
		TextAsset_t3022178571 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = TextAsset_get_text_m2027878391(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(57 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_5, L_7);
		XmlDocument_t2837193595 * L_8 = V_1;
		NullCheck(L_8);
		XmlNode_t3767805227 * L_9 = XmlNode_SelectSingleNode_m2944339946(L_8, _stringLiteral2328036797, /*hidden argument*/NULL);
		NullCheck(L_9);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		V_2 = L_10;
		V_3 = 0;
		goto IL_0154;
	}

IL_004c:
	{
		XmlNodeList_t2551693786 * L_11 = V_2;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		XmlNode_t3767805227 * L_13 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_11, L_12);
		V_4 = ((XmlElement_t561603118 *)IsInstClass((RuntimeObject*)L_13, XmlElement_t561603118_il2cpp_TypeInfo_var));
		XmlElement_t561603118 * L_14 = V_4;
		NullCheck(L_14);
		XmlAttribute_t1173852259 * L_15 = VirtFuncInvoker1< XmlAttribute_t1173852259 *, String_t* >::Invoke(41 /* System.Xml.XmlAttribute System.Xml.XmlElement::GetAttributeNode(System.String) */, L_14, _stringLiteral3456546791);
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0150;
	}

IL_0070:
	{
		XmlNodeList_t2551693786 * L_16 = V_2;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		XmlNode_t3767805227 * L_18 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_16, L_17);
		NullCheck(L_18);
		XmlNodeList_t2551693786 * L_19 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_18);
		NullCheck(L_19);
		RuntimeObject* L_20 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_19);
		V_6 = L_20;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0128;
		}

IL_0088:
		{
			RuntimeObject* L_21 = V_6;
			NullCheck(L_21);
			RuntimeObject * L_22 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			V_5 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_22, XmlElement_t561603118_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_23 = V_5;
			NullCheck(L_23);
			String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlNode::get_Name() */, L_23);
			V_7 = L_24;
			String_t* L_25 = V_7;
			if (!L_25)
			{
				goto IL_0123;
			}
		}

IL_00a6:
		{
			String_t* L_26 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_27 = String_op_Equality_m920492651(NULL /*static, unused*/, L_26, _stringLiteral320356273, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_00de;
			}
		}

IL_00b7:
		{
			String_t* L_28 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, _stringLiteral4072509719, /*hidden argument*/NULL);
			if (L_29)
			{
				goto IL_00f5;
			}
		}

IL_00c8:
		{
			String_t* L_30 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_31 = String_op_Equality_m920492651(NULL /*static, unused*/, L_30, _stringLiteral3932804698, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_010c;
			}
		}

IL_00d9:
		{
			goto IL_0123;
		}

IL_00de:
		{
			List_1_t3319525431 * L_32 = __this->get_m_Surname_7();
			XmlElement_t561603118 * L_33 = V_4;
			NullCheck(L_33);
			String_t* L_34 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_33);
			NullCheck(L_32);
			List_1_Add_m1685793073(L_32, L_34, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			goto IL_0128;
		}

IL_00f5:
		{
			List_1_t3319525431 * L_35 = __this->get_m_MaleName_8();
			XmlElement_t561603118 * L_36 = V_4;
			NullCheck(L_36);
			String_t* L_37 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_36);
			NullCheck(L_35);
			List_1_Add_m1685793073(L_35, L_37, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			goto IL_0128;
		}

IL_010c:
		{
			List_1_t3319525431 * L_38 = __this->get_m_FemaleName_9();
			XmlElement_t561603118 * L_39 = V_4;
			NullCheck(L_39);
			String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_39);
			NullCheck(L_38);
			List_1_Add_m1685793073(L_38, L_40, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
			goto IL_0128;
		}

IL_0123:
		{
			goto IL_0128;
		}

IL_0128:
		{
			RuntimeObject* L_41 = V_6;
			NullCheck(L_41);
			bool L_42 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0088;
			}
		}

IL_0134:
		{
			IL2CPP_LEAVE(0x150, FINALLY_0139);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0139;
	}

FINALLY_0139:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_6;
			RuntimeObject* L_44 = ((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_8 = L_44;
			if (!L_44)
			{
				goto IL_014f;
			}
		}

IL_0148:
		{
			RuntimeObject* L_45 = V_8;
			NullCheck(L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_45);
		}

IL_014f:
		{
			IL2CPP_END_FINALLY(313)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(313)
	{
		IL2CPP_JUMP_TBL(0x150, IL_0150)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0150:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0154:
	{
		int32_t L_47 = V_3;
		XmlNodeList_t2551693786 * L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_48);
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_004c;
		}
	}

IL_0160:
	{
		return;
	}
}
// System.String ResourceService::GetRandomName(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* ResourceService_GetRandomName_m3616470161 (ResourceService_t2066374285 * __this, bool ___isFamle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_GetRandomName_m3616470161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		List_1_t3319525431 * L_0 = __this->get_m_Surname_7();
		List_1_t3319525431 * L_1 = __this->get_m_Surname_7();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2276455407(L_1, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		int32_t L_3 = Tools_RandomInt_m425305703(NULL /*static, unused*/, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), (Random_t108471755 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_4 = List_1_get_Item_m3346958548(L_0, L_3, /*hidden argument*/List_1_get_Item_m3346958548_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.GameObject ResourceService::GetPlayer(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * ResourceService_GetPlayer_m2440938853 (ResourceService_t2066374285 * __this, String_t* ___name0, bool ___isCache1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResourceService_GetPlayer_m2440938853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		V_0 = (GameObject_t1113636619 *)NULL;
		Dictionary_2_t898892918 * L_0 = __this->get_m_Player_11();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m2873266050(L_0, L_1, (GameObject_t1113636619 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2873266050_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1113636619 * L_3 = V_0;
		return L_3;
	}

IL_0017:
	{
		GameObject_t1113636619 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Consts_t1749595333_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Consts_t1749595333_StaticFields*)il2cpp_codegen_static_fields_for(Consts_t1749595333_il2cpp_TypeInfo_var))->get_PrefabPath_3();
		String_t* L_7 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3937257545(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_9 = Resources_Load_TisGameObject_t1113636619_m1734345100(NULL /*static, unused*/, L_8, /*hidden argument*/Resources_Load_TisGameObject_t1113636619_m1734345100_RuntimeMethod_var);
		V_0 = L_9;
		GameObject_t1113636619 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_11 = Object_Instantiate_TisGameObject_t1113636619_m4070250708(NULL /*static, unused*/, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m4070250708_RuntimeMethod_var);
		V_0 = L_11;
		bool L_12 = ___isCache1;
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		Dictionary_2_t898892918 * L_13 = __this->get_m_Player_11();
		String_t* L_14 = ___name0;
		GameObject_t1113636619 * L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_Add_m1235394044(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m1235394044_RuntimeMethod_var);
	}

IL_004e:
	{
		GameObject_t1113636619 * L_16 = V_0;
		return L_16;
	}
}
// System.Void ResourceService::Update()
extern "C" IL2CPP_METHOD_ATTR void ResourceService_Update_m4225229673 (ResourceService_t2066374285 * __this, const RuntimeMethod* method)
{
	{
		Action_t1264377477 * L_0 = __this->get_OnSceceLoad_5();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Action_t1264377477 * L_1 = __this->get_OnSceceLoad_5();
		NullCheck(L_1);
		Action_Invoke_m937035532(L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
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
// System.Void ResourceService/<AsyncLoadScene>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAsyncLoadSceneU3Ec__AnonStorey0__ctor_m905275126 (U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResourceService/<AsyncLoadScene>c__AnonStorey0::<>m__0()
extern "C" IL2CPP_METHOD_ATTR void U3CAsyncLoadSceneU3Ec__AnonStorey0_U3CU3Em__0_m3067507315 (U3CAsyncLoadSceneU3Ec__AnonStorey0_t758247840 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAsyncLoadSceneU3Ec__AnonStorey0_U3CU3Em__0_m3067507315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		UILoadingWindow_t3075121329 * L_1 = L_0->get_UILoadingWindow_11();
		AsyncOperation_t1445031843 * L_2 = __this->get_progress_0();
		NullCheck(L_2);
		float L_3 = AsyncOperation_get_progress_m2461797197(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		UILoadingWindow_UpdateUI_m1243689125(L_1, L_3, /*hidden argument*/NULL);
		AsyncOperation_t1445031843 * L_4 = __this->get_progress_0();
		NullCheck(L_4);
		float L_5 = AsyncOperation_get_progress_m2461797197(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_6 = Mathf_Approximately_m245805902(NULL /*static, unused*/, L_5, (1.0f), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		Action_t1264377477 * L_7 = __this->get_OnLoaded_1();
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		Action_t1264377477 * L_8 = __this->get_OnLoaded_1();
		NullCheck(L_8);
		Action_Invoke_m937035532(L_8, /*hidden argument*/NULL);
	}

IL_004a:
	{
		__this->set_progress_0((AsyncOperation_t1445031843 *)NULL);
		ResourceService_t2066374285 * L_9 = __this->get_U24this_2();
		NullCheck(L_9);
		L_9->set_OnSceceLoad_5((Action_t1264377477 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_10 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_10);
		UILoadingWindow_t3075121329 * L_11 = L_10->get_UILoadingWindow_11();
		NullCheck(L_11);
		UIWindowRoot_SetWindowState_m1207802075(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_006d:
	{
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
// System.Void Test::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Test__ctor_m1854393510 (Test_t650638817 * __this, const RuntimeMethod* method)
{
	{
		__this->set_yRotation_4((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Test::Update()
extern "C" IL2CPP_METHOD_ATTR void Test_Update_m782915918 (Test_t650638817 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Test_Update_m782915918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = __this->get_Target_5();
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_yRotation_4();
		NullCheck(L_0);
		Transform_RotateAround_m2651195670(L_0, L_2, L_3, L_4, /*hidden argument*/NULL);
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
// System.Void Tools::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Tools__ctor_m4244256359 (Tools_t613821292 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Tools::RandomInt(System.Int32,System.Int32,System.Random)
extern "C" IL2CPP_METHOD_ATTR int32_t Tools_RandomInt_m425305703 (RuntimeObject * __this /* static, unused */, int32_t ___min0, int32_t ___max1, Random_t108471755 * ___random2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Tools_RandomInt_m425305703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t108471755 * L_0 = ___random2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		Random_t108471755 * L_1 = (Random_t108471755 *)il2cpp_codegen_object_new(Random_t108471755_il2cpp_TypeInfo_var);
		Random__ctor_m4122933043(L_1, /*hidden argument*/NULL);
		___random2 = L_1;
	}

IL_000d:
	{
		Random_t108471755 * L_2 = ___random2;
		int32_t L_3 = ___min0;
		int32_t L_4 = ___max1;
		NullCheck(L_2);
		int32_t L_5 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		return L_5;
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
// System.Void UICreatWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UICreatWindow__ctor_m3667122878 (UICreatWindow_t3575057914 * __this, const RuntimeMethod* method)
{
	{
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICreatWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UICreatWindow_InitUIwindow_m393514560 (UICreatWindow_t3575057914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UICreatWindow_InitUIwindow_m393514560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		InputField_t3762917431 * L_0 = __this->get_iptName_7();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_1 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_1);
		ResourceService_t2066374285 * L_2 = L_1->get_resourceService_5();
		NullCheck(L_2);
		String_t* L_3 = ResourceService_GetRandomName_m3616470161(L_2, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InputField_set_text_m1877260015(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICreatWindow::OnRandomButtonClick()
extern "C" IL2CPP_METHOD_ATTR void UICreatWindow_OnRandomButtonClick_m3395607769 (UICreatWindow_t3575057914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UICreatWindow_OnRandomButtonClick_m3395607769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		GameRoot_PlayEffect_m2002588247(NULL /*static, unused*/, _stringLiteral2147493199, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		ResourceService_t2066374285 * L_1 = L_0->get_resourceService_5();
		NullCheck(L_1);
		String_t* L_2 = ResourceService_GetRandomName_m3616470161(L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		InputField_t3762917431 * L_3 = __this->get_iptName_7();
		String_t* L_4 = V_0;
		NullCheck(L_3);
		InputField_set_text_m1877260015(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UICreatWindow::OnEnterGameClick()
extern "C" IL2CPP_METHOD_ATTR void UICreatWindow_OnEnterGameClick_m3592079662 (UICreatWindow_t3575057914 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UICreatWindow_OnEnterGameClick_m3592079662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameMessage_t3039652669 * V_0 = NULL;
	RenameRequest_t1391400285 * V_1 = NULL;
	{
		GameRoot_PlayEffect_m2002588247(NULL /*static, unused*/, _stringLiteral2147493199, /*hidden argument*/NULL);
		InputField_t3762917431 * L_0 = __this->get_iptName_7();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m3534748202(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		InputField_t3762917431 * L_4 = __this->get_iptName_7();
		NullCheck(L_4);
		String_t* L_5 = InputField_get_text_m3534748202(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0043;
		}
	}

IL_0034:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral1696464136, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0043:
	{
		NetService_t2879592265 * L_6 = ((UIWindowRoot_t2933752109 *)__this)->get_netService_6();
		GameMessage_t3039652669 * L_7 = (GameMessage_t3039652669 *)il2cpp_codegen_object_new(GameMessage_t3039652669_il2cpp_TypeInfo_var);
		GameMessage__ctor_m3852766301(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		GameMessage_t3039652669 * L_8 = V_0;
		NullCheck(L_8);
		((PEMsg_t3742698931 *)L_8)->set_cmd_1(((int32_t)103));
		GameMessage_t3039652669 * L_9 = V_0;
		RenameRequest_t1391400285 * L_10 = (RenameRequest_t1391400285 *)il2cpp_codegen_object_new(RenameRequest_t1391400285_il2cpp_TypeInfo_var);
		RenameRequest__ctor_m619206161(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		RenameRequest_t1391400285 * L_11 = V_1;
		InputField_t3762917431 * L_12 = __this->get_iptName_7();
		NullCheck(L_12);
		String_t* L_13 = InputField_get_text_m3534748202(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_name_0(L_13);
		RenameRequest_t1391400285 * L_14 = V_1;
		NullCheck(L_9);
		L_9->set_renameRequest_5(L_14);
		GameMessage_t3039652669 * L_15 = V_0;
		NullCheck(L_6);
		NetService_SendMessages_m3951671737(L_6, L_15, /*hidden argument*/NULL);
	}

IL_007b:
	{
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
// System.Void UIDynamicWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow__ctor_m696654532 (UIDynamicWindow_t887270669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow__ctor_m696654532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1693710183 * L_0 = (Queue_1_t1693710183 *)il2cpp_codegen_object_new(Queue_1_t1693710183_il2cpp_TypeInfo_var);
		Queue_1__ctor_m4171879767(L_0, /*hidden argument*/Queue_1__ctor_m4171879767_RuntimeMethod_var);
		__this->set_m_TipsQue_9(L_0);
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDynamicWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_InitUIwindow_m275278780 (UIDynamicWindow_t887270669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow_InitUIwindow_m275278780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		Text_t1901882714 * L_0 = __this->get_TipsText_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		UIWindowRoot_UpdateText_m1112851524(__this, L_0, L_1, /*hidden argument*/NULL);
		Text_t1901882714 * L_2 = __this->get_TipsText_7();
		UIWindowRoot_SetActive_m2555010490(__this, L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIDynamicWindow::AddTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_AddTips_m457295066 (UIDynamicWindow_t887270669 * __this, String_t* ___tips0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow_AddTips_m457295066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t1693710183 * L_0 = __this->get_m_TipsQue_9();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_1_t1693710183 * L_2 = __this->get_m_TipsQue_9();
		String_t* L_3 = ___tips0;
		NullCheck(L_2);
		Queue_1_Enqueue_m3056590024(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m3056590024_RuntimeMethod_var);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void UIDynamicWindow::Update()
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_Update_m2254735012 (UIDynamicWindow_t887270669 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow_Update_m2254735012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t1693710183 * L_0 = __this->get_m_TipsQue_9();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m2387284005(L_0, /*hidden argument*/Queue_1_get_Count_m2387284005_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		bool L_2 = __this->get_isTipsShow_10();
		if (L_2)
		{
			goto IL_004f;
		}
	}
	{
		Queue_1_t1693710183 * L_3 = __this->get_m_TipsQue_9();
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		Queue_1_t1693710183 * L_5 = __this->get_m_TipsQue_9();
		NullCheck(L_5);
		String_t* L_6 = Queue_1_Dequeue_m1924377868(L_5, /*hidden argument*/Queue_1_Dequeue_m1924377868_RuntimeMethod_var);
		V_1 = L_6;
		String_t* L_7 = V_1;
		UIDynamicWindow_ShowTips_m2451846051(__this, L_7, /*hidden argument*/NULL);
		__this->set_isTipsShow_10((bool)1);
		IL2CPP_LEAVE(0x4F, FINALLY_0048);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.Void UIDynamicWindow::ShowTips(System.String)
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_ShowTips_m2451846051 (UIDynamicWindow_t887270669 * __this, String_t* ___tips0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow_ShowTips_m2451846051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClip_t2318505987 * V_0 = NULL;
	{
		Text_t1901882714 * L_0 = __this->get_TipsText_7();
		UIWindowRoot_SetActive_m2555010490(__this, L_0, (bool)1, /*hidden argument*/NULL);
		Text_t1901882714 * L_1 = __this->get_TipsText_7();
		String_t* L_2 = ___tips0;
		UIWindowRoot_UpdateText_m1112851524(__this, L_1, L_2, /*hidden argument*/NULL);
		Animation_t3648466861 * L_3 = __this->get_TipsAnimation_8();
		NullCheck(L_3);
		Animation_Play_m2798573761(L_3, /*hidden argument*/NULL);
		Animation_t3648466861 * L_4 = __this->get_TipsAnimation_8();
		NullCheck(L_4);
		AnimationClip_t2318505987 * L_5 = Animation_GetClip_m732294439(L_4, _stringLiteral2077544886, /*hidden argument*/NULL);
		V_0 = L_5;
		AnimationClip_t2318505987 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = AnimationClip_get_length_m3296085482(L_6, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)UIDynamicWindow_U3CShowTipsU3Em__0_m3058052237_RuntimeMethod_var;
		Action_t1264377477 * L_9 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m2994342681(L_9, __this, L_8, /*hidden argument*/NULL);
		RuntimeObject* L_10 = UIDynamicWindow_AnimationDone_m4080457287(__this, L_7, L_9, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UIDynamicWindow::AnimationDone(System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UIDynamicWindow_AnimationDone_m4080457287 (UIDynamicWindow_t887270669 * __this, float ___time0, Action_t1264377477 * ___aniDone1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIDynamicWindow_AnimationDone_m4080457287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAnimationDoneU3Ec__Iterator0_t2226895225 * V_0 = NULL;
	{
		U3CAnimationDoneU3Ec__Iterator0_t2226895225 * L_0 = (U3CAnimationDoneU3Ec__Iterator0_t2226895225 *)il2cpp_codegen_object_new(U3CAnimationDoneU3Ec__Iterator0_t2226895225_il2cpp_TypeInfo_var);
		U3CAnimationDoneU3Ec__Iterator0__ctor_m1395670522(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAnimationDoneU3Ec__Iterator0_t2226895225 * L_1 = V_0;
		float L_2 = ___time0;
		NullCheck(L_1);
		L_1->set_time_0(L_2);
		U3CAnimationDoneU3Ec__Iterator0_t2226895225 * L_3 = V_0;
		Action_t1264377477 * L_4 = ___aniDone1;
		NullCheck(L_3);
		L_3->set_aniDone_1(L_4);
		U3CAnimationDoneU3Ec__Iterator0_t2226895225 * L_5 = V_0;
		return L_5;
	}
}
// System.Void UIDynamicWindow::<ShowTips>m__0()
extern "C" IL2CPP_METHOD_ATTR void UIDynamicWindow_U3CShowTipsU3Em__0_m3058052237 (UIDynamicWindow_t887270669 * __this, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_TipsText_7();
		UIWindowRoot_SetActive_m2555010490(__this, L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_isTipsShow_10((bool)0);
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
// System.Void UIDynamicWindow/<AnimationDone>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CAnimationDoneU3Ec__Iterator0__ctor_m1395670522 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UIDynamicWindow/<AnimationDone>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CAnimationDoneU3Ec__Iterator0_MoveNext_m2616830004 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimationDoneU3Ec__Iterator0_MoveNext_m2616830004_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_2(L_3);
		bool L_4 = __this->get_U24disposing_3();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0041:
	{
		goto IL_0065;
	}

IL_0046:
	{
		Action_t1264377477 * L_5 = __this->get_aniDone_1();
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Action_t1264377477 * L_6 = __this->get_aniDone_1();
		NullCheck(L_6);
		Action_Invoke_m937035532(L_6, /*hidden argument*/NULL);
	}

IL_005c:
	{
		__this->set_U24PC_4((-1));
	}

IL_0063:
	{
		return (bool)0;
	}

IL_0065:
	{
		return (bool)1;
	}
}
// System.Object UIDynamicWindow/<AnimationDone>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimationDoneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2383313248 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object UIDynamicWindow/<AnimationDone>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimationDoneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3834619398 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void UIDynamicWindow/<AnimationDone>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CAnimationDoneU3Ec__Iterator0_Dispose_m1402910200 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void UIDynamicWindow/<AnimationDone>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CAnimationDoneU3Ec__Iterator0_Reset_m1726041594 (U3CAnimationDoneU3Ec__Iterator0_t2226895225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimationDoneU3Ec__Iterator0_Reset_m1726041594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CAnimationDoneU3Ec__Iterator0_Reset_m1726041594_RuntimeMethod_var);
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
// System.Void UIInfoWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow__ctor_m1591329652 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	{
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_InitUIwindow_m591753399 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		UIInfoWindow_RegisterEvents_m627132418(__this, /*hidden argument*/NULL);
		UIInfoWindow_UpdateUI_m3463701794(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::RegisterEvents()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_RegisterEvents_m627132418 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIInfoWindow_RegisterEvents_m627132418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RawImage_t3182918964 * L_0 = __this->get_CharShowRaw_7();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UIInfoWindow_U3CRegisterEventsU3Em__0_m442573536_RuntimeMethod_var;
		Action_1_t3980368687 * L_3 = (Action_1_t3980368687 *)il2cpp_codegen_object_new(Action_1_t3980368687_il2cpp_TypeInfo_var);
		Action_1__ctor_m3630593146(L_3, __this, L_2, /*hidden argument*/Action_1__ctor_m3630593146_RuntimeMethod_var);
		UIWindowRoot_OnClickDown_m3587515208(__this, L_1, L_3, /*hidden argument*/NULL);
		RawImage_t3182918964 * L_4 = __this->get_CharShowRaw_7();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)UIInfoWindow_U3CRegisterEventsU3Em__1_m201352028_RuntimeMethod_var;
		Action_1_t3980368687 * L_7 = (Action_1_t3980368687 *)il2cpp_codegen_object_new(Action_1_t3980368687_il2cpp_TypeInfo_var);
		Action_1__ctor_m3630593146(L_7, __this, L_6, /*hidden argument*/Action_1__ctor_m3630593146_RuntimeMethod_var);
		UIWindowRoot_OnDrag_m3207549021(__this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::UpdateUI()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_UpdateUI_m3463701794 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIInfoWindow_UpdateUI_m3463701794_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t3254915629 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		PlayerData_t3254915629 * L_1 = GameRoot_get_PlayerData_m1744716642(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Text_t1901882714 * L_2 = __this->get_NameAndLevelText_8();
		PlayerData_t3254915629 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_1();
		PlayerData_t3254915629 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_level_2();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m1715369213(NULL /*static, unused*/, L_4, _stringLiteral2630203384, L_8, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_2, L_9, /*hidden argument*/NULL);
		Text_t1901882714 * L_10 = __this->get_ExpText_9();
		PlayerData_t3254915629 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_experience_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		PlayerData_t3254915629 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_level_2();
		int32_t L_17 = Common_GetLevelUpExp_m1507515188(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Concat_m1715369213(NULL /*static, unused*/, L_14, _stringLiteral3452614529, L_19, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_10, L_20, /*hidden argument*/NULL);
		Text_t1901882714 * L_21 = __this->get_PowerText_11();
		PlayerData_t3254915629 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_power_4();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_24);
		PlayerData_t3254915629 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_level_2();
		int32_t L_28 = Common_GetPowerLimit_m565199784(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		String_t* L_31 = String_Concat_m1715369213(NULL /*static, unused*/, L_25, _stringLiteral3452614529, L_30, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_21, L_31, /*hidden argument*/NULL);
		Image_t2670269651 * L_32 = __this->get_ExpImage_10();
		PlayerData_t3254915629 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_experience_3();
		PlayerData_t3254915629 * L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_level_2();
		int32_t L_37 = Common_GetLevelUpExp_m1507515188(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_32);
		Image_set_fillAmount_m3737925590(L_32, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_34)))))/(float)(((float)((float)L_37))))), /*hidden argument*/NULL);
		Image_t2670269651 * L_38 = __this->get_PowerImage_12();
		PlayerData_t3254915629 * L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_power_4();
		PlayerData_t3254915629 * L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_level_2();
		int32_t L_43 = Common_GetPowerLimit_m565199784(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		NullCheck(L_38);
		Image_set_fillAmount_m3737925590(L_38, ((float)((float)((float)il2cpp_codegen_multiply((float)(1.0f), (float)(((float)((float)L_40)))))/(float)(((float)((float)L_43))))), /*hidden argument*/NULL);
		Text_t1901882714 * L_44 = __this->get_FightText_13();
		PlayerData_t3254915629 * L_45 = V_0;
		int32_t L_46 = Common_GetFightPointByData_m4009535946(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m3693408129(__this, L_44, L_46, /*hidden argument*/NULL);
		Text_t1901882714 * L_47 = __this->get_HPText_14();
		PlayerData_t3254915629 * L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_hp_7();
		UIWindowRoot_UpdateText_m3693408129(__this, L_47, L_49, /*hidden argument*/NULL);
		Text_t1901882714 * L_50 = __this->get_DamageText_15();
		PlayerData_t3254915629 * L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = L_51->get_ad_8();
		PlayerData_t3254915629 * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = L_53->get_ap_9();
		UIWindowRoot_UpdateText_m3693408129(__this, L_50, ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)L_54)), /*hidden argument*/NULL);
		Text_t1901882714 * L_55 = __this->get_DefenceText_16();
		PlayerData_t3254915629 * L_56 = V_0;
		NullCheck(L_56);
		int32_t L_57 = L_56->get_addef_10();
		PlayerData_t3254915629 * L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = L_58->get_apdef_11();
		UIWindowRoot_UpdateText_m3693408129(__this, L_55, ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_59)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::ShowInfoWindow()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_ShowInfoWindow_m1819017755 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	{
		UIInfoWindow_UpdateUI_m3463701794(__this, /*hidden argument*/NULL);
		UIWindowRoot_SetWindowState_m1207802075(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::HideInfoWindow()
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_HideInfoWindow_m1152280344 (UIInfoWindow_t2497120935 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIInfoWindow_HideInfoWindow_m1152280344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_SetWindowState_m1207802075(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t188196812_il2cpp_TypeInfo_var);
		AudioService_t3306317363 * L_0 = Singleton_1_get_Instance_m2437137635(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m2437137635_RuntimeMethod_var);
		NullCheck(L_0);
		AudioService_PlayEffect_m3443281718(L_0, _stringLiteral132627211, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_1 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		NullCheck(L_1);
		MainCitySystem_HideInfowWindow_m3142704830(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIInfoWindow::<RegisterEvents>m__0(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_U3CRegisterEventsU3Em__0_m442573536 (UIInfoWindow_t2497120935 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	{
		PointerEventData_t3807901092 * L_0 = ___data0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		__this->set_StartPos_17(L_1);
		return;
	}
}
// System.Void UIInfoWindow::<RegisterEvents>m__1(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIInfoWindow_U3CRegisterEventsU3Em__1_m201352028 (UIInfoWindow_t2497120935 * __this, PointerEventData_t3807901092 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIInfoWindow_U3CRegisterEventsU3Em__1_m201352028_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		PointerEventData_t3807901092 * L_0 = ___data0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_0();
		Vector2_t2156229523 * L_3 = __this->get_address_of_StartPos_17();
		float L_4 = L_3->get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_4));
		float L_5 = V_0;
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_8 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		float L_9 = V_0;
		NullCheck(L_8);
		MainCitySystem_RotateCamera_m629685191(L_8, L_9, /*hidden argument*/NULL);
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
// System.Void UILoadingWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UILoadingWindow__ctor_m4282200439 (UILoadingWindow_t3075121329 * __this, const RuntimeMethod* method)
{
	{
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UILoadingWindow::Awake()
extern "C" IL2CPP_METHOD_ATTR void UILoadingWindow_Awake_m443660287 (UILoadingWindow_t3075121329 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoadingWindow_Awake_m443660287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Text_t1901882714 * L_0 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		__this->set_m_TipsText_7(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Transform_Find_m1729760951(L_1, _stringLiteral2137372031, /*hidden argument*/NULL);
		NullCheck(L_2);
		Image_t2670269651 * L_3 = Component_GetComponent_TisImage_t2670269651_m980647750(L_2, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_m_Container_9(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Transform_Find_m1729760951(L_4, _stringLiteral1422226232, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_t2670269651 * L_6 = Component_GetComponent_TisImage_t2670269651_m980647750(L_5, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_m_PointImage_10(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = Transform_Find_m1729760951(L_7, _stringLiteral915894615, /*hidden argument*/NULL);
		NullCheck(L_8);
		Image_t2670269651 * L_9 = Component_GetComponent_TisImage_t2670269651_m980647750(L_8, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_m_ProgressImage_11(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Transform_Find_m1729760951(L_10, _stringLiteral2061933626, /*hidden argument*/NULL);
		NullCheck(L_11);
		Text_t1901882714 * L_12 = Component_GetComponent_TisText_t1901882714_m4196288697(L_11, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_m_ProgressText_8(L_12);
		Image_t2670269651 * L_13 = __this->get_m_Container_9();
		NullCheck(L_13);
		RectTransform_t3704657025 * L_14 = Graphic_get_rectTransform_m1167152468(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector2_t2156229523  L_15 = RectTransform_get_sizeDelta_m2183112744(L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		float L_16 = (&V_0)->get_x_0();
		__this->set_m_ContainerW_12(L_16);
		return;
	}
}
// System.Void UILoadingWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UILoadingWindow_InitUIwindow_m1878530741 (UILoadingWindow_t3075121329 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoadingWindow_InitUIwindow_m1878530741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		Text_t1901882714 * L_0 = __this->get_m_TipsText_7();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2241765580);
		Text_t1901882714 * L_1 = __this->get_m_ProgressText_8();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral3450189712);
		Image_t2670269651 * L_2 = __this->get_m_ProgressImage_11();
		NullCheck(L_2);
		Image_set_fillAmount_m3737925590(L_2, (0.0f), /*hidden argument*/NULL);
		Image_t2670269651 * L_3 = __this->get_m_PointImage_10();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_m_ContainerW_12();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)((float)((-L_5))/(float)(2.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localPosition_m4128471975(L_4, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UILoadingWindow::UpdateUI(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UILoadingWindow_UpdateUI_m1243689125 (UILoadingWindow_t3075121329 * __this, float ___progress0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoadingWindow_UpdateUI_m1243689125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Text_t1901882714 * L_0 = __this->get_m_ProgressText_8();
		float L_1 = ___progress0;
		int32_t L_2 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)L_1, (float)(100.0f))))));
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m904156431(NULL /*static, unused*/, L_3, _stringLiteral3452614523, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		Image_t2670269651 * L_5 = __this->get_m_ProgressImage_11();
		float L_6 = ___progress0;
		NullCheck(L_5);
		Image_set_fillAmount_m3737925590(L_5, L_6, /*hidden argument*/NULL);
		float L_7 = __this->get_m_ContainerW_12();
		float L_8 = ___progress0;
		float L_9 = __this->get_m_ContainerW_12();
		V_0 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), (float)((float)((float)L_9/(float)(2.0f)))));
		Image_t2670269651 * L_10 = __this->get_m_PointImage_10();
		NullCheck(L_10);
		RectTransform_t3704657025 * L_11 = Graphic_get_rectTransform_m1167152468(L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector2_t2156229523  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3970636864((&L_13), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		RectTransform_set_anchoredPosition_m4126691837(L_11, L_13, /*hidden argument*/NULL);
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
// System.Void UILoginWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UILoginWindow__ctor_m2177654287 (UILoginWindow_t2411734088 * __this, const RuntimeMethod* method)
{
	{
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UILoginWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UILoginWindow_InitUIwindow_m990358586 (UILoginWindow_t2411734088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoginWindow_InitUIwindow_m990358586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		bool L_0 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, _stringLiteral3188740527, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		bool L_1 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, _stringLiteral4063765202, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		InputField_t3762917431 * L_2 = __this->get_m_AccountField_7();
		String_t* L_3 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral3188740527, /*hidden argument*/NULL);
		NullCheck(L_2);
		InputField_set_text_m1877260015(L_2, L_3, /*hidden argument*/NULL);
		InputField_t3762917431 * L_4 = __this->get_m_PasswordField_8();
		String_t* L_5 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral4063765202, /*hidden argument*/NULL);
		NullCheck(L_4);
		InputField_set_text_m1877260015(L_4, L_5, /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0053:
	{
		InputField_t3762917431 * L_6 = __this->get_m_AccountField_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_6);
		InputField_set_text_m1877260015(L_6, L_7, /*hidden argument*/NULL);
		InputField_t3762917431 * L_8 = __this->get_m_PasswordField_8();
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_8);
		InputField_set_text_m1877260015(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0073:
	{
		return;
	}
}
// System.Void UILoginWindow::OnEnterClick()
extern "C" IL2CPP_METHOD_ATTR void UILoginWindow_OnEnterClick_m1025767136 (UILoginWindow_t2411734088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoginWindow_OnEnterClick_m1025767136_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	GameMessage_t3039652669 * V_2 = NULL;
	GameMessage_t3039652669 * V_3 = NULL;
	LoginRequest_t3434883421 * V_4 = NULL;
	{
		GameRoot_PlayEffect_m2002588247(NULL /*static, unused*/, _stringLiteral906327219, /*hidden argument*/NULL);
		InputField_t3762917431 * L_0 = __this->get_m_AccountField_7();
		NullCheck(L_0);
		String_t* L_1 = InputField_get_text_m3534748202(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		InputField_t3762917431 * L_2 = __this->get_m_PasswordField_8();
		NullCheck(L_2);
		String_t* L_3 = InputField_get_text_m3534748202(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_6 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0098;
		}
	}
	{
		String_t* L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0098;
		}
	}
	{
		String_t* L_10 = V_0;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral3188740527, L_10, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral4063765202, L_11, /*hidden argument*/NULL);
		GameMessage_t3039652669 * L_12 = (GameMessage_t3039652669 *)il2cpp_codegen_object_new(GameMessage_t3039652669_il2cpp_TypeInfo_var);
		GameMessage__ctor_m3852766301(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		GameMessage_t3039652669 * L_13 = V_3;
		NullCheck(L_13);
		((PEMsg_t3742698931 *)L_13)->set_cmd_1(((int32_t)101));
		GameMessage_t3039652669 * L_14 = V_3;
		LoginRequest_t3434883421 * L_15 = (LoginRequest_t3434883421 *)il2cpp_codegen_object_new(LoginRequest_t3434883421_il2cpp_TypeInfo_var);
		LoginRequest__ctor_m2091653095(L_15, /*hidden argument*/NULL);
		V_4 = L_15;
		LoginRequest_t3434883421 * L_16 = V_4;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		L_16->set_Account_0(L_17);
		LoginRequest_t3434883421 * L_18 = V_4;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		L_18->set_Password_1(L_19);
		LoginRequest_t3434883421 * L_20 = V_4;
		NullCheck(L_14);
		L_14->set_loginRequest_3(L_20);
		GameMessage_t3039652669 * L_21 = V_3;
		V_2 = L_21;
		NetService_t2879592265 * L_22 = ((UIWindowRoot_t2933752109 *)__this)->get_netService_6();
		GameMessage_t3039652669 * L_23 = V_2;
		NullCheck(L_22);
		NetService_SendMessages_m3951671737(L_22, L_23, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_0098:
	{
		GameRoot_AddTips_m3871248750(NULL /*static, unused*/, _stringLiteral1071670944, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		return;
	}
}
// System.Void UILoginWindow::OnNoticeClick()
extern "C" IL2CPP_METHOD_ATTR void UILoginWindow_OnNoticeClick_m2815904919 (UILoginWindow_t2411734088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UILoginWindow_OnNoticeClick_m2815904919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameRoot_PlayEffect_m2002588247(NULL /*static, unused*/, _stringLiteral2147493199, /*hidden argument*/NULL);
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
// System.Void UIMainCityWindow::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow__ctor_m4130282685 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	{
		__this->set_IsExpand_19((bool)1);
		UIWindowRoot__ctor_m3177337551(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_InitUIwindow_m2996559092 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_InitUIwindow_m2996559092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UIWindowRoot_InitUIwindow_m4047047953(__this, /*hidden argument*/NULL);
		UIMainCityWindow_UpdateUI_m1491293131(__this, /*hidden argument*/NULL);
		UIMainCityWindow_RegisteTouchEvents_m1139448742(__this, /*hidden argument*/NULL);
		Image_t2670269651 * L_0 = __this->get_TouchPointImage_18();
		UIWindowRoot_SetActive_m2207686297(__this, L_0, (bool)0, /*hidden argument*/NULL);
		Image_t2670269651 * L_1 = __this->get_TouchBGImage_17();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_4 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_defalutBGPos_20(L_4);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_pointDistance_22(((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_5))), (float)(1.0f)))/(float)(2880.0f))), (float)(400.0f))));
		return;
	}
}
// System.Void UIMainCityWindow::RegisteTouchEvents()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_RegisteTouchEvents_m1139448742 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_RegisteTouchEvents_m1139448742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_TouchArea_16();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)UIMainCityWindow_U3CRegisteTouchEventsU3Em__0_m793139840_RuntimeMethod_var;
		Action_1_t3980368687 * L_3 = (Action_1_t3980368687 *)il2cpp_codegen_object_new(Action_1_t3980368687_il2cpp_TypeInfo_var);
		Action_1__ctor_m3630593146(L_3, __this, L_2, /*hidden argument*/Action_1__ctor_m3630593146_RuntimeMethod_var);
		UIWindowRoot_OnClickDown_m3587515208(__this, L_1, L_3, /*hidden argument*/NULL);
		Image_t2670269651 * L_4 = __this->get_TouchArea_16();
		NullCheck(L_4);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		intptr_t L_6 = (intptr_t)UIMainCityWindow_U3CRegisteTouchEventsU3Em__1_m2864813875_RuntimeMethod_var;
		Action_1_t3980368687 * L_7 = (Action_1_t3980368687 *)il2cpp_codegen_object_new(Action_1_t3980368687_il2cpp_TypeInfo_var);
		Action_1__ctor_m3630593146(L_7, __this, L_6, /*hidden argument*/Action_1__ctor_m3630593146_RuntimeMethod_var);
		UIWindowRoot_OnClickUp_m587039422(__this, L_5, L_7, /*hidden argument*/NULL);
		Image_t2670269651 * L_8 = __this->get_TouchArea_16();
		NullCheck(L_8);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(L_8, /*hidden argument*/NULL);
		intptr_t L_10 = (intptr_t)UIMainCityWindow_U3CRegisteTouchEventsU3Em__2_m2358102889_RuntimeMethod_var;
		Action_1_t3980368687 * L_11 = (Action_1_t3980368687 *)il2cpp_codegen_object_new(Action_1_t3980368687_il2cpp_TypeInfo_var);
		Action_1__ctor_m3630593146(L_11, __this, L_10, /*hidden argument*/Action_1__ctor_m3630593146_RuntimeMethod_var);
		UIWindowRoot_OnDrag_m3207549021(__this, L_9, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::UpdateUI()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_UpdateUI_m1491293131 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_UpdateUI_m1491293131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerData_t3254915629 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GridLayoutGroup_t3046220461 * V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t2396149298_il2cpp_TypeInfo_var);
		GameRoot_t1219302553 * L_0 = Singleton_1_get_Instance_m4104515756(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m4104515756_RuntimeMethod_var);
		NullCheck(L_0);
		PlayerData_t3254915629 * L_1 = GameRoot_get_PlayerData_m1744716642(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Text_t1901882714 * L_2 = __this->get_LevelText_9();
		PlayerData_t3254915629 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_level_2();
		UIWindowRoot_UpdateText_m3693408129(__this, L_2, L_4, /*hidden argument*/NULL);
		Text_t1901882714 * L_5 = __this->get_FlightText_10();
		PlayerData_t3254915629 * L_6 = V_0;
		int32_t L_7 = Common_GetFightPointByData_m4009535946(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m3693408129(__this, L_5, L_7, /*hidden argument*/NULL);
		Text_t1901882714 * L_8 = __this->get_PowerText_11();
		ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral419160293);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral419160293);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		PlayerData_t3254915629 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_power_4();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_11;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3452614529);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614529);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		PlayerData_t3254915629 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_level_2();
		int32_t L_20 = Common_GetPowerLimit_m565199784(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_8, L_23, /*hidden argument*/NULL);
		Image_t2670269651 * L_24 = __this->get_PowerImage_12();
		PlayerData_t3254915629 * L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = L_25->get_power_4();
		PlayerData_t3254915629 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_level_2();
		int32_t L_29 = Common_GetPowerLimit_m565199784(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_24);
		Image_set_fillAmount_m3737925590(L_24, ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_26))), (float)(1.0f)))/(float)(((float)((float)L_29))))), /*hidden argument*/NULL);
		Text_t1901882714 * L_30 = __this->get_NameText_13();
		PlayerData_t3254915629 * L_31 = V_0;
		NullCheck(L_31);
		String_t* L_32 = L_31->get_name_1();
		UIWindowRoot_UpdateText_m1112851524(__this, L_30, L_32, /*hidden argument*/NULL);
		PlayerData_t3254915629 * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_level_2();
		int32_t L_35 = Common_GetLevelUpExp_m1507515188(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
		PlayerData_t3254915629 * L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_experience_3();
		int32_t L_38 = V_1;
		V_2 = (((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_37))), (float)(1.0f)))/(float)(((float)((float)L_38))))), (float)(100.0f))))));
		Text_t1901882714 * L_39 = __this->get_ExperienceText_14();
		int32_t L_40 = V_2;
		int32_t L_41 = L_40;
		RuntimeObject * L_42 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_41);
		String_t* L_43 = String_Concat_m904156431(NULL /*static, unused*/, L_42, _stringLiteral3452614523, /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_39, L_43, /*hidden argument*/NULL);
		int32_t L_44 = V_2;
		V_3 = ((int32_t)((int32_t)L_44/(int32_t)((int32_t)10)));
		V_4 = 0;
		goto IL_017b;
	}

IL_00fb:
	{
		int32_t L_45 = V_4;
		int32_t L_46 = V_3;
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_0124;
		}
	}
	{
		Transform_t3600365921 * L_47 = __this->get_expRect_15();
		int32_t L_48 = V_4;
		NullCheck(L_47);
		Transform_t3600365921 * L_49 = Transform_GetChild_m1092972975(L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Image_t2670269651 * L_50 = Component_GetComponent_TisImage_t2670269651_m980647750(L_49, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_50);
		Image_set_fillAmount_m3737925590(L_50, (1.0f), /*hidden argument*/NULL);
		goto IL_0175;
	}

IL_0124:
	{
		int32_t L_51 = V_4;
		int32_t L_52 = V_3;
		if ((!(((uint32_t)L_51) == ((uint32_t)L_52))))
		{
			goto IL_0159;
		}
	}
	{
		Transform_t3600365921 * L_53 = __this->get_expRect_15();
		int32_t L_54 = V_4;
		NullCheck(L_53);
		Transform_t3600365921 * L_55 = Transform_GetChild_m1092972975(L_53, L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		Image_t2670269651 * L_56 = Component_GetComponent_TisImage_t2670269651_m980647750(L_55, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		int32_t L_57 = V_2;
		NullCheck(L_56);
		Image_set_fillAmount_m3737925590(L_56, ((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_57%(int32_t)((int32_t)10)))))), (float)(1.0f)))/(float)(10.0f))), /*hidden argument*/NULL);
		goto IL_0175;
	}

IL_0159:
	{
		Transform_t3600365921 * L_58 = __this->get_expRect_15();
		int32_t L_59 = V_4;
		NullCheck(L_58);
		Transform_t3600365921 * L_60 = Transform_GetChild_m1092972975(L_58, L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Image_t2670269651 * L_61 = Component_GetComponent_TisImage_t2670269651_m980647750(L_60, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		NullCheck(L_61);
		Image_set_fillAmount_m3737925590(L_61, (0.0f), /*hidden argument*/NULL);
	}

IL_0175:
	{
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_017b:
	{
		int32_t L_63 = V_4;
		Transform_t3600365921 * L_64 = __this->get_expRect_15();
		NullCheck(L_64);
		int32_t L_65 = Transform_get_childCount_m3145433196(L_64, /*hidden argument*/NULL);
		if ((((int32_t)L_63) < ((int32_t)L_65)))
		{
			goto IL_00fb;
		}
	}
	{
		Transform_t3600365921 * L_66 = __this->get_expRect_15();
		NullCheck(L_66);
		GridLayoutGroup_t3046220461 * L_67 = Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910(L_66, /*hidden argument*/Component_GetComponent_TisGridLayoutGroup_t3046220461_m2458911910_RuntimeMethod_var);
		V_5 = L_67;
		int32_t L_68 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = ((float)((float)(2880.0f)/(float)(((float)((float)L_68)))));
		int32_t L_69 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_70 = V_6;
		V_7 = ((float)il2cpp_codegen_multiply((float)(((float)((float)L_69))), (float)L_70));
		float L_71 = V_7;
		V_8 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_71, (float)(560.0f)))/(float)(10.0f)));
		GridLayoutGroup_t3046220461 * L_72 = V_5;
		float L_73 = V_8;
		Vector2_t2156229523  L_74;
		memset(&L_74, 0, sizeof(L_74));
		Vector2__ctor_m3970636864((&L_74), L_73, (60.0f), /*hidden argument*/NULL);
		NullCheck(L_72);
		GridLayoutGroup_set_cellSize_m2242080459(L_72, L_74, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::OnMenuBtnClick()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_OnMenuBtnClick_m508289125 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_OnMenuBtnClick_m508289125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AnimationClip_t2318505987 * V_0 = NULL;
	{
		AudioService_t3306317363 * L_0 = ((UIWindowRoot_t2933752109 *)__this)->get_audioService_5();
		NullCheck(L_0);
		AudioService_PlayEffect_m3443281718(L_0, _stringLiteral132627211, /*hidden argument*/NULL);
		bool L_1 = __this->get_IsExpand_19();
		__this->set_IsExpand_19((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		V_0 = (AnimationClip_t2318505987 *)NULL;
		bool L_2 = __this->get_IsExpand_19();
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		Animation_t3648466861 * L_3 = __this->get_MenuAnimation_7();
		NullCheck(L_3);
		AnimationClip_t2318505987 * L_4 = Animation_GetClip_m732294439(L_3, _stringLiteral631709905, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0053;
	}

IL_0042:
	{
		Animation_t3648466861 * L_5 = __this->get_MenuAnimation_7();
		NullCheck(L_5);
		AnimationClip_t2318505987 * L_6 = Animation_GetClip_m732294439(L_5, _stringLiteral2808814373, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0053:
	{
		Animation_t3648466861 * L_7 = __this->get_MenuAnimation_7();
		AnimationClip_t2318505987 * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Object_get_name_m4211327027(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animation_Play_m27531216(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::OnHeadClick()
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_OnHeadClick_m3745259107 (UIMainCityWindow_t2652100507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_OnHeadClick_m3745259107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_0 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		NullCheck(L_0);
		MainCitySystem_ShowInfoWindow_m4121297113(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::<RegisteTouchEvents>m__0(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_U3CRegisteTouchEventsU3Em__0_m793139840 (UIMainCityWindow_t2652100507 * __this, PointerEventData_t3807901092 * ___events0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_U3CRegisteTouchEventsU3Em__0_m793139840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointerEventData_t3807901092 * L_0 = ___events0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		__this->set_startPos_21(L_1);
		Image_t2670269651 * L_2 = __this->get_TouchBGImage_17();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_4 = ___events0;
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = PointerEventData_get_position_m437660275(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_m3387557959(L_3, L_6, /*hidden argument*/NULL);
		Image_t2670269651 * L_7 = __this->get_TouchPointImage_18();
		UIWindowRoot_SetActive_m2207686297(__this, L_7, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::<RegisteTouchEvents>m__1(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_U3CRegisteTouchEventsU3Em__1_m2864813875 (UIMainCityWindow_t2652100507 * __this, PointerEventData_t3807901092 * ___events0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_U3CRegisteTouchEventsU3Em__1_m2864813875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Image_t2670269651 * L_0 = __this->get_TouchBGImage_17();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_defalutBGPos_20();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_3, /*hidden argument*/NULL);
		Image_t2670269651 * L_4 = __this->get_TouchPointImage_18();
		UIWindowRoot_SetActive_m2207686297(__this, L_4, (bool)0, /*hidden argument*/NULL);
		Image_t2670269651 * L_5 = __this->get_TouchPointImage_18();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(L_5, /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_8 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_m4128471975(L_6, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_9 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		Vector2_t2156229523  L_10 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_9);
		MainCitySystem_MoveCharator_m3672229562(L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIMainCityWindow::<RegisteTouchEvents>m__2(UnityEngine.EventSystems.PointerEventData)
extern "C" IL2CPP_METHOD_ATTR void UIMainCityWindow_U3CRegisteTouchEventsU3Em__2_m2358102889 (UIMainCityWindow_t2652100507 * __this, PointerEventData_t3807901092 * ___events0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMainCityWindow_U3CRegisteTouchEventsU3Em__2_m2358102889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		PointerEventData_t3807901092 * L_0 = ___events0;
		NullCheck(L_0);
		Vector2_t2156229523  L_1 = PointerEventData_get_position_m437660275(L_0, /*hidden argument*/NULL);
		Vector2_t2156229523  L_2 = __this->get_startPos_21();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector2_get_magnitude_m2752892833((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = V_1;
		float L_6 = __this->get_pointDistance_22();
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0059;
		}
	}
	{
		Vector2_t2156229523  L_7 = V_0;
		float L_8 = __this->get_pointDistance_22();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_9 = Vector2_ClampMagnitude_m1438220061(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		Image_t2670269651 * L_10 = __this->get_TouchPointImage_18();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		Vector2_t2156229523  L_12 = __this->get_startPos_21();
		Vector2_t2156229523  L_13 = V_2;
		Vector2_t2156229523  L_14 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_15, /*hidden argument*/NULL);
		goto IL_0074;
	}

IL_0059:
	{
		Image_t2670269651 * L_16 = __this->get_TouchPointImage_18();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = Component_get_transform_m3162698980(L_16, /*hidden argument*/NULL);
		PointerEventData_t3807901092 * L_18 = ___events0;
		NullCheck(L_18);
		Vector2_t2156229523  L_19 = PointerEventData_get_position_m437660275(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_m3387557959(L_17, L_20, /*hidden argument*/NULL);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t64670578_il2cpp_TypeInfo_var);
		MainCitySystem_t3182791129 * L_21 = Singleton_1_get_Instance_m1105072615(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1105072615_RuntimeMethod_var);
		Vector2_t2156229523  L_22 = Vector2_get_normalized_m2683665860((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_21);
		MainCitySystem_MoveCharator_m3672229562(L_21, L_22, /*hidden argument*/NULL);
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
// System.Void UIWindowRoot::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot__ctor_m3177337551 (UIWindowRoot_t2933752109 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::SetWindowState(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetWindowState_m1207802075 (UIWindowRoot_t2933752109 * __this, bool ___isActive0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		bool L_2 = ___isActive0;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		bool L_4 = ___isActive0;
		UIWindowRoot_SetActive_m2035249310(__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		bool L_5 = ___isActive0;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UIWindowRoot::InitUIwindow() */, __this);
		goto IL_0035;
	}

IL_002f:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void UIWindowRoot::Clear() */, __this);
	}

IL_0035:
	{
		return;
	}
}
// System.Void UIWindowRoot::Clear()
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_Clear_m973359365 (UIWindowRoot_t2933752109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_resourceService_4((ResourceService_t2066374285 *)NULL);
		__this->set_audioService_5((AudioService_t3306317363 *)NULL);
		__this->set_netService_6((NetService_t2879592265 *)NULL);
		return;
	}
}
// System.Void UIWindowRoot::InitUIwindow()
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_InitUIwindow_m4047047953 (UIWindowRoot_t2933752109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_InitUIwindow_m4047047953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t3243221030_il2cpp_TypeInfo_var);
		ResourceService_t2066374285 * L_0 = Singleton_1_get_Instance_m3962788585(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m3962788585_RuntimeMethod_var);
		__this->set_resourceService_4(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t188196812_il2cpp_TypeInfo_var);
		AudioService_t3306317363 * L_1 = Singleton_1_get_Instance_m2437137635(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m2437137635_RuntimeMethod_var);
		__this->set_audioService_5(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t4056439010_il2cpp_TypeInfo_var);
		NetService_t2879592265 * L_2 = Singleton_1_get_Instance_m1023393517(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m1023393517_RuntimeMethod_var);
		__this->set_netService_6(L_2);
		return;
	}
}
// System.Void UIWindowRoot::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2035249310 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, bool ___isActive1, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___go0;
		bool L_1 = ___isActive1;
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::SetActive(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2033285435 (UIWindowRoot_t2933752109 * __this, Transform_t3600365921 * ___go0, bool ___isActive1, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		bool L_3 = ___isActive1;
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::SetActive(UnityEngine.RectTransform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m899656064 (UIWindowRoot_t2933752109 * __this, RectTransform_t3704657025 * ___go0, bool ___isActive1, const RuntimeMethod* method)
{
	{
		RectTransform_t3704657025 * L_0 = ___go0;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(L_1, /*hidden argument*/NULL);
		bool L_3 = ___isActive1;
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::SetActive(UnityEngine.UI.Image,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2207686297 (UIWindowRoot_t2933752109 * __this, Image_t2670269651 * ___go0, bool ___isActive1, const RuntimeMethod* method)
{
	{
		Image_t2670269651 * L_0 = ___go0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = ___isActive1;
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::SetActive(UnityEngine.UI.Text,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_SetActive_m2555010490 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___go0, bool ___isActive1, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = ___go0;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		bool L_2 = ___isActive1;
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::UpdateText(UnityEngine.UI.Text,System.String)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m1112851524 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___text0, String_t* ___context1, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = ___text0;
		String_t* L_1 = ___context1;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void UIWindowRoot::UpdateText(UnityEngine.UI.Text,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m3693408129 (UIWindowRoot_t2933752109 * __this, Text_t1901882714 * ___text0, int32_t ___context1, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = ___text0;
		String_t* L_1 = Int32_ToString_m141394615((int32_t*)(&___context1), /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::UpdateText(UnityEngine.Transform,System.String)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m1796495085 (UIWindowRoot_t2933752109 * __this, Transform_t3600365921 * ___text0, String_t* ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_UpdateText_m1796495085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = ___text0;
		NullCheck(L_0);
		Text_t1901882714 * L_1 = Component_GetComponent_TisText_t1901882714_m4196288697(L_0, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_2 = ___context1;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		UIWindowRoot_UpdateText_m1112851524(__this, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::UpdateText(UnityEngine.Transform,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_UpdateText_m1362930005 (UIWindowRoot_t2933752109 * __this, Transform_t3600365921 * ___text0, int32_t ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_UpdateText_m1362930005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = ___text0;
		NullCheck(L_0);
		Text_t1901882714 * L_1 = Component_GetComponent_TisText_t1901882714_m4196288697(L_0, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&___context1), /*hidden argument*/NULL);
		UIWindowRoot_UpdateText_m1112851524(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIWindowRoot::OnClickDown(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnClickDown_m3587515208 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_OnClickDown_m3587515208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Listener_t973447673 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		Listener_t973447673 * L_1 = UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612(__this, L_0, /*hidden argument*/UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612_RuntimeMethod_var);
		V_0 = L_1;
		Listener_t973447673 * L_2 = V_0;
		Action_1_t3980368687 * L_3 = ___action1;
		NullCheck(L_2);
		L_2->set_onClickDown_4(L_3);
		return;
	}
}
// System.Void UIWindowRoot::OnClickUp(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnClickUp_m587039422 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_OnClickUp_m587039422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Listener_t973447673 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		Listener_t973447673 * L_1 = UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612(__this, L_0, /*hidden argument*/UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612_RuntimeMethod_var);
		V_0 = L_1;
		Listener_t973447673 * L_2 = V_0;
		Action_1_t3980368687 * L_3 = ___action1;
		NullCheck(L_2);
		L_2->set_onClickUp_5(L_3);
		return;
	}
}
// System.Void UIWindowRoot::OnDrag(UnityEngine.GameObject,System.Action`1<UnityEngine.EventSystems.PointerEventData>)
extern "C" IL2CPP_METHOD_ATTR void UIWindowRoot_OnDrag_m3207549021 (UIWindowRoot_t2933752109 * __this, GameObject_t1113636619 * ___go0, Action_1_t3980368687 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWindowRoot_OnDrag_m3207549021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Listener_t973447673 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = ___go0;
		Listener_t973447673 * L_1 = UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612(__this, L_0, /*hidden argument*/UIWindowRoot_GetOrAddCommponent_TisListener_t973447673_m836771612_RuntimeMethod_var);
		V_0 = L_1;
		Listener_t973447673 * L_2 = V_0;
		Action_1_t3980368687 * L_3 = ___action1;
		NullCheck(L_2);
		L_2->set_onDrag_6(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
