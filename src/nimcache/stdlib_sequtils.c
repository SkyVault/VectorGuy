/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:   gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN -g3 -O0 -gdwarf-3  -IC:\Bin\nim-0.18.0\lib -o C:\Users\Dustin.Neumann\Documents\Nim\VectorGuy\src\nimcache\stdlib_sequtils.o C:\Users\Dustin.Neumann\Documents\Nim\VectorGuy\src\nimcache\stdlib_sequtils.c */
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
typedef struct tySequence_jdfh7rFNsTzTm8RMfGdtnA tySequence_jdfh7rFNsTzTm8RMfGdtnA;typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;typedef struct TNimType TNimType;typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;typedef struct tyObject_ScenecolonObjectType__ct2gFF9aeLNbkxwUKW5K7HA tyObject_ScenecolonObjectType__ct2gFF9aeLNbkxwUKW5K7HA;typedef struct TGenericSeq TGenericSeq;typedef struct TNimNode TNimNode;typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;typedef struct RootObj RootObj;struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {NI refcount;TNimType* typ;};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {void* bottom;};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {NI len;NI cap;tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {tyArray_lh2A89ahMmYg9bCmpVaplLbA data;};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {tyArray_0aOLqZchNi8nWtMTi8ND8w link;NI key;NI upperBound;NI level;};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;NI Field1;};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {NI len;tyArray_LzOv2eCDGiceMKQstCLmhw chunks;tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {NI minLargeObj;NI maxLargeObj;tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;NU32 flBitmap;tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;NI currMem;NI maxMem;NI freeMem;NI occ;NI lastSize;tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;NIM_BOOL locked;NIM_BOOL blockChunkSizeIncrease;NI nextChunkSize;tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {NI stackScans;NI cycleCollections;NI maxThreshold;NI maxStackSize;NI maxStackCells;NI cycleTableSize;NI64 maxPause;};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {NI counter;NI max;tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;NI cycleThreshold;tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;NI recGcLock;tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;NI gcThreadId;};
struct TGenericSeq {NI len;NI reserved;};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);struct TNimType {NI size;tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;TNimType* base;TNimNode* node;void* finalizer;tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;NCSTRING name;TNimType* nextType;NI instances;NI sizes;};
typedef NU8 tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;typedef NU8 tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ;struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {NI prevSize;NI size;};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;NI free;NI acc;NF data;};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;NF data;};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {NI size;NI acc;tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;NI key;tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;NI key;tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;};
struct RootObj {TNimType* m_type;};
typedef NU8 tyEnum_SceneState_dGSoJJ9a8mr9aFK3rpqTx7rw;typedef struct {N_NIMCALL_PTR(void, ClP_0) (tyEnum_SceneState_dGSoJJ9a8mr9aFK3rpqTx7rw ev, void* ClE_0);void* ClE_0;} tyProc_dPMqOIEyf8GyIVv9btbbDwg;struct tyObject_ScenecolonObjectType__ct2gFF9aeLNbkxwUKW5K7HA {  RootObj Sup;tyProc_dPMqOIEyf8GyIVv9btbbDwg event;};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;struct TNimNode {tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;NI offset;TNimType* typ;NCSTRING name;NI len;TNimNode** sons;};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;NI zeroField;};
struct tySequence_jdfh7rFNsTzTm8RMfGdtnA {  TGenericSeq Sup;  tyObject_ScenecolonObjectType__ct2gFF9aeLNbkxwUKW5K7HA* data[SEQ_DECL_SIZE];};
#line 319 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
static N_INLINE(NI, addInt)(NI a, NI b);
#line 13 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
N_NOINLINE(void, raiseOverflow)(void);
#line 326 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
static N_INLINE(NI, subInt)(NI a, NI b);
#line 18 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
N_NOINLINE(void, raiseIndexError)(void);
#line 260 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, asgnRef)(void** dest, void* src);
#line 189 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
#line 417 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s);
#line 412 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
#line 70 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
static N_INLINE(void, popFrame)(void);
#line 130 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
#line 215 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
#line 207 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
#line 121 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
#line 30 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
#line 12 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
N_NOINLINE(void, raiseRangeError)(NI64 val);
#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
static N_INLINE(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen);
#line 18 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
static N_INLINE(NI, resize_bzF9a0JivP3Z4njqaxuLc5wsystem)(NI old);
#line 585 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
N_LIB_PRIVATE N_NIMCALL(void*, growObj_AVYny8c0GTk28gxjmat1MA)(void* old, NI newsize);
#line 134 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
N_NIMCALL(TNimType*, extGetCellType)(void* c);
#line 344 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
N_LIB_PRIVATE N_NIMCALL(void, forAllChildrenAux_YOI1Uo54H9aas13WthjhsfA)(void* dest, TNimType* mt, tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ op);
#line 3237 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size);extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

#line 319 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;{	result = (NI)0;
#line 320 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 320 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	result = (NI)((NU64)(a) + (NU64)(b));
#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	{		NIM_BOOL T3_;
#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (NIM_BOOL)0;
#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (((NI) 0) <= (NI)(result ^ a));		if (T3_) goto LA4_;
#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 321 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (((NI) 0) <= (NI)(result ^ b));		LA4_: ;		if (!T3_) goto LA5_;
#line 322 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		goto BeforeRet_;	}	LA5_: ;
#line 323 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	raiseOverflow();	}BeforeRet_: ;	return result;}


#line 326 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;{	result = (NI)0;
#line 327 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 327 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	result = (NI)((NU64)(a) - (NU64)(b));
#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	{		NIM_BOOL T3_;
#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (NIM_BOOL)0;
#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (((NI) 0) <= (NI)(result ^ a));		if (T3_) goto LA4_;
#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"

#line 328 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));		LA4_: ;		if (!T3_) goto LA5_;
#line 329 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
		goto BeforeRet_;	}	LA5_: ;
#line 330 "C:\\Bin\\nim-0.18.0\\lib\\system\\arithm.nim"
	raiseOverflow();	}BeforeRet_: ;	return result;}


#line 417 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
#line 418 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	T1_ = (NI)0;
#line 418 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	{
#line 418 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;		T1_ = ((NI) 0);	}	goto LA2_;	LA4_: ;	{
#line 418 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));	}	LA2_: ;	(*s).calldepth = ((NI16) (T1_));
#line 419 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 420 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 421 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	{
#line 421 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
#line 421 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();	}	LA9_: ;}


#line 70 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
static N_INLINE(void, popFrame)(void) {

#line 71 "C:\\Bin\\nim-0.18.0\\lib\\system\\excpt.nim"
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}


#line 189 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
#line 191 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(191, "gc.nim");
#line 191 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));	popFrame();}


#line 130 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;	nimfr_("usrToCell", "gc.nim");	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
#line 132 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(132, "gc.nim");
#line 132 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"

#line 132 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));	popFrame();	return result;}


#line 207 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
#line 211 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(211, "gc.nim");	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);	popFrame();}


#line 215 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
#line 218 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(218, "gc.nim");	{
#line 218 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		(*c).refcount -= ((NI) 8);
#line 218 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
#line 219 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		nimln_(219, "gc.nim");		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);	}	LA3_: ;	popFrame();}


#line 260 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(264, "gc.nim");	{		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
#line 398 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
		nimln_(398, "system.nim");
#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		nimln_(264, "gc.nim");		if (!!((src == NIM_NIL))) goto LA3_;
#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"

#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);	}	LA3_: ;
#line 265 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(265, "gc.nim");	{		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
#line 398 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
		nimln_(398, "system.nim");
#line 265 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		nimln_(265, "gc.nim");		if (!!(((*dest) == NIM_NIL))) goto LA8_;
#line 265 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"

#line 265 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);	}	LA8_: ;
#line 266 "C:\\Bin\\nim-0.18.0\\lib\\system\\gc.nim"
	nimln_(266, "gc.nim");	(*dest) = src;	popFrame();}


#line 30 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;{	result = (NI)0;
#line 31 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
	{		NIM_BOOL T3_;
#line 31 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
		T3_ = (NIM_BOOL)0;
#line 31 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
		T3_ = (a <= i);		if (!(T3_)) goto LA4_;
#line 31 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
		T3_ = (i <= b);		LA4_: ;		if (!T3_) goto LA5_;
#line 32 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"

#line 32 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
		result = i;		goto BeforeRet_;	}	goto LA1_;	LA5_: ;	{
#line 34 "C:\\Bin\\nim-0.18.0\\lib\\system\\chcks.nim"
		raiseRangeError(((NI64) (i)));	}	LA1_: ;	}BeforeRet_: ;	return result;}


#line 18 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
static N_INLINE(NI, resize_bzF9a0JivP3Z4njqaxuLc5wsystem)(NI old) {
	NI result;	result = (NI)0;
#line 19 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
	{
#line 19 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		if (!(old <= ((NI) 0))) goto LA3_;
#line 19 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		result = ((NI) 4);	}	goto LA1_;	LA3_: ;	{
#line 20 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		if (!(old < ((NI) 65536))) goto LA6_;
#line 20 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 20 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		result = (NI)(old * ((NI) 2));	}	goto LA1_;	LA6_: ;	{
#line 21 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 21 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 21 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		result = (NI)((NI)(old * ((NI) 3)) / ((NI) 2));	}	LA1_: ;	return result;}


#line 3237 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
static N_INLINE(void, zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem)(void* p, NI size) {
	void* T1_;
#line 3238 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
	T1_ = (void*)0;	T1_ = memset(p, ((int) 0), ((size_t) (size)));}


#line 264 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
static N_INLINE(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemSize, NI newLen) {
	TGenericSeq* result;	result = (TGenericSeq*)0;
#line 266 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
	result = seq;
#line 267 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
	{		NI r;		NI T5_;		void* T6_;
#line 267 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 432 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
		if (!((NI)((*result).reserved & ((NI) IL64(4611686018427387903))) < newLen)) goto LA3_;
#line 268 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 268 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 268 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 432 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
		T5_ = (NI)0;		T5_ = resize_bzF9a0JivP3Z4njqaxuLc5wsystem((NI)((*result).reserved & ((NI) IL64(4611686018427387903))));		r = ((T5_ >= newLen) ? T5_ : newLen);
#line 269 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 269 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 269 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 269 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		T6_ = (void*)0;		T6_ = growObj_AVYny8c0GTk28gxjmat1MA(((void*) (result)), (NI)((NI)(elemSize * r) + ((NI) 16)));		result = ((TGenericSeq*) (T6_));
#line 271 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		(*result).reserved = r;	}	goto LA1_;	LA3_: ;	{
#line 272 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		if (!(newLen < (*result).len)) goto LA8_;
#line 288 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		{			TNimType* T12_;
#line 1212 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"

#line 288 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 288 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
			T12_ = (TNimType*)0;			T12_ = extGetCellType(((void*) (result)));			if (!!((((*(*T12_).base).flags &(1U<<((NU)(((tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ) 0))&7U)))!=0))) goto LA13_;			{				NI i;				NI colontmp_;				NI res;				i = (NI)0;				colontmp_ = (NI)0;
#line 289 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 289 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
				colontmp_ = (NI)((*result).len - ((NI) 1));
#line 2045 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
				res = newLen;				{
#line 2046 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
					while (1) {						TNimType* T18_;
#line 2046 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
						if (!(res <= colontmp_)) goto LA17;
#line 2047 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
						i = res;
#line 290 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 290 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 290 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 291 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 292 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
						T18_ = (TNimType*)0;						T18_ = extGetCellType(((void*) (result)));						forAllChildrenAux_YOI1Uo54H9aas13WthjhsfA(((void*) ((NI)((NU64)((NI)((NU64)(((NI) (ptrdiff_t) (result))) + (NU64)(((NI) 16)))) + (NU64)((NI)((NU64)(i) * (NU64)(elemSize)))))), (*T18_).base, ((tyEnum_WalkOp_Wfy7gT5VQ8B3aJBxqU8D9cQ) 2));
#line 2048 "C:\\Bin\\nim-0.18.0\\lib\\system.nim"
						res += ((NI) 1);					} LA17: ;				}			}		}		LA13_: ;
#line 300 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 300 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 300 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 301 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 301 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"

#line 301 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
		zeroMem_t0o5XqKanO5QJfXMGEzp2Asystem(((void*) ((NI)((NU64)((NI)((NU64)(((NI) (ptrdiff_t) (result))) + (NU64)(((NI) 16)))) + (NU64)((NI)((NU64)(newLen) * (NU64)(elemSize)))))), ((NI) ((NI)((NU64)((NI)((NU64)((*result).len) - (NU64)(newLen))) * (NU64)(elemSize)))));	}	goto LA1_;	LA8_: ;	LA1_: ;
#line 302 "C:\\Bin\\nim-0.18.0\\lib\\system\\sysstr.nim"
	(*result).len = newLen;	return result;}


#line 332 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
N_LIB_PRIVATE N_NIMCALL(void, delete_pTxnxafRcdPm6gqNnRqdYw)(tySequence_jdfh7rFNsTzTm8RMfGdtnA** s, NI first, NI last) {
	NI i;	NI j;	NI TM_77ITQxrABVT9b2GcbWeV4SQ_2;	NI newLen;	NI T1_;	NI TM_77ITQxrABVT9b2GcbWeV4SQ_3;	NI TM_77ITQxrABVT9b2GcbWeV4SQ_4;	nimfr_("delete", "sequtils.nim");
#line 344 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	nimln_(344, "sequtils.nim");	i = first;
#line 345 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	nimln_(345, "sequtils.nim");
#line 345 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	TM_77ITQxrABVT9b2GcbWeV4SQ_2 = addInt(((NI) (last)), ((NI) 1));	j = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_2);
#line 346 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	nimln_(346, "sequtils.nim");
#line 346 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"

#line 346 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"

#line 346 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	T1_ = ((*s) ? (*s)->Sup.len : 0);	TM_77ITQxrABVT9b2GcbWeV4SQ_3 = subInt(T1_, j);	TM_77ITQxrABVT9b2GcbWeV4SQ_4 = addInt((NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_3), ((NI) (i)));	newLen = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_4);	{
#line 347 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
		nimln_(347, "sequtils.nim");		while (1) {			NI TM_77ITQxrABVT9b2GcbWeV4SQ_5;			NI TM_77ITQxrABVT9b2GcbWeV4SQ_6;
#line 347 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
			if (!(((NI) (i)) < newLen)) goto LA3;			if ((NU)(i) >= (NU)((*s)->Sup.len)) raiseIndexError();
#line 348 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
			nimln_(348, "sequtils.nim");			if ((NU)(j) >= (NU)((*s)->Sup.len)) raiseIndexError();			asgnRef((void**) (&(*s)->data[i]), (*s)->data[j]);
#line 349 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
			nimln_(349, "sequtils.nim");			TM_77ITQxrABVT9b2GcbWeV4SQ_5 = addInt(i, ((NI) 1));			if (TM_77ITQxrABVT9b2GcbWeV4SQ_5 < 0 || TM_77ITQxrABVT9b2GcbWeV4SQ_5 > IL64(9223372036854775807)) raiseOverflow();			i = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_5);
#line 350 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
			nimln_(350, "sequtils.nim");			TM_77ITQxrABVT9b2GcbWeV4SQ_6 = addInt(j, ((NI) 1));			j = (NI)(TM_77ITQxrABVT9b2GcbWeV4SQ_6);		} LA3: ;	}
#line 351 "C:\\Bin\\nim-0.18.0\\lib\\pure\\collections\\sequtils.nim"
	nimln_(351, "sequtils.nim");	(*s) = (tySequence_jdfh7rFNsTzTm8RMfGdtnA*) setLengthSeq(&((*s))->Sup, sizeof(tyObject_ScenecolonObjectType__ct2gFF9aeLNbkxwUKW5K7HA*), ((NI)chckRange(newLen, ((NI) 0), ((NI) IL64(9223372036854775807)))));	popFrame();}
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void) {
	nimfr_("sequtils", "sequtils.nim");	popFrame();}

NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void) {
}

