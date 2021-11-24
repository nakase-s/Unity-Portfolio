﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1;
// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t4BFDAEC6A4D96827E7D4D0B2E85EB1AFA1911939;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2;
// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>
struct IntegratedSubsystemDescriptor_1_t822E08B2CE1EC68FE74F71A682C9ECC6D52A6E89;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t5E067CFFC785D2CA342F4F32B80BDC1D221BAC98;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB501C0AF1B2E1105879F40DF285FD445422C6756;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09;
// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63;
// UnityEngine.XR.XRMeshSubsystemDescriptor
struct XRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hand_tB64007EC8D01384426C93432737BA9C5F636A690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingStateEventType_t301E0DD44D089E06B0BBA994F682CE9F23505BA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03F95F266081C6100AE45DE907603B48AEA88377;
IL2CPP_EXTERN_C String_t* _stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05;
IL2CPP_EXTERN_C String_t* _stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF;
IL2CPP_EXTERN_C String_t* _stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7;
IL2CPP_EXTERN_C String_t* _stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3760CD7BFF60A97B8C875A7D181C4EB264D196FA;
IL2CPP_EXTERN_C String_t* _stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24;
IL2CPP_EXTERN_C String_t* _stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC;
IL2CPP_EXTERN_C String_t* _stringLiteral41124172AA830E83C228E3EE1EDF3CB56A7B34EA;
IL2CPP_EXTERN_C String_t* _stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44;
IL2CPP_EXTERN_C String_t* _stringLiteral4DD1D0A1984B75EEBB5955FAB541B0ED08E7B084;
IL2CPP_EXTERN_C String_t* _stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174;
IL2CPP_EXTERN_C String_t* _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5;
IL2CPP_EXTERN_C String_t* _stringLiteral6459CE8416F57A02AC1631C840005271AED9865A;
IL2CPP_EXTERN_C String_t* _stringLiteral6502625D04056D74ABF5B399CAE63C245B679772;
IL2CPP_EXTERN_C String_t* _stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630;
IL2CPP_EXTERN_C String_t* _stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D;
IL2CPP_EXTERN_C String_t* _stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459;
IL2CPP_EXTERN_C String_t* _stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500;
IL2CPP_EXTERN_C String_t* _stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366;
IL2CPP_EXTERN_C String_t* _stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF;
IL2CPP_EXTERN_C String_t* _stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF;
IL2CPP_EXTERN_C String_t* _stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332;
IL2CPP_EXTERN_C String_t* _stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3;
IL2CPP_EXTERN_C String_t* _stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441;
IL2CPP_EXTERN_C String_t* _stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E;
IL2CPP_EXTERN_C String_t* _stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6;
IL2CPP_EXTERN_C String_t* _stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2;
IL2CPP_EXTERN_C String_t* _stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580;
IL2CPP_EXTERN_C String_t* _stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34;
IL2CPP_EXTERN_C String_t* _stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149;
IL2CPP_EXTERN_C String_t* _stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9;
IL2CPP_EXTERN_C String_t* _stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B;
IL2CPP_EXTERN_C String_t* _stringLiteralBC7F8151EEA0D66BB2B72D6025CBD04BE6673ED7;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE7365360EB45A9634579259D49C165CB873442;
IL2CPP_EXTERN_C String_t* _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FEC942054577466215DA5251FB602E014D433B;
IL2CPP_EXTERN_C String_t* _stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B;
IL2CPP_EXTERN_C String_t* _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756;
IL2CPP_EXTERN_C String_t* _stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE;
IL2CPP_EXTERN_C String_t* _stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA;
IL2CPP_EXTERN_C String_t* _stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA;
IL2CPP_EXTERN_C String_t* _stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF;
IL2CPP_EXTERN_C String_t* _stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371;
IL2CPP_EXTERN_C String_t* _stringLiteralF953F17BB91EBF78300169DEE55CE060B4F1C569;
IL2CPP_EXTERN_C String_t* _stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m44982DBFBF71598D4ADEE6632D78D390CEFA42D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputTracking_InvokeTrackingEvent_mF9CC9853D284F640ACEB29225EF35646166061A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_m3E9F6A2B441E056953C153C3B3182C0EB6BD0AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_m98CC72EADB42D92099DBE358C296423D7751A741_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystemDescriptor_1__ctor_mBD46E84CF05A1E63F8FE6AB0C2F1C07AA8D2DAFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m19C9BE11CA13915E2E14D5B4EC3EAF29CCC633E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m33699A39FA5AEAE5A383689E4E0E3523FB67E558_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1__ctor_m5D5CDD514B75369B0797B55401D9DD35908A2A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDisplaySubsystem_BeginRecordingIfLateLatched_m04CCCDA348AB151B099E0937AC2C57CE250A5D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDisplaySubsystem_EndRecordingIfLateLatched_m5BA5A8874CF1C953769A5219534D86CFBC327085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1E1B852027794298A682FBC1BEE318B6EABAD94F 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____items_1)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671_StaticFields, ____emptyArray_5)); }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRNodeStateU5BU5D_t6769DE0817BC77C129F02AE6C53CF9DCF954CCF5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.HashCodeHelper
struct HashCodeHelper_t55705027308438F4124A7ABBE1F3A2E503C9200B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.InputDevices
struct InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC  : public RuntimeObject
{
public:

public:
};

struct InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::s_InputDeviceList
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___s_InputDeviceList_0;
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceConnected
	Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * ___deviceConnected_1;
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceDisconnected
	Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * ___deviceDisconnected_2;
	// System.Action`1<UnityEngine.XR.InputDevice> UnityEngine.XR.InputDevices::deviceConfigChanged
	Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * ___deviceConfigChanged_3;

public:
	inline static int32_t get_offset_of_s_InputDeviceList_0() { return static_cast<int32_t>(offsetof(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields, ___s_InputDeviceList_0)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_s_InputDeviceList_0() const { return ___s_InputDeviceList_0; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_s_InputDeviceList_0() { return &___s_InputDeviceList_0; }
	inline void set_s_InputDeviceList_0(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___s_InputDeviceList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputDeviceList_0), (void*)value);
	}

	inline static int32_t get_offset_of_deviceConnected_1() { return static_cast<int32_t>(offsetof(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields, ___deviceConnected_1)); }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * get_deviceConnected_1() const { return ___deviceConnected_1; }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 ** get_address_of_deviceConnected_1() { return &___deviceConnected_1; }
	inline void set_deviceConnected_1(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * value)
	{
		___deviceConnected_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceConnected_1), (void*)value);
	}

	inline static int32_t get_offset_of_deviceDisconnected_2() { return static_cast<int32_t>(offsetof(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields, ___deviceDisconnected_2)); }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * get_deviceDisconnected_2() const { return ___deviceDisconnected_2; }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 ** get_address_of_deviceDisconnected_2() { return &___deviceDisconnected_2; }
	inline void set_deviceDisconnected_2(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * value)
	{
		___deviceDisconnected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceDisconnected_2), (void*)value);
	}

	inline static int32_t get_offset_of_deviceConfigChanged_3() { return static_cast<int32_t>(offsetof(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields, ___deviceConfigChanged_3)); }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * get_deviceConfigChanged_3() const { return ___deviceConfigChanged_3; }
	inline Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 ** get_address_of_deviceConfigChanged_3() { return &___deviceConfigChanged_3; }
	inline void set_deviceConfigChanged_3(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * value)
	{
		___deviceConfigChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceConfigChanged_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevices
struct InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevices
struct InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_com
{
};

// UnityEngine.XR.InputTracking
struct InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D  : public RuntimeObject
{
public:

public:
};

struct InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingAcquired
	Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingLost
	Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * ___trackingLost_1;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeAdded
	Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * ___nodeAdded_2;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeRemoved
	Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * ___nodeRemoved_3;

public:
	inline static int32_t get_offset_of_trackingAcquired_0() { return static_cast<int32_t>(offsetof(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields, ___trackingAcquired_0)); }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * get_trackingAcquired_0() const { return ___trackingAcquired_0; }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 ** get_address_of_trackingAcquired_0() { return &___trackingAcquired_0; }
	inline void set_trackingAcquired_0(Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * value)
	{
		___trackingAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingAcquired_0), (void*)value);
	}

	inline static int32_t get_offset_of_trackingLost_1() { return static_cast<int32_t>(offsetof(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields, ___trackingLost_1)); }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * get_trackingLost_1() const { return ___trackingLost_1; }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 ** get_address_of_trackingLost_1() { return &___trackingLost_1; }
	inline void set_trackingLost_1(Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * value)
	{
		___trackingLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_nodeAdded_2() { return static_cast<int32_t>(offsetof(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields, ___nodeAdded_2)); }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * get_nodeAdded_2() const { return ___nodeAdded_2; }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 ** get_address_of_nodeAdded_2() { return &___nodeAdded_2; }
	inline void set_nodeAdded_2(Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * value)
	{
		___nodeAdded_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeAdded_2), (void*)value);
	}

	inline static int32_t get_offset_of_nodeRemoved_3() { return static_cast<int32_t>(offsetof(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields, ___nodeRemoved_3)); }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * get_nodeRemoved_3() const { return ___nodeRemoved_3; }
	inline Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 ** get_address_of_nodeRemoved_3() { return &___nodeRemoved_3; }
	inline void set_nodeRemoved_3(Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * value)
	{
		___nodeRemoved_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeRemoved_3), (void*)value);
	}
};


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

// UnityEngine.XR.Provider.XRStats
struct XRStats_t86A80A4C932ED7493826F8FE48E32A17ECA53470  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.Bone
struct Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
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


// UnityEngine.Rendering.CoreCameraValues
struct CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 
{
public:
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::filterMode
	int32_t ___filterMode_0;
	// System.UInt32 UnityEngine.Rendering.CoreCameraValues::cullingMask
	uint32_t ___cullingMask_1;
	// System.Int32 UnityEngine.Rendering.CoreCameraValues::instanceID
	int32_t ___instanceID_2;

public:
	inline static int32_t get_offset_of_filterMode_0() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___filterMode_0)); }
	inline int32_t get_filterMode_0() const { return ___filterMode_0; }
	inline int32_t* get_address_of_filterMode_0() { return &___filterMode_0; }
	inline void set_filterMode_0(int32_t value)
	{
		___filterMode_0 = value;
	}

	inline static int32_t get_offset_of_cullingMask_1() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___cullingMask_1)); }
	inline uint32_t get_cullingMask_1() const { return ___cullingMask_1; }
	inline uint32_t* get_address_of_cullingMask_1() { return &___cullingMask_1; }
	inline void set_cullingMask_1(uint32_t value)
	{
		___cullingMask_1 = value;
	}

	inline static int32_t get_offset_of_instanceID_2() { return static_cast<int32_t>(offsetof(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94, ___instanceID_2)); }
	inline int32_t get_instanceID_2() const { return ___instanceID_2; }
	inline int32_t* get_address_of_instanceID_2() { return &___instanceID_2; }
	inline void set_instanceID_2(int32_t value)
	{
		___instanceID_2 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t5E067CFFC785D2CA342F4F32B80BDC1D221BAC98  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// UnityEngine.XR.Eyes
struct Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D 
{
public:
	// System.UInt64 UnityEngine.XR.Eyes::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Eyes::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.Hand
struct Hand_tB64007EC8D01384426C93432737BA9C5F636A690 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_tB64007EC8D01384426C93432737BA9C5F636A690, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tB501C0AF1B2E1105879F40DF285FD445422C6756  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.XR.MeshId
struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___s_InvalidId_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer
struct U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer
struct U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer
struct U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2__padding[96];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer
struct U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490__padding[160];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer
struct U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 
{
public:
	union
	{
		struct
		{
			// System.Single UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer::FixedElementField
			float ___FixedElementField_0;
		};
		uint8_t U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884, ___FixedElementField_0)); }
	inline float get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline float* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(float value)
	{
		___FixedElementField_0 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>
struct Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___list_0)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_list_0() const { return ___list_0; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D, ___current_3)); }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  get_current_3() const { return ___current_3; }
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BuiltinRenderTextureType
struct BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A 
{
public:
	// System.Int32 UnityEngine.Rendering.BuiltinRenderTextureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BuiltinRenderTextureType_t89FFB8A7C9095150BCA40E573A73664CC37F023A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CameraProperties
struct CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A 
{
public:
	// UnityEngine.Rect UnityEngine.Rendering.CameraProperties::screenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___screenRect_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::viewDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___viewDir_1;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionNear
	float ___projectionNear_2;
	// System.Single UnityEngine.Rendering.CameraProperties::projectionFar
	float ___projectionFar_3;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraNear
	float ___cameraNear_4;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraFar
	float ___cameraFar_5;
	// System.Single UnityEngine.Rendering.CameraProperties::cameraAspect
	float ___cameraAspect_6;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraToWorld_7;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::actualWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___actualWorldToClip_8;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraClipToWorld
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraClipToWorld_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::cameraWorldToClip
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___cameraWorldToClip_10;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::implicitProjection
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___implicitProjection_11;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipLeft
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipLeft_12;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::stereoWorldToClipRight
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___stereoWorldToClipRight_13;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.CameraProperties::worldToCamera
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldToCamera_14;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::up
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___up_15;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::right
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___right_16;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::transformDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___transformDirection_17;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::cameraEuler
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraEuler_18;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_19;
	// System.Single UnityEngine.Rendering.CameraProperties::farPlaneWorldSpaceLength
	float ___farPlaneWorldSpaceLength_20;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::rendererCount
	uint32_t ___rendererCount_21;
	// UnityEngine.Rendering.CameraProperties/<m_ShadowCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_ShadowCullPlanes
	U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  ___m_ShadowCullPlanes_22;
	// UnityEngine.Rendering.CameraProperties/<m_CameraCullPlanes>e__FixedBuffer UnityEngine.Rendering.CameraProperties::m_CameraCullPlanes
	U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  ___m_CameraCullPlanes_23;
	// System.Single UnityEngine.Rendering.CameraProperties::baseFarDistance
	float ___baseFarDistance_24;
	// UnityEngine.Vector3 UnityEngine.Rendering.CameraProperties::shadowCullCenter
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shadowCullCenter_25;
	// UnityEngine.Rendering.CameraProperties/<layerCullDistances>e__FixedBuffer UnityEngine.Rendering.CameraProperties::layerCullDistances
	U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  ___layerCullDistances_26;
	// System.Int32 UnityEngine.Rendering.CameraProperties::layerCullSpherical
	int32_t ___layerCullSpherical_27;
	// UnityEngine.Rendering.CoreCameraValues UnityEngine.Rendering.CameraProperties::coreCameraValues
	CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  ___coreCameraValues_28;
	// System.UInt32 UnityEngine.Rendering.CameraProperties::cameraType
	uint32_t ___cameraType_29;
	// System.Int32 UnityEngine.Rendering.CameraProperties::projectionIsOblique
	int32_t ___projectionIsOblique_30;
	// System.Int32 UnityEngine.Rendering.CameraProperties::isImplicitProjectionMatrix
	int32_t ___isImplicitProjectionMatrix_31;

public:
	inline static int32_t get_offset_of_screenRect_0() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___screenRect_0)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_screenRect_0() const { return ___screenRect_0; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_screenRect_0() { return &___screenRect_0; }
	inline void set_screenRect_0(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___screenRect_0 = value;
	}

	inline static int32_t get_offset_of_viewDir_1() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___viewDir_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_viewDir_1() const { return ___viewDir_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_viewDir_1() { return &___viewDir_1; }
	inline void set_viewDir_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___viewDir_1 = value;
	}

	inline static int32_t get_offset_of_projectionNear_2() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionNear_2)); }
	inline float get_projectionNear_2() const { return ___projectionNear_2; }
	inline float* get_address_of_projectionNear_2() { return &___projectionNear_2; }
	inline void set_projectionNear_2(float value)
	{
		___projectionNear_2 = value;
	}

	inline static int32_t get_offset_of_projectionFar_3() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionFar_3)); }
	inline float get_projectionFar_3() const { return ___projectionFar_3; }
	inline float* get_address_of_projectionFar_3() { return &___projectionFar_3; }
	inline void set_projectionFar_3(float value)
	{
		___projectionFar_3 = value;
	}

	inline static int32_t get_offset_of_cameraNear_4() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraNear_4)); }
	inline float get_cameraNear_4() const { return ___cameraNear_4; }
	inline float* get_address_of_cameraNear_4() { return &___cameraNear_4; }
	inline void set_cameraNear_4(float value)
	{
		___cameraNear_4 = value;
	}

	inline static int32_t get_offset_of_cameraFar_5() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraFar_5)); }
	inline float get_cameraFar_5() const { return ___cameraFar_5; }
	inline float* get_address_of_cameraFar_5() { return &___cameraFar_5; }
	inline void set_cameraFar_5(float value)
	{
		___cameraFar_5 = value;
	}

	inline static int32_t get_offset_of_cameraAspect_6() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraAspect_6)); }
	inline float get_cameraAspect_6() const { return ___cameraAspect_6; }
	inline float* get_address_of_cameraAspect_6() { return &___cameraAspect_6; }
	inline void set_cameraAspect_6(float value)
	{
		___cameraAspect_6 = value;
	}

	inline static int32_t get_offset_of_cameraToWorld_7() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraToWorld_7)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraToWorld_7() const { return ___cameraToWorld_7; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraToWorld_7() { return &___cameraToWorld_7; }
	inline void set_cameraToWorld_7(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraToWorld_7 = value;
	}

	inline static int32_t get_offset_of_actualWorldToClip_8() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___actualWorldToClip_8)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_actualWorldToClip_8() const { return ___actualWorldToClip_8; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_actualWorldToClip_8() { return &___actualWorldToClip_8; }
	inline void set_actualWorldToClip_8(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___actualWorldToClip_8 = value;
	}

	inline static int32_t get_offset_of_cameraClipToWorld_9() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraClipToWorld_9)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraClipToWorld_9() const { return ___cameraClipToWorld_9; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraClipToWorld_9() { return &___cameraClipToWorld_9; }
	inline void set_cameraClipToWorld_9(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraClipToWorld_9 = value;
	}

	inline static int32_t get_offset_of_cameraWorldToClip_10() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraWorldToClip_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_cameraWorldToClip_10() const { return ___cameraWorldToClip_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_cameraWorldToClip_10() { return &___cameraWorldToClip_10; }
	inline void set_cameraWorldToClip_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___cameraWorldToClip_10 = value;
	}

	inline static int32_t get_offset_of_implicitProjection_11() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___implicitProjection_11)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_implicitProjection_11() const { return ___implicitProjection_11; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_implicitProjection_11() { return &___implicitProjection_11; }
	inline void set_implicitProjection_11(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___implicitProjection_11 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipLeft_12() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipLeft_12)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipLeft_12() const { return ___stereoWorldToClipLeft_12; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipLeft_12() { return &___stereoWorldToClipLeft_12; }
	inline void set_stereoWorldToClipLeft_12(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipLeft_12 = value;
	}

	inline static int32_t get_offset_of_stereoWorldToClipRight_13() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___stereoWorldToClipRight_13)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_stereoWorldToClipRight_13() const { return ___stereoWorldToClipRight_13; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_stereoWorldToClipRight_13() { return &___stereoWorldToClipRight_13; }
	inline void set_stereoWorldToClipRight_13(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___stereoWorldToClipRight_13 = value;
	}

	inline static int32_t get_offset_of_worldToCamera_14() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___worldToCamera_14)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_worldToCamera_14() const { return ___worldToCamera_14; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_worldToCamera_14() { return &___worldToCamera_14; }
	inline void set_worldToCamera_14(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___worldToCamera_14 = value;
	}

	inline static int32_t get_offset_of_up_15() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___up_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_up_15() const { return ___up_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_up_15() { return &___up_15; }
	inline void set_up_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___up_15 = value;
	}

	inline static int32_t get_offset_of_right_16() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___right_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_right_16() const { return ___right_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_right_16() { return &___right_16; }
	inline void set_right_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___right_16 = value;
	}

	inline static int32_t get_offset_of_transformDirection_17() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___transformDirection_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_transformDirection_17() const { return ___transformDirection_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_transformDirection_17() { return &___transformDirection_17; }
	inline void set_transformDirection_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___transformDirection_17 = value;
	}

	inline static int32_t get_offset_of_cameraEuler_18() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraEuler_18)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraEuler_18() const { return ___cameraEuler_18; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraEuler_18() { return &___cameraEuler_18; }
	inline void set_cameraEuler_18(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraEuler_18 = value;
	}

	inline static int32_t get_offset_of_velocity_19() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___velocity_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_19() const { return ___velocity_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_19() { return &___velocity_19; }
	inline void set_velocity_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_19 = value;
	}

	inline static int32_t get_offset_of_farPlaneWorldSpaceLength_20() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___farPlaneWorldSpaceLength_20)); }
	inline float get_farPlaneWorldSpaceLength_20() const { return ___farPlaneWorldSpaceLength_20; }
	inline float* get_address_of_farPlaneWorldSpaceLength_20() { return &___farPlaneWorldSpaceLength_20; }
	inline void set_farPlaneWorldSpaceLength_20(float value)
	{
		___farPlaneWorldSpaceLength_20 = value;
	}

	inline static int32_t get_offset_of_rendererCount_21() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___rendererCount_21)); }
	inline uint32_t get_rendererCount_21() const { return ___rendererCount_21; }
	inline uint32_t* get_address_of_rendererCount_21() { return &___rendererCount_21; }
	inline void set_rendererCount_21(uint32_t value)
	{
		___rendererCount_21 = value;
	}

	inline static int32_t get_offset_of_m_ShadowCullPlanes_22() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_ShadowCullPlanes_22)); }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  get_m_ShadowCullPlanes_22() const { return ___m_ShadowCullPlanes_22; }
	inline U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2 * get_address_of_m_ShadowCullPlanes_22() { return &___m_ShadowCullPlanes_22; }
	inline void set_m_ShadowCullPlanes_22(U3Cm_ShadowCullPlanesU3Ee__FixedBuffer_t27C8A3E160EA9662D45EE3054CAB0B1E6900FDE2  value)
	{
		___m_ShadowCullPlanes_22 = value;
	}

	inline static int32_t get_offset_of_m_CameraCullPlanes_23() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___m_CameraCullPlanes_23)); }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  get_m_CameraCullPlanes_23() const { return ___m_CameraCullPlanes_23; }
	inline U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715 * get_address_of_m_CameraCullPlanes_23() { return &___m_CameraCullPlanes_23; }
	inline void set_m_CameraCullPlanes_23(U3Cm_CameraCullPlanesU3Ee__FixedBuffer_t59DEB93CDAC5F35F2FBBDE7FD1ACDEA5CBAE0715  value)
	{
		___m_CameraCullPlanes_23 = value;
	}

	inline static int32_t get_offset_of_baseFarDistance_24() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___baseFarDistance_24)); }
	inline float get_baseFarDistance_24() const { return ___baseFarDistance_24; }
	inline float* get_address_of_baseFarDistance_24() { return &___baseFarDistance_24; }
	inline void set_baseFarDistance_24(float value)
	{
		___baseFarDistance_24 = value;
	}

	inline static int32_t get_offset_of_shadowCullCenter_25() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___shadowCullCenter_25)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shadowCullCenter_25() const { return ___shadowCullCenter_25; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shadowCullCenter_25() { return &___shadowCullCenter_25; }
	inline void set_shadowCullCenter_25(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shadowCullCenter_25 = value;
	}

	inline static int32_t get_offset_of_layerCullDistances_26() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullDistances_26)); }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  get_layerCullDistances_26() const { return ___layerCullDistances_26; }
	inline U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D * get_address_of_layerCullDistances_26() { return &___layerCullDistances_26; }
	inline void set_layerCullDistances_26(U3ClayerCullDistancesU3Ee__FixedBuffer_tE71C7AFD9D79A3B7182FA61420BBC853479CB82D  value)
	{
		___layerCullDistances_26 = value;
	}

	inline static int32_t get_offset_of_layerCullSpherical_27() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___layerCullSpherical_27)); }
	inline int32_t get_layerCullSpherical_27() const { return ___layerCullSpherical_27; }
	inline int32_t* get_address_of_layerCullSpherical_27() { return &___layerCullSpherical_27; }
	inline void set_layerCullSpherical_27(int32_t value)
	{
		___layerCullSpherical_27 = value;
	}

	inline static int32_t get_offset_of_coreCameraValues_28() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___coreCameraValues_28)); }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  get_coreCameraValues_28() const { return ___coreCameraValues_28; }
	inline CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94 * get_address_of_coreCameraValues_28() { return &___coreCameraValues_28; }
	inline void set_coreCameraValues_28(CoreCameraValues_t971621F868A0A21221BEFCE88E756FFEA310AF94  value)
	{
		___coreCameraValues_28 = value;
	}

	inline static int32_t get_offset_of_cameraType_29() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___cameraType_29)); }
	inline uint32_t get_cameraType_29() const { return ___cameraType_29; }
	inline uint32_t* get_address_of_cameraType_29() { return &___cameraType_29; }
	inline void set_cameraType_29(uint32_t value)
	{
		___cameraType_29 = value;
	}

	inline static int32_t get_offset_of_projectionIsOblique_30() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___projectionIsOblique_30)); }
	inline int32_t get_projectionIsOblique_30() const { return ___projectionIsOblique_30; }
	inline int32_t* get_address_of_projectionIsOblique_30() { return &___projectionIsOblique_30; }
	inline void set_projectionIsOblique_30(int32_t value)
	{
		___projectionIsOblique_30 = value;
	}

	inline static int32_t get_offset_of_isImplicitProjectionMatrix_31() { return static_cast<int32_t>(offsetof(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A, ___isImplicitProjectionMatrix_31)); }
	inline int32_t get_isImplicitProjectionMatrix_31() const { return ___isImplicitProjectionMatrix_31; }
	inline int32_t* get_address_of_isImplicitProjectionMatrix_31() { return &___isImplicitProjectionMatrix_31; }
	inline void set_isImplicitProjectionMatrix_31(int32_t value)
	{
		___isImplicitProjectionMatrix_31 = value;
	}
};


// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Rendering.CommandBuffer::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.XR.CommonUsages
struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.ConnectionChangeType
struct ConnectionChangeType_tDCBB141E97849FA7B1FDA5E3BE878B51A124AD8A 
{
public:
	// System.UInt32 UnityEngine.XR.ConnectionChangeType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionChangeType_tDCBB141E97849FA7B1FDA5E3BE878B51A124AD8A, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CubemapFace
struct CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5 
{
public:
	// System.Int32 UnityEngine.CubemapFace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CubemapFace_t74FBCA71A21252C2E10E256E61FE0B1E09D7B9E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullingOptions
struct CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109 
{
public:
	// System.Int32 UnityEngine.Rendering.CullingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullingOptions_t36EEEF842AD217C369EA02DF85EFD28957A87109, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t07A3C024BC77B843C53A369D6FC02ABD27D2AB1D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputFeatureType
struct InputFeatureType_t3581EE01C178BF1CC9BAFE6443BEF6B0C0B2609C 
{
public:
	// System.UInt32 UnityEngine.XR.InputFeatureType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputFeatureType_t3581EE01C178BF1CC9BAFE6443BEF6B0C0B2609C, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SubsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002, ___m_SubsystemDescriptor_1)); }
	inline RuntimeObject* get_m_SubsystemDescriptor_1() const { return ___m_SubsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_SubsystemDescriptor_1() { return &___m_SubsystemDescriptor_1; }
	inline void set_m_SubsystemDescriptor_1(RuntimeObject* value)
	{
		___m_SubsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Rendering.LODParameters
struct LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD 
{
public:
	// System.Int32 UnityEngine.Rendering.LODParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Vector3 UnityEngine.Rendering.LODParameters::m_CameraPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CameraPosition_1;
	// System.Single UnityEngine.Rendering.LODParameters::m_FieldOfView
	float ___m_FieldOfView_2;
	// System.Single UnityEngine.Rendering.LODParameters::m_OrthoSize
	float ___m_OrthoSize_3;
	// System.Int32 UnityEngine.Rendering.LODParameters::m_CameraPixelHeight
	int32_t ___m_CameraPixelHeight_4;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_CameraPosition_1() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CameraPosition_1() const { return ___m_CameraPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CameraPosition_1() { return &___m_CameraPosition_1; }
	inline void set_m_CameraPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CameraPosition_1 = value;
	}

	inline static int32_t get_offset_of_m_FieldOfView_2() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_FieldOfView_2)); }
	inline float get_m_FieldOfView_2() const { return ___m_FieldOfView_2; }
	inline float* get_address_of_m_FieldOfView_2() { return &___m_FieldOfView_2; }
	inline void set_m_FieldOfView_2(float value)
	{
		___m_FieldOfView_2 = value;
	}

	inline static int32_t get_offset_of_m_OrthoSize_3() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_OrthoSize_3)); }
	inline float get_m_OrthoSize_3() const { return ___m_OrthoSize_3; }
	inline float* get_address_of_m_OrthoSize_3() { return &___m_OrthoSize_3; }
	inline void set_m_OrthoSize_3(float value)
	{
		___m_OrthoSize_3 = value;
	}

	inline static int32_t get_offset_of_m_CameraPixelHeight_4() { return static_cast<int32_t>(offsetof(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD, ___m_CameraPixelHeight_4)); }
	inline int32_t get_m_CameraPixelHeight_4() const { return ___m_CameraPixelHeight_4; }
	inline int32_t* get_address_of_m_CameraPixelHeight_4() { return &___m_CameraPixelHeight_4; }
	inline void set_m_CameraPixelHeight_4(int32_t value)
	{
		___m_CameraPixelHeight_4 = value;
	}
};


// UnityEngine.XR.MeshGenerationStatus
struct MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Rendering.ReflectionProbeSortingCriteria
struct ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708 
{
public:
	// System.Int32 UnityEngine.Rendering.ReflectionProbeSortingCriteria::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSortingCriteria_tAD2F76EF0ECBDCA0334296568300D724E7905708, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureCreationFlags
struct RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3 
{
public:
	// System.Int32 UnityEngine.RenderTextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureCreationFlags_t24A9C99A84202C1F13828D9F5693BE46CFBD61F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderTextureMemoryless
struct RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67 
{
public:
	// System.Int32 UnityEngine.RenderTextureMemoryless::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureMemoryless_t37547D68C2186D2650440F719302CDA4A3BB7F67, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ShadowSamplingMode
struct ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t864AB52A05C1F54A738E06F76F47CDF4C26CF7F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VRTextureUsage
struct VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3C09DF3DD90B5620BC0AB6F8078DFEF4E607F645, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputTracking/TrackingStateEventType
struct TrackingStateEventType_t301E0DD44D089E06B0BBA994F682CE9F23505BA5 
{
public:
	// System.Int32 UnityEngine.XR.InputTracking/TrackingStateEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingStateEventType_t301E0DD44D089E06B0BBA994F682CE9F23505BA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRDisplaySubsystem/TextureLayout
struct TextureLayout_t2DC1FB6C58C201E0A23B62B2B1E74843D506DF66 
{
public:
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/TextureLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureLayout_t2DC1FB6C58C201E0A23B62B2B1E74843D506DF66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 
{
public:
	// UnityEngine.RenderTexture UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcTex
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcTexArraySlice
	int32_t ___srcTexArraySlice_1;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::srcRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRBlitParams::destRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;

public:
	inline static int32_t get_offset_of_srcTex_0() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcTex_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_srcTex_0() const { return ___srcTex_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_srcTex_0() { return &___srcTex_0; }
	inline void set_srcTex_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___srcTex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___srcTex_0), (void*)value);
	}

	inline static int32_t get_offset_of_srcTexArraySlice_1() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcTexArraySlice_1)); }
	inline int32_t get_srcTexArraySlice_1() const { return ___srcTexArraySlice_1; }
	inline int32_t* get_address_of_srcTexArraySlice_1() { return &___srcTexArraySlice_1; }
	inline void set_srcTexArraySlice_1(int32_t value)
	{
		___srcTexArraySlice_1 = value;
	}

	inline static int32_t get_offset_of_srcRect_2() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___srcRect_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_srcRect_2() const { return ___srcRect_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_srcRect_2() { return &___srcRect_2; }
	inline void set_srcRect_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___srcRect_2 = value;
	}

	inline static int32_t get_offset_of_destRect_3() { return static_cast<int32_t>(offsetof(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779, ___destRect_3)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_destRect_3() const { return ___destRect_3; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_destRect_3() { return &___destRect_3; }
	inline void set_destRect_3(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___destRect_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_pinvoke
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	int32_t ___srcTexArraySlice_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_com
{
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___srcTex_0;
	int32_t ___srcTexArraySlice_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___srcRect_2;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___destRect_3;
};

// UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 
{
public:
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitAvailable
	bool ___nativeBlitAvailable_1;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::nativeBlitInvalidStates
	bool ___nativeBlitInvalidStates_2;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::blitParamsCount
	int32_t ___blitParamsCount_3;

public:
	inline static int32_t get_offset_of_displaySubsystemInstance_0() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___displaySubsystemInstance_0)); }
	inline intptr_t get_displaySubsystemInstance_0() const { return ___displaySubsystemInstance_0; }
	inline intptr_t* get_address_of_displaySubsystemInstance_0() { return &___displaySubsystemInstance_0; }
	inline void set_displaySubsystemInstance_0(intptr_t value)
	{
		___displaySubsystemInstance_0 = value;
	}

	inline static int32_t get_offset_of_nativeBlitAvailable_1() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___nativeBlitAvailable_1)); }
	inline bool get_nativeBlitAvailable_1() const { return ___nativeBlitAvailable_1; }
	inline bool* get_address_of_nativeBlitAvailable_1() { return &___nativeBlitAvailable_1; }
	inline void set_nativeBlitAvailable_1(bool value)
	{
		___nativeBlitAvailable_1 = value;
	}

	inline static int32_t get_offset_of_nativeBlitInvalidStates_2() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___nativeBlitInvalidStates_2)); }
	inline bool get_nativeBlitInvalidStates_2() const { return ___nativeBlitInvalidStates_2; }
	inline bool* get_address_of_nativeBlitInvalidStates_2() { return &___nativeBlitInvalidStates_2; }
	inline void set_nativeBlitInvalidStates_2(bool value)
	{
		___nativeBlitInvalidStates_2 = value;
	}

	inline static int32_t get_offset_of_blitParamsCount_3() { return static_cast<int32_t>(offsetof(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5, ___blitParamsCount_3)); }
	inline int32_t get_blitParamsCount_3() const { return ___blitParamsCount_3; }
	inline int32_t* get_address_of_blitParamsCount_3() { return &___blitParamsCount_3; }
	inline void set_blitParamsCount_3(int32_t value)
	{
		___blitParamsCount_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___nativeBlitAvailable_1;
	int32_t ___nativeBlitInvalidStates_2;
	int32_t ___blitParamsCount_3;
};

// UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::view
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::projection
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	// UnityEngine.Rect UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::viewport
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	// UnityEngine.Mesh UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::occlusionMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::textureArraySlice
	int32_t ___textureArraySlice_4;
	// UnityEngine.Matrix4x4 UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::previousView
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___previousView_5;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter::isPreviousViewValid
	bool ___isPreviousViewValid_6;

public:
	inline static int32_t get_offset_of_view_0() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___view_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_view_0() const { return ___view_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_view_0() { return &___view_0; }
	inline void set_view_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___view_0 = value;
	}

	inline static int32_t get_offset_of_projection_1() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___projection_1)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_projection_1() const { return ___projection_1; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_projection_1() { return &___projection_1; }
	inline void set_projection_1(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___projection_1 = value;
	}

	inline static int32_t get_offset_of_viewport_2() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___viewport_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_viewport_2() const { return ___viewport_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_viewport_2() { return &___viewport_2; }
	inline void set_viewport_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___viewport_2 = value;
	}

	inline static int32_t get_offset_of_occlusionMesh_3() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___occlusionMesh_3)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_occlusionMesh_3() const { return ___occlusionMesh_3; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_occlusionMesh_3() { return &___occlusionMesh_3; }
	inline void set_occlusionMesh_3(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___occlusionMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_textureArraySlice_4() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___textureArraySlice_4)); }
	inline int32_t get_textureArraySlice_4() const { return ___textureArraySlice_4; }
	inline int32_t* get_address_of_textureArraySlice_4() { return &___textureArraySlice_4; }
	inline void set_textureArraySlice_4(int32_t value)
	{
		___textureArraySlice_4 = value;
	}

	inline static int32_t get_offset_of_previousView_5() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___previousView_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_previousView_5() const { return ___previousView_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_previousView_5() { return &___previousView_5; }
	inline void set_previousView_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___previousView_5 = value;
	}

	inline static int32_t get_offset_of_isPreviousViewValid_6() { return static_cast<int32_t>(offsetof(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3, ___isPreviousViewValid_6)); }
	inline bool get_isPreviousViewValid_6() const { return ___isPreviousViewValid_6; }
	inline bool* get_address_of_isPreviousViewValid_6() { return &___isPreviousViewValid_6; }
	inline void set_isPreviousViewValid_6(bool value)
	{
		___isPreviousViewValid_6 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_pinvoke
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___previousView_5;
	int32_t ___isPreviousViewValid_6;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_com
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___view_0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___projection_1;
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___viewport_2;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___occlusionMesh_3;
	int32_t ___textureArraySlice_4;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___previousView_5;
	int32_t ___isPreviousViewValid_6;
};

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>
struct IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>
struct IntegratedSubsystemDescriptor_1_t822E08B2CE1EC68FE74F71A682C9ECC6D52A6E89  : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_pinvoke : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t887CBD2C6B2D4D32DE18C1E1EB73CF2F1167F58B_marshaled_com : public IntegratedSubsystemDescriptor_tDC8AF8E5B67B983E4492D784A419F01693926D7A_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840  : public IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalType_1() { return static_cast<int32_t>(offsetof(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE, ___m_InternalType_1)); }
	inline uint32_t get_m_InternalType_1() const { return ___m_InternalType_1; }
	inline uint32_t* get_address_of_m_InternalType_1() { return &___m_InternalType_1; }
	inline void set_m_InternalType_1(uint32_t value)
	{
		___m_InternalType_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};

// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_pinvoke
{
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_com
{
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
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

// UnityEngine.Rendering.RenderTargetIdentifier
struct RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 
{
public:
	// UnityEngine.Rendering.BuiltinRenderTextureType UnityEngine.Rendering.RenderTargetIdentifier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_NameID
	int32_t ___m_NameID_2;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_InstanceID
	int32_t ___m_InstanceID_3;
	// System.IntPtr UnityEngine.Rendering.RenderTargetIdentifier::m_BufferPointer
	intptr_t ___m_BufferPointer_4;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_MipLevel
	int32_t ___m_MipLevel_5;
	// UnityEngine.CubemapFace UnityEngine.Rendering.RenderTargetIdentifier::m_CubeFace
	int32_t ___m_CubeFace_6;
	// System.Int32 UnityEngine.Rendering.RenderTargetIdentifier::m_DepthSlice
	int32_t ___m_DepthSlice_7;

public:
	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_NameID_2() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_NameID_2)); }
	inline int32_t get_m_NameID_2() const { return ___m_NameID_2; }
	inline int32_t* get_address_of_m_NameID_2() { return &___m_NameID_2; }
	inline void set_m_NameID_2(int32_t value)
	{
		___m_NameID_2 = value;
	}

	inline static int32_t get_offset_of_m_InstanceID_3() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_InstanceID_3)); }
	inline int32_t get_m_InstanceID_3() const { return ___m_InstanceID_3; }
	inline int32_t* get_address_of_m_InstanceID_3() { return &___m_InstanceID_3; }
	inline void set_m_InstanceID_3(int32_t value)
	{
		___m_InstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_BufferPointer_4() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_BufferPointer_4)); }
	inline intptr_t get_m_BufferPointer_4() const { return ___m_BufferPointer_4; }
	inline intptr_t* get_address_of_m_BufferPointer_4() { return &___m_BufferPointer_4; }
	inline void set_m_BufferPointer_4(intptr_t value)
	{
		___m_BufferPointer_4 = value;
	}

	inline static int32_t get_offset_of_m_MipLevel_5() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_MipLevel_5)); }
	inline int32_t get_m_MipLevel_5() const { return ___m_MipLevel_5; }
	inline int32_t* get_address_of_m_MipLevel_5() { return &___m_MipLevel_5; }
	inline void set_m_MipLevel_5(int32_t value)
	{
		___m_MipLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_CubeFace_6() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_CubeFace_6)); }
	inline int32_t get_m_CubeFace_6() const { return ___m_CubeFace_6; }
	inline int32_t* get_address_of_m_CubeFace_6() { return &___m_CubeFace_6; }
	inline void set_m_CubeFace_6(int32_t value)
	{
		___m_CubeFace_6 = value;
	}

	inline static int32_t get_offset_of_m_DepthSlice_7() { return static_cast<int32_t>(offsetof(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13, ___m_DepthSlice_7)); }
	inline int32_t get_m_DepthSlice_7() const { return ___m_DepthSlice_7; }
	inline int32_t* get_address_of_m_DepthSlice_7() { return &___m_DepthSlice_7; }
	inline void set_m_DepthSlice_7(int32_t value)
	{
		___m_DepthSlice_7 = value;
	}
};


// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 
{
public:
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// System.Int32 UnityEngine.RenderTextureDescriptor::_depthBufferBits
	int32_t ____depthBufferBits_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_9;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_10;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_11;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_12;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CwidthU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CwidthU3Ek__BackingField_0)); }
	inline int32_t get_U3CwidthU3Ek__BackingField_0() const { return ___U3CwidthU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CwidthU3Ek__BackingField_0() { return &___U3CwidthU3Ek__BackingField_0; }
	inline void set_U3CwidthU3Ek__BackingField_0(int32_t value)
	{
		___U3CwidthU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CheightU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CheightU3Ek__BackingField_1)); }
	inline int32_t get_U3CheightU3Ek__BackingField_1() const { return ___U3CheightU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CheightU3Ek__BackingField_1() { return &___U3CheightU3Ek__BackingField_1; }
	inline void set_U3CheightU3Ek__BackingField_1(int32_t value)
	{
		___U3CheightU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CmsaaSamplesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmsaaSamplesU3Ek__BackingField_2)); }
	inline int32_t get_U3CmsaaSamplesU3Ek__BackingField_2() const { return ___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CmsaaSamplesU3Ek__BackingField_2() { return &___U3CmsaaSamplesU3Ek__BackingField_2; }
	inline void set_U3CmsaaSamplesU3Ek__BackingField_2(int32_t value)
	{
		___U3CmsaaSamplesU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CvolumeDepthU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvolumeDepthU3Ek__BackingField_3)); }
	inline int32_t get_U3CvolumeDepthU3Ek__BackingField_3() const { return ___U3CvolumeDepthU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CvolumeDepthU3Ek__BackingField_3() { return &___U3CvolumeDepthU3Ek__BackingField_3; }
	inline void set_U3CvolumeDepthU3Ek__BackingField_3(int32_t value)
	{
		___U3CvolumeDepthU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CmipCountU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmipCountU3Ek__BackingField_4)); }
	inline int32_t get_U3CmipCountU3Ek__BackingField_4() const { return ___U3CmipCountU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CmipCountU3Ek__BackingField_4() { return &___U3CmipCountU3Ek__BackingField_4; }
	inline void set_U3CmipCountU3Ek__BackingField_4(int32_t value)
	{
		___U3CmipCountU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of__graphicsFormat_5() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____graphicsFormat_5)); }
	inline int32_t get__graphicsFormat_5() const { return ____graphicsFormat_5; }
	inline int32_t* get_address_of__graphicsFormat_5() { return &____graphicsFormat_5; }
	inline void set__graphicsFormat_5(int32_t value)
	{
		____graphicsFormat_5 = value;
	}

	inline static int32_t get_offset_of_U3CstencilFormatU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CstencilFormatU3Ek__BackingField_6)); }
	inline int32_t get_U3CstencilFormatU3Ek__BackingField_6() const { return ___U3CstencilFormatU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CstencilFormatU3Ek__BackingField_6() { return &___U3CstencilFormatU3Ek__BackingField_6; }
	inline void set_U3CstencilFormatU3Ek__BackingField_6(int32_t value)
	{
		___U3CstencilFormatU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__depthBufferBits_7() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____depthBufferBits_7)); }
	inline int32_t get__depthBufferBits_7() const { return ____depthBufferBits_7; }
	inline int32_t* get_address_of__depthBufferBits_7() { return &____depthBufferBits_7; }
	inline void set__depthBufferBits_7(int32_t value)
	{
		____depthBufferBits_7 = value;
	}

	inline static int32_t get_offset_of_U3CdimensionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CdimensionU3Ek__BackingField_9)); }
	inline int32_t get_U3CdimensionU3Ek__BackingField_9() const { return ___U3CdimensionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CdimensionU3Ek__BackingField_9() { return &___U3CdimensionU3Ek__BackingField_9; }
	inline void set_U3CdimensionU3Ek__BackingField_9(int32_t value)
	{
		___U3CdimensionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CshadowSamplingModeU3Ek__BackingField_10)); }
	inline int32_t get_U3CshadowSamplingModeU3Ek__BackingField_10() const { return ___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CshadowSamplingModeU3Ek__BackingField_10() { return &___U3CshadowSamplingModeU3Ek__BackingField_10; }
	inline void set_U3CshadowSamplingModeU3Ek__BackingField_10(int32_t value)
	{
		___U3CshadowSamplingModeU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CvrUsageU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CvrUsageU3Ek__BackingField_11)); }
	inline int32_t get_U3CvrUsageU3Ek__BackingField_11() const { return ___U3CvrUsageU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CvrUsageU3Ek__BackingField_11() { return &___U3CvrUsageU3Ek__BackingField_11; }
	inline void set_U3CvrUsageU3Ek__BackingField_11(int32_t value)
	{
		___U3CvrUsageU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of__flags_12() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ____flags_12)); }
	inline int32_t get__flags_12() const { return ____flags_12; }
	inline int32_t* get_address_of__flags_12() { return &____flags_12; }
	inline void set__flags_12(int32_t value)
	{
		____flags_12 = value;
	}

	inline static int32_t get_offset_of_U3CmemorylessU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47, ___U3CmemorylessU3Ek__BackingField_13)); }
	inline int32_t get_U3CmemorylessU3Ek__BackingField_13() const { return ___U3CmemorylessU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CmemorylessU3Ek__BackingField_13() { return &___U3CmemorylessU3Ek__BackingField_13; }
	inline void set_U3CmemorylessU3Ek__BackingField_13(int32_t value)
	{
		___U3CmemorylessU3Ek__BackingField_13 = value;
	}
};

struct RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields
{
public:
	// System.Int32[] UnityEngine.RenderTextureDescriptor::depthFormatBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___depthFormatBits_8;

public:
	inline static int32_t get_offset_of_depthFormatBits_8() { return static_cast<int32_t>(offsetof(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47_StaticFields, ___depthFormatBits_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_depthFormatBits_8() const { return ___depthFormatBits_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_depthFormatBits_8() { return &___depthFormatBits_8; }
	inline void set_depthFormatBits_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___depthFormatBits_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depthFormatBits_8), (void*)value);
	}
};


// UnityEngine.Rendering.ScriptableCullingParameters
struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_IsOrthographic
	int32_t ___m_IsOrthographic_0;
	// UnityEngine.Rendering.LODParameters UnityEngine.Rendering.ScriptableCullingParameters::m_LODParameters
	LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  ___m_LODParameters_1;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_CullingPlanes>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlanes
	U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  ___m_CullingPlanes_3;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingPlaneCount
	int32_t ___m_CullingPlaneCount_4;
	// System.UInt32 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMask
	uint32_t ___m_CullingMask_5;
	// System.UInt64 UnityEngine.Rendering.ScriptableCullingParameters::m_SceneMask
	uint64_t ___m_SceneMask_6;
	// UnityEngine.Rendering.ScriptableCullingParameters/<m_LayerFarCullDistances>e__FixedBuffer UnityEngine.Rendering.ScriptableCullingParameters::m_LayerFarCullDistances
	U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  ___m_LayerFarCullDistances_8;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_LayerCull
	int32_t ___m_LayerCull_9;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_CullingMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_CullingMatrix_10;
	// UnityEngine.Vector3 UnityEngine.Rendering.ScriptableCullingParameters::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_11;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_ShadowDistance
	float ___m_ShadowDistance_12;
	// UnityEngine.Rendering.CullingOptions UnityEngine.Rendering.ScriptableCullingParameters::m_CullingOptions
	int32_t ___m_CullingOptions_13;
	// UnityEngine.Rendering.ReflectionProbeSortingCriteria UnityEngine.Rendering.ScriptableCullingParameters::m_ReflectionProbeSortingCriteria
	int32_t ___m_ReflectionProbeSortingCriteria_14;
	// UnityEngine.Rendering.CameraProperties UnityEngine.Rendering.ScriptableCullingParameters::m_CameraProperties
	CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  ___m_CameraProperties_15;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_AccurateOcclusionThreshold
	float ___m_AccurateOcclusionThreshold_16;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_MaximumPortalCullingJobs
	int32_t ___m_MaximumPortalCullingJobs_17;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoViewMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoViewMatrix_18;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.ScriptableCullingParameters::m_StereoProjectionMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_StereoProjectionMatrix_19;
	// System.Single UnityEngine.Rendering.ScriptableCullingParameters::m_StereoSeparationDistance
	float ___m_StereoSeparationDistance_20;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::m_maximumVisibleLights
	int32_t ___m_maximumVisibleLights_21;

public:
	inline static int32_t get_offset_of_m_IsOrthographic_0() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_IsOrthographic_0)); }
	inline int32_t get_m_IsOrthographic_0() const { return ___m_IsOrthographic_0; }
	inline int32_t* get_address_of_m_IsOrthographic_0() { return &___m_IsOrthographic_0; }
	inline void set_m_IsOrthographic_0(int32_t value)
	{
		___m_IsOrthographic_0 = value;
	}

	inline static int32_t get_offset_of_m_LODParameters_1() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LODParameters_1)); }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  get_m_LODParameters_1() const { return ___m_LODParameters_1; }
	inline LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD * get_address_of_m_LODParameters_1() { return &___m_LODParameters_1; }
	inline void set_m_LODParameters_1(LODParameters_tA41D06C4BDB03138144BE9DCC4BC6B37963DC5CD  value)
	{
		___m_LODParameters_1 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlanes_3() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlanes_3)); }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  get_m_CullingPlanes_3() const { return ___m_CullingPlanes_3; }
	inline U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490 * get_address_of_m_CullingPlanes_3() { return &___m_CullingPlanes_3; }
	inline void set_m_CullingPlanes_3(U3Cm_CullingPlanesU3Ee__FixedBuffer_t68E97CADA0C5FB08E8F025822CDE2CC1B8CC1490  value)
	{
		___m_CullingPlanes_3 = value;
	}

	inline static int32_t get_offset_of_m_CullingPlaneCount_4() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingPlaneCount_4)); }
	inline int32_t get_m_CullingPlaneCount_4() const { return ___m_CullingPlaneCount_4; }
	inline int32_t* get_address_of_m_CullingPlaneCount_4() { return &___m_CullingPlaneCount_4; }
	inline void set_m_CullingPlaneCount_4(int32_t value)
	{
		___m_CullingPlaneCount_4 = value;
	}

	inline static int32_t get_offset_of_m_CullingMask_5() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMask_5)); }
	inline uint32_t get_m_CullingMask_5() const { return ___m_CullingMask_5; }
	inline uint32_t* get_address_of_m_CullingMask_5() { return &___m_CullingMask_5; }
	inline void set_m_CullingMask_5(uint32_t value)
	{
		___m_CullingMask_5 = value;
	}

	inline static int32_t get_offset_of_m_SceneMask_6() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_SceneMask_6)); }
	inline uint64_t get_m_SceneMask_6() const { return ___m_SceneMask_6; }
	inline uint64_t* get_address_of_m_SceneMask_6() { return &___m_SceneMask_6; }
	inline void set_m_SceneMask_6(uint64_t value)
	{
		___m_SceneMask_6 = value;
	}

	inline static int32_t get_offset_of_m_LayerFarCullDistances_8() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerFarCullDistances_8)); }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  get_m_LayerFarCullDistances_8() const { return ___m_LayerFarCullDistances_8; }
	inline U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884 * get_address_of_m_LayerFarCullDistances_8() { return &___m_LayerFarCullDistances_8; }
	inline void set_m_LayerFarCullDistances_8(U3Cm_LayerFarCullDistancesU3Ee__FixedBuffer_t5B7FC7CD51D4855019C575D8B77A38581146E884  value)
	{
		___m_LayerFarCullDistances_8 = value;
	}

	inline static int32_t get_offset_of_m_LayerCull_9() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_LayerCull_9)); }
	inline int32_t get_m_LayerCull_9() const { return ___m_LayerCull_9; }
	inline int32_t* get_address_of_m_LayerCull_9() { return &___m_LayerCull_9; }
	inline void set_m_LayerCull_9(int32_t value)
	{
		___m_LayerCull_9 = value;
	}

	inline static int32_t get_offset_of_m_CullingMatrix_10() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingMatrix_10)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_CullingMatrix_10() const { return ___m_CullingMatrix_10; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_CullingMatrix_10() { return &___m_CullingMatrix_10; }
	inline void set_m_CullingMatrix_10(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_CullingMatrix_10 = value;
	}

	inline static int32_t get_offset_of_m_Origin_11() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_Origin_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_11() const { return ___m_Origin_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_11() { return &___m_Origin_11; }
	inline void set_m_Origin_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_11 = value;
	}

	inline static int32_t get_offset_of_m_ShadowDistance_12() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ShadowDistance_12)); }
	inline float get_m_ShadowDistance_12() const { return ___m_ShadowDistance_12; }
	inline float* get_address_of_m_ShadowDistance_12() { return &___m_ShadowDistance_12; }
	inline void set_m_ShadowDistance_12(float value)
	{
		___m_ShadowDistance_12 = value;
	}

	inline static int32_t get_offset_of_m_CullingOptions_13() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CullingOptions_13)); }
	inline int32_t get_m_CullingOptions_13() const { return ___m_CullingOptions_13; }
	inline int32_t* get_address_of_m_CullingOptions_13() { return &___m_CullingOptions_13; }
	inline void set_m_CullingOptions_13(int32_t value)
	{
		___m_CullingOptions_13 = value;
	}

	inline static int32_t get_offset_of_m_ReflectionProbeSortingCriteria_14() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_ReflectionProbeSortingCriteria_14)); }
	inline int32_t get_m_ReflectionProbeSortingCriteria_14() const { return ___m_ReflectionProbeSortingCriteria_14; }
	inline int32_t* get_address_of_m_ReflectionProbeSortingCriteria_14() { return &___m_ReflectionProbeSortingCriteria_14; }
	inline void set_m_ReflectionProbeSortingCriteria_14(int32_t value)
	{
		___m_ReflectionProbeSortingCriteria_14 = value;
	}

	inline static int32_t get_offset_of_m_CameraProperties_15() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_CameraProperties_15)); }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  get_m_CameraProperties_15() const { return ___m_CameraProperties_15; }
	inline CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A * get_address_of_m_CameraProperties_15() { return &___m_CameraProperties_15; }
	inline void set_m_CameraProperties_15(CameraProperties_t838715CFAFB627B6A059026AD9DE5E9C617CDF1A  value)
	{
		___m_CameraProperties_15 = value;
	}

	inline static int32_t get_offset_of_m_AccurateOcclusionThreshold_16() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_AccurateOcclusionThreshold_16)); }
	inline float get_m_AccurateOcclusionThreshold_16() const { return ___m_AccurateOcclusionThreshold_16; }
	inline float* get_address_of_m_AccurateOcclusionThreshold_16() { return &___m_AccurateOcclusionThreshold_16; }
	inline void set_m_AccurateOcclusionThreshold_16(float value)
	{
		___m_AccurateOcclusionThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_MaximumPortalCullingJobs_17() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_MaximumPortalCullingJobs_17)); }
	inline int32_t get_m_MaximumPortalCullingJobs_17() const { return ___m_MaximumPortalCullingJobs_17; }
	inline int32_t* get_address_of_m_MaximumPortalCullingJobs_17() { return &___m_MaximumPortalCullingJobs_17; }
	inline void set_m_MaximumPortalCullingJobs_17(int32_t value)
	{
		___m_MaximumPortalCullingJobs_17 = value;
	}

	inline static int32_t get_offset_of_m_StereoViewMatrix_18() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoViewMatrix_18)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoViewMatrix_18() const { return ___m_StereoViewMatrix_18; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoViewMatrix_18() { return &___m_StereoViewMatrix_18; }
	inline void set_m_StereoViewMatrix_18(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoViewMatrix_18 = value;
	}

	inline static int32_t get_offset_of_m_StereoProjectionMatrix_19() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoProjectionMatrix_19)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_StereoProjectionMatrix_19() const { return ___m_StereoProjectionMatrix_19; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_StereoProjectionMatrix_19() { return &___m_StereoProjectionMatrix_19; }
	inline void set_m_StereoProjectionMatrix_19(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_StereoProjectionMatrix_19 = value;
	}

	inline static int32_t get_offset_of_m_StereoSeparationDistance_20() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_StereoSeparationDistance_20)); }
	inline float get_m_StereoSeparationDistance_20() const { return ___m_StereoSeparationDistance_20; }
	inline float* get_address_of_m_StereoSeparationDistance_20() { return &___m_StereoSeparationDistance_20; }
	inline void set_m_StereoSeparationDistance_20(float value)
	{
		___m_StereoSeparationDistance_20 = value;
	}

	inline static int32_t get_offset_of_m_maximumVisibleLights_21() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1, ___m_maximumVisibleLights_21)); }
	inline int32_t get_m_maximumVisibleLights_21() const { return ___m_maximumVisibleLights_21; }
	inline int32_t* get_address_of_m_maximumVisibleLights_21() { return &___m_maximumVisibleLights_21; }
	inline void set_m_maximumVisibleLights_21(int32_t value)
	{
		___m_maximumVisibleLights_21 = value;
	}
};

struct ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields
{
public:
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::maximumCullingPlaneCount
	int32_t ___maximumCullingPlaneCount_2;
	// System.Int32 UnityEngine.Rendering.ScriptableCullingParameters::layerCount
	int32_t ___layerCount_7;

public:
	inline static int32_t get_offset_of_maximumCullingPlaneCount_2() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___maximumCullingPlaneCount_2)); }
	inline int32_t get_maximumCullingPlaneCount_2() const { return ___maximumCullingPlaneCount_2; }
	inline int32_t* get_address_of_maximumCullingPlaneCount_2() { return &___maximumCullingPlaneCount_2; }
	inline void set_maximumCullingPlaneCount_2(int32_t value)
	{
		___maximumCullingPlaneCount_2 = value;
	}

	inline static int32_t get_offset_of_layerCount_7() { return static_cast<int32_t>(offsetof(ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1_StaticFields, ___layerCount_7)); }
	inline int32_t get_layerCount_7() const { return ___layerCount_7; }
	inline int32_t* get_address_of_layerCount_7() { return &___layerCount_7; }
	inline void set_layerCount_7(int32_t value)
	{
		___layerCount_7 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.XR.XRNodeState
struct XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Acceleration_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularAcceleration_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.InputDevice>
struct Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93  : public IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93, ___displayFocusChanged_2)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833  : public IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09  : public IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___trackingOriginUpdated_2)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___boundaryChanged_3)); }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09, ___m_DeviceIdsCache_4)); }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t1F1C2C7D92FB6DF4FCD88B0AB0919AEAB3B45F6B * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystemDescriptor
struct XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2  : public IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2
{
public:

public:
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63  : public IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840
{
public:

public:
};


// UnityEngine.XR.XRMeshSubsystemDescriptor
struct XRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC  : public IntegratedSubsystemDescriptor_1_t822E08B2CE1EC68FE74F71A682C9ECC6D52A6E89
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB 
{
public:
	// System.IntPtr UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::displaySubsystemInstance
	intptr_t ___displaySubsystemInstance_0;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderPassIndex
	int32_t ___renderPassIndex_1;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::renderTargetDesc
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::hasMotionVectorPass
	bool ___hasMotionVectorPass_4;
	// UnityEngine.Rendering.RenderTargetIdentifier UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::motionVectorRenderTarget
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___motionVectorRenderTarget_5;
	// UnityEngine.RenderTextureDescriptor UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::motionVectorRenderTargetDesc
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___motionVectorRenderTargetDesc_6;
	// System.Boolean UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::shouldFillOutDepth
	bool ___shouldFillOutDepth_7;
	// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::cullingPassIndex
	int32_t ___cullingPassIndex_8;

public:
	inline static int32_t get_offset_of_displaySubsystemInstance_0() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___displaySubsystemInstance_0)); }
	inline intptr_t get_displaySubsystemInstance_0() const { return ___displaySubsystemInstance_0; }
	inline intptr_t* get_address_of_displaySubsystemInstance_0() { return &___displaySubsystemInstance_0; }
	inline void set_displaySubsystemInstance_0(intptr_t value)
	{
		___displaySubsystemInstance_0 = value;
	}

	inline static int32_t get_offset_of_renderPassIndex_1() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderPassIndex_1)); }
	inline int32_t get_renderPassIndex_1() const { return ___renderPassIndex_1; }
	inline int32_t* get_address_of_renderPassIndex_1() { return &___renderPassIndex_1; }
	inline void set_renderPassIndex_1(int32_t value)
	{
		___renderPassIndex_1 = value;
	}

	inline static int32_t get_offset_of_renderTarget_2() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderTarget_2)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_renderTarget_2() const { return ___renderTarget_2; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_renderTarget_2() { return &___renderTarget_2; }
	inline void set_renderTarget_2(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___renderTarget_2 = value;
	}

	inline static int32_t get_offset_of_renderTargetDesc_3() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___renderTargetDesc_3)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_renderTargetDesc_3() const { return ___renderTargetDesc_3; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_renderTargetDesc_3() { return &___renderTargetDesc_3; }
	inline void set_renderTargetDesc_3(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___renderTargetDesc_3 = value;
	}

	inline static int32_t get_offset_of_hasMotionVectorPass_4() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___hasMotionVectorPass_4)); }
	inline bool get_hasMotionVectorPass_4() const { return ___hasMotionVectorPass_4; }
	inline bool* get_address_of_hasMotionVectorPass_4() { return &___hasMotionVectorPass_4; }
	inline void set_hasMotionVectorPass_4(bool value)
	{
		___hasMotionVectorPass_4 = value;
	}

	inline static int32_t get_offset_of_motionVectorRenderTarget_5() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___motionVectorRenderTarget_5)); }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  get_motionVectorRenderTarget_5() const { return ___motionVectorRenderTarget_5; }
	inline RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 * get_address_of_motionVectorRenderTarget_5() { return &___motionVectorRenderTarget_5; }
	inline void set_motionVectorRenderTarget_5(RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  value)
	{
		___motionVectorRenderTarget_5 = value;
	}

	inline static int32_t get_offset_of_motionVectorRenderTargetDesc_6() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___motionVectorRenderTargetDesc_6)); }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  get_motionVectorRenderTargetDesc_6() const { return ___motionVectorRenderTargetDesc_6; }
	inline RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47 * get_address_of_motionVectorRenderTargetDesc_6() { return &___motionVectorRenderTargetDesc_6; }
	inline void set_motionVectorRenderTargetDesc_6(RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  value)
	{
		___motionVectorRenderTargetDesc_6 = value;
	}

	inline static int32_t get_offset_of_shouldFillOutDepth_7() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___shouldFillOutDepth_7)); }
	inline bool get_shouldFillOutDepth_7() const { return ___shouldFillOutDepth_7; }
	inline bool* get_address_of_shouldFillOutDepth_7() { return &___shouldFillOutDepth_7; }
	inline void set_shouldFillOutDepth_7(bool value)
	{
		___shouldFillOutDepth_7 = value;
	}

	inline static int32_t get_offset_of_cullingPassIndex_8() { return static_cast<int32_t>(offsetof(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB, ___cullingPassIndex_8)); }
	inline int32_t get_cullingPassIndex_8() const { return ___cullingPassIndex_8; }
	inline int32_t* get_address_of_cullingPassIndex_8() { return &___cullingPassIndex_8; }
	inline void set_cullingPassIndex_8(int32_t value)
	{
		___cullingPassIndex_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_pinvoke
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	int32_t ___hasMotionVectorPass_4;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___motionVectorRenderTarget_5;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___motionVectorRenderTargetDesc_6;
	int32_t ___shouldFillOutDepth_7;
	int32_t ___cullingPassIndex_8;
};
// Native definition for COM marshalling of UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_com
{
	intptr_t ___displaySubsystemInstance_0;
	int32_t ___renderPassIndex_1;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___renderTarget_2;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___renderTargetDesc_3;
	int32_t ___hasMotionVectorPass_4;
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  ___motionVectorRenderTarget_5;
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  ___motionVectorRenderTargetDesc_6;
	int32_t ___shouldFillOutDepth_7;
	int32_t ___cullingPassIndex_8;
};

// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MeshCollider
struct MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m434C9140634FE21814DB3C9E6DED22B456EE4E42_gshared (InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_gshared (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_gshared (InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3_gshared (InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2_gshared (InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Boolean>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013_gshared (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, bool* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_gshared_inline (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Quaternion>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC_gshared (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_gshared_inline (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_gshared (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946_gshared (Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * __this, XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385_gshared (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_m429238094F2A54BAF2F6F89270D5D43241541E72_gshared (IntegratedSubsystem_1_t0B19871ED45EAD9F0E0DD6AB41BABCAFBD8C56E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m74AFBEADF13921EE528F5629B38B89C8C51EB2DC_gshared (IntegratedSubsystemDescriptor_1_t4BFDAEC6A4D96827E7D4D0B2E85EB1AFA1911939 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604_gshared (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___obj0, const RuntimeMethod* method);

// System.UInt64 UnityEngine.XR.Bone::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.Bone::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::Equals(UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_m025222EEBF2374226C62C32E1A7ADE3538C13AFB (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_m2FBDCFEA8B90663E546294EBEB4763538DEEA412 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33 (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 System.UInt32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_m60E3A243F3D79311A64836148AE1AC23C679FC45 (uint32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.Bone::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bone_GetHashCode_m0ED7925C274DE8439749951FBE4E4EC28A797BFB (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m44982DBFBF71598D4ADEE6632D78D390CEFA42D5 (InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m434C9140634FE21814DB3C9E6DED22B456EE4E42_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Single>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693 (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C (InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465 (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3 (InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3_gshared)(__this, ___usageName0, method);
}
// System.Void UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2 (InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7 *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2_gshared)(__this, ___usageName0, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.Eyes::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.Eyes::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Eyes::Equals(UnityEngine.XR.Eyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m60083B041FECD045D717F2873BF2E21AA9A4FD01 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Eyes::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m58897DB2EEC48809233B94BB4CEA166B8ACEBFF2 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.Eyes::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Eyes_GetHashCode_mA9742A7C19500C6C17EDCD5EED7954A9FE91C0DD (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.Hand::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.Hand::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::Equals(UnityEngine.XR.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m099C7921633095BB40C830B6F5558F99ED0D7BD0 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m727113281F30E554A3A60DEFC4ED61CC94901775 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.Hand::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hand_GetHashCode_mFC8C4732F0B728122C3ABCC623699DA7E47D1CCB (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevice::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, uint64_t ___deviceId0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.InputDevice::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::IsValidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47 (uint64_t ___deviceId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevices::GetDeviceCharacteristics(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A (uint64_t ___deviceId0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<System.Boolean>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, bool* ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *, bool*, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_inline (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D (uint64_t ___deviceId0, String_t* ___usage1, bool* ___value2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::CheckValidAndSetDefault<UnityEngine.Quaternion>(T&)
inline bool InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value0, const RuntimeMethod* method)
{
	return ((  bool (*) (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *, const RuntimeMethod*))InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC_gshared)(__this, ___value0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>::get_name()
inline String_t* InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_inline (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 *, const RuntimeMethod*))InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB (uint64_t ___deviceId0, String_t* ___usage1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::Equals(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_m9661F95B50387146BC3C6F5DC63FDF2B1303ABB7 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_mF29A225E81A87941551F70A2351CB803A6D94063 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDevice_GetHashCode_mFD9C9A6015B91E254DD53E14651C8D08F715D7F8 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.UInt64 UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03 (int32_t ___node0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputDevices::GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Clear()
inline void List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::GetEnumerator()
inline Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::get_Current()
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::Add(!0)
inline void List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputDevice>::Dispose()
inline void Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92 (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *, const RuntimeMethod*))Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.InputDevice>::Invoke(!0)
inline void Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970 (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E , const RuntimeMethod*))Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_gshared)(__this, ___obj0, method);
}
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::get_internalType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(UnityEngine.XR.InputFeatureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_mD7107D9A754188766EACB7FAAF015E184FE706B9 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_mC0A1A665A98F42B2D5896BB9BC4CBA42FB59D582 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.InputFeatureUsage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_GetHashCode_m08673D24DA7804D87915443A647AA65447C511D1 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_uniqueID_m09D6E80AD1B81D7485242CFA27A7173A6231CA87 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_nodeType_m9ADECAA5D665042FCA2F8E81726AFD1A1FA8B30D (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_tracked_m27DDD443D10F5F43B5B9AA83BFE901DC12316B9C (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(!0)
inline void Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946 (Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * __this, XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *, XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 , const RuntimeMethod*))Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.InputTracking::GetLocalRotation_Injected(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9 (int32_t ___node0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::Clear()
inline void List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *, const RuntimeMethod*))List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385_gshared)(__this, method);
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates0, const RuntimeMethod* method);
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::get_Mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::get_MeshCollider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::get_Attributes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_mA9685353D67F169013BF8CC6B34EAFE69DB341B4 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_m511B6FD46B1187D90919F4C0D2E853DE4A16BD44 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___other0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543 (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshGenerationResult::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_GetHashCode_m511BFBE4F21B162C59E462DF9DC9883A06CF9CC7 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method);
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.MeshId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m77D4535F7643D5C1FEA20600C92B73818DD8675E (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___renderPassIndex0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ___renderPass1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryEndRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryBeginRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___cullingPassIndex1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * ___scriptableCullingParameters2, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m33699A39FA5AEAE5A383689E4E0E3523FB67E558 (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_t2737E0F52E6DC7B2E3D42D1B05C5FD7C9FDE4EA4 *, const RuntimeMethod*))IntegratedSubsystem_1__ctor_m429238094F2A54BAF2F6F89270D5D43241541E72_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_m3E9F6A2B441E056953C153C3B3182C0EB6BD0AFE (IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_tFDF96CDD8FD2E980FF0C62E8161C66AF9FC212E2 *, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m74AFBEADF13921EE528F5629B38B89C8C51EB2DC_gshared)(__this, method);
}
// UnityEngine.IntegratedSubsystem UnityEngine.SubsystemManager::GetIntegratedSubsystemByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * SubsystemManager_GetIntegratedSubsystemByPtr_mD152809BEEF4343B0AFD44A64EEE832ED90760EA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.XRInputSubsystem>::Invoke(!0)
inline void Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939 (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * __this, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m19C9BE11CA13915E2E14D5B4EC3EAF29CCC633E5 (IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_tD5C4AF38726B9433CFC3CA0F889D8C8C2535AEFE *, const RuntimeMethod*))IntegratedSubsystem_1__ctor_m429238094F2A54BAF2F6F89270D5D43241541E72_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRInputSubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_m98CC72EADB42D92099DBE358C296423D7751A741 (IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2 * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_t7D61E241AA40ECC23A367A5FAF509A54B1F77EF2 *, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m74AFBEADF13921EE528F5629B38B89C8C51EB2DC_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.MeshGenerationResult>::Invoke(!0)
inline void Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604 (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C *, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF , const RuntimeMethod*))Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>::.ctor()
inline void IntegratedSubsystem_1__ctor_m5D5CDD514B75369B0797B55401D9DD35908A2A26 (IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840 * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystem_1_t902A5B61CE879B3CD855E5CE6CAEEB1B9752E840 *, const RuntimeMethod*))IntegratedSubsystem_1__ctor_m429238094F2A54BAF2F6F89270D5D43241541E72_gshared)(__this, method);
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRMeshSubsystem>::.ctor()
inline void IntegratedSubsystemDescriptor_1__ctor_mBD46E84CF05A1E63F8FE6AB0C2F1C07AA8D2DAFB (IntegratedSubsystemDescriptor_1_t822E08B2CE1EC68FE74F71A682C9ECC6D52A6E89 * __this, const RuntimeMethod* method)
{
	((  void (*) (IntegratedSubsystemDescriptor_1_t822E08B2CE1EC68FE74F71A682C9ECC6D52A6E89 *, const RuntimeMethod*))IntegratedSubsystemDescriptor_1__ctor_m74AFBEADF13921EE528F5629B38B89C8C51EB2DC_gshared)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Vector3,UnityEngine.XR.AvailableTrackingData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inValue0, int32_t ___availabilityFlag1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___outValue2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Quaternion,UnityEngine.XR.AvailableTrackingData,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_mA9E1E814ADD386E55534FD5E97194A7FCF9AC719 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___inValue0, int32_t ___availabilityFlag1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___outValue2, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetVelocity_m05D4077510C20D407BDF4126A6E071FB3C0504D5 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularVelocity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAcceleration_m56AB0F9F0179D022DC23459304C7A2CA494EC89D (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___acceleration0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAcceleration0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat_Internal(System.IntPtr,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945 (intptr_t ___ptr0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * ____unity_self0, int32_t ___blitParameterIndex1, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4 (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * __this, int32_t ___blitParameterIndex0, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&,UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ____unity_self0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, int32_t ___renderParameterIndex2, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter(UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___renderParameterIndex1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter2, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ____unity_self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, const RuntimeMethod* method);
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
// System.UInt64 UnityEngine.XR.Bone::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_m_DeviceId_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * _thisAdjusted = reinterpret_cast<Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Bone::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_FeatureIndex_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * _thisAdjusted = reinterpret_cast<Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Bone::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_m2FBDCFEA8B90663E546294EBEB4763538DEEA412 (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = Bone_Equals_m025222EEBF2374226C62C32E1A7ADE3538C13AFB((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)__this, ((*(Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)UnBox(L_2, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Bone_Equals_m2FBDCFEA8B90663E546294EBEB4763538DEEA412_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * _thisAdjusted = reinterpret_cast<Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Bone_Equals_m2FBDCFEA8B90663E546294EBEB4763538DEEA412(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Bone::Equals(UnityEngine.XR.Bone)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_Equals_m025222EEBF2374226C62C32E1A7ADE3538C13AFB (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)__this, /*hidden argument*/NULL);
		uint64_t L_1;
		L_1 = Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)__this, /*hidden argument*/NULL);
		uint32_t L_3;
		L_3 = Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Bone_Equals_m025222EEBF2374226C62C32E1A7ADE3538C13AFB_AdjustorThunk (RuntimeObject * __this, Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * _thisAdjusted = reinterpret_cast<Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Bone_Equals_m025222EEBF2374226C62C32E1A7ADE3538C13AFB(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Bone::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bone_GetHashCode_m0ED7925C274DE8439749951FBE4E4EC28A797BFB (Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Bone_get_deviceId_mF1EBAD176E69C1074F55BFFF36372A48840B2FA2((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = Bone_get_featureIndex_m291227F499665BECC9D40723157367ECB56781C3((Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_m60E3A243F3D79311A64836148AE1AC23C679FC45((uint32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Bone_GetHashCode_m0ED7925C274DE8439749951FBE4E4EC28A797BFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 * _thisAdjusted = reinterpret_cast<Bone_t8EDF2FA2139528015195AF2EA866A28947C3F070 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Bone_GetHashCode_m0ED7925C274DE8439749951FBE4E4EC28A797BFB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.CommonUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonUsages__cctor_m13C3A6CB129CFCD08E9A069F4110EE830E4F24A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m44982DBFBF71598D4ADEE6632D78D390CEFA42D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F95F266081C6100AE45DE907603B48AEA88377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6459CE8416F57A02AC1631C840005271AED9865A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6502625D04056D74ABF5B399CAE63C245B679772);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE7365360EB45A9634579259D49C165CB873442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD42F30283C4CE60465C4010C800AD9704733102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8FEC942054577466215DA5251FB602E014D433B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_0), _stringLiteral9879D0ADEAA390A85EDC93BFD5A45C84F5E628DC, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_isTracked_0(L_0);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_1), _stringLiteralAC10ECED701E479DB1EB99F71C7E143BF33BDB28, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_primaryButton_1(L_1);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_2), _stringLiteralE87E0289369699E3077923D9BD0365C6E47D2BCA, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_primaryTouch_2(L_2);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_3), _stringLiteralDF0B09D3AC2B1A403AD50571DE6D02BADF994DF6, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_secondaryButton_3(L_3);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_4), _stringLiteral70BD96A9936A8229937A8E85846B5AE5657B701D, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_secondaryTouch_4(L_4);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_5;
		memset((&L_5), 0, sizeof(L_5));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_5), _stringLiteralACCB271B3F087252B60BC604A75AEE43F78DA580, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_gripButton_5(L_5);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_6;
		memset((&L_6), 0, sizeof(L_6));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_6), _stringLiteral9946FBE46CDE07D85A1306BBD66ABF2744491441, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_triggerButton_6(L_6);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_7;
		memset((&L_7), 0, sizeof(L_7));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_7), _stringLiteralC5505A25CF2D095FDF8936A52047CE843140CE71, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_menuButton_7(L_7);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_8;
		memset((&L_8), 0, sizeof(L_8));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_8), _stringLiteralC8E762418D8614D739AB43D7D2C189A29AF1145F, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_primary2DAxisClick_8(L_8);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_9;
		memset((&L_9), 0, sizeof(L_9));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_9), _stringLiteralD8FEC942054577466215DA5251FB602E014D433B, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_primary2DAxisTouch_9(L_9);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_10;
		memset((&L_10), 0, sizeof(L_10));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_10), _stringLiteral24B00BEE43751066E2697652F1D6D262C07E28BF, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_secondary2DAxisClick_10(L_10);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_11;
		memset((&L_11), 0, sizeof(L_11));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_11), _stringLiteral38500B43596E22322F78E4DB6623115A6D7C5B24, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_secondary2DAxisTouch_11(L_11);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_12;
		memset((&L_12), 0, sizeof(L_12));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_12), _stringLiteral6502625D04056D74ABF5B399CAE63C245B679772, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_userPresence_12(L_12);
		InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  L_13;
		memset((&L_13), 0, sizeof(L_13));
		InputFeatureUsage_1__ctor_m44982DBFBF71598D4ADEE6632D78D390CEFA42D5((&L_13), _stringLiteral61CF6DD5C950AF267302979E2305DF65E8D23BB5, /*hidden argument*/InputFeatureUsage_1__ctor_m44982DBFBF71598D4ADEE6632D78D390CEFA42D5_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_trackingState_13(L_13);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_14;
		memset((&L_14), 0, sizeof(L_14));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_14), _stringLiteral35D45FCF9796C71E0A4EF694D764079CDC76C5D3, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_batteryLevel_14(L_14);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_15;
		memset((&L_15), 0, sizeof(L_15));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_15), _stringLiteralB85E78C75EF1A6F636689BD88A9D6C2A3B2B0A1B, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_trigger_15(L_15);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_16;
		memset((&L_16), 0, sizeof(L_16));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_16), _stringLiteralB4FE860573CD6E03F0D1A4378C1F330A3820D8C9, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_grip_16(L_16);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_17;
		memset((&L_17), 0, sizeof(L_17));
		InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C((&L_17), _stringLiteral754BC8CC289786CFBEFC86F613F47EEC45C9D500, /*hidden argument*/InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_primary2DAxis_17(L_17);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_18;
		memset((&L_18), 0, sizeof(L_18));
		InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C((&L_18), _stringLiteralB387D42F0AFA94CE7B6979B587B90DD3FE6E03AE, /*hidden argument*/InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_secondary2DAxis_18(L_18);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_19;
		memset((&L_19), 0, sizeof(L_19));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_19), _stringLiteral84102F76CEAE29A2E33E4E0217B1E11BCDA39366, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_devicePosition_19(L_19);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_20;
		memset((&L_20), 0, sizeof(L_20));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_20), _stringLiteral29578BD9C3867E5BD732AD2D6724DF8BBBC6ABF7, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyePosition_20(L_20);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_21;
		memset((&L_21), 0, sizeof(L_21));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_21), _stringLiteralAA5D30BC4A4A248920FD5E69504B53056B14F7EC, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyePosition_21(L_21);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_22;
		memset((&L_22), 0, sizeof(L_22));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_22), _stringLiteralECA2F6D5759EE143EA8C00BC3BFFCA73414785B8, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyePosition_22(L_22);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_23;
		memset((&L_23), 0, sizeof(L_23));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_23), _stringLiteral03F95F266081C6100AE45DE907603B48AEA88377, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraPosition_23(L_23);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_24;
		memset((&L_24), 0, sizeof(L_24));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_24), _stringLiteral9633378B6C362D31F3D20E2E4BF69E20C5556E0F, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_deviceVelocity_24(L_24);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_25;
		memset((&L_25), 0, sizeof(L_25));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_25), _stringLiteralE4E6F213F1AEACB4233E3E6BBB9F569BEEBA7756, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_deviceAngularVelocity_25(L_25);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_26;
		memset((&L_26), 0, sizeof(L_26));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_26), _stringLiteralC8E4099C5B3BD54FEF6692054B61857D790EA02E, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyeVelocity_26(L_26);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_27;
		memset((&L_27), 0, sizeof(L_27));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_27), _stringLiteral9DC93EACCD7355C105755CBE57F415C879EBA48E, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyeAngularVelocity_27(L_27);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_28;
		memset((&L_28), 0, sizeof(L_28));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_28), _stringLiteral227D9F9D7F0691964EAA2E30C2C2DC14C04A3D05, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyeVelocity_28(L_28);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_29;
		memset((&L_29), 0, sizeof(L_29));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_29), _stringLiteral95E9A1E3972FD2FE6576337B0060276E2CA5FFE3, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyeAngularVelocity_29(L_29);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_30;
		memset((&L_30), 0, sizeof(L_30));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_30), _stringLiteralC0E30FBC86A20CADAC60192FFB6B9C72C65CCF0E, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyeVelocity_30(L_30);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_31;
		memset((&L_31), 0, sizeof(L_31));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_31), _stringLiteralE86EACFED9F6FA05AD72CEB29F5D9BC7189FDBEE, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyeAngularVelocity_31(L_31);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_32;
		memset((&L_32), 0, sizeof(L_32));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_32), _stringLiteralB6F2679FF2ED335CED04DD9F20B320A9562207AC, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraVelocity_32(L_32);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_33;
		memset((&L_33), 0, sizeof(L_33));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_33), _stringLiteralB0073BD5ACF886468B949EC07746EAA9F4153149, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraAngularVelocity_33(L_33);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_34;
		memset((&L_34), 0, sizeof(L_34));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_34), _stringLiteralEC1F89EF78546399906890624140735FFFA3EFAA, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_deviceAcceleration_34(L_34);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_35;
		memset((&L_35), 0, sizeof(L_35));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_35), _stringLiteral90778E65BEFB370548F8CFA394C23A045A0A07FF, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_deviceAngularAcceleration_35(L_35);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_36;
		memset((&L_36), 0, sizeof(L_36));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_36), _stringLiteralDAE5C8C7FC887DC7AC6D80AE8A8715E4DFB5462B, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyeAcceleration_36(L_36);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_37;
		memset((&L_37), 0, sizeof(L_37));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_37), _stringLiteralA832960DBF85D5B0B42A99FAFE6E782202201BEC, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyeAngularAcceleration_37(L_37);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_38;
		memset((&L_38), 0, sizeof(L_38));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_38), _stringLiteralA821A896CE6F42BB6E717BDB3EE86E19E73DBCA6, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyeAcceleration_38(L_38);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_39;
		memset((&L_39), 0, sizeof(L_39));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_39), _stringLiteral8AA65A41D8DDA3F1BCA101FADDADFF30771776BF, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyeAngularAcceleration_39(L_39);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_40;
		memset((&L_40), 0, sizeof(L_40));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_40), _stringLiteralF0339F2B8C23E97D992FC8EF5C3B1CAA3D72B0DF, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyeAcceleration_40(L_40);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_41;
		memset((&L_41), 0, sizeof(L_41));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_41), _stringLiteral6459CE8416F57A02AC1631C840005271AED9865A, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyeAngularAcceleration_41(L_41);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_42;
		memset((&L_42), 0, sizeof(L_42));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_42), _stringLiteralD95E0F430871054A7F508E89236049195FE4C4B4, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraAcceleration_42(L_42);
		InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_43;
		memset((&L_43), 0, sizeof(L_43));
		InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B((&L_43), _stringLiteral93F25E58DBA8A557F895FF1B78AD81FA02E26332, /*hidden argument*/InputFeatureUsage_1__ctor_mB7291B69529D3D20070F308210E0AEC1AC3FA77B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraAngularAcceleration_43(L_43);
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_44;
		memset((&L_44), 0, sizeof(L_44));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_44), _stringLiteral48AE17AF47CEC5A825E7762BA0D99A995B7DAB44, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_deviceRotation_44(L_44);
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_45;
		memset((&L_45), 0, sizeof(L_45));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_45), _stringLiteralA236D1D85DBA0340D4B9D6DA4793F28122ABDB4B, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_leftEyeRotation_45(L_45);
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_46;
		memset((&L_46), 0, sizeof(L_46));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_46), _stringLiteral6E84C3C9CABFB9B7E1973C68615694836C689630, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_rightEyeRotation_46(L_46);
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_47;
		memset((&L_47), 0, sizeof(L_47));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_47), _stringLiteralFAADF4A00DE209941E8563D4803C5546439877F3, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_centerEyeRotation_47(L_47);
		InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_48;
		memset((&L_48), 0, sizeof(L_48));
		InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465((&L_48), _stringLiteralAE76E0A93C646A4D171FC6C55BF45E1F3B7C1B34, /*hidden argument*/InputFeatureUsage_1__ctor_mFA680A87265CD87295096C040D21180ABD15E465_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_colorCameraRotation_48(L_48);
		InputFeatureUsage_1_tE0761BFB6E30AE61DA99E3B1974C8A2B784A335E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3((&L_49), _stringLiteral3A5FEEEA6CC9DC4CE7D578724AB0F8A114AC32FC, /*hidden argument*/InputFeatureUsage_1__ctor_m05E4D2180740164A7088D3542064A1A26030B8B3_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_handData_49(L_49);
		InputFeatureUsage_1_tA21EB101B253A2F3BE3AFE58A4EDDB48E61D0EC7  L_50;
		memset((&L_50), 0, sizeof(L_50));
		InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2((&L_50), _stringLiteralCBE7365360EB45A9634579259D49C165CB873442, /*hidden argument*/InputFeatureUsage_1__ctor_m1CACB6DCDE1118D63C76593288C661125068AEF2_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_eyesData_50(L_50);
		InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_51;
		memset((&L_51), 0, sizeof(L_51));
		InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C((&L_51), _stringLiteral52749A6319C3C338DB30E0EFAB91CE5AA5C6B174, /*hidden argument*/InputFeatureUsage_1__ctor_m61F3D0F63039EBF07EF45EAF6ADD15EE734CC94C_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_dPad_51(L_51);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_52;
		memset((&L_52), 0, sizeof(L_52));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_52), _stringLiteralF40999422A118C6EE66D1E75FEBC28A9B24DA371, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_indexFinger_52(L_52);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_53;
		memset((&L_53), 0, sizeof(L_53));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_53), _stringLiteralAC1362F1885AF603DF875FBCAAD403A8D46251A2, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_middleFinger_53(L_53);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_54;
		memset((&L_54), 0, sizeof(L_54));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_54), _stringLiteral726E3C457BDB29067B179DDEF38C1A489A2A5459, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_ringFinger_54(L_54);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_55;
		memset((&L_55), 0, sizeof(L_55));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_55), _stringLiteral66240DBC99CA039EAF0520B5272BD8DA371603A2, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_pinkyFinger_55(L_55);
		InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_56;
		memset((&L_56), 0, sizeof(L_56));
		InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B((&L_56), _stringLiteralCD42F30283C4CE60465C4010C800AD9704733102, /*hidden argument*/InputFeatureUsage_1__ctor_mEE947872BF40C181B3612C9FDC0F63F61E05266B_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_thumbrest_56(L_56);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_57;
		memset((&L_57), 0, sizeof(L_57));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_57), _stringLiteral549D4E1BD7FFA7F485E084D961369B26386BA2A5, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_indexTouch_57(L_57);
		InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_58;
		memset((&L_58), 0, sizeof(L_58));
		InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693((&L_58), _stringLiteralDCD1BF12664AC38299958513D10BAA016D22904B, /*hidden argument*/InputFeatureUsage_1__ctor_mC5DB990E503E023D4A66AF4C4B2AAC9040D00693_RuntimeMethod_var);
		((CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t7C87E4E093DD61D8467CC60E3CF211F4BEAB466A_il2cpp_TypeInfo_var))->set_thumbTouch_58(L_58);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4E9EEA70016F5DDF1137BD478DC0BB0D2A3EB1A0 (EmbeddedAttribute_t5E067CFFC785D2CA342F4F32B80BDC1D221BAC98 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.UInt64 UnityEngine.XR.Eyes::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_m_DeviceId_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * _thisAdjusted = reinterpret_cast<Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Eyes::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_FeatureIndex_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * _thisAdjusted = reinterpret_cast<Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Eyes::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m58897DB2EEC48809233B94BB4CEA166B8ACEBFF2 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = Eyes_Equals_m60083B041FECD045D717F2873BF2E21AA9A4FD01((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)__this, ((*(Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)UnBox(L_2, Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Eyes_Equals_m58897DB2EEC48809233B94BB4CEA166B8ACEBFF2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * _thisAdjusted = reinterpret_cast<Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *>(__this + _offset);
	bool _returnValue;
	_returnValue = Eyes_Equals_m58897DB2EEC48809233B94BB4CEA166B8ACEBFF2(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Eyes::Equals(UnityEngine.XR.Eyes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Eyes_Equals_m60083B041FECD045D717F2873BF2E21AA9A4FD01 (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)__this, /*hidden argument*/NULL);
		uint64_t L_1;
		L_1 = Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)__this, /*hidden argument*/NULL);
		uint32_t L_3;
		L_3 = Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Eyes_Equals_m60083B041FECD045D717F2873BF2E21AA9A4FD01_AdjustorThunk (RuntimeObject * __this, Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * _thisAdjusted = reinterpret_cast<Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *>(__this + _offset);
	bool _returnValue;
	_returnValue = Eyes_Equals_m60083B041FECD045D717F2873BF2E21AA9A4FD01(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Eyes::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Eyes_GetHashCode_mA9742A7C19500C6C17EDCD5EED7954A9FE91C0DD (Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Eyes_get_deviceId_m5587223FE834DE2ABDC32F9E8FE6D768D4DDF936((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = Eyes_get_featureIndex_mBABAD5CFCF0585EE4791C0E1C3E2562627491237((Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_m60E3A243F3D79311A64836148AE1AC23C679FC45((uint32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Eyes_GetHashCode_mA9742A7C19500C6C17EDCD5EED7954A9FE91C0DD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D * _thisAdjusted = reinterpret_cast<Eyes_t8097B0BA9FC12824F6ABD076309CEAC1047C094D *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Eyes_GetHashCode_mA9742A7C19500C6C17EDCD5EED7954A9FE91C0DD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 UnityEngine.XR.Hand::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->get_m_DeviceId_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint64_t Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * _thisAdjusted = reinterpret_cast<Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 UnityEngine.XR.Hand::get_featureIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_FeatureIndex_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * _thisAdjusted = reinterpret_cast<Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hand::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m727113281F30E554A3A60DEFC4ED61CC94901775 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hand_tB64007EC8D01384426C93432737BA9C5F636A690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Hand_tB64007EC8D01384426C93432737BA9C5F636A690_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = Hand_Equals_m099C7921633095BB40C830B6F5558F99ED0D7BD0((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)__this, ((*(Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)UnBox(L_2, Hand_tB64007EC8D01384426C93432737BA9C5F636A690_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Hand_Equals_m727113281F30E554A3A60DEFC4ED61CC94901775_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * _thisAdjusted = reinterpret_cast<Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Hand_Equals_m727113281F30E554A3A60DEFC4ED61CC94901775(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.Hand::Equals(UnityEngine.XR.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_Equals_m099C7921633095BB40C830B6F5558F99ED0D7BD0 (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0;
		L_0 = Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)__this, /*hidden argument*/NULL);
		uint64_t L_1;
		L_1 = Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_0) == ((uint64_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		uint32_t L_2;
		L_2 = Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)__this, /*hidden argument*/NULL);
		uint32_t L_3;
		L_3 = Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Hand_Equals_m099C7921633095BB40C830B6F5558F99ED0D7BD0_AdjustorThunk (RuntimeObject * __this, Hand_tB64007EC8D01384426C93432737BA9C5F636A690  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * _thisAdjusted = reinterpret_cast<Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *>(__this + _offset);
	bool _returnValue;
	_returnValue = Hand_Equals_m099C7921633095BB40C830B6F5558F99ED0D7BD0(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.Hand::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hand_GetHashCode_mFC8C4732F0B728122C3ABCC623699DA7E47D1CCB (Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		uint64_t L_0;
		L_0 = Hand_get_deviceId_mD45907CDFDBF2CE754444358020196A8C6BEE3D1((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		uint32_t L_2;
		L_2 = Hand_get_featureIndex_mB8A458180449B2C2D38D5405BA26577CF1A60897((Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_m60E3A243F3D79311A64836148AE1AC23C679FC45((uint32_t*)(&V_1), /*hidden argument*/NULL);
		V_2 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)1))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t Hand_GetHashCode_mFC8C4732F0B728122C3ABCC623699DA7E47D1CCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Hand_tB64007EC8D01384426C93432737BA9C5F636A690 * _thisAdjusted = reinterpret_cast<Hand_tB64007EC8D01384426C93432737BA9C5F636A690 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Hand_GetHashCode_mFC8C4732F0B728122C3ABCC623699DA7E47D1CCB(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.XR.HashCodeHelper::Combine(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543 (int32_t ___hash10, int32_t ___hash21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___hash10;
		int32_t L_1 = ___hash21;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739))), (int32_t)L_1));
		goto IL_000d;
	}

IL_000d:
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
// Conversion methods for marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke(const InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E& unmarshaled, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke& marshaled)
{
	marshaled.___m_DeviceId_0 = unmarshaled.get_m_DeviceId_0();
	marshaled.___m_Initialized_1 = static_cast<int32_t>(unmarshaled.get_m_Initialized_1());
}
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_back(const InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke& marshaled, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E& unmarshaled)
{
	uint64_t unmarshaled_m_DeviceId_temp_0 = 0;
	unmarshaled_m_DeviceId_temp_0 = marshaled.___m_DeviceId_0;
	unmarshaled.set_m_DeviceId_0(unmarshaled_m_DeviceId_temp_0);
	bool unmarshaled_m_Initialized_temp_1 = false;
	unmarshaled_m_Initialized_temp_1 = static_cast<bool>(marshaled.___m_Initialized_1);
	unmarshaled.set_m_Initialized_1(unmarshaled_m_Initialized_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_pinvoke_cleanup(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_com(const InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E& unmarshaled, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com& marshaled)
{
	marshaled.___m_DeviceId_0 = unmarshaled.get_m_DeviceId_0();
	marshaled.___m_Initialized_1 = static_cast<int32_t>(unmarshaled.get_m_Initialized_1());
}
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_com_back(const InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com& marshaled, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E& unmarshaled)
{
	uint64_t unmarshaled_m_DeviceId_temp_0 = 0;
	unmarshaled_m_DeviceId_temp_0 = marshaled.___m_DeviceId_0;
	unmarshaled.set_m_DeviceId_0(unmarshaled_m_DeviceId_temp_0);
	bool unmarshaled_m_Initialized_temp_1 = false;
	unmarshaled_m_Initialized_temp_1 = static_cast<bool>(marshaled.___m_Initialized_1);
	unmarshaled.set_m_Initialized_1(unmarshaled_m_Initialized_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevice
IL2CPP_EXTERN_C void InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshal_com_cleanup(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.InputDevice::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, uint64_t ___deviceId0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___deviceId0;
		__this->set_m_DeviceId_0(L_0);
		__this->set_m_Initialized_1((bool)1);
		return;
	}
}
IL2CPP_EXTERN_C  void InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE_AdjustorThunk (RuntimeObject * __this, uint64_t ___deviceId0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE(_thisAdjusted, ___deviceId0, method);
}
// System.UInt64 UnityEngine.XR.InputDevice::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_m_Initialized_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((uint64_t)(((int64_t)((int64_t)(-1)))));
		goto IL_0013;
	}

IL_000d:
	{
		uint64_t L_1 = __this->get_m_DeviceId_0();
		G_B3_0 = L_1;
	}

IL_0013:
	{
		V_0 = G_B3_0;
		goto IL_0016;
	}

IL_0016:
	{
		uint64_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint64_t InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		uint64_t L_1 = __this->get_m_DeviceId_0();
		bool L_2;
		L_2 = InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_get_isValid_mEC01F2DE9E9A9E1F612176B8B955F29864294DF6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0017;
	}

IL_000c:
	{
		uint64_t L_1 = __this->get_m_DeviceId_0();
		uint32_t L_2;
		L_2 = InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		uint32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  uint32_t InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::IsValidId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int64_t)L_0) == ((int64_t)((int64_t)((int64_t)(-1)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_IsValidId_mA4DA4E9823C089329BD48D79936D70499EDF8B1F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool* L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, (bool*)L_0, /*hidden argument*/InputDevice_CheckValidAndSetDefault_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mF81ACFBF626DAB523DDBAA1600546892AA684013_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->get_m_DeviceId_0();
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_inline((InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 *)(&___usage0), /*hidden argument*/InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_RuntimeMethod_var);
		bool* L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D(L_3, L_4, (bool*)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_0 = ___value1;
		bool L_1;
		L_1 = InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_0, /*hidden argument*/InputDevice_CheckValidAndSetDefault_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m318BA27D054B0B3AD603459D7319D71A5F1628BC_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		uint64_t L_3 = __this->get_m_DeviceId_0();
		String_t* L_4;
		L_4 = InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_inline((InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 *)(&___usage0), /*hidden argument*/InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_RuntimeMethod_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = ___value1;
		bool L_6;
		L_6 = InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB(L_3, L_4, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0022:
	{
		V_1 = (bool)0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0(_thisAdjusted, ___usage0, ___value1, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_mF29A225E81A87941551F70A2351CB803A6D94063 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = InputDevice_Equals_m9661F95B50387146BC3C6F5DC63FDF2B1303ABB7((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, ((*(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)UnBox(L_2, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_Equals_mF29A225E81A87941551F70A2351CB803A6D94063_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_Equals_mF29A225E81A87941551F70A2351CB803A6D94063(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputDevice::Equals(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_Equals_m9661F95B50387146BC3C6F5DC63FDF2B1303ABB7 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, /*hidden argument*/NULL);
		uint64_t L_1;
		L_1 = InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&___other0), /*hidden argument*/NULL);
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)L_1))? 1 : 0);
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool InputDevice_Equals_m9661F95B50387146BC3C6F5DC63FDF2B1303ABB7_AdjustorThunk (RuntimeObject * __this, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputDevice_Equals_m9661F95B50387146BC3C6F5DC63FDF2B1303ABB7(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.InputDevice::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDevice_GetHashCode_mFD9C9A6015B91E254DD53E14651C8D08F715D7F8 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint64_t L_0;
		L_0 = InputDevice_get_deviceId_m86C962E24F26D879240A6E889E9E8D3D94F546A5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_1;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t InputDevice_GetHashCode_mFD9C9A6015B91E254DD53E14651C8D08F715D7F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * _thisAdjusted = reinterpret_cast<InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = InputDevice_GetHashCode_mFD9C9A6015B91E254DD53E14651C8D08F715D7F8(_thisAdjusted, method);
	return _returnValue;
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
// Conversion methods for marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke(const InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC& unmarshaled, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_back(const InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_pinvoke& marshaled, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_pinvoke_cleanup(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_com(const InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC& unmarshaled, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_com& marshaled)
{
}
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_com_back(const InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_com& marshaled, InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputDevices
IL2CPP_EXTERN_C void InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshal_com_cleanup(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_marshaled_com& marshaled)
{
}
// UnityEngine.XR.InputDevice UnityEngine.XR.InputDevices::GetDeviceAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  InputDevices_GetDeviceAtXRNode_m9C3B0EB82209A9A2950B1ED5456AEB48EB8AE6E4 (int32_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___node0;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		uint64_t L_2 = V_0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE((&L_3), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = ___inputDevices1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3760CD7BFF60A97B8C875A7D181C4EB264D196FA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_3 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_s_InputDeviceList_0();
		V_1 = (bool)((((RuntimeObject*)(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_5 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_5, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->set_s_InputDeviceList_0(L_5);
	}

IL_002a:
	{
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_6 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_s_InputDeviceList_0();
		InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68(L_6, /*hidden argument*/NULL);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_7 = ___inputDevices1;
		NullCheck(L_7);
		List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557(L_7, /*hidden argument*/List_1_Clear_m87CD11F78B15EED098160B9202B6433895156557_RuntimeMethod_var);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_8 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_s_InputDeviceList_0();
		NullCheck(L_8);
		Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D  L_9;
		L_9 = List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B(L_8, /*hidden argument*/List_1_GetEnumerator_m4A14D3A99576EBD72E02E93E369B94D1F15B4C5B_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_004a:
		{
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_10;
			L_10 = Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_inline((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_2), /*hidden argument*/Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_RuntimeMethod_var);
			V_3 = L_10;
			uint32_t L_11;
			L_11 = InputDevice_get_characteristics_mF7A1F32CD82CA6EE97AD113089F063109322C63A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_3), /*hidden argument*/NULL);
			uint32_t L_12 = ___desiredCharacteristics0;
			uint32_t L_13 = ___desiredCharacteristics0;
			V_4 = (bool)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)L_12))) == ((int32_t)L_13))? 1 : 0);
			bool L_14 = V_4;
			if (!L_14)
			{
				goto IL_006c;
			}
		}

IL_0064:
		{
			List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_15 = ___inputDevices1;
			InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_16 = V_3;
			NullCheck(L_15);
			List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882(L_15, L_16, /*hidden argument*/List_1_Add_m4159F1B0ECD0879F267F524018F36781CDEAD882_RuntimeMethod_var);
		}

IL_006c:
		{
			bool L_17;
			L_17 = Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m23702EF6B11A2136B37C92CFEFEB678510A98A69_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_004a;
			}
		}

IL_0075:
		{
			IL2CPP_LEAVE(0x86, FINALLY_0077);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0077;
	}

FINALLY_0077:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92((Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D *)(&V_2), /*hidden argument*/Enumerator_Dispose_m11F64ED5C59482D991DECEB78DB84602AE632F92_RuntimeMethod_var);
		IL2CPP_END_FINALLY(119)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(119)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
	}

IL_0086:
	{
		return;
	}
}
// System.Void UnityEngine.XR.InputDevices::InvokeConnectionEvent(System.UInt64,UnityEngine.XR.ConnectionChangeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_InvokeConnectionEvent_m19E87BB6671D4B4CE3EB322EEE3621B0146A7077 (uint64_t ___deviceId0, uint32_t ___change1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		uint32_t L_0 = ___change1;
		V_1 = L_0;
		uint32_t L_1 = V_1;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0019:
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_3 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceConnected_1();
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_5 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceConnected_1();
		uint64_t L_6 = ___deviceId0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE((&L_7), L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970(L_5, L_7, /*hidden argument*/Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_RuntimeMethod_var);
	}

IL_0037:
	{
		goto IL_007b;
	}

IL_0039:
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_8 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceDisconnected_2();
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_10 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceDisconnected_2();
		uint64_t L_11 = ___deviceId0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE((&L_12), L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970(L_10, L_12, /*hidden argument*/Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_RuntimeMethod_var);
	}

IL_0057:
	{
		goto IL_007b;
	}

IL_0059:
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_13 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceConfigChanged_3();
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		Action_1_tD14DA73DE0FBEFB24671F37EB0148705E00E11E8 * L_15 = ((InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_StaticFields*)il2cpp_codegen_static_fields_for(InputDevices_t50F530D78AE16C2F160416FBAE9BC04024C448CC_il2cpp_TypeInfo_var))->get_deviceConfigChanged_3();
		uint64_t L_16 = ___deviceId0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		InputDevice__ctor_m610666CA01BCAF92464BE9C17BFB133A23A663BE((&L_17), L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970(L_15, L_17, /*hidden argument*/Action_1_Invoke_mA460B359B13BDCF71CDDE9A8A960C827A4E3E970_RuntimeMethod_var);
	}

IL_0079:
	{
		goto IL_007b;
	}

IL_007b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.InputDevices::GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices0, const RuntimeMethod* method)
{
	typedef void (*InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68_ftn) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *);
	static InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_GetDevices_Internal_mBC20AF0118EAAC55A790BCA4E48E7C7EDD9B7A68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::GetDevices_Internal(System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)");
	_il2cpp_icall_func(___inputDevices0);
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D (uint64_t ___deviceId0, String_t* ___usage1, bool* ___value2, const RuntimeMethod* method)
{
	typedef bool (*InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D_ftn) (uint64_t, String_t*, bool*);
	static InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_bool_m3CD1DD8C1A2ED2780747CD4BFEE85F129B1C497D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_bool(System.UInt64,System.String,System.Boolean&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB (uint64_t ___deviceId0, String_t* ___usage1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value2, const RuntimeMethod* method)
{
	typedef bool (*InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB_ftn) (uint64_t, String_t*, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_TryGetFeatureValue_Quaternionf_m311EFFC92912AC9979DAAC31C642202D5E7E26EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::TryGetFeatureValue_Quaternionf(System.UInt64,System.String,UnityEngine.Quaternion&)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0, ___usage1, ___value2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47 (uint64_t ___deviceId0, const RuntimeMethod* method)
{
	typedef bool (*InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47_ftn) (uint64_t);
	static InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_IsDeviceValid_m1752F226E5552BE398A8EAD41A131E8A5D6F9E47_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::IsDeviceValid(System.UInt64)");
	bool icallRetVal = _il2cpp_icall_func(___deviceId0);
	return icallRetVal;
}
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevices::GetDeviceCharacteristics(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A (uint64_t ___deviceId0, const RuntimeMethod* method)
{
	typedef uint32_t (*InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A_ftn) (uint64_t);
	static InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputDevices_GetDeviceCharacteristics_m233D14D70DC0B73740427D7FBA7835BEE583B68A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputDevices::GetDeviceCharacteristics(System.UInt64)");
	uint32_t icallRetVal = _il2cpp_icall_func(___deviceId0);
	return icallRetVal;
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
// Conversion methods for marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke(const InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE& unmarshaled, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Name_0());
	marshaled.___m_InternalType_1 = unmarshaled.get_m_InternalType_1();
}
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_back(const InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_pinvoke& marshaled, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	uint32_t unmarshaled_m_InternalType_temp_1 = 0;
	unmarshaled_m_InternalType_temp_1 = marshaled.___m_InternalType_1;
	unmarshaled.set_m_InternalType_1(unmarshaled_m_InternalType_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_pinvoke_cleanup(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_com(const InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE& unmarshaled, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Name_0());
	marshaled.___m_InternalType_1 = unmarshaled.get_m_InternalType_1();
}
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_com_back(const InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_com& marshaled, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	uint32_t unmarshaled_m_InternalType_temp_1 = 0;
	unmarshaled_m_InternalType_temp_1 = marshaled.___m_InternalType_1;
	unmarshaled.set_m_InternalType_1(unmarshaled_m_InternalType_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.InputFeatureUsage
IL2CPP_EXTERN_C void InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshal_com_cleanup(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * _thisAdjusted = reinterpret_cast<InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::get_internalType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_InternalType_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * _thisAdjusted = reinterpret_cast<InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_mC0A1A665A98F42B2D5896BB9BC4CBA42FB59D582 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = InputFeatureUsage_Equals_mD7107D9A754188766EACB7FAAF015E184FE706B9((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)__this, ((*(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)UnBox(L_2, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_Equals_mC0A1A665A98F42B2D5896BB9BC4CBA42FB59D582_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * _thisAdjusted = reinterpret_cast<InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputFeatureUsage_Equals_mC0A1A665A98F42B2D5896BB9BC4CBA42FB59D582(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.InputFeatureUsage::Equals(UnityEngine.XR.InputFeatureUsage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFeatureUsage_Equals_mD7107D9A754188766EACB7FAAF015E184FE706B9 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0;
		L_0 = InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		uint32_t L_3;
		L_3 = InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)__this, /*hidden argument*/NULL);
		uint32_t L_4;
		L_4 = InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&___other0), /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool InputFeatureUsage_Equals_mD7107D9A754188766EACB7FAAF015E184FE706B9_AdjustorThunk (RuntimeObject * __this, InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * _thisAdjusted = reinterpret_cast<InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *>(__this + _offset);
	bool _returnValue;
	_returnValue = InputFeatureUsage_Equals_mD7107D9A754188766EACB7FAAF015E184FE706B9(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.InputFeatureUsage::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFeatureUsage_GetHashCode_m08673D24DA7804D87915443A647AA65447C511D1 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0;
		L_0 = InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		uint32_t L_2;
		L_2 = InputFeatureUsage_get_internalType_m55D87EBFF5CA6781AA831A3FAAA75BD80A13B065((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = UInt32_GetHashCode_m60E3A243F3D79311A64836148AE1AC23C679FC45((uint32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)1))));
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t InputFeatureUsage_GetHashCode_m08673D24DA7804D87915443A647AA65447C511D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * _thisAdjusted = reinterpret_cast<InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = InputFeatureUsage_GetHashCode_m08673D24DA7804D87915443A647AA65447C511D1(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.InputTracking::InvokeTrackingEvent(UnityEngine.XR.InputTracking/TrackingStateEventType,UnityEngine.XR.XRNode,System.Int64,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_InvokeTrackingEvent_mF9CC9853D284F640ACEB29225EF35646166061A0 (int32_t ___eventType0, int32_t ___nodeType1, int64_t ___uniqueID2, bool ___tracked3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * V_0 = NULL;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = (Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)NULL;
		il2cpp_codegen_initobj((&V_1), sizeof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 ));
		int64_t L_0 = ___uniqueID2;
		XRNodeState_set_uniqueID_m09D6E80AD1B81D7485242CFA27A7173A6231CA87((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___nodeType1;
		XRNodeState_set_nodeType_m9ADECAA5D665042FCA2F8E81726AFD1A1FA8B30D((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), L_1, /*hidden argument*/NULL);
		bool L_2 = ___tracked3;
		XRNodeState_set_tracked_m27DDD443D10F5F43B5B9AA83BFE901DC12316B9C((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)(&V_1), L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___eventType0;
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_6 = ((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->get_trackingAcquired_0();
		V_0 = L_6;
		goto IL_007f;
	}

IL_004a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_7 = ((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->get_trackingLost_1();
		V_0 = L_7;
		goto IL_007f;
	}

IL_0052:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_8 = ((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->get_nodeAdded_2();
		V_0 = L_8;
		goto IL_007f;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_9 = ((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->get_nodeRemoved_3();
		V_0 = L_9;
		goto IL_007f;
	}

IL_0062:
	{
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrackingStateEventType_t301E0DD44D089E06B0BBA994F682CE9F23505BA5_il2cpp_TypeInfo_var)), (&___eventType0));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		___eventType0 = *(int32_t*)UnBox(L_10);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF953F17BB91EBF78300169DEE55CE060B4F1C569)), L_11, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputTracking_InvokeTrackingEvent_mF9CC9853D284F640ACEB29225EF35646166061A0_RuntimeMethod_var)));
	}

IL_007f:
	{
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_14 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 * L_16 = V_0;
		XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  L_17 = V_1;
		NullCheck(L_16);
		Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946(L_16, L_17, /*hidden argument*/Action_1_Invoke_mD7440CB91FE64B4EAD0D34248075E0F39797C946_RuntimeMethod_var);
	}

IL_0093:
	{
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.XR.InputTracking::GetLocalRotation(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  InputTracking_GetLocalRotation_m03C0D88C3F5EA32254BB2E45CFDF93B988B83715 (int32_t ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___node0;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9(L_0, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_0 = ___nodeStates0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC7F8151EEA0D66BB2B72D6025CBD04BE6673ED7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputTracking_GetNodeStates_m0C47A6D099EE6EAC2D64B2D1D23DA72E4D42B880_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_3 = ___nodeStates0;
		NullCheck(L_3);
		List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385(L_3, /*hidden argument*/List_1_Clear_m1EA1E216F7B35340ED49C38234061E659E808385_RuntimeMethod_var);
		List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * L_4 = ___nodeStates0;
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5 (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 * ___nodeStates0, const RuntimeMethod* method)
{
	typedef void (*InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5_ftn) (List_1_t82E4873F3D4F1E8645F8EAD444668DC81AB70671 *);
	static InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputTracking_GetNodeStates_Internal_m89709CE0BE6D72DC31225AAF61563E3C7375B4E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)");
	_il2cpp_icall_func(___nodeStates0);
}
// System.UInt64 UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03 (int32_t ___node0, const RuntimeMethod* method)
{
	typedef uint64_t (*InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03_ftn) (int32_t);
	static InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputTracking_GetDeviceIdAtXRNode_m3B32D160DEAD6958C077AF3E18F6D45D83CB8E03_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputTracking::GetDeviceIdAtXRNode(UnityEngine.XR.XRNode)");
	uint64_t icallRetVal = _il2cpp_icall_func(___node0);
	return icallRetVal;
}
// System.Void UnityEngine.XR.InputTracking::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking__cctor_m8C342AE21A5D67A0378CE91016DBCCFFC62E34ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->set_trackingAcquired_0((Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)NULL);
		((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->set_trackingLost_1((Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)NULL);
		((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->set_nodeAdded_2((Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)NULL);
		((InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2CCE92D4A5FE0AEBC14996566D93ED4B08F4CB6D_il2cpp_TypeInfo_var))->set_nodeRemoved_3((Action_1_t016EBE9560F0A12616F6E8C2FB15578C134D1603 *)NULL);
		return;
	}
}
// System.Void UnityEngine.XR.InputTracking::GetLocalRotation_Injected(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9 (int32_t ___node0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9_ftn) (int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *);
	static InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InputTracking_GetLocalRotation_Injected_m53267E9A1557E8C0669CB762CBB628404377FED9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.InputTracking::GetLocalRotation_Injected(UnityEngine.XR.XRNode,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___node0, ___ret1);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m6627A1A5600798A4080F1046794105F485DEB04B (IsReadOnlyAttribute_tB501C0AF1B2E1105879F40DF285FD445422C6756 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke(const MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF& unmarshaled, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_back(const MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_pinvoke& marshaled, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF& unmarshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_pinvoke_cleanup(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_com(const MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF& unmarshaled, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_com& marshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_com_back(const MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_com& marshaled, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF& unmarshaled)
{
	Exception_t* ___U3CMeshU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Mesh>k__BackingField' of type 'MeshGenerationResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CMeshU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.MeshGenerationResult
IL2CPP_EXTERN_C void MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshal_com_cleanup(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_marshaled_com& marshaled)
{
}
// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::get_MeshId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  _returnValue;
	_returnValue = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::get_Mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_U3CMeshU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * _returnValue;
	_returnValue = MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::get_MeshCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_0 = __this->get_U3CMeshColliderU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * _returnValue;
	_returnValue = MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttributesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_m511B6FD46B1187D90919F4C0D2E853DE4A16BD44 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3;
		L_3 = MeshGenerationResult_Equals_mA9685353D67F169013BF8CC6B34EAFE69DB341B4((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, ((*(MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)UnBox(L_2, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool MeshGenerationResult_Equals_m511B6FD46B1187D90919F4C0D2E853DE4A16BD44_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshGenerationResult_Equals_m511B6FD46B1187D90919F4C0D2E853DE4A16BD44(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshGenerationResult::Equals(UnityEngine.XR.MeshGenerationResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshGenerationResult_Equals_mA9685353D67F169013BF8CC6B34EAFE69DB341B4 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t G_B6_0 = 0;
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0;
		L_0 = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_1;
		L_1 = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___other0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0084;
		}
	}
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3;
		L_3 = MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4;
		L_4 = MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_0084;
		}
	}
	{
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_6;
		L_6 = MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_7;
		L_7 = MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___other0), /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_8;
		L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_6, L_7);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_9;
		L_9 = MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_1 = L_9;
		int32_t L_10;
		L_10 = MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___other0), /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79_il2cpp_TypeInfo_var, &L_11);
		RuntimeObject * L_13 = Box(MeshGenerationStatus_t25EB712EAD94A279AD7D5A00E0CB6EDC8AB1FE79_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_12);
		V_1 = *(int32_t*)UnBox(L_13);
		if (!L_14)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_15;
		L_15 = MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_2 = L_15;
		int32_t L_16;
		L_16 = MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)(&___other0), /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE_il2cpp_TypeInfo_var, &L_17);
		RuntimeObject * L_19 = Box(MeshVertexAttributes_t7CCF6BE6BB4E908E1ECF9F9AF76968FA38A672CE_il2cpp_TypeInfo_var, (&V_2));
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_19, L_18);
		V_2 = *(int32_t*)UnBox(L_19);
		G_B6_0 = ((int32_t)(L_20));
		goto IL_0085;
	}

IL_0084:
	{
		G_B6_0 = 0;
	}

IL_0085:
	{
		V_3 = (bool)G_B6_0;
		goto IL_0088;
	}

IL_0088:
	{
		bool L_21 = V_3;
		return L_21;
	}
}
IL2CPP_EXTERN_C  bool MeshGenerationResult_Equals_mA9685353D67F169013BF8CC6B34EAFE69DB341B4_AdjustorThunk (RuntimeObject * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshGenerationResult_Equals_mA9685353D67F169013BF8CC6B34EAFE69DB341B4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.MeshGenerationResult::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_GetHashCode_m511BFBE4F21B162C59E462DF9DC9883A06CF9CC7 (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0;
		L_0 = MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)(&V_0), /*hidden argument*/NULL);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2;
		L_2 = MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		int32_t L_4;
		L_4 = HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543(L_1, L_3, /*hidden argument*/NULL);
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_5;
		L_5 = MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		int32_t L_7;
		L_7 = HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543(L_4, L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_1 = L_8;
		int32_t L_9;
		L_9 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543(L_7, L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline((MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *)__this, /*hidden argument*/NULL);
		V_2 = L_11;
		int32_t L_12;
		L_12 = Int32_GetHashCode_mEDD3F492A5F7CF021125AE3F38E2B8F8743FC667((int32_t*)(&V_2), /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = HashCodeHelper_Combine_m5F8B051AFC305B7FD377632031048F6549A1A543(L_10, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C  int32_t MeshGenerationResult_GetHashCode_m511BFBE4F21B162C59E462DF9DC9883A06CF9CC7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * _thisAdjusted = reinterpret_cast<MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshGenerationResult_GetHashCode_m511BFBE4F21B162C59E462DF9DC9883A06CF9CC7(_thisAdjusted, method);
	return _returnValue;
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
// System.String UnityEngine.XR.MeshId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		String_t* L_1;
		L_1 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_0, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		String_t* L_3;
		L_3 = UInt64_ToString_mFE48F1D174A1F741AB0795C1164BF45BF37F86E6((uint64_t*)L_2, _stringLiteralFDA1C52D0E58360F4E8FD608757CCD98D8772D4F, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002e;
	}

IL_002e:
	{
		String_t* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  String_t* MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * _thisAdjusted = reinterpret_cast<MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = MeshId_ToString_mA9CDBA01DD0C110252F6C4AA7437C507B2025705(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.XR.MeshId::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint64_t* L_0 = __this->get_address_of_m_SubId1_1();
		int32_t L_1;
		L_1 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_SubId2_2();
		int32_t L_3;
		L_3 = UInt64_GetHashCode_mCDF662897A3F02CED11A9F9E66C5BF4E28C02B33((uint64_t*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)L_3));
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * _thisAdjusted = reinterpret_cast<MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = MeshId_GetHashCode_mCD3E4355DB5EE90C389CE1D742E4CCA6471E2AA6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshId::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m77D4535F7643D5C1FEA20600C92B73818DD8675E (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)__this, ((*(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *)UnBox(L_1, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool MeshId_Equals_m77D4535F7643D5C1FEA20600C92B73818DD8675E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * _thisAdjusted = reinterpret_cast<MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshId_Equals_m77D4535F7643D5C1FEA20600C92B73818DD8675E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834 (MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		uint64_t L_0 = __this->get_m_SubId1_1();
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_SubId1_1();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		uint64_t L_3 = __this->get_m_SubId2_2();
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_SubId2_2();
		G_B3_0 = ((((int64_t)L_3) == ((int64_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834_AdjustorThunk (RuntimeObject * __this, MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 * _thisAdjusted = reinterpret_cast<MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 *>(__this + _offset);
	bool _returnValue;
	_returnValue = MeshId_Equals_m685A94F74A3A06E6E51C60F1D40386CAA8F01834(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.MeshId::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshId__cctor_m98D91783008597CCFFBC675648A50107318509D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_initobj((((MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_StaticFields*)il2cpp_codegen_static_fields_for(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767_il2cpp_TypeInfo_var))->get_address_of_s_InvalidId_0()), sizeof(MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767 ));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRDisplaySubsystem::InvokeDisplayFocusChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_InvokeDisplayFocusChanged_mF8F7E4D08B964907140FD3F8841F130159C7DBA7 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, bool ___focus0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = __this->get_displayFocusChanged_2();
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_2 = __this->get_displayFocusChanged_2();
		bool L_3 = ___focus0;
		NullCheck(L_2);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_2, L_3, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_scaleOfAllRenderTargets(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float);
	static XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_scaleOfAllRenderTargets_m787040A0FC0B1557EC5B3417D314FD0414066AC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_scaleOfAllRenderTargets(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_zNear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float);
	static XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_zNear_m28900D13CE8FC3AA9478AF1826E2AC012214397F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_zNear(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_zFar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float);
	static XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_zFar_m65A9D02251604E84D5AB1E5C92B8E341A739815C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_zFar(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, bool);
	static XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_sRGB_m540FBD696140B7AC736A9E1A29D726A66C74554C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_sRGB(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, int32_t);
	static XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_textureLayout_m11D18964EA25D27C159F36DEDEFA9D1AC3626B3C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_textureLayout(UnityEngine.XR.XRDisplaySubsystem/TextureLayout)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::SetMSAALevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, int32_t);
	static XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_SetMSAALevel_m82744B20121EF877A3E6FFB67EC4FFB8E0636D5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::SetMSAALevel(System.Int32)");
	_il2cpp_icall_func(__this, ___level0);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::set_disableLegacyRenderer(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, bool);
	static XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_set_disableLegacyRenderer_m9F7787AE5288C5852E5DBE0FF74119839655D4E3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::set_disableLegacyRenderer(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetRenderPassCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *);
	static XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_GetRenderPassCount_m68A61A55A72FAC483A67981F12451D45576A860D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::GetRenderPassCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::GetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___renderPassIndex0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ___renderPass1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___renderPassIndex0;
		XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * L_1 = ___renderPass1;
		bool L_2;
		L_2 = XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A(__this, L_0, (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_4 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DD1D0A1984B75EEBB5955FAB541B0ED08E7B084)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRDisplaySubsystem_GetRenderPass_m2DCDDACE964B4F6CEAAD5DF4387CEDF9CACA83AD_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, int32_t ___renderPassIndex0, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ___renderPass1, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, int32_t, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *);
	static XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_Internal_TryGetRenderPass_mCB01D571BFD704ED49F81EE97FCD483ACDC0556A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetRenderPass(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___renderPassIndex0, ___renderPass1);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::EndRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_EndRecordingIfLateLatched_m5BA5A8874CF1C953769A5219534D86CFBC327085 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		bool L_1;
		L_1 = XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5(__this, L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRDisplaySubsystem_EndRecordingIfLateLatched_m5BA5A8874CF1C953769A5219534D86CFBC327085_RuntimeMethod_var)));
	}

IL_0027:
	{
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryEndRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *);
	static XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_Internal_TryEndRecordingIfLateLatched_m74D4F4A843CEF6C7B8B8A90ECE7860498B8178A5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::Internal_TryEndRecordingIfLateLatched(UnityEngine.Camera)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___camera0);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::BeginRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_BeginRecordingIfLateLatched_m04CCCDA348AB151B099E0937AC2C57CE250A5D4E (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		bool L_1;
		L_1 = XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622(__this, L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRDisplaySubsystem_BeginRecordingIfLateLatched_m04CCCDA348AB151B099E0937AC2C57CE250A5D4E_RuntimeMethod_var)));
	}

IL_0027:
	{
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryBeginRecordingIfLateLatched(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *);
	static XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_Internal_TryBeginRecordingIfLateLatched_m465F4E9BA1AD50EAD990190A0820195DCE3DD622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::Internal_TryBeginRecordingIfLateLatched(UnityEngine.Camera)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___camera0);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::GetCullingParameters(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___cullingPassIndex1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * ___scriptableCullingParameters2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		int32_t L_1 = ___cullingPassIndex1;
		ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * L_2 = ___scriptableCullingParameters2;
		bool L_3;
		L_3 = XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503(__this, L_0, L_1, (ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *)L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var)));
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7F00519435FC33A7E48F0FCF6CB6D9B257C0DAA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6_RuntimeMethod_var)));
	}

IL_0029:
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_9 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mC5747EC0E0F49AAD1AD782ACC7A0CCD80D192FEF(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41124172AA830E83C228E3EE1EDF3CB56A7B34EA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRDisplaySubsystem_GetCullingParameters_m4D9CCEA231E429A6763721AF19B06FECEAE3DFD6_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___cullingPassIndex1, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 * ___scriptableCullingParameters2, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, int32_t, ScriptableCullingParameters_tF7AB1C337F3E530C772138FE463EB3EC5F5141C1 *);
	static XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_Internal_TryGetCullingParams_m5330E3E4A959C5CAC24708DCAC556D7535CC8503_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::Internal_TryGetCullingParams(UnityEngine.Camera,System.Int32,UnityEngine.Rendering.ScriptableCullingParameters&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___camera0, ___cullingPassIndex1, ___scriptableCullingParameters2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float*);
	static XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m6101C924131D97949D0BB807F0075C28464B6451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___gpuTimeLastFrame0);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float*);
	static XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_m168019E7D1D33CFA7218F9BC79E3C5E1640CC41B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___gpuTimeLastFrameCompositor0);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___displayRefreshRate0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float*);
	static XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_TryGetDisplayRefreshRate_m83B7B48711B68E8D05F3B5D2F1EDE61154EAC7A3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___displayRefreshRate0);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, float* ___motionToPhoton0, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, float*);
	static XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_TryGetMotionToPhoton_m10E75B632588DB76D4C88E022CC2B5D678E1C9F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___motionToPhoton0);
	return icallRetVal;
}
// System.Int32 UnityEngine.XR.XRDisplaySubsystem::GetPreferredMirrorBlitMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *);
	static XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_GetPreferredMirrorBlitMode_m6312460A737308417E27461459BFF33B252FD37A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::GetPreferredMirrorBlitMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine.RenderTexture,UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___mirrorRt0, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * ___outDesc1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *, int32_t);
	static XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_GetMirrorViewBlitDesc_m5C9F5DC8113A3D149D25F0A5CE4B71C208BC80E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::GetMirrorViewBlitDesc(UnityEngine.RenderTexture,UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___mirrorRt0, ___outDesc1, ___mode2);
	return icallRetVal;
}
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 * ___cmd0, bool ___allowGraphicsStateInvalidate1, int32_t ___mode2, const RuntimeMethod* method)
{
	typedef bool (*XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A_ftn) (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 *, CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *, bool, int32_t);
	static XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDisplaySubsystem_AddGraphicsThreadMirrorViewBlit_m6BCCEE01F4F2E4F42B0E9751F3EAE92B5A63A14A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem::AddGraphicsThreadMirrorViewBlit(UnityEngine.Rendering.CommandBuffer,System.Boolean,System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___cmd0, ___allowGraphicsStateInvalidate1, ___mode2);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystem__ctor_mCC516BAAAC7175CC9CEECA04E488F5D9BF0FB774 (XRDisplaySubsystem_tF8B46605B6D1199C52306D4EC7D83CFA90564A93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m33699A39FA5AEAE5A383689E4E0E3523FB67E558_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m33699A39FA5AEAE5A383689E4E0E3523FB67E558(__this, /*hidden argument*/IntegratedSubsystem_1__ctor_m33699A39FA5AEAE5A383689E4E0E3523FB67E558_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.XRDisplaySubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDisplaySubsystemDescriptor__ctor_mB045E1EBFB4D2B7CBE05D85D5AC622F7A971E056 (XRDisplaySubsystemDescriptor_tBBE6956FF61EACF13E72BFEF58ADC5930C760833 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_m3E9F6A2B441E056953C153C3B3182C0EB6BD0AFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_m3E9F6A2B441E056953C153C3B3182C0EB6BD0AFE(__this, /*hidden argument*/IntegratedSubsystemDescriptor_1__ctor_m3E9F6A2B441E056953C153C3B3182C0EB6BD0AFE_RuntimeMethod_var);
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
// System.Boolean UnityEngine.XR.XRInputSubsystem::TryRecenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method)
{
	typedef bool (*XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C_ftn) (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *);
	static XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRInputSubsystem_TryRecenter_m40231564A0E1FB14CAC17F7A88B206FA2121EF5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRInputSubsystem::TryRecenter()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.XR.XRInputSubsystem::InvokeTrackingOriginUpdatedEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_InvokeTrackingOriginUpdatedEvent_m8A70C0391D141C9189155AAAD3D16493243A23D5 (intptr_t ___internalPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * V_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___internalPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_1;
		L_1 = SubsystemManager_GetIntegratedSubsystemByPtr_mD152809BEEF4343B0AFD44A64EEE832ED90760EA((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_2 = V_0;
		V_1 = ((XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)IsInstClass((RuntimeObject*)L_2, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_il2cpp_TypeInfo_var));
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4 = V_1;
		NullCheck(L_4);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_5 = L_4->get_trackingOriginUpdated_2();
		G_B3_0 = ((!(((RuntimeObject*)(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_7 = V_1;
		NullCheck(L_7);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_8 = L_7->get_trackingOriginUpdated_2();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_9 = V_1;
		NullCheck(L_8);
		Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939(L_8, L_9, /*hidden argument*/Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::InvokeBoundaryChangedEvent(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem_InvokeBoundaryChangedEvent_m795C2897F3A0047BBA6834D3F97B5DAFDEC4AE7A (intptr_t ___internalPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * V_0 = NULL;
	XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		intptr_t L_0 = ___internalPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_1;
		L_1 = SubsystemManager_GetIntegratedSubsystemByPtr_mD152809BEEF4343B0AFD44A64EEE832ED90760EA((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_2 = V_0;
		V_1 = ((XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 *)IsInstClass((RuntimeObject*)L_2, XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09_il2cpp_TypeInfo_var));
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_4 = V_1;
		NullCheck(L_4);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_5 = L_4->get_boundaryChanged_3();
		G_B3_0 = ((!(((RuntimeObject*)(Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_7 = V_1;
		NullCheck(L_7);
		Action_1_t6A8185B84663FAD87D88ACA618FB6E60131C81F1 * L_8 = L_7->get_boundaryChanged_3();
		XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * L_9 = V_1;
		NullCheck(L_8);
		Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939(L_8, L_9, /*hidden argument*/Action_1_Invoke_mA71F13E5E1EFDEB1DB1D9ED4C7ED037B21A89939_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRInputSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystem__ctor_m80AE13105C9C373B38E4814244886DCB7AA3E7E8 (XRInputSubsystem_t74B79E3971C396F02CD32F74AE73A5DFB2A0EC09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m19C9BE11CA13915E2E14D5B4EC3EAF29CCC633E5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m19C9BE11CA13915E2E14D5B4EC3EAF29CCC633E5(__this, /*hidden argument*/IntegratedSubsystem_1__ctor_m19C9BE11CA13915E2E14D5B4EC3EAF29CCC633E5_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.XRInputSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRInputSubsystemDescriptor__ctor_m1620DD409E907F5AAA03D3DE504AC48D9D3E9576 (XRInputSubsystemDescriptor_t98C4233948EC9169B71D2A58C2C6ED1AF6FDABC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_m98CC72EADB42D92099DBE358C296423D7751A741_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_m98CC72EADB42D92099DBE358C296423D7751A741(__this, /*hidden argument*/IntegratedSubsystemDescriptor_1__ctor_m98CC72EADB42D92099DBE358C296423D7751A741_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.XRMeshSubsystem::InvokeMeshReadyDelegate(UnityEngine.XR.MeshGenerationResult,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem_InvokeMeshReadyDelegate_mDD6390D57F2CD0F7EBD64B628DB780D23424FD8F (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  ___result0, Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * ___onMeshGenerationComplete1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * L_0 = ___onMeshGenerationComplete1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_tB125CDA27D619FDBF92F767804A14CF83EA85A3C * L_2 = ___onMeshGenerationComplete1;
		MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF  L_3 = ___result0;
		NullCheck(L_2);
		Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604(L_2, L_3, /*hidden argument*/Action_1_Invoke_mC3DCAEAD9DC81FE145B4FE115F830C0767728604_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRMeshSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystem__ctor_mBA5B9B6A417BB2B477705E8BF6D1BFACF94AEF74 (XRMeshSubsystem_t60BD977DF1B014CF5D48C8EBCC91DED767520D63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystem_1__ctor_m5D5CDD514B75369B0797B55401D9DD35908A2A26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystem_1__ctor_m5D5CDD514B75369B0797B55401D9DD35908A2A26(__this, /*hidden argument*/IntegratedSubsystem_1__ctor_m5D5CDD514B75369B0797B55401D9DD35908A2A26_RuntimeMethod_var);
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
// System.Void UnityEngine.XR.XRMeshSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptor__ctor_m52169EE2174077BA5575410A1031C23915BBA6D2 (XRMeshSubsystemDescriptor_t428853FE3628F349D46DFD6841B50058F09F5FCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegratedSubsystemDescriptor_1__ctor_mBD46E84CF05A1E63F8FE6AB0C2F1C07AA8D2DAFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntegratedSubsystemDescriptor_1__ctor_mBD46E84CF05A1E63F8FE6AB0C2F1C07AA8D2DAFB(__this, /*hidden argument*/IntegratedSubsystemDescriptor_1__ctor_mBD46E84CF05A1E63F8FE6AB0C2F1C07AA8D2DAFB_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_uniqueID_m09D6E80AD1B81D7485242CFA27A7173A6231CA87 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_m_UniqueID_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_uniqueID_m09D6E80AD1B81D7485242CFA27A7173A6231CA87_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	XRNodeState_set_uniqueID_m09D6E80AD1B81D7485242CFA27A7173A6231CA87(_thisAdjusted, ___value0, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRNodeState_get_nodeType_m55136A0A46D3C38E1EF41A62F0FCC9FC03AAAE3E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_nodeType_m9ADECAA5D665042FCA2F8E81726AFD1A1FA8B30D (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_nodeType_m9ADECAA5D665042FCA2F8E81726AFD1A1FA8B30D_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	XRNodeState_set_nodeType_m9ADECAA5D665042FCA2F8E81726AFD1A1FA8B30D(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRNodeState_set_tracked_m27DDD443D10F5F43B5B9AA83BFE901DC12316B9C (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, bool ___value0, const RuntimeMethod* method)
{
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * G_B2_0 = NULL;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0008;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0009;
	}

IL_0008:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0009:
	{
		G_B3_1->set_m_Tracked_8(G_B3_0);
		return;
	}
}
IL2CPP_EXTERN_C  void XRNodeState_set_tracked_m27DDD443D10F5F43B5B9AA83BFE901DC12316B9C_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	XRNodeState_set_tracked_m27DDD443D10F5F43B5B9AA83BFE901DC12316B9C(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Position_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___position0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, 1, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___position0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetPosition_m7526637E83DA923CCEB8590D0E342DFC8A546415(_thisAdjusted, ___position0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_m_Rotation_3();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_1 = ___rotation0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mA9E1E814ADD386E55534FD5E97194A7FCF9AC719((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, 2, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B_AdjustorThunk (RuntimeObject * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___rotation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetRotation_m8BAEDDA0A2400A884686860FEB40F5B0CAC34A3B(_thisAdjusted, ___rotation0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetVelocity_m05D4077510C20D407BDF4126A6E071FB3C0504D5 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Velocity_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___velocity0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, 4, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetVelocity_m05D4077510C20D407BDF4126A6E071FB3C0504D5_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___velocity0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetVelocity_m05D4077510C20D407BDF4126A6E071FB3C0504D5(_thisAdjusted, ___velocity0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularVelocity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_AngularVelocity_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___angularVelocity0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, 8, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularVelocity0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetAngularVelocity_m7F331B0AC7E1C29AB4279DDAE8A0C7BA9973E686(_thisAdjusted, ___angularVelocity0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAcceleration_m56AB0F9F0179D022DC23459304C7A2CA494EC89D (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___acceleration0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Acceleration_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___acceleration0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, ((int32_t)16), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetAcceleration_m56AB0F9F0179D022DC23459304C7A2CA494EC89D_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___acceleration0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetAcceleration_m56AB0F9F0179D022DC23459304C7A2CA494EC89D(_thisAdjusted, ___acceleration0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGetAngularAcceleration(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAcceleration0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_AngularAcceleration_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = ___angularAcceleration0;
		bool L_2;
		L_2 = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011((XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *)__this, L_0, ((int32_t)32), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___angularAcceleration0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGetAngularAcceleration_mC204326494FCE12A491C1CBC15B4264BC45F648A(_thisAdjusted, ___angularAcceleration0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Vector3,UnityEngine.XR.AvailableTrackingData,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inValue0, int32_t ___availabilityFlag1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___outValue2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_AvailableFields_1();
		int32_t L_1 = ___availabilityFlag1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = ___outValue2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___inValue0;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3 = L_4;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_001c:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = ___outValue2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_5 = L_6;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inValue0, int32_t ___availabilityFlag1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___outValue2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGet_mC3508370067F31F950BE570E5E64382280AC6011(_thisAdjusted, ___inValue0, ___availabilityFlag1, ___outValue2, method);
	return _returnValue;
}
// System.Boolean UnityEngine.XR.XRNodeState::TryGet(UnityEngine.Quaternion,UnityEngine.XR.AvailableTrackingData,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGet_mA9E1E814ADD386E55534FD5E97194A7FCF9AC719 (XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___inValue0, int32_t ___availabilityFlag1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___outValue2, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_m_AvailableFields_1();
		int32_t L_1 = ___availabilityFlag1;
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_3 = ___outValue2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ___inValue0;
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_3 = L_4;
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_001c:
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = ___outValue2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_5 = L_6;
		V_1 = (bool)0;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool XRNodeState_TryGet_mA9E1E814ADD386E55534FD5E97194A7FCF9AC719_AdjustorThunk (RuntimeObject * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___inValue0, int32_t ___availabilityFlag1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___outValue2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 * _thisAdjusted = reinterpret_cast<XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 *>(__this + _offset);
	bool _returnValue;
	_returnValue = XRNodeState_TryGet_mA9E1E814ADD386E55534FD5E97194A7FCF9AC719(_thisAdjusted, ___inValue0, ___availabilityFlag1, ___outValue2, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_m39A5AA3E3029029F2E9FBBBDF14E4CC00F98ED8A (IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		IntegratedSubsystem_t8FB3A371F812CF9521903AC016C64E95C7412002 * L_0 = ___xrSubsystem0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_m_Ptr_0();
		String_t* L_2 = ___tag1;
		float* L_3 = ___value2;
		bool L_4;
		L_4 = XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945((intptr_t)L_1, L_2, (float*)L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat_Internal(System.IntPtr,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945 (intptr_t ___ptr0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method)
{
	typedef bool (*XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945_ftn) (intptr_t, String_t*, float*);
	static XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRStats_TryGetStat_Internal_mE76FD3630524CB2490C10C6E2A42225A07A09945_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.Provider.XRStats::TryGetStat_Internal(System.IntPtr,System.String,System.Single&)");
	bool icallRetVal = _il2cpp_icall_func(___ptr0, ___tag1, ___value2);
	return icallRetVal;
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
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke(const XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779& unmarshaled, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_pinvoke& marshaled)
{
	Exception_t* ___srcTex_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcTex' of type 'XRBlitParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcTex_0Exception, NULL);
}
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_back(const XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_pinvoke& marshaled, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779& unmarshaled)
{
	Exception_t* ___srcTex_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcTex' of type 'XRBlitParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcTex_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_pinvoke_cleanup(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_com(const XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779& unmarshaled, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_com& marshaled)
{
	Exception_t* ___srcTex_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcTex' of type 'XRBlitParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcTex_0Exception, NULL);
}
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_com_back(const XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_com& marshaled, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779& unmarshaled)
{
	Exception_t* ___srcTex_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'srcTex' of type 'XRBlitParams': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___srcTex_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
IL2CPP_EXTERN_C void XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshal_com_cleanup(XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke(const XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5& unmarshaled, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_pinvoke& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.get_displaySubsystemInstance_0();
	marshaled.___nativeBlitAvailable_1 = static_cast<int32_t>(unmarshaled.get_nativeBlitAvailable_1());
	marshaled.___nativeBlitInvalidStates_2 = static_cast<int32_t>(unmarshaled.get_nativeBlitInvalidStates_2());
	marshaled.___blitParamsCount_3 = unmarshaled.get_blitParamsCount_3();
}
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_back(const XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_pinvoke& marshaled, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5& unmarshaled)
{
	intptr_t unmarshaled_displaySubsystemInstance_temp_0;
	memset((&unmarshaled_displaySubsystemInstance_temp_0), 0, sizeof(unmarshaled_displaySubsystemInstance_temp_0));
	unmarshaled_displaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.set_displaySubsystemInstance_0(unmarshaled_displaySubsystemInstance_temp_0);
	bool unmarshaled_nativeBlitAvailable_temp_1 = false;
	unmarshaled_nativeBlitAvailable_temp_1 = static_cast<bool>(marshaled.___nativeBlitAvailable_1);
	unmarshaled.set_nativeBlitAvailable_1(unmarshaled_nativeBlitAvailable_temp_1);
	bool unmarshaled_nativeBlitInvalidStates_temp_2 = false;
	unmarshaled_nativeBlitInvalidStates_temp_2 = static_cast<bool>(marshaled.___nativeBlitInvalidStates_2);
	unmarshaled.set_nativeBlitInvalidStates_2(unmarshaled_nativeBlitInvalidStates_temp_2);
	int32_t unmarshaled_blitParamsCount_temp_3 = 0;
	unmarshaled_blitParamsCount_temp_3 = marshaled.___blitParamsCount_3;
	unmarshaled.set_blitParamsCount_3(unmarshaled_blitParamsCount_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_pinvoke_cleanup(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_com(const XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5& unmarshaled, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_com& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.get_displaySubsystemInstance_0();
	marshaled.___nativeBlitAvailable_1 = static_cast<int32_t>(unmarshaled.get_nativeBlitAvailable_1());
	marshaled.___nativeBlitInvalidStates_2 = static_cast<int32_t>(unmarshaled.get_nativeBlitInvalidStates_2());
	marshaled.___blitParamsCount_3 = unmarshaled.get_blitParamsCount_3();
}
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_com_back(const XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_com& marshaled, XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5& unmarshaled)
{
	intptr_t unmarshaled_displaySubsystemInstance_temp_0;
	memset((&unmarshaled_displaySubsystemInstance_temp_0), 0, sizeof(unmarshaled_displaySubsystemInstance_temp_0));
	unmarshaled_displaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.set_displaySubsystemInstance_0(unmarshaled_displaySubsystemInstance_temp_0);
	bool unmarshaled_nativeBlitAvailable_temp_1 = false;
	unmarshaled_nativeBlitAvailable_temp_1 = static_cast<bool>(marshaled.___nativeBlitAvailable_1);
	unmarshaled.set_nativeBlitAvailable_1(unmarshaled_nativeBlitAvailable_temp_1);
	bool unmarshaled_nativeBlitInvalidStates_temp_2 = false;
	unmarshaled_nativeBlitInvalidStates_temp_2 = static_cast<bool>(marshaled.___nativeBlitInvalidStates_2);
	unmarshaled.set_nativeBlitInvalidStates_2(unmarshaled_nativeBlitInvalidStates_temp_2);
	int32_t unmarshaled_blitParamsCount_temp_3 = 0;
	unmarshaled_blitParamsCount_temp_3 = marshaled.___blitParamsCount_3;
	unmarshaled.set_blitParamsCount_3(unmarshaled_blitParamsCount_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
IL2CPP_EXTERN_C void XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshal_com_cleanup(XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter(System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4 (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * __this, int32_t ___blitParameterIndex0, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___blitParameterIndex0;
		XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * L_1 = ___blitParameter1;
		XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F((XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *)__this, L_0, (XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4_AdjustorThunk (RuntimeObject * __this, int32_t ___blitParameterIndex0, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * _thisAdjusted = reinterpret_cast<XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *>(__this + _offset);
	XRMirrorViewBlitDesc_GetBlitParameter_m99A6EB66BCF56061E6964F27FDEA9D57481CC7A4(_thisAdjusted, ___blitParameterIndex0, ___blitParameter1, method);
}
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 * ____unity_self0, int32_t ___blitParameterIndex1, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 * ___blitParameter2, const RuntimeMethod* method)
{
	typedef void (*XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F_ftn) (XRMirrorViewBlitDesc_t3BD136F0BF088017ABB0EF1856191541211848A5 *, int32_t, XRBlitParams_t5DB6843387BEE917BA2A2A282B413B0A70BEB779 *);
	static XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRMirrorViewBlitDesc_GetBlitParameter_Injected_m59F3EBA063A6BBDA7794FA46FA228493F1848E4F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc::GetBlitParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc&,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRBlitParams&)");
	_il2cpp_icall_func(____unity_self0, ___blitParameterIndex1, ___blitParameter2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke(const XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3& unmarshaled, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRRenderParameter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_back(const XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_pinvoke& marshaled, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3& unmarshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRRenderParameter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_pinvoke_cleanup(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_com(const XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3& unmarshaled, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_com& marshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRRenderParameter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_com_back(const XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_com& marshaled, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3& unmarshaled)
{
	Exception_t* ___occlusionMesh_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'occlusionMesh' of type 'XRRenderParameter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___occlusionMesh_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
IL2CPP_EXTERN_C void XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshal_com_cleanup(XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3_marshaled_com& marshaled)
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
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke(const XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB& unmarshaled, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_pinvoke& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.get_displaySubsystemInstance_0();
	marshaled.___renderPassIndex_1 = unmarshaled.get_renderPassIndex_1();
	marshaled.___renderTarget_2 = unmarshaled.get_renderTarget_2();
	marshaled.___renderTargetDesc_3 = unmarshaled.get_renderTargetDesc_3();
	marshaled.___hasMotionVectorPass_4 = static_cast<int32_t>(unmarshaled.get_hasMotionVectorPass_4());
	marshaled.___motionVectorRenderTarget_5 = unmarshaled.get_motionVectorRenderTarget_5();
	marshaled.___motionVectorRenderTargetDesc_6 = unmarshaled.get_motionVectorRenderTargetDesc_6();
	marshaled.___shouldFillOutDepth_7 = static_cast<int32_t>(unmarshaled.get_shouldFillOutDepth_7());
	marshaled.___cullingPassIndex_8 = unmarshaled.get_cullingPassIndex_8();
}
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_back(const XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_pinvoke& marshaled, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB& unmarshaled)
{
	intptr_t unmarshaled_displaySubsystemInstance_temp_0;
	memset((&unmarshaled_displaySubsystemInstance_temp_0), 0, sizeof(unmarshaled_displaySubsystemInstance_temp_0));
	unmarshaled_displaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.set_displaySubsystemInstance_0(unmarshaled_displaySubsystemInstance_temp_0);
	int32_t unmarshaled_renderPassIndex_temp_1 = 0;
	unmarshaled_renderPassIndex_temp_1 = marshaled.___renderPassIndex_1;
	unmarshaled.set_renderPassIndex_1(unmarshaled_renderPassIndex_temp_1);
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  unmarshaled_renderTarget_temp_2;
	memset((&unmarshaled_renderTarget_temp_2), 0, sizeof(unmarshaled_renderTarget_temp_2));
	unmarshaled_renderTarget_temp_2 = marshaled.___renderTarget_2;
	unmarshaled.set_renderTarget_2(unmarshaled_renderTarget_temp_2);
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  unmarshaled_renderTargetDesc_temp_3;
	memset((&unmarshaled_renderTargetDesc_temp_3), 0, sizeof(unmarshaled_renderTargetDesc_temp_3));
	unmarshaled_renderTargetDesc_temp_3 = marshaled.___renderTargetDesc_3;
	unmarshaled.set_renderTargetDesc_3(unmarshaled_renderTargetDesc_temp_3);
	bool unmarshaled_hasMotionVectorPass_temp_4 = false;
	unmarshaled_hasMotionVectorPass_temp_4 = static_cast<bool>(marshaled.___hasMotionVectorPass_4);
	unmarshaled.set_hasMotionVectorPass_4(unmarshaled_hasMotionVectorPass_temp_4);
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  unmarshaled_motionVectorRenderTarget_temp_5;
	memset((&unmarshaled_motionVectorRenderTarget_temp_5), 0, sizeof(unmarshaled_motionVectorRenderTarget_temp_5));
	unmarshaled_motionVectorRenderTarget_temp_5 = marshaled.___motionVectorRenderTarget_5;
	unmarshaled.set_motionVectorRenderTarget_5(unmarshaled_motionVectorRenderTarget_temp_5);
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  unmarshaled_motionVectorRenderTargetDesc_temp_6;
	memset((&unmarshaled_motionVectorRenderTargetDesc_temp_6), 0, sizeof(unmarshaled_motionVectorRenderTargetDesc_temp_6));
	unmarshaled_motionVectorRenderTargetDesc_temp_6 = marshaled.___motionVectorRenderTargetDesc_6;
	unmarshaled.set_motionVectorRenderTargetDesc_6(unmarshaled_motionVectorRenderTargetDesc_temp_6);
	bool unmarshaled_shouldFillOutDepth_temp_7 = false;
	unmarshaled_shouldFillOutDepth_temp_7 = static_cast<bool>(marshaled.___shouldFillOutDepth_7);
	unmarshaled.set_shouldFillOutDepth_7(unmarshaled_shouldFillOutDepth_temp_7);
	int32_t unmarshaled_cullingPassIndex_temp_8 = 0;
	unmarshaled_cullingPassIndex_temp_8 = marshaled.___cullingPassIndex_8;
	unmarshaled.set_cullingPassIndex_8(unmarshaled_cullingPassIndex_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_pinvoke_cleanup(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_com(const XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB& unmarshaled, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_com& marshaled)
{
	marshaled.___displaySubsystemInstance_0 = unmarshaled.get_displaySubsystemInstance_0();
	marshaled.___renderPassIndex_1 = unmarshaled.get_renderPassIndex_1();
	marshaled.___renderTarget_2 = unmarshaled.get_renderTarget_2();
	marshaled.___renderTargetDesc_3 = unmarshaled.get_renderTargetDesc_3();
	marshaled.___hasMotionVectorPass_4 = static_cast<int32_t>(unmarshaled.get_hasMotionVectorPass_4());
	marshaled.___motionVectorRenderTarget_5 = unmarshaled.get_motionVectorRenderTarget_5();
	marshaled.___motionVectorRenderTargetDesc_6 = unmarshaled.get_motionVectorRenderTargetDesc_6();
	marshaled.___shouldFillOutDepth_7 = static_cast<int32_t>(unmarshaled.get_shouldFillOutDepth_7());
	marshaled.___cullingPassIndex_8 = unmarshaled.get_cullingPassIndex_8();
}
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_com_back(const XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_com& marshaled, XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB& unmarshaled)
{
	intptr_t unmarshaled_displaySubsystemInstance_temp_0;
	memset((&unmarshaled_displaySubsystemInstance_temp_0), 0, sizeof(unmarshaled_displaySubsystemInstance_temp_0));
	unmarshaled_displaySubsystemInstance_temp_0 = marshaled.___displaySubsystemInstance_0;
	unmarshaled.set_displaySubsystemInstance_0(unmarshaled_displaySubsystemInstance_temp_0);
	int32_t unmarshaled_renderPassIndex_temp_1 = 0;
	unmarshaled_renderPassIndex_temp_1 = marshaled.___renderPassIndex_1;
	unmarshaled.set_renderPassIndex_1(unmarshaled_renderPassIndex_temp_1);
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  unmarshaled_renderTarget_temp_2;
	memset((&unmarshaled_renderTarget_temp_2), 0, sizeof(unmarshaled_renderTarget_temp_2));
	unmarshaled_renderTarget_temp_2 = marshaled.___renderTarget_2;
	unmarshaled.set_renderTarget_2(unmarshaled_renderTarget_temp_2);
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  unmarshaled_renderTargetDesc_temp_3;
	memset((&unmarshaled_renderTargetDesc_temp_3), 0, sizeof(unmarshaled_renderTargetDesc_temp_3));
	unmarshaled_renderTargetDesc_temp_3 = marshaled.___renderTargetDesc_3;
	unmarshaled.set_renderTargetDesc_3(unmarshaled_renderTargetDesc_temp_3);
	bool unmarshaled_hasMotionVectorPass_temp_4 = false;
	unmarshaled_hasMotionVectorPass_temp_4 = static_cast<bool>(marshaled.___hasMotionVectorPass_4);
	unmarshaled.set_hasMotionVectorPass_4(unmarshaled_hasMotionVectorPass_temp_4);
	RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13  unmarshaled_motionVectorRenderTarget_temp_5;
	memset((&unmarshaled_motionVectorRenderTarget_temp_5), 0, sizeof(unmarshaled_motionVectorRenderTarget_temp_5));
	unmarshaled_motionVectorRenderTarget_temp_5 = marshaled.___motionVectorRenderTarget_5;
	unmarshaled.set_motionVectorRenderTarget_5(unmarshaled_motionVectorRenderTarget_temp_5);
	RenderTextureDescriptor_t67FF189E1F35AEB5D6C43A2D7103F3A8A8CA0B47  unmarshaled_motionVectorRenderTargetDesc_temp_6;
	memset((&unmarshaled_motionVectorRenderTargetDesc_temp_6), 0, sizeof(unmarshaled_motionVectorRenderTargetDesc_temp_6));
	unmarshaled_motionVectorRenderTargetDesc_temp_6 = marshaled.___motionVectorRenderTargetDesc_6;
	unmarshaled.set_motionVectorRenderTargetDesc_6(unmarshaled_motionVectorRenderTargetDesc_temp_6);
	bool unmarshaled_shouldFillOutDepth_temp_7 = false;
	unmarshaled_shouldFillOutDepth_temp_7 = static_cast<bool>(marshaled.___shouldFillOutDepth_7);
	unmarshaled.set_shouldFillOutDepth_7(unmarshaled_shouldFillOutDepth_temp_7);
	int32_t unmarshaled_cullingPassIndex_temp_8 = 0;
	unmarshaled_cullingPassIndex_temp_8 = marshaled.___cullingPassIndex_8;
	unmarshaled.set_cullingPassIndex_8(unmarshaled_cullingPassIndex_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
IL2CPP_EXTERN_C void XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshal_com_cleanup(XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter(UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___renderParameterIndex1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter2, const RuntimeMethod* method)
{
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = ___camera0;
		int32_t L_1 = ___renderParameterIndex1;
		XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * L_2 = ___renderParameter2;
		XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)__this, L_0, L_1, (XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80_AdjustorThunk (RuntimeObject * __this, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera0, int32_t ___renderParameterIndex1, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * _thisAdjusted = reinterpret_cast<XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *>(__this + _offset);
	XRRenderPass_GetRenderParameter_m55FE4583A2ADD403A10A68EFDA1FB71F87747E80(_thisAdjusted, ___camera0, ___renderParameterIndex1, ___renderParameter2, method);
}
// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86((XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *)__this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * _thisAdjusted = reinterpret_cast<XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XRRenderPass_GetRenderParameterCount_m9742DD95F772AF4E4B6B6EBB8A30FC44C98F3BF6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&,UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ____unity_self0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, int32_t ___renderParameterIndex2, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 * ___renderParameter3, const RuntimeMethod* method)
{
	typedef void (*XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041_ftn) (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *, int32_t, XRRenderParameter_tF418BD4C9CAA4C93EF9F7C37FFF349F428B9A3C3 *);
	static XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRRenderPass_GetRenderParameter_Injected_mF602E6FE813708C37BB4FEFB6DA504B721A3B041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameter_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&,UnityEngine.Camera,System.Int32,UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter&)");
	_il2cpp_icall_func(____unity_self0, ___camera1, ___renderParameterIndex2, ___renderParameter3);
}
// System.Int32 UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86 (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB * ____unity_self0, const RuntimeMethod* method)
{
	typedef int32_t (*XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86_ftn) (XRRenderPass_tCB4A9F3B07C2C59889BD3EE40F44E9347A2BC9BB *);
	static XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRRenderPass_GetRenderParameterCount_Injected_m50D8DBBA0B6CCBB42376D8423F79DF7AE533CD86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDisplaySubsystem/XRRenderPass::GetRenderParameterCount_Injected(UnityEngine.XR.XRDisplaySubsystem/XRRenderPass&)");
	int32_t icallRetVal = _il2cpp_icall_func(____unity_self0);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  MeshGenerationResult_get_MeshId_m55663E958B980188CFD406BB2469B24D8089BA9E_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		MeshId_t583996FC9E6BA652AA2C6B0D0F60D88E4498D767  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshGenerationResult_get_Mesh_mDBEB5E83FC729856B17AF62B9438C9B9A79A0200_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get_U3CMeshU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * MeshGenerationResult_get_MeshCollider_m0285F3BFFFF0778DC8DDA97BFDAE30A19AEBF283_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		MeshCollider_t1983F4E7E53D8C6B65FE21A8B4E2345A84D57E98 * L_0 = __this->get_U3CMeshColliderU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Status_m5AF51D2745EC947BB722550DC95665D430CDB178_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStatusU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MeshGenerationResult_get_Attributes_m24D66B0694F827D4DFFE210069EF0F5578F4845F_inline (MeshGenerationResult_t081845588E8932BB4BA2D6F087D2F2F0EE3373CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttributesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m3732CF9955C758D341A6605EEF5F83A9702B0974_gshared_inline (InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_1_get_name_m3C10F5DE7985A0C8DAFEBBB452E36FA42143DE30_gshared_inline (InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = (String_t*)__this->get_U3CnameU3Ek__BackingField_0();
		return (String_t*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  Enumerator_get_Current_mC70E3278A727B2503C0497F3FE0869E1897413BB_gshared_inline (Enumerator_t7D3E7B9290B1570845D7CD3C90B3E057E0C6A51D * __this, const RuntimeMethod* method)
{
	{
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_0 = (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )__this->get_current_3();
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_0;
	}
}
