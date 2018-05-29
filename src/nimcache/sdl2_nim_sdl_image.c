/* Generated by Nim Compiler v0.18.1 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/dustin/Documents/Nim/lib -o /home/dustin/Documents/Nim_Projects/VectorGuy/src/nimcache/sdl2_nim_sdl_image.o /home/dustin/Documents/Nim_Projects/VectorGuy/src/nimcache/sdl2_nim_sdl_image.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(void**, tyProc_1LIoIPgxf1fnU6YXXXDfCA) (void* renderer, NCSTRING file);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_KBqytsBOSVgv4K9bnF5oGYQ_2;
tyProc_1LIoIPgxf1fnU6YXXXDfCA Dl_186060_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_4, "libSDL2_image.so", 16);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_6, "libSDL2_image.so.0.2.1", 22);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_8, "libSDL2_image.so.0", 18);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_10, "libSDL2_image-2.0.so", 20);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_12, "libSDL2_image-2.0.so.0.2.1", 26);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_14, "libSDL2_image-2.0.so.0", 22);
STRING_LITERAL(TM_KBqytsBOSVgv4K9bnF5oGYQ_15, "libSDL2_image(|-2.0).so(|.0.2.1|.0)", 35);

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
NIM_EXTERNC N_NOINLINE(void, sdl2_nim_sdl_imageInit000)(void) {
	nimfr_("sdl_image", "sdl_image.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_nim_sdl_imageDatInit000)(void) {
if (!((TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_4)))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_6)))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_8)))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_10)))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_12)))
||(TM_KBqytsBOSVgv4K9bnF5oGYQ_2 = nimLoadLibrary(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_14)))
)) nimLoadLibraryError(((NimStringDesc*) &TM_KBqytsBOSVgv4K9bnF5oGYQ_15));
	Dl_186060_ = (tyProc_1LIoIPgxf1fnU6YXXXDfCA) nimGetProcAddr(TM_KBqytsBOSVgv4K9bnF5oGYQ_2, "IMG_LoadTexture");
}

