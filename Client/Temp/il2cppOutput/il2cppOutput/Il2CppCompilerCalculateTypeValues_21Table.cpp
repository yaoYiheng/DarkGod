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


// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t2220366188;
// Mono.Xml.DTDAutomataFactory
struct DTDAutomataFactory_t2958275022;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3264596611;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t2798820000;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t222313714;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t2250844513;
// Mono.Xml.DTDNode
struct DTDNode_t858560093;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t959292105;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t1729680289;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t2844734410;
// Mono.Xml.DictionaryBase
struct DictionaryBase_t52754249;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>[]
struct KeyValuePair_2U5BU5D_t3368185270;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
struct List_1_t218596005;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t535375154;
// System.Xml.XPath.AxisSpecifier
struct AxisSpecifier_t40435393;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t4168896842;
// System.Xml.XPath.Expression
struct Expression_t1452783009;
// System.Xml.XPath.NodeSet
struct NodeSet_t3272593155;
// System.Xml.XPath.NodeTest
struct NodeTest_t747859056;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t787956054;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t3667290188;
// System.Xml.XPath.XPathSorters
struct XPathSorters_t698127628;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlNamespaceManager/NsDecl[]
struct NsDeclU5BU5D_t2116608150;
// System.Xml.XmlNamespaceManager/NsScope[]
struct NsScopeU5BU5D_t382374428;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;




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
#ifndef DTDAUTOMATAFACTORY_T2958275022_H
#define DTDAUTOMATAFACTORY_T2958275022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAutomataFactory
struct  DTDAutomataFactory_t2958275022  : public RuntimeObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomataFactory::root
	DTDObjectModel_t1729680289 * ___root_0;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::choiceTable
	Hashtable_t1853889766 * ___choiceTable_1;
	// System.Collections.Hashtable Mono.Xml.DTDAutomataFactory::sequenceTable
	Hashtable_t1853889766 * ___sequenceTable_2;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDAutomataFactory_t2958275022, ___root_0)); }
	inline DTDObjectModel_t1729680289 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t1729680289 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((&___root_0), value);
	}

	inline static int32_t get_offset_of_choiceTable_1() { return static_cast<int32_t>(offsetof(DTDAutomataFactory_t2958275022, ___choiceTable_1)); }
	inline Hashtable_t1853889766 * get_choiceTable_1() const { return ___choiceTable_1; }
	inline Hashtable_t1853889766 ** get_address_of_choiceTable_1() { return &___choiceTable_1; }
	inline void set_choiceTable_1(Hashtable_t1853889766 * value)
	{
		___choiceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___choiceTable_1), value);
	}

	inline static int32_t get_offset_of_sequenceTable_2() { return static_cast<int32_t>(offsetof(DTDAutomataFactory_t2958275022, ___sequenceTable_2)); }
	inline Hashtable_t1853889766 * get_sequenceTable_2() const { return ___sequenceTable_2; }
	inline Hashtable_t1853889766 ** get_address_of_sequenceTable_2() { return &___sequenceTable_2; }
	inline void set_sequenceTable_2(Hashtable_t1853889766 * value)
	{
		___sequenceTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___sequenceTable_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDAUTOMATAFACTORY_T2958275022_H
#ifndef DTDCONTENTMODELCOLLECTION_T2798820000_H
#define DTDCONTENTMODELCOLLECTION_T2798820000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentModelCollection
struct  DTDContentModelCollection_t2798820000  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Xml.DTDContentModelCollection::contentModel
	ArrayList_t2718874744 * ___contentModel_0;

public:
	inline static int32_t get_offset_of_contentModel_0() { return static_cast<int32_t>(offsetof(DTDContentModelCollection_t2798820000, ___contentModel_0)); }
	inline ArrayList_t2718874744 * get_contentModel_0() const { return ___contentModel_0; }
	inline ArrayList_t2718874744 ** get_address_of_contentModel_0() { return &___contentModel_0; }
	inline void set_contentModel_0(ArrayList_t2718874744 * value)
	{
		___contentModel_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentModel_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDCONTENTMODELCOLLECTION_T2798820000_H
#ifndef DTDNODE_T858560093_H
#define DTDNODE_T858560093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDNode
struct  DTDNode_t858560093  : public RuntimeObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDNode::root
	DTDObjectModel_t1729680289 * ___root_0;
	// System.Boolean Mono.Xml.DTDNode::isInternalSubset
	bool ___isInternalSubset_1;
	// System.String Mono.Xml.DTDNode::baseURI
	String_t* ___baseURI_2;
	// System.Int32 Mono.Xml.DTDNode::lineNumber
	int32_t ___lineNumber_3;
	// System.Int32 Mono.Xml.DTDNode::linePosition
	int32_t ___linePosition_4;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___root_0)); }
	inline DTDObjectModel_t1729680289 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t1729680289 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier((&___root_0), value);
	}

	inline static int32_t get_offset_of_isInternalSubset_1() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___isInternalSubset_1)); }
	inline bool get_isInternalSubset_1() const { return ___isInternalSubset_1; }
	inline bool* get_address_of_isInternalSubset_1() { return &___isInternalSubset_1; }
	inline void set_isInternalSubset_1(bool value)
	{
		___isInternalSubset_1 = value;
	}

	inline static int32_t get_offset_of_baseURI_2() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___baseURI_2)); }
	inline String_t* get_baseURI_2() const { return ___baseURI_2; }
	inline String_t** get_address_of_baseURI_2() { return &___baseURI_2; }
	inline void set_baseURI_2(String_t* value)
	{
		___baseURI_2 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_2), value);
	}

	inline static int32_t get_offset_of_lineNumber_3() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___lineNumber_3)); }
	inline int32_t get_lineNumber_3() const { return ___lineNumber_3; }
	inline int32_t* get_address_of_lineNumber_3() { return &___lineNumber_3; }
	inline void set_lineNumber_3(int32_t value)
	{
		___lineNumber_3 = value;
	}

	inline static int32_t get_offset_of_linePosition_4() { return static_cast<int32_t>(offsetof(DTDNode_t858560093, ___linePosition_4)); }
	inline int32_t get_linePosition_4() const { return ___linePosition_4; }
	inline int32_t* get_address_of_linePosition_4() { return &___linePosition_4; }
	inline void set_linePosition_4(int32_t value)
	{
		___linePosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDNODE_T858560093_H
#ifndef DTDOBJECTMODEL_T1729680289_H
#define DTDOBJECTMODEL_T1729680289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDObjectModel
struct  DTDObjectModel_t1729680289  : public RuntimeObject
{
public:
	// Mono.Xml.DTDAutomataFactory Mono.Xml.DTDObjectModel::factory
	DTDAutomataFactory_t2958275022 * ___factory_0;
	// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::elementDecls
	DTDElementDeclarationCollection_t222313714 * ___elementDecls_1;
	// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::attListDecls
	DTDAttListDeclarationCollection_t2220366188 * ___attListDecls_2;
	// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::peDecls
	DTDParameterEntityDeclarationCollection_t2844734410 * ___peDecls_3;
	// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::entityDecls
	DTDEntityDeclarationCollection_t2250844513 * ___entityDecls_4;
	// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::notationDecls
	DTDNotationDeclarationCollection_t959292105 * ___notationDecls_5;
	// System.Collections.ArrayList Mono.Xml.DTDObjectModel::validationErrors
	ArrayList_t2718874744 * ___validationErrors_6;
	// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::resolver
	XmlResolver_t626023767 * ___resolver_7;
	// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.Collections.Hashtable Mono.Xml.DTDObjectModel::externalResources
	Hashtable_t1853889766 * ___externalResources_9;
	// System.String Mono.Xml.DTDObjectModel::baseURI
	String_t* ___baseURI_10;
	// System.String Mono.Xml.DTDObjectModel::name
	String_t* ___name_11;
	// System.String Mono.Xml.DTDObjectModel::publicId
	String_t* ___publicId_12;
	// System.String Mono.Xml.DTDObjectModel::systemId
	String_t* ___systemId_13;
	// System.String Mono.Xml.DTDObjectModel::intSubset
	String_t* ___intSubset_14;
	// System.Boolean Mono.Xml.DTDObjectModel::intSubsetHasPERef
	bool ___intSubsetHasPERef_15;
	// System.Boolean Mono.Xml.DTDObjectModel::isStandalone
	bool ___isStandalone_16;
	// System.Int32 Mono.Xml.DTDObjectModel::lineNumber
	int32_t ___lineNumber_17;
	// System.Int32 Mono.Xml.DTDObjectModel::linePosition
	int32_t ___linePosition_18;

public:
	inline static int32_t get_offset_of_factory_0() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___factory_0)); }
	inline DTDAutomataFactory_t2958275022 * get_factory_0() const { return ___factory_0; }
	inline DTDAutomataFactory_t2958275022 ** get_address_of_factory_0() { return &___factory_0; }
	inline void set_factory_0(DTDAutomataFactory_t2958275022 * value)
	{
		___factory_0 = value;
		Il2CppCodeGenWriteBarrier((&___factory_0), value);
	}

	inline static int32_t get_offset_of_elementDecls_1() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___elementDecls_1)); }
	inline DTDElementDeclarationCollection_t222313714 * get_elementDecls_1() const { return ___elementDecls_1; }
	inline DTDElementDeclarationCollection_t222313714 ** get_address_of_elementDecls_1() { return &___elementDecls_1; }
	inline void set_elementDecls_1(DTDElementDeclarationCollection_t222313714 * value)
	{
		___elementDecls_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecls_1), value);
	}

	inline static int32_t get_offset_of_attListDecls_2() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___attListDecls_2)); }
	inline DTDAttListDeclarationCollection_t2220366188 * get_attListDecls_2() const { return ___attListDecls_2; }
	inline DTDAttListDeclarationCollection_t2220366188 ** get_address_of_attListDecls_2() { return &___attListDecls_2; }
	inline void set_attListDecls_2(DTDAttListDeclarationCollection_t2220366188 * value)
	{
		___attListDecls_2 = value;
		Il2CppCodeGenWriteBarrier((&___attListDecls_2), value);
	}

	inline static int32_t get_offset_of_peDecls_3() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___peDecls_3)); }
	inline DTDParameterEntityDeclarationCollection_t2844734410 * get_peDecls_3() const { return ___peDecls_3; }
	inline DTDParameterEntityDeclarationCollection_t2844734410 ** get_address_of_peDecls_3() { return &___peDecls_3; }
	inline void set_peDecls_3(DTDParameterEntityDeclarationCollection_t2844734410 * value)
	{
		___peDecls_3 = value;
		Il2CppCodeGenWriteBarrier((&___peDecls_3), value);
	}

	inline static int32_t get_offset_of_entityDecls_4() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___entityDecls_4)); }
	inline DTDEntityDeclarationCollection_t2250844513 * get_entityDecls_4() const { return ___entityDecls_4; }
	inline DTDEntityDeclarationCollection_t2250844513 ** get_address_of_entityDecls_4() { return &___entityDecls_4; }
	inline void set_entityDecls_4(DTDEntityDeclarationCollection_t2250844513 * value)
	{
		___entityDecls_4 = value;
		Il2CppCodeGenWriteBarrier((&___entityDecls_4), value);
	}

	inline static int32_t get_offset_of_notationDecls_5() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___notationDecls_5)); }
	inline DTDNotationDeclarationCollection_t959292105 * get_notationDecls_5() const { return ___notationDecls_5; }
	inline DTDNotationDeclarationCollection_t959292105 ** get_address_of_notationDecls_5() { return &___notationDecls_5; }
	inline void set_notationDecls_5(DTDNotationDeclarationCollection_t959292105 * value)
	{
		___notationDecls_5 = value;
		Il2CppCodeGenWriteBarrier((&___notationDecls_5), value);
	}

	inline static int32_t get_offset_of_validationErrors_6() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___validationErrors_6)); }
	inline ArrayList_t2718874744 * get_validationErrors_6() const { return ___validationErrors_6; }
	inline ArrayList_t2718874744 ** get_address_of_validationErrors_6() { return &___validationErrors_6; }
	inline void set_validationErrors_6(ArrayList_t2718874744 * value)
	{
		___validationErrors_6 = value;
		Il2CppCodeGenWriteBarrier((&___validationErrors_6), value);
	}

	inline static int32_t get_offset_of_resolver_7() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___resolver_7)); }
	inline XmlResolver_t626023767 * get_resolver_7() const { return ___resolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_7() { return &___resolver_7; }
	inline void set_resolver_7(XmlResolver_t626023767 * value)
	{
		___resolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_7), value);
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_externalResources_9() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___externalResources_9)); }
	inline Hashtable_t1853889766 * get_externalResources_9() const { return ___externalResources_9; }
	inline Hashtable_t1853889766 ** get_address_of_externalResources_9() { return &___externalResources_9; }
	inline void set_externalResources_9(Hashtable_t1853889766 * value)
	{
		___externalResources_9 = value;
		Il2CppCodeGenWriteBarrier((&___externalResources_9), value);
	}

	inline static int32_t get_offset_of_baseURI_10() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___baseURI_10)); }
	inline String_t* get_baseURI_10() const { return ___baseURI_10; }
	inline String_t** get_address_of_baseURI_10() { return &___baseURI_10; }
	inline void set_baseURI_10(String_t* value)
	{
		___baseURI_10 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_10), value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_publicId_12() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___publicId_12)); }
	inline String_t* get_publicId_12() const { return ___publicId_12; }
	inline String_t** get_address_of_publicId_12() { return &___publicId_12; }
	inline void set_publicId_12(String_t* value)
	{
		___publicId_12 = value;
		Il2CppCodeGenWriteBarrier((&___publicId_12), value);
	}

	inline static int32_t get_offset_of_systemId_13() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___systemId_13)); }
	inline String_t* get_systemId_13() const { return ___systemId_13; }
	inline String_t** get_address_of_systemId_13() { return &___systemId_13; }
	inline void set_systemId_13(String_t* value)
	{
		___systemId_13 = value;
		Il2CppCodeGenWriteBarrier((&___systemId_13), value);
	}

	inline static int32_t get_offset_of_intSubset_14() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___intSubset_14)); }
	inline String_t* get_intSubset_14() const { return ___intSubset_14; }
	inline String_t** get_address_of_intSubset_14() { return &___intSubset_14; }
	inline void set_intSubset_14(String_t* value)
	{
		___intSubset_14 = value;
		Il2CppCodeGenWriteBarrier((&___intSubset_14), value);
	}

	inline static int32_t get_offset_of_intSubsetHasPERef_15() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___intSubsetHasPERef_15)); }
	inline bool get_intSubsetHasPERef_15() const { return ___intSubsetHasPERef_15; }
	inline bool* get_address_of_intSubsetHasPERef_15() { return &___intSubsetHasPERef_15; }
	inline void set_intSubsetHasPERef_15(bool value)
	{
		___intSubsetHasPERef_15 = value;
	}

	inline static int32_t get_offset_of_isStandalone_16() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___isStandalone_16)); }
	inline bool get_isStandalone_16() const { return ___isStandalone_16; }
	inline bool* get_address_of_isStandalone_16() { return &___isStandalone_16; }
	inline void set_isStandalone_16(bool value)
	{
		___isStandalone_16 = value;
	}

	inline static int32_t get_offset_of_lineNumber_17() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___lineNumber_17)); }
	inline int32_t get_lineNumber_17() const { return ___lineNumber_17; }
	inline int32_t* get_address_of_lineNumber_17() { return &___lineNumber_17; }
	inline void set_lineNumber_17(int32_t value)
	{
		___lineNumber_17 = value;
	}

	inline static int32_t get_offset_of_linePosition_18() { return static_cast<int32_t>(offsetof(DTDObjectModel_t1729680289, ___linePosition_18)); }
	inline int32_t get_linePosition_18() const { return ___linePosition_18; }
	inline int32_t* get_address_of_linePosition_18() { return &___linePosition_18; }
	inline void set_linePosition_18(int32_t value)
	{
		___linePosition_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDOBJECTMODEL_T1729680289_H
#ifndef TOKENIZER_T1517940593_H
#define TOKENIZER_T1517940593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XPath.Tokenizer
struct  Tokenizer_t1517940593  : public RuntimeObject
{
public:
	// System.String Mono.Xml.XPath.Tokenizer::m_rgchInput
	String_t* ___m_rgchInput_0;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_ich
	int32_t ___m_ich_1;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_cch
	int32_t ___m_cch_2;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_iToken
	int32_t ___m_iToken_3;
	// System.Int32 Mono.Xml.XPath.Tokenizer::m_iTokenPrev
	int32_t ___m_iTokenPrev_4;
	// System.Object Mono.Xml.XPath.Tokenizer::m_objToken
	RuntimeObject * ___m_objToken_5;
	// System.Boolean Mono.Xml.XPath.Tokenizer::m_fPrevWasOperator
	bool ___m_fPrevWasOperator_6;
	// System.Boolean Mono.Xml.XPath.Tokenizer::m_fThisIsOperator
	bool ___m_fThisIsOperator_7;

public:
	inline static int32_t get_offset_of_m_rgchInput_0() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_rgchInput_0)); }
	inline String_t* get_m_rgchInput_0() const { return ___m_rgchInput_0; }
	inline String_t** get_address_of_m_rgchInput_0() { return &___m_rgchInput_0; }
	inline void set_m_rgchInput_0(String_t* value)
	{
		___m_rgchInput_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_rgchInput_0), value);
	}

	inline static int32_t get_offset_of_m_ich_1() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_ich_1)); }
	inline int32_t get_m_ich_1() const { return ___m_ich_1; }
	inline int32_t* get_address_of_m_ich_1() { return &___m_ich_1; }
	inline void set_m_ich_1(int32_t value)
	{
		___m_ich_1 = value;
	}

	inline static int32_t get_offset_of_m_cch_2() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_cch_2)); }
	inline int32_t get_m_cch_2() const { return ___m_cch_2; }
	inline int32_t* get_address_of_m_cch_2() { return &___m_cch_2; }
	inline void set_m_cch_2(int32_t value)
	{
		___m_cch_2 = value;
	}

	inline static int32_t get_offset_of_m_iToken_3() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_iToken_3)); }
	inline int32_t get_m_iToken_3() const { return ___m_iToken_3; }
	inline int32_t* get_address_of_m_iToken_3() { return &___m_iToken_3; }
	inline void set_m_iToken_3(int32_t value)
	{
		___m_iToken_3 = value;
	}

	inline static int32_t get_offset_of_m_iTokenPrev_4() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_iTokenPrev_4)); }
	inline int32_t get_m_iTokenPrev_4() const { return ___m_iTokenPrev_4; }
	inline int32_t* get_address_of_m_iTokenPrev_4() { return &___m_iTokenPrev_4; }
	inline void set_m_iTokenPrev_4(int32_t value)
	{
		___m_iTokenPrev_4 = value;
	}

	inline static int32_t get_offset_of_m_objToken_5() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_objToken_5)); }
	inline RuntimeObject * get_m_objToken_5() const { return ___m_objToken_5; }
	inline RuntimeObject ** get_address_of_m_objToken_5() { return &___m_objToken_5; }
	inline void set_m_objToken_5(RuntimeObject * value)
	{
		___m_objToken_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_objToken_5), value);
	}

	inline static int32_t get_offset_of_m_fPrevWasOperator_6() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_fPrevWasOperator_6)); }
	inline bool get_m_fPrevWasOperator_6() const { return ___m_fPrevWasOperator_6; }
	inline bool* get_address_of_m_fPrevWasOperator_6() { return &___m_fPrevWasOperator_6; }
	inline void set_m_fPrevWasOperator_6(bool value)
	{
		___m_fPrevWasOperator_6 = value;
	}

	inline static int32_t get_offset_of_m_fThisIsOperator_7() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593, ___m_fThisIsOperator_7)); }
	inline bool get_m_fThisIsOperator_7() const { return ___m_fThisIsOperator_7; }
	inline bool* get_address_of_m_fThisIsOperator_7() { return &___m_fThisIsOperator_7; }
	inline void set_m_fThisIsOperator_7(bool value)
	{
		___m_fThisIsOperator_7 = value;
	}
};

struct Tokenizer_t1517940593_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Xml.XPath.Tokenizer::s_mapTokens
	Hashtable_t1853889766 * ___s_mapTokens_8;
	// System.Object[] Mono.Xml.XPath.Tokenizer::s_rgTokenMap
	ObjectU5BU5D_t2843939325* ___s_rgTokenMap_9;

public:
	inline static int32_t get_offset_of_s_mapTokens_8() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593_StaticFields, ___s_mapTokens_8)); }
	inline Hashtable_t1853889766 * get_s_mapTokens_8() const { return ___s_mapTokens_8; }
	inline Hashtable_t1853889766 ** get_address_of_s_mapTokens_8() { return &___s_mapTokens_8; }
	inline void set_s_mapTokens_8(Hashtable_t1853889766 * value)
	{
		___s_mapTokens_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_mapTokens_8), value);
	}

	inline static int32_t get_offset_of_s_rgTokenMap_9() { return static_cast<int32_t>(offsetof(Tokenizer_t1517940593_StaticFields, ___s_rgTokenMap_9)); }
	inline ObjectU5BU5D_t2843939325* get_s_rgTokenMap_9() const { return ___s_rgTokenMap_9; }
	inline ObjectU5BU5D_t2843939325** get_address_of_s_rgTokenMap_9() { return &___s_rgTokenMap_9; }
	inline void set_s_rgTokenMap_9(ObjectU5BU5D_t2843939325* value)
	{
		___s_rgTokenMap_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_rgTokenMap_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOKENIZER_T1517940593_H
#ifndef LIST_1_T218596005_H
#define LIST_1_T218596005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
struct  List_1_t218596005  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t3368185270* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t218596005, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t3368185270* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t3368185270** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t3368185270* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t218596005, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t218596005, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t218596005_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	KeyValuePair_2U5BU5D_t3368185270* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t218596005_StaticFields, ___EmptyArray_4)); }
	inline KeyValuePair_2U5BU5D_t3368185270* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline KeyValuePair_2U5BU5D_t3368185270** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(KeyValuePair_2U5BU5D_t3368185270* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T218596005_H
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
#ifndef EXPRESSION_T1452783009_H
#define EXPRESSION_T1452783009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Expression
struct  Expression_t1452783009  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T1452783009_H
#ifndef FUNCTIONARGUMENTS_T3573450773_H
#define FUNCTIONARGUMENTS_T3573450773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FunctionArguments
struct  FunctionArguments_t3573450773  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.FunctionArguments::_arg
	Expression_t1452783009 * ____arg_0;
	// System.Xml.XPath.FunctionArguments System.Xml.XPath.FunctionArguments::_tail
	FunctionArguments_t3573450773 * ____tail_1;

public:
	inline static int32_t get_offset_of__arg_0() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____arg_0)); }
	inline Expression_t1452783009 * get__arg_0() const { return ____arg_0; }
	inline Expression_t1452783009 ** get_address_of__arg_0() { return &____arg_0; }
	inline void set__arg_0(Expression_t1452783009 * value)
	{
		____arg_0 = value;
		Il2CppCodeGenWriteBarrier((&____arg_0), value);
	}

	inline static int32_t get_offset_of__tail_1() { return static_cast<int32_t>(offsetof(FunctionArguments_t3573450773, ____tail_1)); }
	inline FunctionArguments_t3573450773 * get__tail_1() const { return ____tail_1; }
	inline FunctionArguments_t3573450773 ** get_address_of__tail_1() { return &____tail_1; }
	inline void set__tail_1(FunctionArguments_t3573450773 * value)
	{
		____tail_1 = value;
		Il2CppCodeGenWriteBarrier((&____tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNCTIONARGUMENTS_T3573450773_H
#ifndef XPATHEXPRESSION_T1723793351_H
#define XPATHEXPRESSION_T1723793351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathExpression
struct  XPathExpression_t1723793351  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXPRESSION_T1723793351_H
#ifndef XPATHITEM_T4250588140_H
#define XPATHITEM_T4250588140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathItem
struct  XPathItem_t4250588140  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITEM_T4250588140_H
#ifndef XPATHITERATORCOMPARER_T1799213572_H
#define XPATHITERATORCOMPARER_T1799213572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathIteratorComparer
struct  XPathIteratorComparer_t1799213572  : public RuntimeObject
{
public:

public:
};

struct XPathIteratorComparer_t1799213572_StaticFields
{
public:
	// System.Xml.XPath.XPathIteratorComparer System.Xml.XPath.XPathIteratorComparer::Instance
	XPathIteratorComparer_t1799213572 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathIteratorComparer_t1799213572_StaticFields, ___Instance_0)); }
	inline XPathIteratorComparer_t1799213572 * get_Instance_0() const { return ___Instance_0; }
	inline XPathIteratorComparer_t1799213572 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathIteratorComparer_t1799213572 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITERATORCOMPARER_T1799213572_H
#ifndef XPATHNAVIGATORCOMPARER_T2421573191_H
#define XPATHNAVIGATORCOMPARER_T2421573191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigatorComparer
struct  XPathNavigatorComparer_t2421573191  : public RuntimeObject
{
public:

public:
};

struct XPathNavigatorComparer_t2421573191_StaticFields
{
public:
	// System.Xml.XPath.XPathNavigatorComparer System.Xml.XPath.XPathNavigatorComparer::Instance
	XPathNavigatorComparer_t2421573191 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XPathNavigatorComparer_t2421573191_StaticFields, ___Instance_0)); }
	inline XPathNavigatorComparer_t2421573191 * get_Instance_0() const { return ___Instance_0; }
	inline XPathNavigatorComparer_t2421573191 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XPathNavigatorComparer_t2421573191 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATORCOMPARER_T2421573191_H
#ifndef XPATHNODEITERATOR_T3667290188_H
#define XPATHNODEITERATOR_T3667290188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator
struct  XPathNodeIterator_t3667290188  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator::_count
	int32_t ____count_0;

public:
	inline static int32_t get_offset_of__count_0() { return static_cast<int32_t>(offsetof(XPathNodeIterator_t3667290188, ____count_0)); }
	inline int32_t get__count_0() const { return ____count_0; }
	inline int32_t* get_address_of__count_0() { return &____count_0; }
	inline void set__count_0(int32_t value)
	{
		____count_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNODEITERATOR_T3667290188_H
#ifndef U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#define U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2
struct  U3CGetEnumeratorU3Ec__Iterator2_t90454087  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$PC
	int32_t ___U24PC_0;
	// System.Object System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNodeIterator/<GetEnumerator>c__Iterator2::<>f__this
	XPathNodeIterator_t3667290188 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ec__Iterator2_t90454087, ___U3CU3Ef__this_2)); }
	inline XPathNodeIterator_t3667290188 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(XPathNodeIterator_t3667290188 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETENUMERATORU3EC__ITERATOR2_T90454087_H
#ifndef XPATHSORTELEMENT_T4237073177_H
#define XPATHSORTELEMENT_T4237073177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSortElement
struct  XPathSortElement_t4237073177  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathSortElement::Navigator
	XPathNavigator_t787956054 * ___Navigator_0;
	// System.Object[] System.Xml.XPath.XPathSortElement::Values
	ObjectU5BU5D_t2843939325* ___Values_1;

public:
	inline static int32_t get_offset_of_Navigator_0() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Navigator_0)); }
	inline XPathNavigator_t787956054 * get_Navigator_0() const { return ___Navigator_0; }
	inline XPathNavigator_t787956054 ** get_address_of_Navigator_0() { return &___Navigator_0; }
	inline void set_Navigator_0(XPathNavigator_t787956054 * value)
	{
		___Navigator_0 = value;
		Il2CppCodeGenWriteBarrier((&___Navigator_0), value);
	}

	inline static int32_t get_offset_of_Values_1() { return static_cast<int32_t>(offsetof(XPathSortElement_t4237073177, ___Values_1)); }
	inline ObjectU5BU5D_t2843939325* get_Values_1() const { return ___Values_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_Values_1() { return &___Values_1; }
	inline void set_Values_1(ObjectU5BU5D_t2843939325* value)
	{
		___Values_1 = value;
		Il2CppCodeGenWriteBarrier((&___Values_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTELEMENT_T4237073177_H
#ifndef XPATHSORTERS_T698127628_H
#define XPATHSORTERS_T698127628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t698127628  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t2718874744 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t698127628, ____rgSorters_0)); }
	inline ArrayList_t2718874744 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t2718874744 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t2718874744 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier((&____rgSorters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTERS_T698127628_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NsDecl[] System.Xml.XmlNamespaceManager::decls
	NsDeclU5BU5D_t2116608150* ___decls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::declPos
	int32_t ___declPos_1;
	// System.Xml.XmlNamespaceManager/NsScope[] System.Xml.XmlNamespaceManager::scopes
	NsScopeU5BU5D_t382374428* ___scopes_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopePos
	int32_t ___scopePos_3;
	// System.String System.Xml.XmlNamespaceManager::defaultNamespace
	String_t* ___defaultNamespace_4;
	// System.Int32 System.Xml.XmlNamespaceManager::count
	int32_t ___count_5;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_6;
	// System.Boolean System.Xml.XmlNamespaceManager::internalAtomizedNames
	bool ___internalAtomizedNames_7;

public:
	inline static int32_t get_offset_of_decls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___decls_0)); }
	inline NsDeclU5BU5D_t2116608150* get_decls_0() const { return ___decls_0; }
	inline NsDeclU5BU5D_t2116608150** get_address_of_decls_0() { return &___decls_0; }
	inline void set_decls_0(NsDeclU5BU5D_t2116608150* value)
	{
		___decls_0 = value;
		Il2CppCodeGenWriteBarrier((&___decls_0), value);
	}

	inline static int32_t get_offset_of_declPos_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___declPos_1)); }
	inline int32_t get_declPos_1() const { return ___declPos_1; }
	inline int32_t* get_address_of_declPos_1() { return &___declPos_1; }
	inline void set_declPos_1(int32_t value)
	{
		___declPos_1 = value;
	}

	inline static int32_t get_offset_of_scopes_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopes_2)); }
	inline NsScopeU5BU5D_t382374428* get_scopes_2() const { return ___scopes_2; }
	inline NsScopeU5BU5D_t382374428** get_address_of_scopes_2() { return &___scopes_2; }
	inline void set_scopes_2(NsScopeU5BU5D_t382374428* value)
	{
		___scopes_2 = value;
		Il2CppCodeGenWriteBarrier((&___scopes_2), value);
	}

	inline static int32_t get_offset_of_scopePos_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopePos_3)); }
	inline int32_t get_scopePos_3() const { return ___scopePos_3; }
	inline int32_t* get_address_of_scopePos_3() { return &___scopePos_3; }
	inline void set_scopePos_3(int32_t value)
	{
		___scopePos_3 = value;
	}

	inline static int32_t get_offset_of_defaultNamespace_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___defaultNamespace_4)); }
	inline String_t* get_defaultNamespace_4() const { return ___defaultNamespace_4; }
	inline String_t** get_address_of_defaultNamespace_4() { return &___defaultNamespace_4; }
	inline void set_defaultNamespace_4(String_t* value)
	{
		___defaultNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultNamespace_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_nameTable_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_6)); }
	inline XmlNameTable_t71772148 * get_nameTable_6() const { return ___nameTable_6; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_6() { return &___nameTable_6; }
	inline void set_nameTable_6(XmlNameTable_t71772148 * value)
	{
		___nameTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_6), value);
	}

	inline static int32_t get_offset_of_internalAtomizedNames_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___internalAtomizedNames_7)); }
	inline bool get_internalAtomizedNames_7() const { return ___internalAtomizedNames_7; }
	inline bool* get_address_of_internalAtomizedNames_7() { return &___internalAtomizedNames_7; }
	inline void set_internalAtomizedNames_7(bool value)
	{
		___internalAtomizedNames_7 = value;
	}
};

struct XmlNamespaceManager_t418790500_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::<>f__switch$map28
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map28_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_8() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500_StaticFields, ___U3CU3Ef__switchU24map28_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map28_8() const { return ___U3CU3Ef__switchU24map28_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map28_8() { return &___U3CU3Ef__switchU24map28_8; }
	inline void set_U3CU3Ef__switchU24map28_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map28_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
#ifndef DTDELEMENTDECLARATION_T1830540991_H
#define DTDELEMENTDECLARATION_T1830540991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDElementDeclaration
struct  DTDElementDeclaration_t1830540991  : public DTDNode_t858560093
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDElementDeclaration::root
	DTDObjectModel_t1729680289 * ___root_5;
	// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::contentModel
	DTDContentModel_t3264596611 * ___contentModel_6;
	// System.String Mono.Xml.DTDElementDeclaration::name
	String_t* ___name_7;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isEmpty
	bool ___isEmpty_8;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isAny
	bool ___isAny_9;
	// System.Boolean Mono.Xml.DTDElementDeclaration::isMixedContent
	bool ___isMixedContent_10;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___root_5)); }
	inline DTDObjectModel_t1729680289 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t1729680289 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier((&___root_5), value);
	}

	inline static int32_t get_offset_of_contentModel_6() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___contentModel_6)); }
	inline DTDContentModel_t3264596611 * get_contentModel_6() const { return ___contentModel_6; }
	inline DTDContentModel_t3264596611 ** get_address_of_contentModel_6() { return &___contentModel_6; }
	inline void set_contentModel_6(DTDContentModel_t3264596611 * value)
	{
		___contentModel_6 = value;
		Il2CppCodeGenWriteBarrier((&___contentModel_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_isEmpty_8() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___isEmpty_8)); }
	inline bool get_isEmpty_8() const { return ___isEmpty_8; }
	inline bool* get_address_of_isEmpty_8() { return &___isEmpty_8; }
	inline void set_isEmpty_8(bool value)
	{
		___isEmpty_8 = value;
	}

	inline static int32_t get_offset_of_isAny_9() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___isAny_9)); }
	inline bool get_isAny_9() const { return ___isAny_9; }
	inline bool* get_address_of_isAny_9() { return &___isAny_9; }
	inline void set_isAny_9(bool value)
	{
		___isAny_9 = value;
	}

	inline static int32_t get_offset_of_isMixedContent_10() { return static_cast<int32_t>(offsetof(DTDElementDeclaration_t1830540991, ___isMixedContent_10)); }
	inline bool get_isMixedContent_10() const { return ___isMixedContent_10; }
	inline bool* get_address_of_isMixedContent_10() { return &___isMixedContent_10; }
	inline void set_isMixedContent_10(bool value)
	{
		___isMixedContent_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDELEMENTDECLARATION_T1830540991_H
#ifndef DICTIONARYBASE_T52754249_H
#define DICTIONARYBASE_T52754249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DictionaryBase
struct  DictionaryBase_t52754249  : public List_1_t218596005
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYBASE_T52754249_H
#ifndef KEYVALUEPAIR_2_T3041488559_H
#define KEYVALUEPAIR_2_T3041488559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>
struct  KeyValuePair_2_t3041488559 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DTDNode_t858560093 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3041488559, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3041488559, ___value_1)); }
	inline DTDNode_t858560093 * get_value_1() const { return ___value_1; }
	inline DTDNode_t858560093 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DTDNode_t858560093 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3041488559_H
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
#ifndef BASEITERATOR_T4168896842_H
#define BASEITERATOR_T4168896842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.BaseIterator
struct  BaseIterator_t4168896842  : public XPathNodeIterator_t3667290188
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.BaseIterator::_nsm
	RuntimeObject* ____nsm_1;
	// System.Int32 System.Xml.XPath.BaseIterator::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of__nsm_1() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ____nsm_1)); }
	inline RuntimeObject* get__nsm_1() const { return ____nsm_1; }
	inline RuntimeObject** get_address_of__nsm_1() { return &____nsm_1; }
	inline void set__nsm_1(RuntimeObject* value)
	{
		____nsm_1 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(BaseIterator_t4168896842, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEITERATOR_T4168896842_H
#ifndef COMPILEDEXPRESSION_T4018285681_H
#define COMPILEDEXPRESSION_T4018285681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.CompiledExpression
struct  CompiledExpression_t4018285681  : public XPathExpression_t1723793351
{
public:
	// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::_nsm
	RuntimeObject* ____nsm_0;
	// System.Xml.XPath.Expression System.Xml.XPath.CompiledExpression::_expr
	Expression_t1452783009 * ____expr_1;
	// System.Xml.XPath.XPathSorters System.Xml.XPath.CompiledExpression::_sorters
	XPathSorters_t698127628 * ____sorters_2;
	// System.String System.Xml.XPath.CompiledExpression::rawExpression
	String_t* ___rawExpression_3;

public:
	inline static int32_t get_offset_of__nsm_0() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____nsm_0)); }
	inline RuntimeObject* get__nsm_0() const { return ____nsm_0; }
	inline RuntimeObject** get_address_of__nsm_0() { return &____nsm_0; }
	inline void set__nsm_0(RuntimeObject* value)
	{
		____nsm_0 = value;
		Il2CppCodeGenWriteBarrier((&____nsm_0), value);
	}

	inline static int32_t get_offset_of__expr_1() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____expr_1)); }
	inline Expression_t1452783009 * get__expr_1() const { return ____expr_1; }
	inline Expression_t1452783009 ** get_address_of__expr_1() { return &____expr_1; }
	inline void set__expr_1(Expression_t1452783009 * value)
	{
		____expr_1 = value;
		Il2CppCodeGenWriteBarrier((&____expr_1), value);
	}

	inline static int32_t get_offset_of__sorters_2() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ____sorters_2)); }
	inline XPathSorters_t698127628 * get__sorters_2() const { return ____sorters_2; }
	inline XPathSorters_t698127628 ** get_address_of__sorters_2() { return &____sorters_2; }
	inline void set__sorters_2(XPathSorters_t698127628 * value)
	{
		____sorters_2 = value;
		Il2CppCodeGenWriteBarrier((&____sorters_2), value);
	}

	inline static int32_t get_offset_of_rawExpression_3() { return static_cast<int32_t>(offsetof(CompiledExpression_t4018285681, ___rawExpression_3)); }
	inline String_t* get_rawExpression_3() const { return ___rawExpression_3; }
	inline String_t** get_address_of_rawExpression_3() { return &___rawExpression_3; }
	inline void set_rawExpression_3(String_t* value)
	{
		___rawExpression_3 = value;
		Il2CppCodeGenWriteBarrier((&___rawExpression_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILEDEXPRESSION_T4018285681_H
#ifndef EXPRBINARY_T2069694888_H
#define EXPRBINARY_T2069694888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBinary
struct  ExprBinary_t2069694888  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_left
	Expression_t1452783009 * ____left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::_right
	Expression_t1452783009 * ____right_1;

public:
	inline static int32_t get_offset_of__left_0() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____left_0)); }
	inline Expression_t1452783009 * get__left_0() const { return ____left_0; }
	inline Expression_t1452783009 ** get_address_of__left_0() { return &____left_0; }
	inline void set__left_0(Expression_t1452783009 * value)
	{
		____left_0 = value;
		Il2CppCodeGenWriteBarrier((&____left_0), value);
	}

	inline static int32_t get_offset_of__right_1() { return static_cast<int32_t>(offsetof(ExprBinary_t2069694888, ____right_1)); }
	inline Expression_t1452783009 * get__right_1() const { return ____right_1; }
	inline Expression_t1452783009 ** get_address_of__right_1() { return &____right_1; }
	inline void set__right_1(Expression_t1452783009 * value)
	{
		____right_1 = value;
		Il2CppCodeGenWriteBarrier((&____right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBINARY_T2069694888_H
#ifndef EXPRFUNCTIONCALL_T607199437_H
#define EXPRFUNCTIONCALL_T607199437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFunctionCall
struct  ExprFunctionCall_t607199437  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprFunctionCall::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprFunctionCall::resolvedName
	bool ___resolvedName_1;
	// System.Collections.ArrayList System.Xml.XPath.ExprFunctionCall::_args
	ArrayList_t2718874744 * ____args_2;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}

	inline static int32_t get_offset_of__args_2() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437, ____args_2)); }
	inline ArrayList_t2718874744 * get__args_2() const { return ____args_2; }
	inline ArrayList_t2718874744 ** get_address_of__args_2() { return &____args_2; }
	inline void set__args_2(ArrayList_t2718874744 * value)
	{
		____args_2 = value;
		Il2CppCodeGenWriteBarrier((&____args_2), value);
	}
};

struct ExprFunctionCall_t607199437_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XPath.ExprFunctionCall::<>f__switch$map41
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map41_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map41_3() { return static_cast<int32_t>(offsetof(ExprFunctionCall_t607199437_StaticFields, ___U3CU3Ef__switchU24map41_3)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map41_3() const { return ___U3CU3Ef__switchU24map41_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map41_3() { return &___U3CU3Ef__switchU24map41_3; }
	inline void set_U3CU3Ef__switchU24map41_3(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map41_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map41_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFUNCTIONCALL_T607199437_H
#ifndef EXPRLITERAL_T2264229068_H
#define EXPRLITERAL_T2264229068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLiteral
struct  ExprLiteral_t2264229068  : public Expression_t1452783009
{
public:
	// System.String System.Xml.XPath.ExprLiteral::_value
	String_t* ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprLiteral_t2264229068, ____value_0)); }
	inline String_t* get__value_0() const { return ____value_0; }
	inline String_t** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(String_t* value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((&____value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLITERAL_T2264229068_H
#ifndef EXPRNEG_T381818215_H
#define EXPRNEG_T381818215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNEG
struct  ExprNEG_t381818215  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprNEG_t381818215, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNEG_T381818215_H
#ifndef EXPRNUMBER_T3483239576_H
#define EXPRNUMBER_T3483239576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumber
struct  ExprNumber_t3483239576  : public Expression_t1452783009
{
public:
	// System.Double System.Xml.XPath.ExprNumber::_value
	double ____value_0;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ExprNumber_t3483239576, ____value_0)); }
	inline double get__value_0() const { return ____value_0; }
	inline double* get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(double value)
	{
		____value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMBER_T3483239576_H
#ifndef EXPRPARENS_T795575662_H
#define EXPRPARENS_T795575662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprParens
struct  ExprParens_t795575662  : public Expression_t1452783009
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::_expr
	Expression_t1452783009 * ____expr_0;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(ExprParens_t795575662, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPARENS_T795575662_H
#ifndef EXPRVARIABLE_T1387751146_H
#define EXPRVARIABLE_T1387751146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprVariable
struct  ExprVariable_t1387751146  : public Expression_t1452783009
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.ExprVariable::_name
	XmlQualifiedName_t2760654312 * ____name_0;
	// System.Boolean System.Xml.XPath.ExprVariable::resolvedName
	bool ___resolvedName_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ____name_0)); }
	inline XmlQualifiedName_t2760654312 * get__name_0() const { return ____name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(XmlQualifiedName_t2760654312 * value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of_resolvedName_1() { return static_cast<int32_t>(offsetof(ExprVariable_t1387751146, ___resolvedName_1)); }
	inline bool get_resolvedName_1() const { return ___resolvedName_1; }
	inline bool* get_address_of_resolvedName_1() { return &___resolvedName_1; }
	inline void set_resolvedName_1(bool value)
	{
		___resolvedName_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRVARIABLE_T1387751146_H
#ifndef NODESET_T3272593155_H
#define NODESET_T3272593155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeSet
struct  NodeSet_t3272593155  : public Expression_t1452783009
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODESET_T3272593155_H
#ifndef XPATHNAVIGATOR_T787956054_H
#define XPATHNAVIGATOR_T787956054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator
struct  XPathNavigator_t787956054  : public XPathItem_t4250588140
{
public:

public:
};

struct XPathNavigator_t787956054_StaticFields
{
public:
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_text_chars
	CharU5BU5D_t3528271667* ___escape_text_chars_0;
	// System.Char[] System.Xml.XPath.XPathNavigator::escape_attr_chars
	CharU5BU5D_t3528271667* ___escape_attr_chars_1;

public:
	inline static int32_t get_offset_of_escape_text_chars_0() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_text_chars_0)); }
	inline CharU5BU5D_t3528271667* get_escape_text_chars_0() const { return ___escape_text_chars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_text_chars_0() { return &___escape_text_chars_0; }
	inline void set_escape_text_chars_0(CharU5BU5D_t3528271667* value)
	{
		___escape_text_chars_0 = value;
		Il2CppCodeGenWriteBarrier((&___escape_text_chars_0), value);
	}

	inline static int32_t get_offset_of_escape_attr_chars_1() { return static_cast<int32_t>(offsetof(XPathNavigator_t787956054_StaticFields, ___escape_attr_chars_1)); }
	inline CharU5BU5D_t3528271667* get_escape_attr_chars_1() const { return ___escape_attr_chars_1; }
	inline CharU5BU5D_t3528271667** get_address_of_escape_attr_chars_1() { return &___escape_attr_chars_1; }
	inline void set_escape_attr_chars_1(CharU5BU5D_t3528271667* value)
	{
		___escape_attr_chars_1 = value;
		Il2CppCodeGenWriteBarrier((&___escape_attr_chars_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHNAVIGATOR_T787956054_H
#ifndef ENUMERABLEITERATOR_T1590428576_H
#define ENUMERABLEITERATOR_T1590428576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/EnumerableIterator
struct  EnumerableIterator_t1590428576  : public XPathNodeIterator_t3667290188
{
public:
	// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator/EnumerableIterator::source
	RuntimeObject* ___source_1;
	// System.Collections.IEnumerator System.Xml.XPath.XPathNavigator/EnumerableIterator::e
	RuntimeObject* ___e_2;
	// System.Int32 System.Xml.XPath.XPathNavigator/EnumerableIterator::pos
	int32_t ___pos_3;

public:
	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___source_1)); }
	inline RuntimeObject* get_source_1() const { return ___source_1; }
	inline RuntimeObject** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(RuntimeObject* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_e_2() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___e_2)); }
	inline RuntimeObject* get_e_2() const { return ___e_2; }
	inline RuntimeObject** get_address_of_e_2() { return &___e_2; }
	inline void set_e_2(RuntimeObject* value)
	{
		___e_2 = value;
		Il2CppCodeGenWriteBarrier((&___e_2), value);
	}

	inline static int32_t get_offset_of_pos_3() { return static_cast<int32_t>(offsetof(EnumerableIterator_t1590428576, ___pos_3)); }
	inline int32_t get_pos_3() const { return ___pos_3; }
	inline int32_t* get_address_of_pos_3() { return &___pos_3; }
	inline void set_pos_3(int32_t value)
	{
		___pos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEITERATOR_T1590428576_H
#ifndef XSLTCONTEXT_T2039362735_H
#define XSLTCONTEXT_T2039362735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Xsl.XsltContext
struct  XsltContext_t2039362735  : public XmlNamespaceManager_t418790500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XSLTCONTEXT_T2039362735_H
#ifndef DTDCOLLECTIONBASE_T3926218464_H
#define DTDCOLLECTIONBASE_T3926218464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDCollectionBase
struct  DTDCollectionBase_t3926218464  : public DictionaryBase_t52754249
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDCollectionBase::root
	DTDObjectModel_t1729680289 * ___root_5;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDCollectionBase_t3926218464, ___root_5)); }
	inline DTDObjectModel_t1729680289 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t1729680289 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier((&___root_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDCOLLECTIONBASE_T3926218464_H
#ifndef DTDCONTENTORDERTYPE_T1195786655_H
#define DTDCONTENTORDERTYPE_T1195786655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentOrderType
struct  DTDContentOrderType_t1195786655 
{
public:
	// System.Int32 Mono.Xml.DTDContentOrderType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DTDContentOrderType_t1195786655, ___value___1)); }
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
#endif // DTDCONTENTORDERTYPE_T1195786655_H
#ifndef DTDOCCURENCE_T3140866896_H
#define DTDOCCURENCE_T3140866896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDOccurence
struct  DTDOccurence_t3140866896 
{
public:
	// System.Int32 Mono.Xml.DTDOccurence::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DTDOccurence_t3140866896, ___value___1)); }
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
#endif // DTDOCCURENCE_T3140866896_H
#ifndef ENUMERATOR_T2107839882_H
#define ENUMERATOR_T2107839882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>>
struct  Enumerator_t2107839882 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t218596005 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_t3041488559  ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2107839882, ___l_0)); }
	inline List_1_t218596005 * get_l_0() const { return ___l_0; }
	inline List_1_t218596005 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t218596005 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2107839882, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2107839882, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2107839882, ___current_3)); }
	inline KeyValuePair_2_t3041488559  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t3041488559 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t3041488559  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2107839882_H
#ifndef CONFORMANCELEVEL_T3899847875_H
#define CONFORMANCELEVEL_T3899847875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3899847875 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3899847875, ___value___1)); }
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
#endif // CONFORMANCELEVEL_T3899847875_H
#ifndef AXES_T1882171014_H
#define AXES_T1882171014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.Axes
struct  Axes_t1882171014 
{
public:
	// System.Int32 System.Xml.XPath.Axes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axes_t1882171014, ___value___1)); }
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
#endif // AXES_T1882171014_H
#ifndef AXISITERATOR_T3073253660_H
#define AXISITERATOR_T3073253660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisIterator
struct  AxisIterator_t3073253660  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;
	// System.Xml.XPath.NodeTest System.Xml.XPath.AxisIterator::_test
	NodeTest_t747859056 * ____test_4;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}

	inline static int32_t get_offset_of__test_4() { return static_cast<int32_t>(offsetof(AxisIterator_t3073253660, ____test_4)); }
	inline NodeTest_t747859056 * get__test_4() const { return ____test_4; }
	inline NodeTest_t747859056 ** get_address_of__test_4() { return &____test_4; }
	inline void set__test_4(NodeTest_t747859056 * value)
	{
		____test_4 = value;
		Il2CppCodeGenWriteBarrier((&____test_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISITERATOR_T3073253660_H
#ifndef CHILDITERATOR_T3598849435_H
#define CHILDITERATOR_T3598849435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ChildIterator
struct  ChildIterator_t3598849435  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.ChildIterator::_nav
	XPathNavigator_t787956054 * ____nav_3;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(ChildIterator_t3598849435, ____nav_3)); }
	inline XPathNavigator_t787956054 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t787956054 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t787956054 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier((&____nav_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHILDITERATOR_T3598849435_H
#ifndef EXPRBOOLEAN_T3855188593_H
#define EXPRBOOLEAN_T3855188593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprBoolean
struct  ExprBoolean_t3855188593  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRBOOLEAN_T3855188593_H
#ifndef EXPRFILTER_T2551926938_H
#define EXPRFILTER_T2551926938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprFilter
struct  ExprFilter_t2551926938  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::expr
	Expression_t1452783009 * ___expr_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::pred
	Expression_t1452783009 * ___pred_1;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___expr_0)); }
	inline Expression_t1452783009 * get_expr_0() const { return ___expr_0; }
	inline Expression_t1452783009 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t1452783009 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pred_1() { return static_cast<int32_t>(offsetof(ExprFilter_t2551926938, ___pred_1)); }
	inline Expression_t1452783009 * get_pred_1() const { return ___pred_1; }
	inline Expression_t1452783009 ** get_address_of_pred_1() { return &___pred_1; }
	inline void set_pred_1(Expression_t1452783009 * value)
	{
		___pred_1 = value;
		Il2CppCodeGenWriteBarrier((&___pred_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRFILTER_T2551926938_H
#ifndef EXPRNUMERIC_T370757872_H
#define EXPRNUMERIC_T370757872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNumeric
struct  ExprNumeric_t370757872  : public ExprBinary_t2069694888
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNUMERIC_T370757872_H
#ifndef EXPRROOT_T3091324302_H
#define EXPRROOT_T3091324302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprRoot
struct  ExprRoot_t3091324302  : public NodeSet_t3272593155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRROOT_T3091324302_H
#ifndef EXPRSLASH_T1263914658_H
#define EXPRSLASH_T1263914658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH
struct  ExprSLASH_t1263914658  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH_t1263914658, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH_T1263914658_H
#ifndef EXPRSLASH2_T1762680492_H
#define EXPRSLASH2_T1762680492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprSLASH2
struct  ExprSLASH2_t1762680492  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.NodeSet System.Xml.XPath.ExprSLASH2::right
	NodeSet_t3272593155 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492, ___right_1)); }
	inline NodeSet_t3272593155 * get_right_1() const { return ___right_1; }
	inline NodeSet_t3272593155 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(NodeSet_t3272593155 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

struct ExprSLASH2_t1762680492_StaticFields
{
public:
	// System.Xml.XPath.NodeTest System.Xml.XPath.ExprSLASH2::DescendantOrSelfStar
	NodeTest_t747859056 * ___DescendantOrSelfStar_2;

public:
	inline static int32_t get_offset_of_DescendantOrSelfStar_2() { return static_cast<int32_t>(offsetof(ExprSLASH2_t1762680492_StaticFields, ___DescendantOrSelfStar_2)); }
	inline NodeTest_t747859056 * get_DescendantOrSelfStar_2() const { return ___DescendantOrSelfStar_2; }
	inline NodeTest_t747859056 ** get_address_of_DescendantOrSelfStar_2() { return &___DescendantOrSelfStar_2; }
	inline void set_DescendantOrSelfStar_2(NodeTest_t747859056 * value)
	{
		___DescendantOrSelfStar_2 = value;
		Il2CppCodeGenWriteBarrier((&___DescendantOrSelfStar_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRSLASH2_T1762680492_H
#ifndef EXPRUNION_T1609753984_H
#define EXPRUNION_T1609753984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprUNION
struct  ExprUNION_t1609753984  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::left
	Expression_t1452783009 * ___left_0;
	// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::right
	Expression_t1452783009 * ___right_1;

public:
	inline static int32_t get_offset_of_left_0() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___left_0)); }
	inline Expression_t1452783009 * get_left_0() const { return ___left_0; }
	inline Expression_t1452783009 ** get_address_of_left_0() { return &___left_0; }
	inline void set_left_0(Expression_t1452783009 * value)
	{
		___left_0 = value;
		Il2CppCodeGenWriteBarrier((&___left_0), value);
	}

	inline static int32_t get_offset_of_right_1() { return static_cast<int32_t>(offsetof(ExprUNION_t1609753984, ___right_1)); }
	inline Expression_t1452783009 * get_right_1() const { return ___right_1; }
	inline Expression_t1452783009 ** get_address_of_right_1() { return &___right_1; }
	inline void set_right_1(Expression_t1452783009 * value)
	{
		___right_1 = value;
		Il2CppCodeGenWriteBarrier((&___right_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRUNION_T1609753984_H
#ifndef LISTITERATOR_T3066609410_H
#define LISTITERATOR_T3066609410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ListIterator
struct  ListIterator_t3066609410  : public BaseIterator_t4168896842
{
public:
	// System.Collections.IList System.Xml.XPath.ListIterator::_list
	RuntimeObject* ____list_3;

public:
	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(ListIterator_t3066609410, ____list_3)); }
	inline RuntimeObject* get__list_3() const { return ____list_3; }
	inline RuntimeObject** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(RuntimeObject* value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTITERATOR_T3066609410_H
#ifndef NODETEST_T747859056_H
#define NODETEST_T747859056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTest
struct  NodeTest_t747859056  : public NodeSet_t3272593155
{
public:
	// System.Xml.XPath.AxisSpecifier System.Xml.XPath.NodeTest::_axis
	AxisSpecifier_t40435393 * ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(NodeTest_t747859056, ____axis_0)); }
	inline AxisSpecifier_t40435393 * get__axis_0() const { return ____axis_0; }
	inline AxisSpecifier_t40435393 ** get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(AxisSpecifier_t40435393 * value)
	{
		____axis_0 = value;
		Il2CppCodeGenWriteBarrier((&____axis_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETEST_T747859056_H
#ifndef PARENSITERATOR_T4020310733_H
#define PARENSITERATOR_T4020310733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParensIterator
struct  ParensIterator_t4020310733  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.ParensIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(ParensIterator_t4020310733, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENSITERATOR_T4020310733_H
#ifndef SIMPLEITERATOR_T809567201_H
#define SIMPLEITERATOR_T809567201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleIterator
struct  SimpleIterator_t809567201  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_nav
	XPathNavigator_t787956054 * ____nav_3;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleIterator::_current
	XPathNavigator_t787956054 * ____current_4;
	// System.Boolean System.Xml.XPath.SimpleIterator::skipfirst
	bool ___skipfirst_5;

public:
	inline static int32_t get_offset_of__nav_3() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____nav_3)); }
	inline XPathNavigator_t787956054 * get__nav_3() const { return ____nav_3; }
	inline XPathNavigator_t787956054 ** get_address_of__nav_3() { return &____nav_3; }
	inline void set__nav_3(XPathNavigator_t787956054 * value)
	{
		____nav_3 = value;
		Il2CppCodeGenWriteBarrier((&____nav_3), value);
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ____current_4)); }
	inline XPathNavigator_t787956054 * get__current_4() const { return ____current_4; }
	inline XPathNavigator_t787956054 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(XPathNavigator_t787956054 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier((&____current_4), value);
	}

	inline static int32_t get_offset_of_skipfirst_5() { return static_cast<int32_t>(offsetof(SimpleIterator_t809567201, ___skipfirst_5)); }
	inline bool get_skipfirst_5() const { return ___skipfirst_5; }
	inline bool* get_address_of_skipfirst_5() { return &___skipfirst_5; }
	inline void set_skipfirst_5(bool value)
	{
		___skipfirst_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEITERATOR_T809567201_H
#ifndef SIMPLESLASHITERATOR_T3611200333_H
#define SIMPLESLASHITERATOR_T3611200333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SimpleSlashIterator
struct  SimpleSlashIterator_t3611200333  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.NodeSet System.Xml.XPath.SimpleSlashIterator::_expr
	NodeSet_t3272593155 * ____expr_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_left
	BaseIterator_t4168896842 * ____left_4;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SimpleSlashIterator::_right
	BaseIterator_t4168896842 * ____right_5;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.SimpleSlashIterator::_current
	XPathNavigator_t787956054 * ____current_6;

public:
	inline static int32_t get_offset_of__expr_3() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____expr_3)); }
	inline NodeSet_t3272593155 * get__expr_3() const { return ____expr_3; }
	inline NodeSet_t3272593155 ** get_address_of__expr_3() { return &____expr_3; }
	inline void set__expr_3(NodeSet_t3272593155 * value)
	{
		____expr_3 = value;
		Il2CppCodeGenWriteBarrier((&____expr_3), value);
	}

	inline static int32_t get_offset_of__left_4() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____left_4)); }
	inline BaseIterator_t4168896842 * get__left_4() const { return ____left_4; }
	inline BaseIterator_t4168896842 ** get_address_of__left_4() { return &____left_4; }
	inline void set__left_4(BaseIterator_t4168896842 * value)
	{
		____left_4 = value;
		Il2CppCodeGenWriteBarrier((&____left_4), value);
	}

	inline static int32_t get_offset_of__right_5() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____right_5)); }
	inline BaseIterator_t4168896842 * get__right_5() const { return ____right_5; }
	inline BaseIterator_t4168896842 ** get_address_of__right_5() { return &____right_5; }
	inline void set__right_5(BaseIterator_t4168896842 * value)
	{
		____right_5 = value;
		Il2CppCodeGenWriteBarrier((&____right_5), value);
	}

	inline static int32_t get_offset_of__current_6() { return static_cast<int32_t>(offsetof(SimpleSlashIterator_t3611200333, ____current_6)); }
	inline XPathNavigator_t787956054 * get__current_6() const { return ____current_6; }
	inline XPathNavigator_t787956054 ** get_address_of__current_6() { return &____current_6; }
	inline void set__current_6(XPathNavigator_t787956054 * value)
	{
		____current_6 = value;
		Il2CppCodeGenWriteBarrier((&____current_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLESLASHITERATOR_T3611200333_H
#ifndef SLASHITERATOR_T2421034408_H
#define SLASHITERATOR_T2421034408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SlashIterator
struct  SlashIterator_t2421034408  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_iterLeft
	BaseIterator_t4168896842 * ____iterLeft_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_iterRight
	BaseIterator_t4168896842 * ____iterRight_4;
	// System.Xml.XPath.NodeSet System.Xml.XPath.SlashIterator::_expr
	NodeSet_t3272593155 * ____expr_5;
	// System.Collections.SortedList System.Xml.XPath.SlashIterator::_iterList
	SortedList_t2427694641 * ____iterList_6;
	// System.Boolean System.Xml.XPath.SlashIterator::_finished
	bool ____finished_7;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.SlashIterator::_nextIterRight
	BaseIterator_t4168896842 * ____nextIterRight_8;

public:
	inline static int32_t get_offset_of__iterLeft_3() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterLeft_3)); }
	inline BaseIterator_t4168896842 * get__iterLeft_3() const { return ____iterLeft_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iterLeft_3() { return &____iterLeft_3; }
	inline void set__iterLeft_3(BaseIterator_t4168896842 * value)
	{
		____iterLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&____iterLeft_3), value);
	}

	inline static int32_t get_offset_of__iterRight_4() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterRight_4)); }
	inline BaseIterator_t4168896842 * get__iterRight_4() const { return ____iterRight_4; }
	inline BaseIterator_t4168896842 ** get_address_of__iterRight_4() { return &____iterRight_4; }
	inline void set__iterRight_4(BaseIterator_t4168896842 * value)
	{
		____iterRight_4 = value;
		Il2CppCodeGenWriteBarrier((&____iterRight_4), value);
	}

	inline static int32_t get_offset_of__expr_5() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____expr_5)); }
	inline NodeSet_t3272593155 * get__expr_5() const { return ____expr_5; }
	inline NodeSet_t3272593155 ** get_address_of__expr_5() { return &____expr_5; }
	inline void set__expr_5(NodeSet_t3272593155 * value)
	{
		____expr_5 = value;
		Il2CppCodeGenWriteBarrier((&____expr_5), value);
	}

	inline static int32_t get_offset_of__iterList_6() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____iterList_6)); }
	inline SortedList_t2427694641 * get__iterList_6() const { return ____iterList_6; }
	inline SortedList_t2427694641 ** get_address_of__iterList_6() { return &____iterList_6; }
	inline void set__iterList_6(SortedList_t2427694641 * value)
	{
		____iterList_6 = value;
		Il2CppCodeGenWriteBarrier((&____iterList_6), value);
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}

	inline static int32_t get_offset_of__nextIterRight_8() { return static_cast<int32_t>(offsetof(SlashIterator_t2421034408, ____nextIterRight_8)); }
	inline BaseIterator_t4168896842 * get__nextIterRight_8() const { return ____nextIterRight_8; }
	inline BaseIterator_t4168896842 ** get_address_of__nextIterRight_8() { return &____nextIterRight_8; }
	inline void set__nextIterRight_8(BaseIterator_t4168896842 * value)
	{
		____nextIterRight_8 = value;
		Il2CppCodeGenWriteBarrier((&____nextIterRight_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLASHITERATOR_T2421034408_H
#ifndef SORTEDITERATOR_T2904376427_H
#define SORTEDITERATOR_T2904376427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SortedIterator
struct  SortedIterator_t2904376427  : public BaseIterator_t4168896842
{
public:
	// System.Collections.ArrayList System.Xml.XPath.SortedIterator::list
	ArrayList_t2718874744 * ___list_3;

public:
	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(SortedIterator_t2904376427, ___list_3)); }
	inline ArrayList_t2718874744 * get_list_3() const { return ___list_3; }
	inline ArrayList_t2718874744 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ArrayList_t2718874744 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier((&___list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTEDITERATOR_T2904376427_H
#ifndef UNIONITERATOR_T312972106_H
#define UNIONITERATOR_T312972106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.UnionIterator
struct  UnionIterator_t312972106  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_left
	BaseIterator_t4168896842 * ____left_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_right
	BaseIterator_t4168896842 * ____right_4;
	// System.Boolean System.Xml.XPath.UnionIterator::keepLeft
	bool ___keepLeft_5;
	// System.Boolean System.Xml.XPath.UnionIterator::keepRight
	bool ___keepRight_6;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::_current
	XPathNavigator_t787956054 * ____current_7;

public:
	inline static int32_t get_offset_of__left_3() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____left_3)); }
	inline BaseIterator_t4168896842 * get__left_3() const { return ____left_3; }
	inline BaseIterator_t4168896842 ** get_address_of__left_3() { return &____left_3; }
	inline void set__left_3(BaseIterator_t4168896842 * value)
	{
		____left_3 = value;
		Il2CppCodeGenWriteBarrier((&____left_3), value);
	}

	inline static int32_t get_offset_of__right_4() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____right_4)); }
	inline BaseIterator_t4168896842 * get__right_4() const { return ____right_4; }
	inline BaseIterator_t4168896842 ** get_address_of__right_4() { return &____right_4; }
	inline void set__right_4(BaseIterator_t4168896842 * value)
	{
		____right_4 = value;
		Il2CppCodeGenWriteBarrier((&____right_4), value);
	}

	inline static int32_t get_offset_of_keepLeft_5() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ___keepLeft_5)); }
	inline bool get_keepLeft_5() const { return ___keepLeft_5; }
	inline bool* get_address_of_keepLeft_5() { return &___keepLeft_5; }
	inline void set_keepLeft_5(bool value)
	{
		___keepLeft_5 = value;
	}

	inline static int32_t get_offset_of_keepRight_6() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ___keepRight_6)); }
	inline bool get_keepRight_6() const { return ___keepRight_6; }
	inline bool* get_address_of_keepRight_6() { return &___keepRight_6; }
	inline void set_keepRight_6(bool value)
	{
		___keepRight_6 = value;
	}

	inline static int32_t get_offset_of__current_7() { return static_cast<int32_t>(offsetof(UnionIterator_t312972106, ____current_7)); }
	inline XPathNavigator_t787956054 * get__current_7() const { return ____current_7; }
	inline XPathNavigator_t787956054 ** get_address_of__current_7() { return &____current_7; }
	inline void set__current_7(XPathNavigator_t787956054 * value)
	{
		____current_7 = value;
		Il2CppCodeGenWriteBarrier((&____current_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONITERATOR_T312972106_H
#ifndef WRAPPERITERATOR_T1258076988_H
#define WRAPPERITERATOR_T1258076988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.WrapperIterator
struct  WrapperIterator_t1258076988  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.WrapperIterator::iter
	XPathNodeIterator_t3667290188 * ___iter_3;

public:
	inline static int32_t get_offset_of_iter_3() { return static_cast<int32_t>(offsetof(WrapperIterator_t1258076988, ___iter_3)); }
	inline XPathNodeIterator_t3667290188 * get_iter_3() const { return ___iter_3; }
	inline XPathNodeIterator_t3667290188 ** get_address_of_iter_3() { return &___iter_3; }
	inline void set_iter_3(XPathNodeIterator_t3667290188 * value)
	{
		___iter_3 = value;
		Il2CppCodeGenWriteBarrier((&___iter_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPPERITERATOR_T1258076988_H
#ifndef XPATHEXCEPTION_T2107611652_H
#define XPATHEXCEPTION_T2107611652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathException
struct  XPathException_t2107611652  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHEXCEPTION_T2107611652_H
#ifndef XPATHNAMESPACESCOPE_T4128811329_H
#define XPATHNAMESPACESCOPE_T4128811329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNamespaceScope
struct  XPathNamespaceScope_t4128811329 
{
public:
	// System.Int32 System.Xml.XPath.XPathNamespaceScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNamespaceScope_t4128811329, ___value___1)); }
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
#endif // XPATHNAMESPACESCOPE_T4128811329_H
#ifndef XPATHNODETYPE_T3031007223_H
#define XPATHNODETYPE_T3031007223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNodeType
struct  XPathNodeType_t3031007223 
{
public:
	// System.Int32 System.Xml.XPath.XPathNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathNodeType_t3031007223, ___value___1)); }
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
#endif // XPATHNODETYPE_T3031007223_H
#ifndef XPATHRESULTTYPE_T2828988488_H
#define XPATHRESULTTYPE_T2828988488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathResultType
struct  XPathResultType_t2828988488 
{
public:
	// System.Int32 System.Xml.XPath.XPathResultType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XPathResultType_t2828988488, ___value___1)); }
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
#endif // XPATHRESULTTYPE_T2828988488_H
#ifndef XMLDATATYPE_T3437356259_H
#define XMLDATATYPE_T3437356259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XmlDataType
struct  XmlDataType_t3437356259 
{
public:
	// System.Int32 System.Xml.XPath.XmlDataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDataType_t3437356259, ___value___1)); }
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
#endif // XMLDATATYPE_T3437356259_H
#ifndef DTDATTLISTDECLARATIONCOLLECTION_T2220366188_H
#define DTDATTLISTDECLARATIONCOLLECTION_T2220366188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAttListDeclarationCollection
struct  DTDAttListDeclarationCollection_t2220366188  : public DTDCollectionBase_t3926218464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDATTLISTDECLARATIONCOLLECTION_T2220366188_H
#ifndef DTDCONTENTMODEL_T3264596611_H
#define DTDCONTENTMODEL_T3264596611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDContentModel
struct  DTDContentModel_t3264596611  : public DTDNode_t858560093
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDContentModel::root
	DTDObjectModel_t1729680289 * ___root_5;
	// System.String Mono.Xml.DTDContentModel::ownerElementName
	String_t* ___ownerElementName_6;
	// System.String Mono.Xml.DTDContentModel::elementName
	String_t* ___elementName_7;
	// Mono.Xml.DTDContentOrderType Mono.Xml.DTDContentModel::orderType
	int32_t ___orderType_8;
	// Mono.Xml.DTDContentModelCollection Mono.Xml.DTDContentModel::childModels
	DTDContentModelCollection_t2798820000 * ___childModels_9;
	// Mono.Xml.DTDOccurence Mono.Xml.DTDContentModel::occurence
	int32_t ___occurence_10;

public:
	inline static int32_t get_offset_of_root_5() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___root_5)); }
	inline DTDObjectModel_t1729680289 * get_root_5() const { return ___root_5; }
	inline DTDObjectModel_t1729680289 ** get_address_of_root_5() { return &___root_5; }
	inline void set_root_5(DTDObjectModel_t1729680289 * value)
	{
		___root_5 = value;
		Il2CppCodeGenWriteBarrier((&___root_5), value);
	}

	inline static int32_t get_offset_of_ownerElementName_6() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___ownerElementName_6)); }
	inline String_t* get_ownerElementName_6() const { return ___ownerElementName_6; }
	inline String_t** get_address_of_ownerElementName_6() { return &___ownerElementName_6; }
	inline void set_ownerElementName_6(String_t* value)
	{
		___ownerElementName_6 = value;
		Il2CppCodeGenWriteBarrier((&___ownerElementName_6), value);
	}

	inline static int32_t get_offset_of_elementName_7() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___elementName_7)); }
	inline String_t* get_elementName_7() const { return ___elementName_7; }
	inline String_t** get_address_of_elementName_7() { return &___elementName_7; }
	inline void set_elementName_7(String_t* value)
	{
		___elementName_7 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_7), value);
	}

	inline static int32_t get_offset_of_orderType_8() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___orderType_8)); }
	inline int32_t get_orderType_8() const { return ___orderType_8; }
	inline int32_t* get_address_of_orderType_8() { return &___orderType_8; }
	inline void set_orderType_8(int32_t value)
	{
		___orderType_8 = value;
	}

	inline static int32_t get_offset_of_childModels_9() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___childModels_9)); }
	inline DTDContentModelCollection_t2798820000 * get_childModels_9() const { return ___childModels_9; }
	inline DTDContentModelCollection_t2798820000 ** get_address_of_childModels_9() { return &___childModels_9; }
	inline void set_childModels_9(DTDContentModelCollection_t2798820000 * value)
	{
		___childModels_9 = value;
		Il2CppCodeGenWriteBarrier((&___childModels_9), value);
	}

	inline static int32_t get_offset_of_occurence_10() { return static_cast<int32_t>(offsetof(DTDContentModel_t3264596611, ___occurence_10)); }
	inline int32_t get_occurence_10() const { return ___occurence_10; }
	inline int32_t* get_address_of_occurence_10() { return &___occurence_10; }
	inline void set_occurence_10(int32_t value)
	{
		___occurence_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDCONTENTMODEL_T3264596611_H
#ifndef DTDELEMENTDECLARATIONCOLLECTION_T222313714_H
#define DTDELEMENTDECLARATIONCOLLECTION_T222313714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDElementDeclarationCollection
struct  DTDElementDeclarationCollection_t222313714  : public DTDCollectionBase_t3926218464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDELEMENTDECLARATIONCOLLECTION_T222313714_H
#ifndef DTDENTITYDECLARATIONCOLLECTION_T2250844513_H
#define DTDENTITYDECLARATIONCOLLECTION_T2250844513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDEntityDeclarationCollection
struct  DTDEntityDeclarationCollection_t2250844513  : public DTDCollectionBase_t3926218464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDENTITYDECLARATIONCOLLECTION_T2250844513_H
#ifndef DTDNOTATIONDECLARATIONCOLLECTION_T959292105_H
#define DTDNOTATIONDECLARATIONCOLLECTION_T959292105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDNotationDeclarationCollection
struct  DTDNotationDeclarationCollection_t959292105  : public DTDCollectionBase_t3926218464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDNOTATIONDECLARATIONCOLLECTION_T959292105_H
#ifndef U3CU3EC__ITERATOR3_T2072931442_H
#define U3CU3EC__ITERATOR3_T2072931442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DictionaryBase/<>c__Iterator3
struct  U3CU3Ec__Iterator3_t2072931442  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode>> Mono.Xml.DictionaryBase/<>c__Iterator3::<$s_431>__0
	Enumerator_t2107839882  ___U3CU24s_431U3E__0_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Mono.Xml.DTDNode> Mono.Xml.DictionaryBase/<>c__Iterator3::<p>__1
	KeyValuePair_2_t3041488559  ___U3CpU3E__1_1;
	// System.Int32 Mono.Xml.DictionaryBase/<>c__Iterator3::$PC
	int32_t ___U24PC_2;
	// Mono.Xml.DTDNode Mono.Xml.DictionaryBase/<>c__Iterator3::$current
	DTDNode_t858560093 * ___U24current_3;
	// Mono.Xml.DictionaryBase Mono.Xml.DictionaryBase/<>c__Iterator3::<>f__this
	DictionaryBase_t52754249 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_431U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t2072931442, ___U3CU24s_431U3E__0_0)); }
	inline Enumerator_t2107839882  get_U3CU24s_431U3E__0_0() const { return ___U3CU24s_431U3E__0_0; }
	inline Enumerator_t2107839882 * get_address_of_U3CU24s_431U3E__0_0() { return &___U3CU24s_431U3E__0_0; }
	inline void set_U3CU24s_431U3E__0_0(Enumerator_t2107839882  value)
	{
		___U3CU24s_431U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CpU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t2072931442, ___U3CpU3E__1_1)); }
	inline KeyValuePair_2_t3041488559  get_U3CpU3E__1_1() const { return ___U3CpU3E__1_1; }
	inline KeyValuePair_2_t3041488559 * get_address_of_U3CpU3E__1_1() { return &___U3CpU3E__1_1; }
	inline void set_U3CpU3E__1_1(KeyValuePair_2_t3041488559  value)
	{
		___U3CpU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t2072931442, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t2072931442, ___U24current_3)); }
	inline DTDNode_t858560093 * get_U24current_3() const { return ___U24current_3; }
	inline DTDNode_t858560093 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(DTDNode_t858560093 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator3_t2072931442, ___U3CU3Ef__this_4)); }
	inline DictionaryBase_t52754249 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline DictionaryBase_t52754249 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(DictionaryBase_t52754249 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__ITERATOR3_T2072931442_H
#ifndef ANCESTORITERATOR_T1850150082_H
#define ANCESTORITERATOR_T1850150082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorIterator
struct  AncestorIterator_t1850150082  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.AncestorIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorIterator::navigators
	ArrayList_t2718874744 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___navigators_7)); }
	inline ArrayList_t2718874744 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t2718874744 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t2718874744 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier((&___navigators_7), value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorIterator_t1850150082, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCESTORITERATOR_T1850150082_H
#ifndef ANCESTORORSELFITERATOR_T2300071220_H
#define ANCESTORORSELFITERATOR_T2300071220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorOrSelfIterator
struct  AncestorOrSelfIterator_t2300071220  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.AncestorOrSelfIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorOrSelfIterator::navigators
	ArrayList_t2718874744 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorOrSelfIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___navigators_7)); }
	inline ArrayList_t2718874744 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t2718874744 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t2718874744 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier((&___navigators_7), value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t2300071220, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCESTORORSELFITERATOR_T2300071220_H
#ifndef ATTRIBUTEITERATOR_T3778175417_H
#define ATTRIBUTEITERATOR_T3778175417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AttributeIterator
struct  AttributeIterator_t3778175417  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEITERATOR_T3778175417_H
#ifndef AXISSPECIFIER_T40435393_H
#define AXISSPECIFIER_T40435393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisSpecifier
struct  AxisSpecifier_t40435393  : public RuntimeObject
{
public:
	// System.Xml.XPath.Axes System.Xml.XPath.AxisSpecifier::_axis
	int32_t ____axis_0;

public:
	inline static int32_t get_offset_of__axis_0() { return static_cast<int32_t>(offsetof(AxisSpecifier_t40435393, ____axis_0)); }
	inline int32_t get__axis_0() const { return ____axis_0; }
	inline int32_t* get_address_of__axis_0() { return &____axis_0; }
	inline void set__axis_0(int32_t value)
	{
		____axis_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISSPECIFIER_T40435393_H
#ifndef DESCENDANTITERATOR_T2685366878_H
#define DESCENDANTITERATOR_T2685366878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantIterator
struct  DescendantIterator_t2685366878  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.DescendantIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantIterator_t2685366878, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantIterator_t2685366878, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCENDANTITERATOR_T2685366878_H
#ifndef DESCENDANTORSELFITERATOR_T4256219478_H
#define DESCENDANTORSELFITERATOR_T4256219478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantOrSelfIterator
struct  DescendantOrSelfIterator_t4256219478  : public SimpleIterator_t809567201
{
public:
	// System.Int32 System.Xml.XPath.DescendantOrSelfIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantOrSelfIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t4256219478, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t4256219478, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCENDANTORSELFITERATOR_T4256219478_H
#ifndef EQUALITYEXPR_T1646148531_H
#define EQUALITYEXPR_T1646148531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.EqualityExpr
struct  EqualityExpr_t1646148531  : public ExprBoolean_t3855188593
{
public:
	// System.Boolean System.Xml.XPath.EqualityExpr::trueVal
	bool ___trueVal_2;

public:
	inline static int32_t get_offset_of_trueVal_2() { return static_cast<int32_t>(offsetof(EqualityExpr_t1646148531, ___trueVal_2)); }
	inline bool get_trueVal_2() const { return ___trueVal_2; }
	inline bool* get_address_of_trueVal_2() { return &___trueVal_2; }
	inline void set_trueVal_2(bool value)
	{
		___trueVal_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYEXPR_T1646148531_H
#ifndef EXPRAND_T348538276_H
#define EXPRAND_T348538276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprAND
struct  ExprAND_t348538276  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRAND_T348538276_H
#ifndef EXPRDIV_T1961659563_H
#define EXPRDIV_T1961659563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprDIV
struct  ExprDIV_t1961659563  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRDIV_T1961659563_H
#ifndef EXPRMINUS_T3125292145_H
#define EXPRMINUS_T3125292145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMINUS
struct  ExprMINUS_t3125292145  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMINUS_T3125292145_H
#ifndef EXPRMOD_T1913835785_H
#define EXPRMOD_T1913835785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMOD
struct  ExprMOD_t1913835785  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMOD_T1913835785_H
#ifndef EXPRMULT_T118778748_H
#define EXPRMULT_T118778748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprMULT
struct  ExprMULT_t118778748  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRMULT_T118778748_H
#ifndef EXPROR_T3019581832_H
#define EXPROR_T3019581832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprOR
struct  ExprOR_t3019581832  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPROR_T3019581832_H
#ifndef EXPRPLUS_T1725353634_H
#define EXPRPLUS_T1725353634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprPLUS
struct  ExprPLUS_t1725353634  : public ExprNumeric_t370757872
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRPLUS_T1725353634_H
#ifndef FOLLOWINGITERATOR_T3658643279_H
#define FOLLOWINGITERATOR_T3658643279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingIterator
struct  FollowingIterator_t3658643279  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.FollowingIterator::_finished
	bool ____finished_6;

public:
	inline static int32_t get_offset_of__finished_6() { return static_cast<int32_t>(offsetof(FollowingIterator_t3658643279, ____finished_6)); }
	inline bool get__finished_6() const { return ____finished_6; }
	inline bool* get_address_of__finished_6() { return &____finished_6; }
	inline void set__finished_6(bool value)
	{
		____finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGITERATOR_T3658643279_H
#ifndef FOLLOWINGSIBLINGITERATOR_T3042855407_H
#define FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.FollowingSiblingIterator
struct  FollowingSiblingIterator_t3042855407  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWINGSIBLINGITERATOR_T3042855407_H
#ifndef NAMESPACEITERATOR_T3101604877_H
#define NAMESPACEITERATOR_T3101604877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NamespaceIterator
struct  NamespaceIterator_t3101604877  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEITERATOR_T3101604877_H
#ifndef NODENAMETEST_T562814213_H
#define NODENAMETEST_T562814213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeNameTest
struct  NodeNameTest_t562814213  : public NodeTest_t747859056
{
public:
	// System.Xml.XmlQualifiedName System.Xml.XPath.NodeNameTest::_name
	XmlQualifiedName_t2760654312 * ____name_1;
	// System.Boolean System.Xml.XPath.NodeNameTest::resolvedName
	bool ___resolvedName_2;

public:
	inline static int32_t get_offset_of__name_1() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ____name_1)); }
	inline XmlQualifiedName_t2760654312 * get__name_1() const { return ____name_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__name_1() { return &____name_1; }
	inline void set__name_1(XmlQualifiedName_t2760654312 * value)
	{
		____name_1 = value;
		Il2CppCodeGenWriteBarrier((&____name_1), value);
	}

	inline static int32_t get_offset_of_resolvedName_2() { return static_cast<int32_t>(offsetof(NodeNameTest_t562814213, ___resolvedName_2)); }
	inline bool get_resolvedName_2() const { return ___resolvedName_2; }
	inline bool* get_address_of_resolvedName_2() { return &___resolvedName_2; }
	inline void set_resolvedName_2(bool value)
	{
		___resolvedName_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODENAMETEST_T562814213_H
#ifndef NODETYPETEST_T4287533341_H
#define NODETYPETEST_T4287533341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NodeTypeTest
struct  NodeTypeTest_t4287533341  : public NodeTest_t747859056
{
public:
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.NodeTypeTest::type
	int32_t ___type_1;
	// System.String System.Xml.XPath.NodeTypeTest::_param
	String_t* ____param_2;

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of__param_2() { return static_cast<int32_t>(offsetof(NodeTypeTest_t4287533341, ____param_2)); }
	inline String_t* get__param_2() const { return ____param_2; }
	inline String_t** get_address_of__param_2() { return &____param_2; }
	inline void set__param_2(String_t* value)
	{
		____param_2 = value;
		Il2CppCodeGenWriteBarrier((&____param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODETYPETEST_T4287533341_H
#ifndef PARENTITERATOR_T3536730964_H
#define PARENTITERATOR_T3536730964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ParentIterator
struct  ParentIterator_t3536730964  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.ParentIterator::canMove
	bool ___canMove_6;

public:
	inline static int32_t get_offset_of_canMove_6() { return static_cast<int32_t>(offsetof(ParentIterator_t3536730964, ___canMove_6)); }
	inline bool get_canMove_6() const { return ___canMove_6; }
	inline bool* get_address_of_canMove_6() { return &___canMove_6; }
	inline void set_canMove_6(bool value)
	{
		___canMove_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARENTITERATOR_T3536730964_H
#ifndef PRECEDINGITERATOR_T2452812266_H
#define PRECEDINGITERATOR_T2452812266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingIterator
struct  PrecedingIterator_t2452812266  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingIterator_t2452812266, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGITERATOR_T2452812266_H
#ifndef PRECEDINGSIBLINGITERATOR_T3231156185_H
#define PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PrecedingSiblingIterator
struct  PrecedingSiblingIterator_t3231156185  : public SimpleIterator_t809567201
{
public:
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::finished
	bool ___finished_6;
	// System.Boolean System.Xml.XPath.PrecedingSiblingIterator::started
	bool ___started_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.PrecedingSiblingIterator::startPosition
	XPathNavigator_t787956054 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}

	inline static int32_t get_offset_of_started_7() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___started_7)); }
	inline bool get_started_7() const { return ___started_7; }
	inline bool* get_address_of_started_7() { return &___started_7; }
	inline void set_started_7(bool value)
	{
		___started_7 = value;
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(PrecedingSiblingIterator_t3231156185, ___startPosition_8)); }
	inline XPathNavigator_t787956054 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t787956054 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t787956054 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier((&___startPosition_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRECEDINGSIBLINGITERATOR_T3231156185_H
#ifndef PREDICATEITERATOR_T4231391432_H
#define PREDICATEITERATOR_T4231391432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PredicateIterator
struct  PredicateIterator_t4231391432  : public BaseIterator_t4168896842
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.PredicateIterator::_iter
	BaseIterator_t4168896842 * ____iter_3;
	// System.Xml.XPath.Expression System.Xml.XPath.PredicateIterator::_pred
	Expression_t1452783009 * ____pred_4;
	// System.Xml.XPath.XPathResultType System.Xml.XPath.PredicateIterator::resType
	int32_t ___resType_5;
	// System.Boolean System.Xml.XPath.PredicateIterator::finished
	bool ___finished_6;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ____iter_3)); }
	inline BaseIterator_t4168896842 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t4168896842 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t4168896842 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier((&____iter_3), value);
	}

	inline static int32_t get_offset_of__pred_4() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ____pred_4)); }
	inline Expression_t1452783009 * get__pred_4() const { return ____pred_4; }
	inline Expression_t1452783009 ** get_address_of__pred_4() { return &____pred_4; }
	inline void set__pred_4(Expression_t1452783009 * value)
	{
		____pred_4 = value;
		Il2CppCodeGenWriteBarrier((&____pred_4), value);
	}

	inline static int32_t get_offset_of_resType_5() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ___resType_5)); }
	inline int32_t get_resType_5() const { return ___resType_5; }
	inline int32_t* get_address_of_resType_5() { return &___resType_5; }
	inline void set_resType_5(int32_t value)
	{
		___resType_5 = value;
	}

	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PredicateIterator_t4231391432, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATEITERATOR_T4231391432_H
#ifndef RELATIONALEXPR_T3307137467_H
#define RELATIONALEXPR_T3307137467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.RelationalExpr
struct  RelationalExpr_t3307137467  : public ExprBoolean_t3855188593
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONALEXPR_T3307137467_H
#ifndef SELFITERATOR_T907214_H
#define SELFITERATOR_T907214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SelfIterator
struct  SelfIterator_t907214  : public SimpleIterator_t809567201
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELFITERATOR_T907214_H
#ifndef U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#define U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0
struct  U3CEnumerateChildrenU3Ec__Iterator0_t404642154  : public RuntimeObject
{
public:
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::n
	XPathNavigator_t787956054 * ___n_0;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<nav>__0
	XPathNavigator_t787956054 * ___U3CnavU3E__0_1;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<nav2>__1
	XPathNavigator_t787956054 * ___U3Cnav2U3E__1_2;
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::type
	int32_t ___type_3;
	// System.Int32 System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::$PC
	int32_t ___U24PC_4;
	// System.Object System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<$>n
	XPathNavigator_t787956054 * ___U3CU24U3En_6;
	// System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator/<EnumerateChildren>c__Iterator0::<$>type
	int32_t ___U3CU24U3Etype_7;

public:
	inline static int32_t get_offset_of_n_0() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___n_0)); }
	inline XPathNavigator_t787956054 * get_n_0() const { return ___n_0; }
	inline XPathNavigator_t787956054 ** get_address_of_n_0() { return &___n_0; }
	inline void set_n_0(XPathNavigator_t787956054 * value)
	{
		___n_0 = value;
		Il2CppCodeGenWriteBarrier((&___n_0), value);
	}

	inline static int32_t get_offset_of_U3CnavU3E__0_1() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CnavU3E__0_1)); }
	inline XPathNavigator_t787956054 * get_U3CnavU3E__0_1() const { return ___U3CnavU3E__0_1; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CnavU3E__0_1() { return &___U3CnavU3E__0_1; }
	inline void set_U3CnavU3E__0_1(XPathNavigator_t787956054 * value)
	{
		___U3CnavU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnavU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3Cnav2U3E__1_2() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3Cnav2U3E__1_2)); }
	inline XPathNavigator_t787956054 * get_U3Cnav2U3E__1_2() const { return ___U3Cnav2U3E__1_2; }
	inline XPathNavigator_t787956054 ** get_address_of_U3Cnav2U3E__1_2() { return &___U3Cnav2U3E__1_2; }
	inline void set_U3Cnav2U3E__1_2(XPathNavigator_t787956054 * value)
	{
		___U3Cnav2U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3Cnav2U3E__1_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3En_6() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CU24U3En_6)); }
	inline XPathNavigator_t787956054 * get_U3CU24U3En_6() const { return ___U3CU24U3En_6; }
	inline XPathNavigator_t787956054 ** get_address_of_U3CU24U3En_6() { return &___U3CU24U3En_6; }
	inline void set_U3CU24U3En_6(XPathNavigator_t787956054 * value)
	{
		___U3CU24U3En_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3En_6), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Etype_7() { return static_cast<int32_t>(offsetof(U3CEnumerateChildrenU3Ec__Iterator0_t404642154, ___U3CU24U3Etype_7)); }
	inline int32_t get_U3CU24U3Etype_7() const { return ___U3CU24U3Etype_7; }
	inline int32_t* get_address_of_U3CU24U3Etype_7() { return &___U3CU24U3Etype_7; }
	inline void set_U3CU24U3Etype_7(int32_t value)
	{
		___U3CU24U3Etype_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATECHILDRENU3EC__ITERATOR0_T404642154_H
#ifndef XPATHSORTER_T36376808_H
#define XPATHSORTER_T36376808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorter
struct  XPathSorter_t36376808  : public RuntimeObject
{
public:
	// System.Xml.XPath.Expression System.Xml.XPath.XPathSorter::_expr
	Expression_t1452783009 * ____expr_0;
	// System.Collections.IComparer System.Xml.XPath.XPathSorter::_cmp
	RuntimeObject* ____cmp_1;
	// System.Xml.XPath.XmlDataType System.Xml.XPath.XPathSorter::_type
	int32_t ____type_2;

public:
	inline static int32_t get_offset_of__expr_0() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____expr_0)); }
	inline Expression_t1452783009 * get__expr_0() const { return ____expr_0; }
	inline Expression_t1452783009 ** get_address_of__expr_0() { return &____expr_0; }
	inline void set__expr_0(Expression_t1452783009 * value)
	{
		____expr_0 = value;
		Il2CppCodeGenWriteBarrier((&____expr_0), value);
	}

	inline static int32_t get_offset_of__cmp_1() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____cmp_1)); }
	inline RuntimeObject* get__cmp_1() const { return ____cmp_1; }
	inline RuntimeObject** get_address_of__cmp_1() { return &____cmp_1; }
	inline void set__cmp_1(RuntimeObject* value)
	{
		____cmp_1 = value;
		Il2CppCodeGenWriteBarrier((&____cmp_1), value);
	}

	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(XPathSorter_t36376808, ____type_2)); }
	inline int32_t get__type_2() const { return ____type_2; }
	inline int32_t* get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(int32_t value)
	{
		____type_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHSORTER_T36376808_H
#ifndef EXPREQ_T1453891107_H
#define EXPREQ_T1453891107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprEQ
struct  ExprEQ_t1453891107  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPREQ_T1453891107_H
#ifndef EXPRGE_T4135851367_H
#define EXPRGE_T4135851367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGE
struct  ExprGE_t4135851367  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGE_T4135851367_H
#ifndef EXPRGT_T1857306706_H
#define EXPRGT_T1857306706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprGT
struct  ExprGT_t1857306706  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRGT_T1857306706_H
#ifndef EXPRLE_T4135130471_H
#define EXPRLE_T4135130471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLE
struct  ExprLE_t4135130471  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLE_T4135130471_H
#ifndef EXPRLT_T1856585810_H
#define EXPRLT_T1856585810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprLT
struct  ExprLT_t1856585810  : public RelationalExpr_t3307137467
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRLT_T1856585810_H
#ifndef EXPRNE_T4135261543_H
#define EXPRNE_T4135261543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ExprNE
struct  ExprNE_t4135261543  : public EqualityExpr_t1646148531
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRNE_T4135261543_H
#ifndef NULLITERATOR_T2630925529_H
#define NULLITERATOR_T2630925529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.NullIterator
struct  NullIterator_t2630925529  : public SelfIterator_t907214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLITERATOR_T2630925529_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (CompiledExpression_t4018285681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2100[4] = 
{
	CompiledExpression_t4018285681::get_offset_of__nsm_0(),
	CompiledExpression_t4018285681::get_offset_of__expr_1(),
	CompiledExpression_t4018285681::get_offset_of__sorters_2(),
	CompiledExpression_t4018285681::get_offset_of_rawExpression_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (XPathSortElement_t4237073177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[2] = 
{
	XPathSortElement_t4237073177::get_offset_of_Navigator_0(),
	XPathSortElement_t4237073177::get_offset_of_Values_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (XPathSorters_t698127628), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[1] = 
{
	XPathSorters_t698127628::get_offset_of__rgSorters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (XPathSorter_t36376808), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2103[3] = 
{
	XPathSorter_t36376808::get_offset_of__expr_0(),
	XPathSorter_t36376808::get_offset_of__cmp_1(),
	XPathSorter_t36376808::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (Expression_t1452783009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (ExprBinary_t2069694888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2105[2] = 
{
	ExprBinary_t2069694888::get_offset_of__left_0(),
	ExprBinary_t2069694888::get_offset_of__right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (ExprBoolean_t3855188593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (ExprOR_t3019581832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (ExprAND_t348538276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (EqualityExpr_t1646148531), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[1] = 
{
	EqualityExpr_t1646148531::get_offset_of_trueVal_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (ExprEQ_t1453891107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (ExprNE_t4135261543), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (RelationalExpr_t3307137467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (ExprGT_t1857306706), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (ExprGE_t4135851367), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (ExprLT_t1856585810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (ExprLE_t4135130471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (ExprNumeric_t370757872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (ExprPLUS_t1725353634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (ExprMINUS_t3125292145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (ExprMULT_t118778748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (ExprDIV_t1961659563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (ExprMOD_t1913835785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (ExprNEG_t381818215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2123[1] = 
{
	ExprNEG_t381818215::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (NodeSet_t3272593155), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (ExprUNION_t1609753984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[2] = 
{
	ExprUNION_t1609753984::get_offset_of_left_0(),
	ExprUNION_t1609753984::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (ExprSLASH_t1263914658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[2] = 
{
	ExprSLASH_t1263914658::get_offset_of_left_0(),
	ExprSLASH_t1263914658::get_offset_of_right_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (ExprSLASH2_t1762680492), -1, sizeof(ExprSLASH2_t1762680492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2127[3] = 
{
	ExprSLASH2_t1762680492::get_offset_of_left_0(),
	ExprSLASH2_t1762680492::get_offset_of_right_1(),
	ExprSLASH2_t1762680492_StaticFields::get_offset_of_DescendantOrSelfStar_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (ExprRoot_t3091324302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (Axes_t1882171014)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2129[14] = 
{
	Axes_t1882171014::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (AxisSpecifier_t40435393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[1] = 
{
	AxisSpecifier_t40435393::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (NodeTest_t747859056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2131[1] = 
{
	NodeTest_t747859056::get_offset_of__axis_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (NodeTypeTest_t4287533341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2132[2] = 
{
	NodeTypeTest_t4287533341::get_offset_of_type_1(),
	NodeTypeTest_t4287533341::get_offset_of__param_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (NodeNameTest_t562814213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[2] = 
{
	NodeNameTest_t562814213::get_offset_of__name_1(),
	NodeNameTest_t562814213::get_offset_of_resolvedName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (ExprFilter_t2551926938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2134[2] = 
{
	ExprFilter_t2551926938::get_offset_of_expr_0(),
	ExprFilter_t2551926938::get_offset_of_pred_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (ExprNumber_t3483239576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2135[1] = 
{
	ExprNumber_t3483239576::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (ExprLiteral_t2264229068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[1] = 
{
	ExprLiteral_t2264229068::get_offset_of__value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (ExprVariable_t1387751146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[2] = 
{
	ExprVariable_t1387751146::get_offset_of__name_0(),
	ExprVariable_t1387751146::get_offset_of_resolvedName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (ExprParens_t795575662), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2138[1] = 
{
	ExprParens_t795575662::get_offset_of__expr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (FunctionArguments_t3573450773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2139[2] = 
{
	FunctionArguments_t3573450773::get_offset_of__arg_0(),
	FunctionArguments_t3573450773::get_offset_of__tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (ExprFunctionCall_t607199437), -1, sizeof(ExprFunctionCall_t607199437_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2140[4] = 
{
	ExprFunctionCall_t607199437::get_offset_of__name_0(),
	ExprFunctionCall_t607199437::get_offset_of_resolvedName_1(),
	ExprFunctionCall_t607199437::get_offset_of__args_2(),
	ExprFunctionCall_t607199437_StaticFields::get_offset_of_U3CU3Ef__switchU24map41_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (BaseIterator_t4168896842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2142[2] = 
{
	BaseIterator_t4168896842::get_offset_of__nsm_1(),
	BaseIterator_t4168896842::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (WrapperIterator_t1258076988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2143[1] = 
{
	WrapperIterator_t1258076988::get_offset_of_iter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (SimpleIterator_t809567201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2144[3] = 
{
	SimpleIterator_t809567201::get_offset_of__nav_3(),
	SimpleIterator_t809567201::get_offset_of__current_4(),
	SimpleIterator_t809567201::get_offset_of_skipfirst_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (SelfIterator_t907214), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (NullIterator_t2630925529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (ParensIterator_t4020310733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2147[1] = 
{
	ParensIterator_t4020310733::get_offset_of__iter_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (ParentIterator_t3536730964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[1] = 
{
	ParentIterator_t3536730964::get_offset_of_canMove_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (ChildIterator_t3598849435), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2149[1] = 
{
	ChildIterator_t3598849435::get_offset_of__nav_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (FollowingSiblingIterator_t3042855407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (PrecedingSiblingIterator_t3231156185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2151[3] = 
{
	PrecedingSiblingIterator_t3231156185::get_offset_of_finished_6(),
	PrecedingSiblingIterator_t3231156185::get_offset_of_started_7(),
	PrecedingSiblingIterator_t3231156185::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (AncestorIterator_t1850150082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2152[3] = 
{
	AncestorIterator_t1850150082::get_offset_of_currentPosition_6(),
	AncestorIterator_t1850150082::get_offset_of_navigators_7(),
	AncestorIterator_t1850150082::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (AncestorOrSelfIterator_t2300071220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2153[3] = 
{
	AncestorOrSelfIterator_t2300071220::get_offset_of_currentPosition_6(),
	AncestorOrSelfIterator_t2300071220::get_offset_of_navigators_7(),
	AncestorOrSelfIterator_t2300071220::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (DescendantIterator_t2685366878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2154[2] = 
{
	DescendantIterator_t2685366878::get_offset_of__depth_6(),
	DescendantIterator_t2685366878::get_offset_of__finished_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (DescendantOrSelfIterator_t4256219478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2155[2] = 
{
	DescendantOrSelfIterator_t4256219478::get_offset_of__depth_6(),
	DescendantOrSelfIterator_t4256219478::get_offset_of__finished_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (FollowingIterator_t3658643279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2156[1] = 
{
	FollowingIterator_t3658643279::get_offset_of__finished_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (PrecedingIterator_t2452812266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2157[3] = 
{
	PrecedingIterator_t2452812266::get_offset_of_finished_6(),
	PrecedingIterator_t2452812266::get_offset_of_started_7(),
	PrecedingIterator_t2452812266::get_offset_of_startPosition_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (NamespaceIterator_t3101604877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (AttributeIterator_t3778175417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (AxisIterator_t3073253660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2160[2] = 
{
	AxisIterator_t3073253660::get_offset_of__iter_3(),
	AxisIterator_t3073253660::get_offset_of__test_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (SimpleSlashIterator_t3611200333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2161[4] = 
{
	SimpleSlashIterator_t3611200333::get_offset_of__expr_3(),
	SimpleSlashIterator_t3611200333::get_offset_of__left_4(),
	SimpleSlashIterator_t3611200333::get_offset_of__right_5(),
	SimpleSlashIterator_t3611200333::get_offset_of__current_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (SortedIterator_t2904376427), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2162[1] = 
{
	SortedIterator_t2904376427::get_offset_of_list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (SlashIterator_t2421034408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2163[6] = 
{
	SlashIterator_t2421034408::get_offset_of__iterLeft_3(),
	SlashIterator_t2421034408::get_offset_of__iterRight_4(),
	SlashIterator_t2421034408::get_offset_of__expr_5(),
	SlashIterator_t2421034408::get_offset_of__iterList_6(),
	SlashIterator_t2421034408::get_offset_of__finished_7(),
	SlashIterator_t2421034408::get_offset_of__nextIterRight_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (PredicateIterator_t4231391432), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2164[4] = 
{
	PredicateIterator_t4231391432::get_offset_of__iter_3(),
	PredicateIterator_t4231391432::get_offset_of__pred_4(),
	PredicateIterator_t4231391432::get_offset_of_resType_5(),
	PredicateIterator_t4231391432::get_offset_of_finished_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (ListIterator_t3066609410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2165[1] = 
{
	ListIterator_t3066609410::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (UnionIterator_t312972106), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2166[5] = 
{
	UnionIterator_t312972106::get_offset_of__left_3(),
	UnionIterator_t312972106::get_offset_of__right_4(),
	UnionIterator_t312972106::get_offset_of_keepLeft_5(),
	UnionIterator_t312972106::get_offset_of_keepRight_6(),
	UnionIterator_t312972106::get_offset_of__current_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (Tokenizer_t1517940593), -1, sizeof(Tokenizer_t1517940593_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2167[10] = 
{
	Tokenizer_t1517940593::get_offset_of_m_rgchInput_0(),
	Tokenizer_t1517940593::get_offset_of_m_ich_1(),
	Tokenizer_t1517940593::get_offset_of_m_cch_2(),
	Tokenizer_t1517940593::get_offset_of_m_iToken_3(),
	Tokenizer_t1517940593::get_offset_of_m_iTokenPrev_4(),
	Tokenizer_t1517940593::get_offset_of_m_objToken_5(),
	Tokenizer_t1517940593::get_offset_of_m_fPrevWasOperator_6(),
	Tokenizer_t1517940593::get_offset_of_m_fThisIsOperator_7(),
	Tokenizer_t1517940593_StaticFields::get_offset_of_s_mapTokens_8(),
	Tokenizer_t1517940593_StaticFields::get_offset_of_s_rgTokenMap_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (XPathIteratorComparer_t1799213572), -1, sizeof(XPathIteratorComparer_t1799213572_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2168[1] = 
{
	XPathIteratorComparer_t1799213572_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (XPathNavigatorComparer_t2421573191), -1, sizeof(XPathNavigatorComparer_t2421573191_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2169[1] = 
{
	XPathNavigatorComparer_t2421573191_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (XPathException_t2107611652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (XPathExpression_t1723793351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (XPathItem_t4250588140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (XPathNamespaceScope_t4128811329)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2173[4] = 
{
	XPathNamespaceScope_t4128811329::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (XPathNavigator_t787956054), -1, sizeof(XPathNavigator_t787956054_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2174[2] = 
{
	XPathNavigator_t787956054_StaticFields::get_offset_of_escape_text_chars_0(),
	XPathNavigator_t787956054_StaticFields::get_offset_of_escape_attr_chars_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (EnumerableIterator_t1590428576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2175[3] = 
{
	EnumerableIterator_t1590428576::get_offset_of_source_1(),
	EnumerableIterator_t1590428576::get_offset_of_e_2(),
	EnumerableIterator_t1590428576::get_offset_of_pos_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (U3CEnumerateChildrenU3Ec__Iterator0_t404642154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2176[8] = 
{
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_n_0(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U3CnavU3E__0_1(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U3Cnav2U3E__1_2(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_type_3(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U24PC_4(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U24current_5(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U3CU24U3En_6(),
	U3CEnumerateChildrenU3Ec__Iterator0_t404642154::get_offset_of_U3CU24U3Etype_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (XPathNodeIterator_t3667290188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2177[1] = 
{
	XPathNodeIterator_t3667290188::get_offset_of__count_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (U3CGetEnumeratorU3Ec__Iterator2_t90454087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2178[3] = 
{
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U24PC_0(),
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U24current_1(),
	U3CGetEnumeratorU3Ec__Iterator2_t90454087::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (XPathNodeType_t3031007223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2179[11] = 
{
	XPathNodeType_t3031007223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (XPathResultType_t2828988488)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2180[8] = 
{
	XPathResultType_t2828988488::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (XmlDataType_t3437356259)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2181[3] = 
{
	XmlDataType_t3437356259::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (XsltContext_t2039362735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (ConformanceLevel_t3899847875)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2186[4] = 
{
	ConformanceLevel_t3899847875::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (DTDAutomataFactory_t2958275022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2187[3] = 
{
	DTDAutomataFactory_t2958275022::get_offset_of_root_0(),
	DTDAutomataFactory_t2958275022::get_offset_of_choiceTable_1(),
	DTDAutomataFactory_t2958275022::get_offset_of_sequenceTable_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (DTDObjectModel_t1729680289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2188[19] = 
{
	DTDObjectModel_t1729680289::get_offset_of_factory_0(),
	DTDObjectModel_t1729680289::get_offset_of_elementDecls_1(),
	DTDObjectModel_t1729680289::get_offset_of_attListDecls_2(),
	DTDObjectModel_t1729680289::get_offset_of_peDecls_3(),
	DTDObjectModel_t1729680289::get_offset_of_entityDecls_4(),
	DTDObjectModel_t1729680289::get_offset_of_notationDecls_5(),
	DTDObjectModel_t1729680289::get_offset_of_validationErrors_6(),
	DTDObjectModel_t1729680289::get_offset_of_resolver_7(),
	DTDObjectModel_t1729680289::get_offset_of_nameTable_8(),
	DTDObjectModel_t1729680289::get_offset_of_externalResources_9(),
	DTDObjectModel_t1729680289::get_offset_of_baseURI_10(),
	DTDObjectModel_t1729680289::get_offset_of_name_11(),
	DTDObjectModel_t1729680289::get_offset_of_publicId_12(),
	DTDObjectModel_t1729680289::get_offset_of_systemId_13(),
	DTDObjectModel_t1729680289::get_offset_of_intSubset_14(),
	DTDObjectModel_t1729680289::get_offset_of_intSubsetHasPERef_15(),
	DTDObjectModel_t1729680289::get_offset_of_isStandalone_16(),
	DTDObjectModel_t1729680289::get_offset_of_lineNumber_17(),
	DTDObjectModel_t1729680289::get_offset_of_linePosition_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (DictionaryBase_t52754249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (U3CU3Ec__Iterator3_t2072931442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2190[5] = 
{
	U3CU3Ec__Iterator3_t2072931442::get_offset_of_U3CU24s_431U3E__0_0(),
	U3CU3Ec__Iterator3_t2072931442::get_offset_of_U3CpU3E__1_1(),
	U3CU3Ec__Iterator3_t2072931442::get_offset_of_U24PC_2(),
	U3CU3Ec__Iterator3_t2072931442::get_offset_of_U24current_3(),
	U3CU3Ec__Iterator3_t2072931442::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (DTDCollectionBase_t3926218464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2191[1] = 
{
	DTDCollectionBase_t3926218464::get_offset_of_root_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (DTDElementDeclarationCollection_t222313714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (DTDAttListDeclarationCollection_t2220366188), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (DTDEntityDeclarationCollection_t2250844513), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (DTDNotationDeclarationCollection_t959292105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (DTDContentModel_t3264596611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2196[6] = 
{
	DTDContentModel_t3264596611::get_offset_of_root_5(),
	DTDContentModel_t3264596611::get_offset_of_ownerElementName_6(),
	DTDContentModel_t3264596611::get_offset_of_elementName_7(),
	DTDContentModel_t3264596611::get_offset_of_orderType_8(),
	DTDContentModel_t3264596611::get_offset_of_childModels_9(),
	DTDContentModel_t3264596611::get_offset_of_occurence_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (DTDContentModelCollection_t2798820000), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2197[1] = 
{
	DTDContentModelCollection_t2798820000::get_offset_of_contentModel_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (DTDNode_t858560093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2198[5] = 
{
	DTDNode_t858560093::get_offset_of_root_0(),
	DTDNode_t858560093::get_offset_of_isInternalSubset_1(),
	DTDNode_t858560093::get_offset_of_baseURI_2(),
	DTDNode_t858560093::get_offset_of_lineNumber_3(),
	DTDNode_t858560093::get_offset_of_linePosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (DTDElementDeclaration_t1830540991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2199[6] = 
{
	DTDElementDeclaration_t1830540991::get_offset_of_root_5(),
	DTDElementDeclaration_t1830540991::get_offset_of_contentModel_6(),
	DTDElementDeclaration_t1830540991::get_offset_of_name_7(),
	DTDElementDeclaration_t1830540991::get_offset_of_isEmpty_8(),
	DTDElementDeclaration_t1830540991::get_offset_of_isAny_9(),
	DTDElementDeclaration_t1830540991::get_offset_of_isMixedContent_10(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
