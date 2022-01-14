#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Vuforia.VuGenericList`1/CreateListDelegate<System.Int32Enum>
struct CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA;
// Vuforia.VuGenericList`1/CreateListDelegate<System.IntPtr>
struct CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2;
// Vuforia.VuGenericList`1/CreateListDelegate<System.Object>
struct CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF;
// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuCameraField>
struct CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF;
// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuCameraVideoMode>
struct CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C;
// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C;
// Vuforia.VuGenericList`1/DeleteListDelegate<System.Int32Enum>
struct DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509;
// Vuforia.VuGenericList`1/DeleteListDelegate<System.IntPtr>
struct DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0;
// Vuforia.VuGenericList`1/DeleteListDelegate<System.Object>
struct DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraField>
struct DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraVideoMode>
struct DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF;
// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B;
// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2;
// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536;
// System.Func`2<System.Collections.DictionaryEntry,System.Object>
struct Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C;
// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<UnityEngine.RaycastHit,System.Boolean>
struct Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B;
// Vuforia.VuGenericList`1/GetListElementDelegate<System.Int32Enum>
struct GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644;
// Vuforia.VuGenericList`1/GetListElementDelegate<System.IntPtr>
struct GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55;
// Vuforia.VuGenericList`1/GetListElementDelegate<System.Object>
struct GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraField>
struct GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraVideoMode>
struct GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408;
// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A;
// Vuforia.VuGenericList`1/GetListSizeDelegate<System.Int32Enum>
struct GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389;
// Vuforia.VuGenericList`1/GetListSizeDelegate<System.IntPtr>
struct GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD;
// Vuforia.VuGenericList`1/GetListSizeDelegate<System.Object>
struct GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraField>
struct GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraVideoMode>
struct GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126;
// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerable_1_tE851DE10F1A195A085E2FA2A8599CC87263FB2C5;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>
struct IEnumerable_1_tC141A8335526641BEA65081566FA3A11E667F83A;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t28FB40D8E33C5846AB04F37C78130A4948569C7C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>
struct IEnumerable_1_t93BCFA946EE57F981CF5F7458F49B297A9ADE427;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t6EC8CF9BF72E41A4BABAAB654C64DA9075E36D07;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_tF437149CAED78D4A68294D431DE692A78F7D67B3;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0;
// System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>
struct IEnumerator_1_tB7D12F25E433EAD4509A49D8C2F8435C9D9BC04E;
// System.Collections.Generic.IEnumerator`1<System.Int32Enum>
struct IEnumerator_1_tD8D5B0A7736D9FAFB606AC36B0CAD1353B84C3BD;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>
struct IEnumerator_1_tD9C2F3EB6F76CC1B4C9CC6C824A8972A6A3F32AD;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0;
// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366;
// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933;
// System.Linq.Enumerable/Iterator`1<System.Int32Enum>
struct Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Linq.Enumerable/Iterator`1<UnityEngine.RaycastHit>
struct Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.DictionaryEntry>
struct List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D;
// Vuforia.VuGenericList`1<System.Int32Enum>
struct VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E;
// Vuforia.VuGenericList`1<System.IntPtr>
struct VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC;
// Vuforia.VuGenericList`1<System.Object>
struct VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C;
// Vuforia.VuGenericList`1<Vuforia.VuCameraField>
struct VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C;
// Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>
struct VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3;
// Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF;
// Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>
struct VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A;
// Vuforia.VuGenericTypedList`2<System.Object,System.Object>
struct VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F;
// Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>
struct WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>
struct WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47;
// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3;
// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>
struct WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>
struct WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>
struct WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C;
IL2CPP_EXTERN_C String_t* _stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_m074A56599F3EE61F864DBEF2999710CF19E5ED6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_m0A4BC01D3EBC7C1CB0D6DCCF8051EDE854297352_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_m2D2964A8AB3CA7FB9AC2886FBBD31108CBFB85E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_m63D79CF54CC83F084EF84CBB15702ED49F1BC1A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_m71E50DE0D3FFFB61769F6AB43C395EE2F049A06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1__ctor_mA6043673222662E2DB31687793D8D3E9B1991144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_m0FBD338E9C0A2B34D5070F893173E045CC0A2815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_m2B3CEB66600AF3F1A97B190FA2D715439AF3C055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_m6E8642B76C0623D6CF595BF0A50E746964A507F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_m7EA04D3556D5DC2425AF43E2FD83175C77892340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_mE02E90CA56F52A9CB65D01FDE2B26539E698B78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Item_mF29EFB922C2C22EDB8180CF7A01314FEA12BFA9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_m0E0D89EC223E3ED53F8F7E2B094672EEDC301311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_m7067D1CACEAF1FFAEFD1BEC14535A66DE49E17A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_m887EFBB3F0171EBA4056A53DCC6D56C098D9E238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_m9F5B611F33FF47A04B69B76071AF0BB9C5490F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_mBB001A759A25779DFF7490181546DCAE5113B233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VuGenericList_1_get_Size_mE762202AC53BC12204493B4BB9C166565E781D86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
struct KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	bool ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___current_2)); }
	inline bool get_current_2() const { return ___current_2; }
	inline bool* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(bool value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.DictionaryEntry>
struct List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599, ____items_1)); }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* get__items_1() const { return ____items_1; }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599_StaticFields, ____emptyArray_5)); }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D, ____items_1)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get__items_1() const { return ____items_1; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D_StaticFields, ____emptyArray_5)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::entries
	EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* ___entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::numEntries
	int32_t ___numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::extractKey
	ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey_3;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___entries_1)); }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_numEntries_2() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___numEntries_2)); }
	inline int32_t get_numEntries_2() const { return ___numEntries_2; }
	inline int32_t* get_address_of_numEntries_2() { return &___numEntries_2; }
	inline void set_numEntries_2(int32_t value)
	{
		___numEntries_2 = value;
	}

	inline static int32_t get_offset_of_extractKey_3() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___extractKey_3)); }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * get_extractKey_3() const { return ___extractKey_3; }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 ** get_address_of_extractKey_3() { return &___extractKey_3; }
	inline void set_extractKey_3(ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * value)
	{
		___extractKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extractKey_3), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37, ___state_0)); }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * get_state_0() const { return ___state_0; }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
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


// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____parent_0)); }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDescriptor_1), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 
{
public:
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject * ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Next_2)); }
	inline int32_t get_Next_2() const { return ___Next_2; }
	inline int32_t* get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(int32_t value)
	{
		___Next_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8, ___selector_5)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7, ___selector_5)); }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9, ___selector_5)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA, ___source_3)); }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* get_source_3() const { return ___source_3; }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA, ___selector_5)); }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>
struct WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85, ___selector_5)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9, ___selector_5)); }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0, ___selector_5)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504, ___selector_5)); }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>
struct WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB  : public TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Vuforia.VuVector2I
struct VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4 
{
public:
	// System.Int32 Vuforia.VuVector2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuVector2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B, ___list_0)); }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * get_list_0() const { return ___list_0; }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B, ___current_3)); }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___list_0)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_list_0() const { return ___list_0; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>
struct Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97, ___list_0)); }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * get_list_0() const { return ___list_0; }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97, ___current_3)); }
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  get_current_3() const { return ___current_3; }
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->____value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0, ___current_2)); }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366, ___current_2)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_2() const { return ___current_2; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___value_1), (void*)NULL);
		#endif
	}
};


// Vuforia.VuGenericList`1<System.Int32Enum>
struct VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E, ___mGetSize_1)); }
	inline GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E, ___mGetElement_2)); }
	inline GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E, ___mDeleteList_3)); }
	inline DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<System.IntPtr>
struct VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mGetSize_1)); }
	inline GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mGetElement_2)); }
	inline GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC, ___mDeleteList_3)); }
	inline DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<System.Object>
struct VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C, ___mGetSize_1)); }
	inline GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C, ___mGetElement_2)); }
	inline GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C, ___mDeleteList_3)); }
	inline DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuCameraField>
struct VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mGetSize_1)); }
	inline GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mGetElement_2)); }
	inline GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C, ___mDeleteList_3)); }
	inline DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>
struct VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mGetSize_1)); }
	inline GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mGetElement_2)); }
	inline GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3, ___mDeleteList_3)); }
	inline DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.VuGenericList`1::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// Vuforia.VuGenericList`1/GetListSizeDelegate<TElement> Vuforia.VuGenericList`1::mGetSize
	GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___mGetSize_1;
	// Vuforia.VuGenericList`1/GetListElementDelegate<TElement> Vuforia.VuGenericList`1::mGetElement
	GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___mGetElement_2;
	// Vuforia.VuGenericList`1/DeleteListDelegate<TElement> Vuforia.VuGenericList`1::mDeleteList
	DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * ___mDeleteList_3;

public:
	inline static int32_t get_offset_of_mNativeHandle_0() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mNativeHandle_0)); }
	inline intptr_t get_mNativeHandle_0() const { return ___mNativeHandle_0; }
	inline intptr_t* get_address_of_mNativeHandle_0() { return &___mNativeHandle_0; }
	inline void set_mNativeHandle_0(intptr_t value)
	{
		___mNativeHandle_0 = value;
	}

	inline static int32_t get_offset_of_mGetSize_1() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mGetSize_1)); }
	inline GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * get_mGetSize_1() const { return ___mGetSize_1; }
	inline GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 ** get_address_of_mGetSize_1() { return &___mGetSize_1; }
	inline void set_mGetSize_1(GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * value)
	{
		___mGetSize_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetSize_1), (void*)value);
	}

	inline static int32_t get_offset_of_mGetElement_2() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mGetElement_2)); }
	inline GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * get_mGetElement_2() const { return ___mGetElement_2; }
	inline GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A ** get_address_of_mGetElement_2() { return &___mGetElement_2; }
	inline void set_mGetElement_2(GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * value)
	{
		___mGetElement_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mGetElement_2), (void*)value);
	}

	inline static int32_t get_offset_of_mDeleteList_3() { return static_cast<int32_t>(offsetof(VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF, ___mDeleteList_3)); }
	inline DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * get_mDeleteList_3() const { return ___mDeleteList_3; }
	inline DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB ** get_address_of_mDeleteList_3() { return &___mDeleteList_3; }
	inline void set_mDeleteList_3(DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * value)
	{
		___mDeleteList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeleteList_3), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Vuforia.VuCameraFieldDataType
struct VuCameraFieldDataType_t6C8D23E305743B8AF6BF3782254B53D5385C4F3B 
{
public:
	// System.Int32 Vuforia.VuCameraFieldDataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuCameraFieldDataType_t6C8D23E305743B8AF6BF3782254B53D5385C4F3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuCameraVideoModePreset
struct VuCameraVideoModePreset_t1F94C5D07FF1C923832AA4764FCAA3CD1B3C488D 
{
public:
	// System.Int32 Vuforia.VuCameraVideoModePreset::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuCameraVideoModePreset_t1F94C5D07FF1C923832AA4764FCAA3CD1B3C488D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuImagePixelFormat
struct VuImagePixelFormat_tA5DDBBDA1A2F84D6EB3ECDDCB2E72125B9FCBCBA 
{
public:
	// System.Int32 Vuforia.VuImagePixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuImagePixelFormat_tA5DDBBDA1A2F84D6EB3ECDDCB2E72125B9FCBCBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuObserverType
struct VuObserverType_tE0DE3CD4BF61C1C2EF1F39FB3695F9DB8A69D65F 
{
public:
	// System.Int32 Vuforia.VuObserverType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuObserverType_tE0DE3CD4BF61C1C2EF1F39FB3695F9DB8A69D65F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuResult
struct VuResult_t39E23375BBF2838CFA1BE274E81AF2DAD7FD0F4A 
{
public:
	// System.Int32 Vuforia.VuResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VuResult_t39E23375BBF2838CFA1BE274E81AF2DAD7FD0F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___list_0)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_list_0() const { return ___list_0; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit>
struct Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916, ___list_0)); }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * get_list_0() const { return ___list_0; }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916, ___current_3)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_current_3() const { return ___current_3; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___current_3 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Int32Enum>
struct Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<UnityEngine.RaycastHit>
struct Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335, ___current_2)); }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  get_current_2() const { return ___current_2; }
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		___current_2 = value;
	}
};


// Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>
struct VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A  : public VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<System.Object,System.Object>
struct VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F  : public VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C
{
public:

public:
};


// Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>
struct VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130  : public VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF
{
public:

public:
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744  : public Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744, ___source_3)); }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___source_3)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get_source_3() const { return ___source_3; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3  : public Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47  : public Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47, ___source_3)); }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * get_source_3() const { return ___source_3; }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47, ___enumerator_5)); }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3, ___enumerator_5)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141, ___source_3)); }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* get_source_3() const { return ___source_3; }
	inline DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141, ___selector_5)); }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88, ___selector_5)); }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C, ___source_3)); }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * get_source_3() const { return ___source_3; }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C, ___selector_5)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C, ___enumerator_6)); }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC, ___source_3)); }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * get_source_3() const { return ___source_3; }
	inline List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC, ___predicate_4)); }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC, ___selector_5)); }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC, ___enumerator_6)); }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F, ___selector_5)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___source_3)); }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * get_source_3() const { return ___source_3; }
	inline List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___predicate_4)); }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___selector_5)); }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * get_selector_5() const { return ___selector_5; }
	inline Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529, ___enumerator_6)); }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69  : public Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69, ___source_3)); }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * get_source_3() const { return ___source_3; }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69, ___selector_5)); }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69, ___enumerator_6)); }
	inline Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->____key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->____value_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>
struct WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12, ___source_3)); }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * get_source_3() const { return ___source_3; }
	inline List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12, ___predicate_4)); }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12, ___selector_5)); }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * get_selector_5() const { return ___selector_5; }
	inline Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12, ___enumerator_6)); }
	inline Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->____key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->____value_1), (void*)NULL);
		#endif
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Vuforia.VuCameraField
struct VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB 
{
public:
	// Vuforia.VuCameraFieldDataType Vuforia.VuCameraField::type
	int32_t ___type_0;
	// System.String Vuforia.VuCameraField::key
	String_t* ___key_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB, ___key_1)); }
	inline String_t* get_key_1() const { return ___key_1; }
	inline String_t** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(String_t* value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuCameraField
struct VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___key_1;
};
// Native definition for COM marshalling of Vuforia.VuCameraField
struct VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___key_1;
};

// Vuforia.VuCameraVideoMode
struct VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD 
{
public:
	// Vuforia.VuCameraVideoModePreset Vuforia.VuCameraVideoMode::presetName
	int32_t ___presetName_0;
	// Vuforia.VuVector2I Vuforia.VuCameraVideoMode::resolution
	VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4  ___resolution_1;
	// System.Single Vuforia.VuCameraVideoMode::frameRate
	float ___frameRate_2;
	// Vuforia.VuImagePixelFormat Vuforia.VuCameraVideoMode::format
	int32_t ___format_3;

public:
	inline static int32_t get_offset_of_presetName_0() { return static_cast<int32_t>(offsetof(VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD, ___presetName_0)); }
	inline int32_t get_presetName_0() const { return ___presetName_0; }
	inline int32_t* get_address_of_presetName_0() { return &___presetName_0; }
	inline void set_presetName_0(int32_t value)
	{
		___presetName_0 = value;
	}

	inline static int32_t get_offset_of_resolution_1() { return static_cast<int32_t>(offsetof(VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD, ___resolution_1)); }
	inline VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4  get_resolution_1() const { return ___resolution_1; }
	inline VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4 * get_address_of_resolution_1() { return &___resolution_1; }
	inline void set_resolution_1(VuVector2I_tBCC4A7B8BB0C4EEF6FED1F517EEBADB2CFF60BF4  value)
	{
		___resolution_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_format_3() { return static_cast<int32_t>(offsetof(VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD, ___format_3)); }
	inline int32_t get_format_3() const { return ___format_3; }
	inline int32_t* get_address_of_format_3() { return &___format_3; }
	inline void set_format_3(int32_t value)
	{
		___format_3 = value;
	}
};


// Vuforia.VuDatabaseTargetInfo
struct VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4 
{
public:
	// Vuforia.VuObserverType Vuforia.VuDatabaseTargetInfo::observerType
	int32_t ___observerType_0;
	// System.String Vuforia.VuDatabaseTargetInfo::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_observerType_0() { return static_cast<int32_t>(offsetof(VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4, ___observerType_0)); }
	inline int32_t get_observerType_0() const { return ___observerType_0; }
	inline int32_t* get_address_of_observerType_0() { return &___observerType_0; }
	inline void set_observerType_0(int32_t value)
	{
		___observerType_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Vuforia.VuDatabaseTargetInfo
struct VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4_marshaled_pinvoke
{
	int32_t ___observerType_0;
	char* ___name_1;
};
// Native definition for COM marshalling of Vuforia.VuDatabaseTargetInfo
struct VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4_marshaled_com
{
	int32_t ___observerType_0;
	Il2CppChar* ___name_1;
};

// Vuforia.VuDatabaseTargetInfo/Internal
struct Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 
{
public:
	// Vuforia.VuObserverType Vuforia.VuDatabaseTargetInfo/Internal::observerType
	int32_t ___observerType_0;
	// System.IntPtr Vuforia.VuDatabaseTargetInfo/Internal::name
	intptr_t ___name_1;

public:
	inline static int32_t get_offset_of_observerType_0() { return static_cast<int32_t>(offsetof(Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2, ___observerType_0)); }
	inline int32_t get_observerType_0() const { return ___observerType_0; }
	inline int32_t* get_address_of_observerType_0() { return &___observerType_0; }
	inline void set_observerType_0(int32_t value)
	{
		___observerType_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2, ___name_1)); }
	inline intptr_t get_name_1() const { return ___name_1; }
	inline intptr_t* get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(intptr_t value)
	{
		___name_1 = value;
	}
};


// Vuforia.VuGenericList`1/CreateListDelegate<System.Int32Enum>
struct CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/CreateListDelegate<System.IntPtr>
struct CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/CreateListDelegate<System.Object>
struct CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuCameraField>
struct CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuCameraVideoMode>
struct CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/CreateListDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<System.Int32Enum>
struct DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<System.IntPtr>
struct DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<System.Object>
struct DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraField>
struct DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuCameraVideoMode>
struct DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/DeleteListDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB  : public MulticastDelegate_t
{
public:

public:
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>
struct Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>
struct Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>
struct Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.DictionaryEntry,System.Boolean>
struct Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.DictionaryEntry,System.Object>
struct Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32Enum,System.Boolean>
struct Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<UnityEngine.RaycastHit,System.Boolean>
struct Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<System.Int32Enum>
struct GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<System.IntPtr>
struct GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<System.Object>
struct GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraField>
struct GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuCameraVideoMode>
struct GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListElementDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<System.Int32Enum>
struct GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<System.IntPtr>
struct GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<System.Object>
struct GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraField>
struct GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuCameraVideoMode>
struct GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126  : public MulticastDelegate_t
{
public:

public:
};


// Vuforia.VuGenericList`1/GetListSizeDelegate<Vuforia.VuDatabaseTargetInfo/Internal>
struct GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074  : public MulticastDelegate_t
{
public:

public:
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>
struct WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___source_3)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get_source_3() const { return ___source_3; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>
struct WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0  : public Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0, ___source_3)); }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* get_source_3() const { return ___source_3; }
	inline RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0, ___predicate_4)); }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>
struct WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>
struct WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73  : public Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73, ___predicate_4)); }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>
struct WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B  : public Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___source_3)); }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * get_source_3() const { return ___source_3; }
	inline List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___predicate_4)); }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B, ___enumerator_5)); }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>
struct WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91  : public Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91, ___source_3)); }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * get_source_3() const { return ___source_3; }
	inline List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91, ___predicate_4)); }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91, ___enumerator_5)); }
	inline Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  m_Items[1];

public:
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  m_Items[1];

public:
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.DictionaryEntry[]
struct DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  m_Items[1];

public:
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_1), (void*)NULL);
		#endif
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  m_Items[1];

public:
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};


// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_gshared_inline (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC_gshared (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  Enumerator_get_Current_m371A6C83A50BAD84238C2780909A27E429F1315A_gshared_inline (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B97933BCBB9C1768DB9C52E5D8B5913032E0E48_gshared (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_gshared_inline (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6ED11ABDC21F2C4189666A5BF2C4B95E0C582CAF_gshared (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * __this, const RuntimeMethod* method);

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current()
inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_inline (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  (*) (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *, const RuntimeMethod*))Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *, const RuntimeMethod*))Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67 (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *, const RuntimeMethod*))Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
inline int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
inline bool Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *, const RuntimeMethod*))Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit>::get_Current()
inline RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  Enumerator_get_Current_m371A6C83A50BAD84238C2780909A27E429F1315A_inline (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * __this, const RuntimeMethod* method)
{
	return ((  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  (*) (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *, const RuntimeMethod*))Enumerator_get_Current_m371A6C83A50BAD84238C2780909A27E429F1315A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.RaycastHit>::MoveNext()
inline bool Enumerator_MoveNext_m9B97933BCBB9C1768DB9C52E5D8B5913032E0E48 (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *, const RuntimeMethod*))Enumerator_MoveNext_m9B97933BCBB9C1768DB9C52E5D8B5913032E0E48_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::get_Current()
inline DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_inline (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * __this, const RuntimeMethod* method)
{
	return ((  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  (*) (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *, const RuntimeMethod*))Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.DictionaryEntry>::MoveNext()
inline bool Enumerator_MoveNext_m6ED11ABDC21F2C4189666A5BF2C4B95E0C582CAF (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *, const RuntimeMethod*))Enumerator_MoveNext_m6ED11ABDC21F2C4189666A5BF2C4B95E0C582CAF_gshared)(__this, method);
}
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402 (const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Vuforia.VuGenericList`1<System.Int32Enum>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_m10A32F3C2C619E0C360CD18D3C2F8E5EA8EF67FF_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<System.Int32Enum>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_mBB001A759A25779DFF7490181546DCAE5113B233_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * L_0 = (GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_mBB001A759A25779DFF7490181546DCAE5113B233_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Item_m6E8642B76C0623D6CF595BF0A50E746964A507F5_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * L_0 = (GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 *, intptr_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 *)L_0, (intptr_t)L_1, (int32_t)L_2, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_m6E8642B76C0623D6CF595BF0A50E746964A507F5_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		return (int32_t)L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Int32Enum>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m0A4BC01D3EBC7C1CB0D6DCCF8051EDE854297352_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA * ___createList0, GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * ___getSize1, GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * ___getElement2, DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_tCF5F777EA11BF345218E82E6C6BBFD90FAE732FA *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_m0A4BC01D3EBC7C1CB0D6DCCF8051EDE854297352_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Int32Enum>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m5F3AD802A6150A43D10042E1B245E05696EFA421_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * ___getSize1, GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_t2FCC9925DFF0EED4A86A48E85C324614567D4389 * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_t19396601E1D0AF8C8552E0571C21927E6B510644 * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Int32Enum>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_mE4D0BD46DAD45C9F2993334CAA5A630C8C15DF45_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *)__this);
		((  void (*) (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m9DDFEAE09DCD0FA7BA706E751ABADDDEA637CFE0_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *)__this);
		((  void (*) (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Int32Enum>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_mCDC5163BE501918A4CDAA589BFB5AEBBD52BA3BD_gshared (VuGenericList_1_t04D29675A4D15005208F7D619415BB00BE97E21E * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * L_2 = (DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 * L_3 = (DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_tD8A740DB0B9817AE52B08A85F6B362BAC95CE509 *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// System.IntPtr Vuforia.VuGenericList`1<System.IntPtr>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_m7593BB5243C31F762ACAB3FA6DCB2DED374640DE_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<System.IntPtr>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_m0E0D89EC223E3ED53F8F7E2B094672EEDC301311_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * L_0 = (GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_m0E0D89EC223E3ED53F8F7E2B094672EEDC301311_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<System.IntPtr>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_Item_mF29EFB922C2C22EDB8180CF7A01314FEA12BFA9B_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * L_0 = (GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *, intptr_t, int32_t, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *)L_0, (intptr_t)L_1, (int32_t)L_2, (intptr_t*)(intptr_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_mF29EFB922C2C22EDB8180CF7A01314FEA12BFA9B_RuntimeMethod_var)));
	}

IL_0021:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<System.IntPtr>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m2D2964A8AB3CA7FB9AC2886FBBD31108CBFB85E2_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 * ___createList0, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___getSize1, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___getElement2, DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_m2D2964A8AB3CA7FB9AC2886FBBD31108CBFB85E2_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.IntPtr>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m13077F580C57009A0DA0116245D6CD61C9716423_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___getSize1, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.IntPtr>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_m731D44F73C9A70C586811E367305570CC1D76520_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this);
		((  void (*) (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.IntPtr>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_mF4FA17D3A90A8C1623DBB5F0F4F7647097E14DF1_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this);
		((  void (*) (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.IntPtr>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m2CB5F93F06732BEBF6151A220578BCD5983EB674_gshared (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * L_2 = (DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * L_3 = (DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// System.IntPtr Vuforia.VuGenericList`1<System.Object>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_mA3687E7ED17D467F5ED50DD4F011F722FA25D7F9_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<System.Object>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_m9F5B611F33FF47A04B69B76071AF0BB9C5490F4E_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * L_0 = (GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_m9F5B611F33FF47A04B69B76071AF0BB9C5490F4E_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VuGenericList_1_get_Item_m0FBD338E9C0A2B34D5070F893173E045CC0A2815_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * L_0 = (GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *, intptr_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *)L_0, (intptr_t)L_1, (int32_t)L_2, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_m0FBD338E9C0A2B34D5070F893173E045CC0A2815_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject * L_5 = V_0;
		return (RuntimeObject *)L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Object>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m71E50DE0D3FFFB61769F6AB43C395EE2F049A06E_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF * ___createList0, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * ___getSize1, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * ___getElement2, DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_m71E50DE0D3FFFB61769F6AB43C395EE2F049A06E_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Object>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_mC68E5F800794788FA1FBC0AFFFB640004E391B43_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * ___getSize1, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Object>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_mBFD8A7D19ACB33BA29661801B0B7ED8F4B64C638_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this);
		((  void (*) (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m88DF558CCDA33C592D1F0D140F88E8BB1ACE105B_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this);
		((  void (*) (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<System.Object>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_mAF67E140C54D2EDDFF62D7F6186D218212EB8ADE_gshared (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * L_2 = (DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * L_3 = (DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// System.IntPtr Vuforia.VuGenericList`1<Vuforia.VuCameraField>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_m3B0BD3B10620864D55E336A850FB51F857E249DE_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<Vuforia.VuCameraField>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_m887EFBB3F0171EBA4056A53DCC6D56C098D9E238_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * L_0 = (GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_m887EFBB3F0171EBA4056A53DCC6D56C098D9E238_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<Vuforia.VuCameraField>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB  VuGenericList_1_get_Item_mE02E90CA56F52A9CB65D01FDE2B26539E698B78C_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * L_0 = (GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC *, intptr_t, int32_t, VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC *)L_0, (intptr_t)L_1, (int32_t)L_2, (VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB *)(VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_mE02E90CA56F52A9CB65D01FDE2B26539E698B78C_RuntimeMethod_var)));
	}

IL_0021:
	{
		VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB  L_5 = V_0;
		return (VuCameraField_t14B547493893E99F4F31479BD587AA0CDDF0BDFB )L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraField>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m074A56599F3EE61F864DBEF2999710CF19E5ED6F_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF * ___createList0, GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * ___getSize1, GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * ___getElement2, DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_t32AC60E544B6505340E599D90FFFC5D0B4DB4BFF *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_m074A56599F3EE61F864DBEF2999710CF19E5ED6F_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraField>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_mF5C1C026B8F8881F11B7A9282D762B0F5AFD0D7C_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * ___getSize1, GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_t0C921D967EEF300779F684302CB1770484D2BD5B * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_tC4661BBCA1E8E63DD4DEBE7902E5245C2725C9CC * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraField>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_mF111FDA655A70D595E91FD7042A91027F9DC1DE4_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *)__this);
		((  void (*) (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraField>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_mE84E6B3A553428EAC2F3DCE362251E62CA043826_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *)__this);
		((  void (*) (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraField>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m701118A48130C36752774140671AA016CCDDF93A_gshared (VuGenericList_1_t48DEB5B2182F9513B24DD671F99FF57430897B1C * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * L_2 = (DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 * L_3 = (DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_tE23970BDF4EC6630B2132F8BA470B88BB7985309 *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// System.IntPtr Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_m8F4CC99BD17CE92E7623AE4AA6CE85E6C6C644CA_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_m7067D1CACEAF1FFAEFD1BEC14535A66DE49E17A3_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * L_0 = (GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_m7067D1CACEAF1FFAEFD1BEC14535A66DE49E17A3_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD  VuGenericList_1_get_Item_m2B3CEB66600AF3F1A97B190FA2D715439AF3C055_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * L_0 = (GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 *, intptr_t, int32_t, VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 *)L_0, (intptr_t)L_1, (int32_t)L_2, (VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD *)(VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_m2B3CEB66600AF3F1A97B190FA2D715439AF3C055_RuntimeMethod_var)));
	}

IL_0021:
	{
		VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD  L_5 = V_0;
		return (VuCameraVideoMode_tE9FE66579E4B2730066585F7980E7750994B09DD )L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_mA6043673222662E2DB31687793D8D3E9B1991144_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C * ___createList0, GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * ___getSize1, GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * ___getElement2, DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_t72FBD564E9D31BFED8214AF8C4EFF4EF4EF0618C *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_mA6043673222662E2DB31687793D8D3E9B1991144_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_mCF12A449A32C7C261BC63C1D4CF861649590905A_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * ___getSize1, GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_t4A8591A7FCE951B7FDC391478364C4A5D8FBA126 * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_t52BAB1DDB09D5DCBFD65CBDFEDFC01DB74897408 * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_m2C6C412DE09762ED63B7F485904A14DAF9F8D6FB_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *)__this);
		((  void (*) (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_mA33C19A53359AC445043345BDE32D82144D14183_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *)__this);
		((  void (*) (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuCameraVideoMode>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m60B29378D54F8404BB8B6D195D9539894CDEC8E6_gshared (VuGenericList_1_t675891D01863771B54A15426224BC3CAD3BF8DF3 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * L_2 = (DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF * L_3 = (DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_tFB39107D0333B8F00D433C87C323707F5C99DFFF *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// System.IntPtr Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::get_NativeHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t VuGenericList_1_get_NativeHandle_mC5F02F383530C19C62A2AEA26EC89AFA2C49946E_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		return (intptr_t)L_0;
	}
}
// System.Int32 Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuGenericList_1_get_Size_mE762202AC53BC12204493B4BB9C166565E781D86_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * L_0 = (GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *)__this->get_mGetSize_1();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *, intptr_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *)L_0, (intptr_t)L_1, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFBA866913A707208B42AFE05C5EB4A636D4516B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Size_mE762202AC53BC12204493B4BB9C166565E781D86_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return (int32_t)L_4;
	}
}
// TElement Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  VuGenericList_1_get_Item_m7EA04D3556D5DC2425AF43E2FD83175C77892340_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * L_0 = (GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *)__this->get_mGetElement_2();
		intptr_t L_1 = (intptr_t)__this->get_mNativeHandle_0();
		int32_t L_2 = ___index0;
		NullCheck((GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *)L_0);
		int32_t L_3;
		L_3 = ((  int32_t (*) (GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *, intptr_t, int32_t, Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *)L_0, (intptr_t)L_1, (int32_t)L_2, (Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 *)(Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral64FE1BCE264D42DE095C451DF5C1D4E04700154E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1_get_Item_m7EA04D3556D5DC2425AF43E2FD83175C77892340_RuntimeMethod_var)));
	}

IL_0021:
	{
		Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  L_5 = V_0;
		return (Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 )L_5;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TElement>,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>,Vuforia.VuGenericList`1/DeleteListDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m63D79CF54CC83F084EF84CBB15702ED49F1BC1A8_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C * ___createList0, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___getSize1, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___getElement2, DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * ___deleteList3, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C * L_0 = ___createList0;
		intptr_t* L_1 = (intptr_t*)__this->get_address_of_mNativeHandle_0();
		NullCheck((CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C *)L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C *, intptr_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C *)L_0, (intptr_t*)(intptr_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral537C81C89C198D2D088AD28DBCE8D6A6AE797D8C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VuGenericList_1__ctor_m63D79CF54CC83F084EF84CBB15702ED49F1BC1A8_RuntimeMethod_var)));
	}

IL_001f:
	{
		GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * L_4 = ___getSize1;
		__this->set_mGetSize_1(L_4);
		GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * L_5 = ___getElement2;
		__this->set_mGetElement_2(L_5);
		DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * L_6 = ___deleteList3;
		__this->set_mDeleteList_3(L_6);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TElement>,Vuforia.VuGenericList`1/GetListElementDelegate<TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1__ctor_m7C6EB6D5C0F0DE8C500CDBF2A3109F0150DB32DF_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___getSize1, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___getElement2, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativeHandle0;
		__this->set_mNativeHandle_0((intptr_t)L_0);
		GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * L_1 = ___getSize1;
		__this->set_mGetSize_1(L_1);
		GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * L_2 = ___getElement2;
		__this->set_mGetElement_2(L_2);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Finalize_mDD4915F53EEEFA4F2B8C4DCFD76279306C239589_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		NullCheck((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this);
		((  void (*) (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		NullCheck((RuntimeObject *)__this);
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A((RuntimeObject *)__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10, IL_0010)
	}

IL_0010:
	{
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m9101897B60D7F6662120346A0376A65A3D582D64_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this);
		((  void (*) (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuGenericList`1<Vuforia.VuDatabaseTargetInfo/Internal>::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericList_1_Dispose_m86668F13CD9503B7841B8D336F8EFDAF3040B3A9_gshared (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)__this->get_mNativeHandle_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * L_2 = (DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *)__this->get_mDeleteList_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * L_3 = (DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *)__this->get_mDeleteList_3();
		intptr_t L_4 = (intptr_t)__this->get_mNativeHandle_0();
		NullCheck((DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *)L_3);
		int32_t L_5;
		L_5 = ((  int32_t (*) (DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *, intptr_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *)L_3, (intptr_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
	}

IL_002d:
	{
		__this->set_mNativeHandle_0((intptr_t)(0));
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
// TElement Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VuGenericTypedList_2_get_Item_m94416C286A275ED3F0138B7ED1012D538F5B774A_gshared (VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		NullCheck((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this);
		intptr_t L_1;
		L_1 = ((  intptr_t (*) (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A *)__this);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, intptr_t >::Invoke(5 /* TElement Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>::GetElement(TNative) */, (VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A *)__this, (intptr_t)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TNative>,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>,Vuforia.VuGenericList`1/DeleteListDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_mCAA436BEDD2F2D4AEEEAA6B10AEA8B7B30EC0287_gshared (VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A * __this, CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 * ___createList0, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___getSize1, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___getElement2, DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * ___deleteList3, const RuntimeMethod* method)
{
	{
		CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 * L_0 = ___createList0;
		GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * L_1 = ___getSize1;
		GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * L_2 = ___getElement2;
		DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 * L_3 = ___deleteList3;
		NullCheck((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this);
		((  void (*) (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *, CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 *, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *, DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this, (CreateListDelegate_tBD97169B42E506FF027392E58B852A9BB8EEFEF2 *)L_0, (GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *)L_1, (GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *)L_2, (DeleteListDelegate_tB87619F241BABF6D0EBF9E05ABAACDC96C40D2E0 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<System.Object,System.IntPtr>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_mB78E30475686A07F5CAD298A0C823D849C7F7837_gshared (VuGenericTypedList_2_tE458824670ED869D7FA3AB4352C12244186F923A * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * ___getSize1, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * ___getElement2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___nativeHandle0;
		GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD * L_1 = ___getSize1;
		GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 * L_2 = ___getElement2;
		NullCheck((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this);
		((  void (*) (VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *, intptr_t, GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *, GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VuGenericList_1_t11BC0C64C899EC57B9917E43F1D34BAA45AA5DFC *)__this, (intptr_t)L_0, (GetListSizeDelegate_tBB96ECC400642B57DCCF59E9F15952EF3C97AECD *)L_1, (GetListElementDelegate_tC0935C2D2F690A67D01858105F25F639A4F36B55 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
// TElement Vuforia.VuGenericTypedList`2<System.Object,System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VuGenericTypedList_2_get_Item_m16B29B5332B58B8A6C2CCEE55E5B78BEC21EB599_gshared (VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		NullCheck((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F *)__this);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(5 /* TElement Vuforia.VuGenericTypedList`2<System.Object,System.Object>::GetElement(TNative) */, (VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F *)__this, (RuntimeObject *)L_1);
		return (RuntimeObject *)L_2;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<System.Object,System.Object>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TNative>,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>,Vuforia.VuGenericList`1/DeleteListDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_m7F84385B3A347719FF2D633DCDAFA0F1A3740CE0_gshared (VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F * __this, CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF * ___createList0, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * ___getSize1, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * ___getElement2, DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * ___deleteList3, const RuntimeMethod* method)
{
	{
		CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF * L_0 = ___createList0;
		GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * L_1 = ___getSize1;
		GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * L_2 = ___getElement2;
		DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 * L_3 = ___deleteList3;
		NullCheck((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this);
		((  void (*) (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *, CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF *, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *, DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this, (CreateListDelegate_tDE4D61E80705145F989015E945802595ECDCEDAF *)L_0, (GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *)L_1, (GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *)L_2, (DeleteListDelegate_t71F48FF7F4AAD2A340097E516A0B4B0469066FB1 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<System.Object,System.Object>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_m415C98FE3C179B7B02EFF32CA139F7E84DA9F394_gshared (VuGenericTypedList_2_t105DBFAA24A73F966B5CA1F7D9A09AEBDCD4598F * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * ___getSize1, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * ___getElement2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___nativeHandle0;
		GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 * L_1 = ___getSize1;
		GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 * L_2 = ___getElement2;
		NullCheck((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this);
		((  void (*) (VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *, intptr_t, GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *, GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VuGenericList_1_t29002897E567BB65A2013DC5E3B2D2976BA9C79C *)__this, (intptr_t)L_0, (GetListSizeDelegate_tB09FEBE93F92BCFDB64D4020E6E64623D610A439 *)L_1, (GetListElementDelegate_tCEC380481B882D34DF9E7E0E3FFEC0E16486CDF0 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
// TElement Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4  VuGenericTypedList_2_get_Item_m408189F34F72F3A286E8C69F9D171FA4CA440198_gshared (VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		NullCheck((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this);
		Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  L_1;
		L_1 = ((  Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  (*) (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130 *)__this);
		VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4  L_2;
		L_2 = VirtFuncInvoker1< VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4 , Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2  >::Invoke(5 /* TElement Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>::GetElement(TNative) */, (VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130 *)__this, (Internal_t06E94F75239EC4B65F22BD06A767B997219B4AD2 )L_1);
		return (VuDatabaseTargetInfo_t2A730D4A58CBDDCBACB40A3B42D7125EB67AB2C4 )L_2;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>::.ctor(Vuforia.VuGenericList`1/CreateListDelegate<TNative>,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>,Vuforia.VuGenericList`1/DeleteListDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_m17DDF6B77CA7C0DFDE9734D02D05762E71CFE076_gshared (VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130 * __this, CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C * ___createList0, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___getSize1, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___getElement2, DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * ___deleteList3, const RuntimeMethod* method)
{
	{
		CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C * L_0 = ___createList0;
		GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * L_1 = ___getSize1;
		GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * L_2 = ___getElement2;
		DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB * L_3 = ___deleteList3;
		NullCheck((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this);
		((  void (*) (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *, CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C *, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *, DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this, (CreateListDelegate_t941B81D15D88A0C4E668B17107995A2DE9CC9C7C *)L_0, (GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *)L_1, (GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *)L_2, (DeleteListDelegate_t7152D4397C0A7F1A3B92BD14F5443CD113FDCDAB *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void Vuforia.VuGenericTypedList`2<Vuforia.VuDatabaseTargetInfo,Vuforia.VuDatabaseTargetInfo/Internal>::.ctor(System.IntPtr,Vuforia.VuGenericList`1/GetListSizeDelegate<TNative>,Vuforia.VuGenericList`1/GetListElementDelegate<TNative>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuGenericTypedList_2__ctor_m08376C0CF5898D7A023C8E57F725CA9283DB7189_gshared (VuGenericTypedList_2_t3994AA4D6E1E89F37F411A7896A1F76D2D82A130 * __this, intptr_t ___nativeHandle0, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * ___getSize1, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * ___getElement2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___nativeHandle0;
		GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 * L_1 = ___getSize1;
		GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A * L_2 = ___getElement2;
		NullCheck((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this);
		((  void (*) (VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *, intptr_t, GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *, GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((VuGenericList_1_tB56F8CC69C91DA1DE78C5794361F4CE16CF11FAF *)__this, (intptr_t)L_0, (GetListSizeDelegate_tC5F7B9BB9BD3E0E82DBBBC917A5036D176076074 *)L_1, (GetListElementDelegate_t3D9EBDE042F1B0216DC49BE168E0FDEC8A0F8C9A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFC547EF1CB17D16D18421EDDB0140E88D8E9418A_gshared (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * __this, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		((  void (*) (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 * WhereArrayIterator_1_Clone_mED4D3CE74D9805A2ED8D69E0C807EB55166A1FCF_gshared (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * L_2 = (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 *, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m97D0186E070FA5723E325DA1676476931E284A8E_gshared (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_1 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_4 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_6 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_7 = V_0;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_6, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_9 = V_0;
		((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_11 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose() */, (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m2EF10391DDE878F8F9479431558E2722E027260A_gshared (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * __this, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___predicate0;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_3;
		L_3 = ((  Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 * L_4 = (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t6C0F84C5FB76044CBE6A8BAF8F76158D41B78744 *, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mFA68796C995A71918347DA98D160E26649D6A1FC_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereArrayIterator_1_Clone_mD021B473127C1F6F14F3A65B5532C1680C976944_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_2 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m863DA6E4F0A213B340E29BED24B21CCF8CF3A8CA_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_7 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_6, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_0;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_11 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mBDA5AE3243C59C98DC1F78407A7C6B939F0ED8E7_gshared (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A * L_4 = (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_tA75DA39521F05F3883C639BA3B7651F5FCD1B25A *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD47D32B74C1FED5ECFD8A7116EC7D1DD17C53320_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereArrayIterator_1_Clone_m1A571B38A3C6E3C6625815C7DBD035D55B244042_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * L_2 = (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m06402EF685B4F98A08BEBB4D1EBDF9041F451E43_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_1 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_6 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_7 = V_0;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_6, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_0;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_11 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mD9D39354B17B0F8127E14AC88C55D87DB5836C44_gshared (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_0 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 * L_4 = (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t74A36935871DE376294363B2D07F7F92F64A52A7 *, Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m02E81B91BD0B32637F75FC44256D5603955B6D0E_gshared (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * __this, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* ___source0, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		((  void (*) (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 * WhereArrayIterator_1_Clone_m63C3CEB90147FF05DB8FE68715E8B25EED9326EB_gshared (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * __this, const RuntimeMethod* method)
{
	{
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_0 = (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * L_2 = (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 *, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m693D67B5AF105AB38653134E20A1261C2A6387E9_gshared (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * __this, const RuntimeMethod* method)
{
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_1 = (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_6 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_7 = V_0;
		NullCheck((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_6, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_9 = V_0;
		((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_11 = (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.RaycastHit>::Dispose() */, (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<UnityEngine.RaycastHit>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mAD80E5B131344C9DEBD30C696CA528D5B4C92502_gshared (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * __this, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate0, const RuntimeMethod* method)
{
	{
		RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09* L_0 = (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_2 = ___predicate0;
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_3;
		L_3 = ((  Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 * L_4 = (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t8D70035DA3FE5567CACDED82C5B8EA251BF713C0 *, RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RaycastHitU5BU5D_t6778DB95346906446AAD3A1A36904F1846435A09*)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mC91E34E6237E435A93B3BD18918D610BD27D157D_gshared (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * __this, RuntimeObject* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		((  void (*) (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 * WhereEnumerableIterator_1_Clone_m749A74AD8053F90012F1599BFA310C1C2C58F5E7_gshared (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * L_2 = (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 *, RuntimeObject*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m038F4072B7385BA03815A28A55FA52AB5EB02361_gshared (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		((  void (*) (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mD07A11CE4AF32300C26DBFC6F2AFCF59E2811C59_gshared (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_8 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_10 = V_1;
		((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose() */, (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m70695789446E899FD8E37C5CC4D5A1BAE8B9C801_gshared (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * __this, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___predicate0;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_3;
		L_3 = ((  Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 * L_4 = (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t0CC5C57499A19D4F72079B232AC23CAD1D66E5D3 *, RuntimeObject*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m707C14212113530906675226212BFB17FB9FFDAD_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereEnumerableIterator_1_Clone_m784C946DD2F2922C39D9D7F0FE127F9B3F6459B3_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_2 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mE16D9D538B2554CA7720C9950DED49B47FDCD080_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m63AA91504371EFC63212838247EC0751DEB04725_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mBC8A7812EA44E454BCB18F3920133BFD5EF67FA6_gshared (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_4 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8AACA3D54F20B23CE1E15ED88E4E38A83230ADE7_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, RuntimeObject* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereEnumerableIterator_1_Clone_mDC57C7C854B65372B94924A1F569CF321545A740_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_2 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m9EA4000F13AA700636F89318C7062F6BA9D64C23_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mAE7D23BACC30F9F4C86F538A14870150465D489D_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_8 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7, (bool)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		bool L_10 = V_1;
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mA71EF4FCBD540DF71EB95B1C8A44A61EA6433A90_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = ___predicate0;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_3;
		L_3 = ((  Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_4 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mF3AA7FD3FA45215607A09959D37CC5AB5728F760_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, RuntimeObject* ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereEnumerableIterator_1_Clone_m0DF43DC2700069CDFB390CCEB685177F2E8FE672_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * L_2 = (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_mA4E7B79F54F2559E853A1EA177457DB86FAA4DA3_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mEAB1E1CE1598E67F3DBC61C7DB67FCABAFE1E83F_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32Enum>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32Enum>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m17BA130B5008307E51C264ADC8D0EA5FBF8B2F57_gshared (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 * L_4 = (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_tA54773292BEDD3B57CBFF8C960E2DCE20B9CFF23 *, RuntimeObject*, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0291D4802A8811697DC0B73FE29ABA0CC2F94427_gshared (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * __this, RuntimeObject* ___source0, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		((  void (*) (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 * WhereEnumerableIterator_1_Clone_mC128A8A3F0D6CB7852FF68DE6A27BC462224D8F3_gshared (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * L_2 = (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 *, RuntimeObject*, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m15BA0DCF6197CD9D8AA4634F8790E1E56CF56928_gshared (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		((  void (*) (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mC5197749741504557E8306604925A8A665B332C5_gshared (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.RaycastHit>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_6;
		L_6 = InterfaceFuncInvoker0< RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.RaycastHit>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_6;
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_7 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_8 = V_1;
		NullCheck((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_7, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_10 = V_1;
		((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.RaycastHit>::Dispose() */, (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.RaycastHit>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mB870AE1F34358F326B6553157F35D2BF5B5E8058_gshared (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * __this, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_2 = ___predicate0;
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_3;
		L_3 = ((  Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 * L_4 = (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t33AE609E24F5FD1DEBA4DE60C31D270445187E73 *, RuntimeObject*, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mDA83319F370BA842AFB0F2CA1CB6E5699E561FC1_gshared (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * __this, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		((  void (*) (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 * WhereListIterator_1_Clone_mAA860071960A210429DC884BBE549C73EF59981A_gshared (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * __this, const RuntimeMethod* method)
{
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * L_2 = (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 *, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mC9DAF0910D6BAA53B4F4C1F39478A47CACF6C8FC_gshared (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_3 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		NullCheck((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3);
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  L_4;
		L_4 = ((  Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  (*) (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_5 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_inline((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_8 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_10 = V_1;
		((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_11 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Dispose() */, (Iterator_1_t666459F640C7E61AEB46FC140B2DD4CB108DF1F0 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mCDF70AA068472037144C9C928F4590E60A00FBFD_gshared (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * __this, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___predicate0;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_3;
		L_3 = ((  Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 * L_4 = (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t75892FDD935D3AF84444CFE6896B351501CD4A47 *, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mFF43A0851AF3E2469A68EEE2A2698FD2CAC6E640_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereListIterator_1_Clone_m543689012B48160EAE9BC7EBCCE4BA0C39AFC412_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_2 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mF7804B57A97E06FE44F6B6E5ECB860105B14EC3B_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_10 = V_1;
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_11 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m367822A36B7AB1F301F12B849EFD9C456F898239_gshared (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___predicate0;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_3;
		L_3 = ((  Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 * L_4 = (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t8ED0122CFDC0D98BEACF64F1CF782443FE1312E3 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mD6E131DBAA006D2A189E46FCFDAEB7F9B5204B2D_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * ___source0, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		((  void (*) (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 * WhereListIterator_1_Clone_m81E075FBE9EB586D435E2E651BE0736603DBD700_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * L_2 = (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mD9F77B129FB23944D64FE580D6B6DE4DBBFD9EB8_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_3 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		NullCheck((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3);
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  L_4;
		L_4 = ((  Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984  (*) (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_5 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_5();
		int32_t L_6;
		L_6 = Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_inline((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_7 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		int32_t L_8 = V_1;
		NullCheck((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * L_11 = (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mDECBD2FBFA44578D8E050CECB33BF350152E111A((Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)(Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Int32Enum>::Dispose() */, (Iterator_1_tCA3B946198AD225CFFAF1B17318E030AD83951E9 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Int32Enum>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mCC36327D2F19DDE3826325A64C7637379EF8839D_gshared (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * __this, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * L_0 = (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)__this->get_source_3();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_1 = (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)__this->get_predicate_4();
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_2 = ___predicate0;
		Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * L_3;
		L_3 = ((  Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E * (*) (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_1, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B * L_4 = (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t76D04121505E77E48E9122D0EA479B3E211DE00B *, List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *, Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A *)L_0, (Func_2_t8D00E17E9D1413C71B5B12D3538C754C4F141A2E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mDCAC4BC1687A56ED7CF79268134D522F02DE526E_gshared (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * __this, List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * ___source0, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		((  void (*) (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 * WhereListIterator_1_Clone_mE45FFF493A38C3B1E4AC7A0CB6A0CE471B9B6511_gshared (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * __this, const RuntimeMethod* method)
{
	{
		List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * L_0 = (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * L_2 = (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 *, List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB8DB5F95F6F5705F1010C05B4EED96F7A6E44BFC_gshared (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * L_3 = (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)__this->get_source_3();
		NullCheck((List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)L_3);
		Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916  L_4;
		L_4 = ((  Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916  (*) (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * L_5 = (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)__this->get_address_of_enumerator_5();
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_6;
		L_6 = Enumerator_get_Current_m371A6C83A50BAD84238C2780909A27E429F1315A_inline((Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_6;
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_7 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_8 = V_1;
		NullCheck((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_7, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_10 = V_1;
		((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * L_11 = (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m9B97933BCBB9C1768DB9C52E5D8B5913032E0E48((Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)(Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.RaycastHit>::Dispose() */, (Iterator_1_tA0BAAACFA0D25836015738B4F5B9256C80780335 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<UnityEngine.RaycastHit>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m24ABB8557ECE35C4F1247270420FC11A3124EF86_gshared (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * __this, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D * L_0 = (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)__this->get_source_3();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_1 = (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)__this->get_predicate_4();
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_2 = ___predicate0;
		Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * L_3;
		L_3 = ((  Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B * (*) (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_1, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 * L_4 = (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t9E67F1713ADA4B0290DE875E7E24E38C4E566E91 *, List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *, Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t16A48BE6E71AEE33E12B53A47FDF4F51B5D9AE8D *)L_0, (Func_2_t07D9CF66197E4BFC9F0B4BB5242CF6DFA889373B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m30C922B08D468720227111AD702DD14905919057_gshared (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 * __this, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_mD829E674626835E161D1740F526ADD43B51B883A_gshared (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 * L_3 = (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 *, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA02B983A47A656B291D5F0EBCEF57A2EB8B86202_gshared (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_1 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_4 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_6 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_8 = V_0;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_10 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_11 = V_0;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_10, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_14 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m183B4A8977AC59C3FE2C6FD696E990DFAFF9671A_gshared (WhereSelectArrayIterator_2_t11C0D39B7F417C5AFBDD9F0EB8E96854AA2829A8 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB6F2581268BB6B19B8426265EB84B734E097EA0C_gshared (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 * __this, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m49C3400D83B6D26A606A0137D74FB1630D103948_gshared (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_0 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 * L_3 = (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 *, KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mA862544AF18EA15AD12A86E48CA9877F5F9BBF25_gshared (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_1 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_4 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_6 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_8 = V_0;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_7, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_10 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_11 = V_0;
		NullCheck((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_10, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C* L_14 = (KeyValuePair_2U5BU5D_t605D5D9F1852A63EA196D844EEA62F07F36B081C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m65E556BBF85AA56B818035E4599856AB5FE3D1E9_gshared (WhereSelectArrayIterator_2_tACEA0F4801A883B690D6274B956A803E4109E2F7 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3979EC1D9AD1F4DB5CA78202C46274EBA43B6084_gshared (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_m638AB3C938AEC9783125C7B2454B9F3159B7A10C_gshared (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 * L_3 = (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m51568FB1E640C5101BE9743B812A1A4F38341F39_gshared (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_10 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m7BC0737B82795AD9D50E91AD585B39589C8F2E8A_gshared (WhereSelectArrayIterator_2_t4899A36E8848DFCCE5BBBA9D0B4347A110BDE2B9 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m753B845FC177A4500A5809EA02B94FD14C1017E9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m6D78D257291467E05FDD35D57F87C1B85FC13CF9_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_0 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * L_3 = (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D *, KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC8EA524E00550DADCB86D2D527C1BFDEE335EDF6_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_1 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_6 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_8 = V_0;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_7, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_10 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_11 = V_0;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_10, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_14 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB95AC53D5283844BEFB7F84CFABBED87446942F4_gshared (WhereSelectArrayIterator_2_t533C591223D49F5BCDFF966D68BED9A04ED2269D * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m9483BDCD2813E8D8E0219352DE6501A2B34B7E78_gshared (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 * __this, DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereSelectArrayIterator_2_Clone_mB685FE7EA166EEE01A86AAF76CA6A78008FD390B_gshared (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 * __this, const RuntimeMethod* method)
{
	{
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_0 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 * L_3 = (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 *, DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7CB8CE32B3B5BF0C9079AAB6408BDA3EAD78AE16_gshared (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 * __this, const RuntimeMethod* method)
{
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_1 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_6 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_8 = V_0;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_10 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_11 = V_0;
		NullCheck((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_10);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12;
		L_12 = ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_10, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_14 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m8F3C223CA73C2DBF7F7C8E15AF90236699273A06_gshared (WhereSelectArrayIterator_2_tFC928449C9A55E7C4399B6C59F05DCA7508E7141 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_1 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m1EFBB488160D55843CEFA0F5CFD1B890167DF4A0_gshared (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA * __this, DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA949DD1D16443F8889A366C93F5DBAEB58D186E6_gshared (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA * __this, const RuntimeMethod* method)
{
	{
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_0 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA * L_3 = (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA *, DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m10015092E6EE95D818760B215C5294FE22E5A9CC_gshared (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA * __this, const RuntimeMethod* method)
{
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_1 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_6 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_8 = V_0;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_7, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_10 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_11 = V_0;
		NullCheck((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_10, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1* L_14 = (DictionaryEntryU5BU5D_t33D15CB512B443D0720CE6253811B8F4FA7179B1*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Collections.DictionaryEntry,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mDEAA71459A132F976C7AE19E98D80976B1E6CB91_gshared (WhereSelectArrayIterator_2_tB61C47B9E01F6D191273FE23CCA9A5F3F8F279FA * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m5B74FF73BB7AB44748C665E95266543282E0FB54_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_mA387A7E72897F88A4BD87274A6160DC04C5EB4C0_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * L_3 = (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mFD913354141E3D46C783BFE77227D87F2B26E048_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_10 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m909A3870472EBB596EF3A8ADE18B8EE11CE617BB_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m65D6D8E21A7E8065B2A6F8A9D497EE7CADD14A76_gshared (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * __this, RuntimeObject* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_m2165E4086942F5F33E1AC8B0D676854B2B6670B2_gshared (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * L_3 = (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 *, RuntimeObject*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m3FBD6ACB8C0CCE363641C7E143CEFE40E6F2938D_gshared (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBB35C94224D6BA787EDCA8D2A5E40D2CA868980E_gshared (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_8 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_9 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_11 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_12 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_11, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mC942ED3625D6B72C43B80090DFEA0247AA89F477_gshared (WhereSelectEnumerableIterator_2_t128EC5E1C0CD43352C87D34C71C9B4EDB4BB4A85 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m87C9A64BBB1A988D83163956C689BFA1C7ADC080_gshared (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * __this, RuntimeObject* ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m49F374D7C9CD5581015044C14E709A1065BB7080_gshared (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * L_3 = (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 *, RuntimeObject*, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m748F45F3AC3ED72FCDFFA2C80E836EA6A9948E81_gshared (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mBE0D44F703FE72F55437BD397382B05C63DBA7A2_gshared (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_8 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_9 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_11 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_12 = V_1;
		NullCheck((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_11, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA03E190836CB51B741C6CBCFC33755F4D9B8FDC7_gshared (WhereSelectEnumerableIterator_2_t257BCF27ED3BD02DECDE85B7EF336B9014211AC9 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mBB19A601C4724A9EC448FF729D9E46E1FF0A8135_gshared (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_m9A808B3385BEB2CC8AF105800E866FFD7655CAE9_gshared (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * L_3 = (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB59424F52C221369E210D92B43BD8D7632EA82F1_gshared (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m23DB0C4266577F43A85D03085D0F0C31ED48EED5_gshared (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_11 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m79852D8EC2307F3B99396B04A587941CA8424BCA_gshared (WhereSelectEnumerableIterator_2_tACBBC4889780A4049A50056D735496E5823879B0 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m634CE03BF281A9966A650B2BA6ED44AD72E5879F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, RuntimeObject* ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m82474F2DE866D303C5767C7B58EE3213342A29F0_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * L_3 = (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAB2AD9EAF60076FC567705357B1A87DCC0FDC6F7_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m9AED0076EB03B4E46908FB05BEB74852F542382E_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = InterfaceFuncInvoker0< KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mDF3B69D0756C062EA752AA0B60FA20A65396313F_gshared (WhereSelectEnumerableIterator_2_t1F3033734D19B5ED4B101CB6D02F411359552505 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_mD256E80BC5AEFA8B81516439C150FD7214F96AE9_gshared (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * __this, RuntimeObject* ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereSelectEnumerableIterator_2_Clone_mDC4A5D2EF31C022F009B98F9623660E7C7A07126_gshared (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * L_3 = (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m2E307DBAF665DD40916689FAB10FDAEF6CA5CE2E_gshared (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7650A5A46135DB18C6675C52E9EC5268C5074B1C_gshared (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_6;
		L_6 = InterfaceFuncInvoker0< DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_6;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_8 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_9 = V_1;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_11 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12 = V_1;
		NullCheck((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_11);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_13;
		L_13 = ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_11, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m42E34E3845EB967A8FB29BCF0D944FA690D812EB_gshared (WhereSelectEnumerableIterator_2_tF9AB82F1F3C4DAF85210C29B56B81A8A5B107A88 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_1 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6E31BB7F166E995044539E59103A36A40EAC0BD4_gshared (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * __this, RuntimeObject* ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mE4FFEA0A668B07436331C406CA32589CDEE6EC40_gshared (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * L_3 = (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 *, RuntimeObject*, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m5D195EE6CB745A309C34B33AF8C28AB9D841263A_gshared (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mDEB16C2FF6846BC811BE5A01E52D9C12A9B3486F_gshared (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.DictionaryEntry>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_6;
		L_6 = InterfaceFuncInvoker0< DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.DictionaryEntry>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_6;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_8 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_9 = V_1;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_11 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12 = V_1;
		NullCheck((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_11, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Collections.DictionaryEntry,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m1FCEB4515338ADC40857852460E7FE9FFA0F67F8_gshared (WhereSelectEnumerableIterator_2_t322CCF18D167CB34AEC955760618B696E2708504 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m60436A1F1567E6B31C7346131BB72D6905F87753_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_mD1D2CF66BAF88FD17B02F4E2764E8DD7163E1472_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * L_3 = (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4E63FA730CAFE749E72C0F8AC8C8C72D89361C10_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC8F53292A1CA72558602FE38F064489066460A37_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_11 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m9A90E43844A52F8FE418B2000DDC144F3FABE7A4_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m94D0FDA44F9A1B90DF396ADC79C28B37920FDE68_gshared (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C * __this, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_mDD90C136B3A6D79E191603415F73D24F9ED547B7_gshared (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C * __this, const RuntimeMethod* method)
{
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_2 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C * L_3 = (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C *, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m181A7DD82FE373A5E894321B45D9B57C39839523_gshared (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_3 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		NullCheck((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3);
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  L_4;
		L_4 = ((  Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  (*) (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_5 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_inline((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_8 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_9 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_11 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_12 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_11, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_14 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m0EBC352E5A78DF7EFDD960B620FECD152CD9D823_gshared (WhereSelectListIterator_2_tA429804F38E103BBEC354A3DD8E04D29E9406B4C * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5F596638CAC5C0BB4D60250A5431EC9F225EA385_gshared (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC * __this, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * ___source0, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * ___predicate1, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mEB1A7204E9D57956D91DA96F5AFEE68481C9955F_gshared (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC * __this, const RuntimeMethod* method)
{
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_0 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_1 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_2 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC * L_3 = (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC *, List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_0, (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_1, (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mD3808974E7B1EA273A71964328BC94570136065B_gshared (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 * L_3 = (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)__this->get_source_3();
		NullCheck((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3);
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  L_4;
		L_4 = ((  Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B  (*) (List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t2B91A5BED0FE705EE4485C6CBC602400E5B9E1A5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_5 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_6;
		L_6 = Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_inline((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_6;
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_7 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 * L_8 = (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)__this->get_predicate_4();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_9 = V_1;
		NullCheck((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t79E56797E913CA2D669C05B260F2AE335D02C947 *)L_8, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 * L_11 = (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)__this->get_selector_5();
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_12 = V_1;
		NullCheck((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *, KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t4AEE49476463F1CF2139CBC53197BED56F96BF49 *)L_11, (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * L_14 = (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mF61112438CC4DCE4603C8335882D7B1C212422BC((Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)(Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD44497DEEE98529F48CCEAAB2FC772E5F8ACE72D_gshared (WhereSelectListIterator_2_t490F676689ACC31D8E78D2CD52475F3B258068BC * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEED88856C3F2BF1F4DF772CF4AE0AEFE7F54BFA8_gshared (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_m3EBA7E34D284B68A498C2245EB72A52924173A67_gshared (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_2 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F * L_3 = (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mC34853F52AA8AD415886D5D75BA4A07E30E298FD_gshared (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_11 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m517E36B2546C0B2406CF8A40FEDA191E2F2A640B_gshared (WhereSelectListIterator_2_t3A7FCD42E9A1C9ABAA126996B747E64375501C7F * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m530D4471452DA4089C130C0D9FC5910907BF6007_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * ___source0, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m72EFE228727E1A3BF476F5CF995391D549ED4C1E_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_0 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_1 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_2 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * L_3 = (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 *, List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_0, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_1, (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB979C50B4E1833CA8C6A8394B5503C7FEB4A608A_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * L_3 = (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)__this->get_source_3();
		NullCheck((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3);
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  L_4;
		L_4 = ((  Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04  (*) (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_5 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_6;
		L_6 = Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_inline((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_6;
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_7 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_8 = (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)__this->get_predicate_4();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_9 = V_1;
		NullCheck((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_8, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * L_11 = (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)__this->get_selector_5();
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_12 = V_1;
		NullCheck((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD *)L_11, (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * L_14 = (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC851DE6441AF295DB85CFCE9C6F9242152172F67((Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)(Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mB12D7743450CEE6D221C22755DDB9F022B7E24B1_gshared (WhereSelectListIterator_2_tE552775A10E0B597E67A5A9B0010974038D5D529 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0D5E4E945AF3ED31684B16F1D839AD196EE43269_gshared (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 * __this, List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		((  void (*) (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 * WhereSelectListIterator_2_Clone_m031A9B25EB2F9A74AF53FAECE8D16955446478E2_gshared (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_0 = (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_2 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 * L_3 = (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 *, List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m691B9399322B0746CE479A28D292DC45E12B3258_gshared (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_3 = (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)__this->get_source_3();
		NullCheck((List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_3);
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  L_4;
		L_4 = ((  Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  (*) (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * L_5 = (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)__this->get_address_of_enumerator_6();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_6;
		L_6 = Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_inline((Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_6;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_8 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_9 = V_1;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 * L_11 = (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12 = V_1;
		NullCheck((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_11);
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_13;
		L_13 = ((  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  (*) (Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t1E20DE50533BAE1E98417DE755A255FCF9C471B2 *)L_11, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * L_14 = (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m6ED11ABDC21F2C4189666A5BF2C4B95E0C582CAF((Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t9A3E8D851CE5C3F0E1C5893577C797E17FAA5366 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC90E243BDDFCB04C28AAA0C91A61A10926B2118C_gshared (WhereSelectListIterator_2_t5FD91D7EB04B74E1359F40B4B728987285988F69 * __this, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 * L_1 = (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t280A111308444ADF95E9634B9AE20C1A478740E9 *, RuntimeObject*, Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tD570D29C5027C04365E3BD2965A2B25DE326F8D7 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m87FAD164E5C6A7CCDC5C83AD741D54BCD2E3C1DA_gshared (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 * __this, List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * ___source0, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * ___predicate1, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mCEA0A4E5ADCB1617F9149E82AEB39DCFC5053F15_gshared (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 * __this, const RuntimeMethod* method)
{
	{
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_0 = (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)__this->get_source_3();
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_1 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_2 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 * L_3 = (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 *, List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *, Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_0, (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_1, (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m6C588C64A7A127D6BFB439639C4177074BBED366_gshared (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 * L_3 = (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)__this->get_source_3();
		NullCheck((List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_3);
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  L_4;
		L_4 = ((  Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97  (*) (List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tC20BFA2D5D117CA0E97E0D950CF66025B8E5C599 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * L_5 = (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)__this->get_address_of_enumerator_6();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_6;
		L_6 = Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_inline((Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_6;
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_7 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 * L_8 = (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)__this->get_predicate_4();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_9 = V_1;
		NullCheck((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tFDE366CF3ED667CA489D6D5A017B4D50934D4536 *)L_8, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C * L_11 = (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)__this->get_selector_5();
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_12 = V_1;
		NullCheck((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tF8B63121C75EE96224BEADC4493AE882EF8CEE4C *)L_11, (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * L_14 = (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m6ED11ABDC21F2C4189666A5BF2C4B95E0C582CAF((Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)(Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.DictionaryEntry,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAAFBE8E79029C71A255F0598F926A66C3043B097_gshared (WhereSelectListIterator_2_t5C80BE576F7733CC8B83ABDF42FC8D8F02D5AB12 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAD2213DC47AA95FF2D1A6651C35A6D2DA6468CB1_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_m3D586D710F13095D06B4257C1EB35EAF2D438BFC_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * L_3 = (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB94D16C026FC155B40EC9AA5B22866B02C8CDE89_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_11 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA28A80FD896B11F671BF4EC49E044EC1EF51F050_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mE68E63173C17EF13FA0F533F0AA34F4FA753674F_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buckets_0(L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_3 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->set_entries_1(L_3);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_4 = ___extractKey0;
		__this->set_extractKey_3(L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_numEntries_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this;
	}

IL_0012:
	{
		V_0 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = (int32_t)L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_10 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_11 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject * L_13 = (RuntimeObject *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_16 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_Next_2();
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_address_of_Next_2();
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_21, (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_23 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->get_Next_2();
		V_3 = (int32_t)L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))/(int32_t)2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_32);
		V_0 = (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_33);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_35 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_36 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		int32_t L_37 = V_0;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_38 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_38, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_36, (int32_t)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_1 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_38;
		V_4 = (int32_t)0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = (int32_t)L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_43 = V_1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_44 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject * L_46 = (RuntimeObject *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_Value_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43, (RuntimeObject *)L_46, (RuntimeObject **)(RuntimeObject **)(&V_6), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_48 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_Next_2();
		V_5 = (int32_t)L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_55 = V_1;
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_mA9B06BC8E0F95FB0FC63CC3D765A4F22887EB93A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_4, (String_t*)L_5, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject ** L_9 = ___value3;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_10 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject * L_12 = (RuntimeObject *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_Value_0();
		*(RuntimeObject **)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject ** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject *));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m66B188F6F86501E916DC5D9C3C13AC115C08F977_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, RuntimeObject * ___value0, RuntimeObject ** ___newValue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject ** L_0 = ___newValue1;
		RuntimeObject * L_1 = ___value0;
		*(RuntimeObject **)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)L_1);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_2 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		RuntimeObject * L_3 = ___value0;
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck((String_t*)L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_6, (int32_t)0, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_3 = (int32_t)L_9;
		int32_t* L_10 = (int32_t*)__this->get_address_of_numEntries_2();
		int32_t L_11;
		L_11 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(int32_t*)L_10, /*hidden argument*/NULL);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_15 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_17 = ___value0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_Value_0(L_17);
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_18 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_HashCode_1(L_20);
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		V_1 = (int32_t)0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_23 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1))))))), (int32_t)L_25, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_27 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_address_of_Next_2();
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_29, (int32_t)L_30, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck((String_t*)L_36);
		int32_t L_37;
		L_37 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_36, /*hidden argument*/NULL);
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_34, (String_t*)L_35, (int32_t)0, (int32_t)L_37, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject ** L_39 = ___newValue1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_40 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject * L_42 = (RuntimeObject *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_Value_0();
		*(RuntimeObject **)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE4A022366877BF9D180DEA774989355DA126E01B_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)((int32_t)L_4&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = (int32_t)L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = (int32_t)L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_9 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_HashCode_1();
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_13 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_14 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = (RuntimeObject *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13, (RuntimeObject *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_2();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_22 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject ** L_24 = (RuntimeObject **)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_address_of_Value_0();
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject *));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_25 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_Next_2();
		V_1 = (int32_t)L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_33 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->set_Next_2(L_35);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		NullCheck((String_t*)L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41((String_t*)L_39, (int32_t)L_40, (String_t*)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = (int32_t)L_46;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_47 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->get_Next_2();
		V_1 = (int32_t)L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m7AF1650B3BEC69788C368FAC0BFFAEAFF075E13B_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___index1;
		V_2 = (int32_t)L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck((String_t*)L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70((String_t*)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)((int32_t)L_16>>(int32_t)5))));
		int32_t L_17 = V_0;
		return (int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_2 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_2, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_state_0(L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject ** L_4 = ___value3;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, String_t*, int32_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (String_t*)L_1, (int32_t)L_2, (int32_t)L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}

IL_0012:
	{
		V_1 = (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 *)__this;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_4 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_5 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_6;
		L_6 = ((  XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_3 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_6;
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_7 = V_3;
		__this->set_state_0(L_7);
		IL2CPP_LEAVE(0x0, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_9 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_9, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
	}
	{
		return (RuntimeObject *)NULL;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  Enumerator_get_Current_m4631D89F26B57FEF958EAC71EDB845569E45524E_gshared_inline (Enumerator_t32FE63E72A48879E17B54D079C2A536C6769080B * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_0 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )__this->get_current_3();
		return (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m36A49F353C175C557E3490621F4489D7D95A646B_gshared_inline (Enumerator_tA73714A95511E4A3614246077E7C1FDAD5447D04 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mDD503AFD786235D3B40842B0872AC17DC86EB040_gshared_inline (Enumerator_t3A873D53A96DA0AC1C030CB5A0BF2D0F57FCC984 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  Enumerator_get_Current_m371A6C83A50BAD84238C2780909A27E429F1315A_gshared_inline (Enumerator_tAAC4BE8CFA30041EC0A6CD5D9C52B5DCAD2A9916 * __this, const RuntimeMethod* method)
{
	{
		RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  L_0 = (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )__this->get_current_3();
		return (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  Enumerator_get_Current_mCAE2D17857B9D0BFD2314D1126848C086FDE3D6B_gshared_inline (Enumerator_t7070FF2981BAFF6F339DD156BBB3F78D6448BE97 * __this, const RuntimeMethod* method)
{
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_0 = (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )__this->get_current_3();
		return (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 )L_0;
	}
}
