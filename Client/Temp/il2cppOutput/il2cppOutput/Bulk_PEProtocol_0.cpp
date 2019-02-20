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


// PENet.PEMsg
struct PEMsg_t3742698931;
// PEProtocol.GameMessage
struct GameMessage_t3039652669;
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
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;

extern RuntimeClass* PETool_t2161160852_il2cpp_TypeInfo_var;
extern const uint32_t Common_Log_m1999533456_MetadataUsageId;



#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
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
#ifndef COMMON_T1404321841_H
#define COMMON_T1404321841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Common
struct  Common_t1404321841  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMON_T1404321841_H
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
#ifndef LOGLEVEL_T3884435534_H
#define LOGLEVEL_T3884435534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PENet.LogLevel
struct  LogLevel_t3884435534 
{
public:
	// System.Int32 PENet.LogLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogLevel_t3884435534, ___value___1)); }
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
#endif // LOGLEVEL_T3884435534_H
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



// System.Void PENet.PETool::LogMsg(System.String,PENet.LogLevel)
extern "C" IL2CPP_METHOD_ATTR void PETool_LogMsg_m1916063690 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void PENet.PEMsg::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PEMsg__ctor_m1884440102 (PEMsg_t3742698931 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void Common::Log(System.String,LogType)
extern "C" IL2CPP_METHOD_ATTR void Common_Log_m1999533456 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, int32_t ___logType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Common_Log_m1999533456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___logType1;
		V_0 = L_0;
		String_t* L_1 = ___msg0;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PETool_t2161160852_il2cpp_TypeInfo_var);
		PETool_LogMsg_m1916063690(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Common::GetFightPointByData(PEProtocol.PlayerData)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetFightPointByData_m4009535946 (RuntimeObject * __this /* static, unused */, PlayerData_t3254915629 * ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		PlayerData_t3254915629 * L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_level_2();
		PlayerData_t3254915629 * L_2 = ___data0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ad_8();
		PlayerData_t3254915629 * L_4 = ___data0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_addef_10();
		PlayerData_t3254915629 * L_6 = ___data0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_ap_9();
		PlayerData_t3254915629 * L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_apdef_11();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)100))), (int32_t)L_3)), (int32_t)L_5)), (int32_t)L_7)), (int32_t)L_9));
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Int32 Common::GetPowerLimit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetPowerLimit_m565199784 (RuntimeObject * __this /* static, unused */, int32_t ___level0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___level0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1))/(int32_t)((int32_t)10))), (int32_t)((int32_t)150))), (int32_t)((int32_t)150)));
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Common::GetLevelUpExp(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Common_GetLevelUpExp_m1507515188 (RuntimeObject * __this /* static, unused */, int32_t ___level0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = ___level0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)), (int32_t)((int32_t)100)));
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PEProtocol.GameMessage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameMessage__ctor_m3852766301 (GameMessage_t3039652669 * __this, const RuntimeMethod* method)
{
	{
		PEMsg__ctor_m1884440102(__this, /*hidden argument*/NULL);
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
// System.Void PEProtocol.LoginRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoginRequest__ctor_m2091653095 (LoginRequest_t3434883421 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void PEProtocol.LoginRespond::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoginRespond__ctor_m3056328962 (LoginRespond_t4248255773 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void PEProtocol.PlayerData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PlayerData__ctor_m4089490854 (PlayerData_t3254915629 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void PEProtocol.RenameRequest::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RenameRequest__ctor_m619206161 (RenameRequest_t1391400285 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void PEProtocol.RenameRespond::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RenameRespond__ctor_m1090386162 (RenameRespond_t122899175 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
