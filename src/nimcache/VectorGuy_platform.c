/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/dustin/Documents/Nim/lib -o /home/dustin/Documents/Nim_Projects/VectorGuy/src/nimcache/VectorGuy_platform.o /home/dustin/Documents/Nim_Projects/VectorGuy/src/nimcache/VectorGuy_platform.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ;
struct tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA {
NF dt;
NF fps;
NF timer;
NF last;
NI ticks;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
typedef N_CDECL_PTR(void, tyProc_xmqN0ZWK4lw72DZ4V9b09cTw) (void* window, int* w, int* h);
typedef NU8 tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, tyProc_qLs9bEMEYHZYOeFIf1LOpoQ) (NU32 flags);
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
typedef N_CDECL_PTR(NCSTRING, tyProc_09bvyvHFtWbkzL5AHgf0bKw) (void);
typedef N_CDECL_PTR(void*, tyProc_hKarI59cLAeI0v1WuQhCZ9ag) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(void*, tyProc_jPHHnsvDYo8Q3NQemQIGWg) (void* window, int index, NU32 flags);
typedef N_CDECL_PTR(NU32, tyProc_ZBJ5GRli6YRWUmwPMxvXiw) (void);
static N_NIMCALL(void, Marker_tyRef_cDIK9awGdJFmfxaNEVZuU2Q)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_4ZzOzMTa1TP2fFZm9baityw_3)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(int, toCint_yAPwf7d9aO5za0vgIa7yl8g)(NI x);
static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2physics)(NF* x, NF y);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
void* window_0Vd6O6UB33uO8W4yEB9cNOg;
void* renderer_Ll7o3xAsk26H2TKOmIioZg;
tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ current_gamestate_A1FbtpnWNMFCyHDMM9bMpVg;
tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA* clock_XGJlevjwnAIKRRsiWSQCKQ;
TNimType NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_;
extern TNimType NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_cDIK9awGdJFmfxaNEVZuU2Q_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern tyProc_xmqN0ZWK4lw72DZ4V9b09cTw Dl_116546_;
extern tyProc_qLs9bEMEYHZYOeFIf1LOpoQ Dl_111821_;
extern tyProc_09bvyvHFtWbkzL5AHgf0bKw Dl_112926_;
extern tyProc_hKarI59cLAeI0v1WuQhCZ9ag Dl_116489_;
extern tyProc_jPHHnsvDYo8Q3NQemQIGWg Dl_120115_;
extern tyProc_ZBJ5GRli6YRWUmwPMxvXiw Dl_121033_;
STRING_LITERAL(TM_4ZzOzMTa1TP2fFZm9baityw_4, "ERROR:: Cannot initialize SDL: ", 31);
static N_NIMCALL(void, Marker_tyRef_cDIK9awGdJFmfxaNEVZuU2Q)(void* p, NI op) {
	tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA* a;
	a = (tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA*)p;
}
static N_NIMCALL(void, TM_4ZzOzMTa1TP2fFZm9baityw_3)(void) {
	nimGCvisit((void*)clock_XGJlevjwnAIKRRsiWSQCKQ, 0);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(400, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(400, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, windowSize_IiXrDDZnIvC9aOPZJDd9acOw)(void) {
	tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ result;
	int x;
	int y;
	nimfr_("windowSize", "platform.nim");
	memset((void*)(&result), 0, sizeof(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ));
	x = (int)0;
	y = (int)0;
	nimln_(76, "platform.nim");
	Dl_116546_(window_0Vd6O6UB33uO8W4yEB9cNOg, (&x), (&y));
	nimln_(77, "platform.nim");
	result.Field0 = ((NI) (x));
	result.Field1 = ((NI) (y));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ, init_dS5TN5j25WAQ6yTDcn9c47g)(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ size, NimStringDesc* title) {
	tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ result;
	int T8_;
	int T9_;
	nimfr_("init", "platform.nim");
{	result = (tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ)0;
	nimln_(43, "platform.nim");
	result = ((tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ) 0);
	nimln_(44, "platform.nim");
	{
		int T3_;
		tyArray_Re75IspeoxXy2oCZHwcRrA T6_;
		NCSTRING T7_;
		nimln_(400, "system.nim");
		nimln_(44, "platform.nim");
		T3_ = (int)0;
		T3_ = Dl_111821_(((NU32) 29233));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		nimln_(45, "platform.nim");
		memset((void*)T6_, 0, sizeof(tyArray_Re75IspeoxXy2oCZHwcRrA));
		T6_[0] = copyString(((NimStringDesc*) &TM_4ZzOzMTa1TP2fFZm9baityw_4));
		T7_ = (NCSTRING)0;
		T7_ = Dl_112926_();
		T6_[1] = cstrToNimstr(T7_);
		echoBinSafe(T6_, 2);
		nimln_(46, "platform.nim");
		result = ((tyEnum_Result_L1di3wLm5aRgv8oY7gfOcQ) 1);
		nimln_(47, "platform.nim");
		goto BeforeRet_;
	}
	LA4_: ;
	nimln_(50, "platform.nim");
	nimln_(53, "platform.nim");
	T8_ = (int)0;
	T8_ = toCint_yAPwf7d9aO5za0vgIa7yl8g(size.Field0);
	nimln_(54, "platform.nim");
	T9_ = (int)0;
	T9_ = toCint_yAPwf7d9aO5za0vgIa7yl8g(size.Field1);
	window_0Vd6O6UB33uO8W4yEB9cNOg = Dl_116489_((title ? title->data : (NCSTRING)""), ((int) 536805376), ((int) 536805376), T8_, T9_, ((NU32) 0));
	nimln_(58, "platform.nim");
	renderer_Ll7o3xAsk26H2TKOmIioZg = Dl_120115_(window_0Vd6O6UB33uO8W4yEB9cNOg, ((int) -1), ((NU32) 6));
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ, CurrentGameState_ReQTH89b7n9aMlTps9c1ZjC3w)(void) {
	tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ result;
	nimfr_("CurrentGameState", "platform.nim");
	result = (tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ)0;
	nimln_(34, "platform.nim");
	result = current_gamestate_A1FbtpnWNMFCyHDMM9bMpVg;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, Quit_Xu9cEU9adL5OoIv5EZ1pTttg)(void) {
	nimfr_("Quit", "platform.nim");
	nimln_(40, "platform.nim");
	current_gamestate_A1FbtpnWNMFCyHDMM9bMpVg = ((tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ) 2);
	popFrame();
}

static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2physics)(NF* x, NF y) {
	nimfr_("+=", "system.nim");
	nimln_(3710, "system.nim");
	(*x) = ((NF)((*x)) + (NF)(y));
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, update_iNFkF8jCG9coHVqGuLSVINw)(void) {
	NF now;
	NU32 T1_;
	NF dt;
	NF T2_;
	NI TM_4ZzOzMTa1TP2fFZm9baityw_5;
	nimfr_("update", "platform.nim");
	nimln_(64, "platform.nim");
	T1_ = (NU32)0;
	T1_ = Dl_121033_();
	now = ((NF) (T1_));
	nimln_(65, "platform.nim");
	dt = ((NF)(((NF)(now) - (NF)((*clock_XGJlevjwnAIKRRsiWSQCKQ).last))) / (NF)(1.0000000000000000e+03));
	nimln_(66, "platform.nim");
	(*clock_XGJlevjwnAIKRRsiWSQCKQ).last = now;
	nimln_(68, "platform.nim");
	(*clock_XGJlevjwnAIKRRsiWSQCKQ).dt = dt;
	nimln_(69, "platform.nim");
	T2_ = (NF)0;
	{
		if (!(dt == 0.0)) goto LA5_;
		T2_ = 1.6000000000000000e-02;
	}
	goto LA3_;
	LA5_: ;
	{
		T2_ = dt;
	}
	LA3_: ;
	(*clock_XGJlevjwnAIKRRsiWSQCKQ).fps = ((NF)(1.0000000000000000e+00) / (NF)(T2_));
	nimln_(71, "platform.nim");
	pluseq__7kHiltrvRlcg6wSYR3CxAw_2physics((&(*clock_XGJlevjwnAIKRRsiWSQCKQ).timer), dt);
	nimln_(72, "platform.nim");
	TM_4ZzOzMTa1TP2fFZm9baityw_5 = addInt((*clock_XGJlevjwnAIKRRsiWSQCKQ).ticks, ((NI) 1));
	(*clock_XGJlevjwnAIKRRsiWSQCKQ).ticks = (NI)(TM_4ZzOzMTa1TP2fFZm9baityw_5);
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, VectorGuy_platformInit000)(void) {
	tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA* T1_;
	nimfr_("platform", "platform.nim");
nimRegisterGlobalMarker(TM_4ZzOzMTa1TP2fFZm9baityw_3);
	nimln_(26, "platform.nim");
	current_gamestate_A1FbtpnWNMFCyHDMM9bMpVg = ((tyEnum_GameState_64fRvvb0ysndoJH5vqkKMQ) 0);
	nimln_(27, "platform.nim");
	T1_ = (tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA*)0;
	T1_ = (tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA*) newObj((&NTI_cDIK9awGdJFmfxaNEVZuU2Q_), sizeof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA));
	(*T1_).dt = 0.0;
	(*T1_).fps = 0.0;
	(*T1_).timer = 0.0;
	(*T1_).last = 0.0;
	(*T1_).ticks = ((NI) -1);
	asgnRefNoCycle((void**) (&clock_XGJlevjwnAIKRRsiWSQCKQ), T1_);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, VectorGuy_platformDatInit000)(void) {
static TNimNode* TM_4ZzOzMTa1TP2fFZm9baityw_2[5];
static TNimNode TM_4ZzOzMTa1TP2fFZm9baityw_0[6];
NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_.size = sizeof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA);
NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_.kind = 18;
NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_.base = 0;
NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_.flags = 3;
TM_4ZzOzMTa1TP2fFZm9baityw_2[0] = &TM_4ZzOzMTa1TP2fFZm9baityw_0[1];
TM_4ZzOzMTa1TP2fFZm9baityw_0[1].kind = 1;
TM_4ZzOzMTa1TP2fFZm9baityw_0[1].offset = offsetof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA, dt);
TM_4ZzOzMTa1TP2fFZm9baityw_0[1].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_4ZzOzMTa1TP2fFZm9baityw_0[1].name = "dt";
TM_4ZzOzMTa1TP2fFZm9baityw_2[1] = &TM_4ZzOzMTa1TP2fFZm9baityw_0[2];
TM_4ZzOzMTa1TP2fFZm9baityw_0[2].kind = 1;
TM_4ZzOzMTa1TP2fFZm9baityw_0[2].offset = offsetof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA, fps);
TM_4ZzOzMTa1TP2fFZm9baityw_0[2].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_4ZzOzMTa1TP2fFZm9baityw_0[2].name = "fps";
TM_4ZzOzMTa1TP2fFZm9baityw_2[2] = &TM_4ZzOzMTa1TP2fFZm9baityw_0[3];
TM_4ZzOzMTa1TP2fFZm9baityw_0[3].kind = 1;
TM_4ZzOzMTa1TP2fFZm9baityw_0[3].offset = offsetof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA, timer);
TM_4ZzOzMTa1TP2fFZm9baityw_0[3].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_4ZzOzMTa1TP2fFZm9baityw_0[3].name = "timer";
TM_4ZzOzMTa1TP2fFZm9baityw_2[3] = &TM_4ZzOzMTa1TP2fFZm9baityw_0[4];
TM_4ZzOzMTa1TP2fFZm9baityw_0[4].kind = 1;
TM_4ZzOzMTa1TP2fFZm9baityw_0[4].offset = offsetof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA, last);
TM_4ZzOzMTa1TP2fFZm9baityw_0[4].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_4ZzOzMTa1TP2fFZm9baityw_0[4].name = "last";
TM_4ZzOzMTa1TP2fFZm9baityw_2[4] = &TM_4ZzOzMTa1TP2fFZm9baityw_0[5];
TM_4ZzOzMTa1TP2fFZm9baityw_0[5].kind = 1;
TM_4ZzOzMTa1TP2fFZm9baityw_0[5].offset = offsetof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA, ticks);
TM_4ZzOzMTa1TP2fFZm9baityw_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_4ZzOzMTa1TP2fFZm9baityw_0[5].name = "ticks";
TM_4ZzOzMTa1TP2fFZm9baityw_0[0].len = 5; TM_4ZzOzMTa1TP2fFZm9baityw_0[0].kind = 2; TM_4ZzOzMTa1TP2fFZm9baityw_0[0].sons = &TM_4ZzOzMTa1TP2fFZm9baityw_2[0];
NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_.node = &TM_4ZzOzMTa1TP2fFZm9baityw_0[0];
NTI_cDIK9awGdJFmfxaNEVZuU2Q_.size = sizeof(tyObject_ClockcolonObjectType__i9caNiZ1Ae9aC9bMNXyaOIwqA*);
NTI_cDIK9awGdJFmfxaNEVZuU2Q_.kind = 22;
NTI_cDIK9awGdJFmfxaNEVZuU2Q_.base = (&NTI_i9caNiZ1Ae9aC9bMNXyaOIwqA_);
NTI_cDIK9awGdJFmfxaNEVZuU2Q_.flags = 2;
NTI_cDIK9awGdJFmfxaNEVZuU2Q_.marker = Marker_tyRef_cDIK9awGdJFmfxaNEVZuU2Q;
}

