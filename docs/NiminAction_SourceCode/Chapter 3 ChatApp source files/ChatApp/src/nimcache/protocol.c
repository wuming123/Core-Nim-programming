/* Generated by Nim Compiler v0.12.1 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread  -I/home/renzhen/Nim12.0/lib -o src/nimcache/protocol.o src/nimcache/protocol.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Message249005 Message249005;
typedef struct Jsonnodeobj242754 Jsonnodeobj242754;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct Messageparsingerror249007 Messageparsingerror249007;
typedef struct Cell55949 Cell55949;
typedef struct Cellseq55965 Cellseq55965;
typedef struct Gcheap58018 Gcheap58018;
typedef struct Gcstack58016 Gcstack58016;
typedef struct Cellset55961 Cellset55961;
typedef struct Pagedesc55957 Pagedesc55957;
typedef struct Memregion37891 Memregion37891;
typedef struct Smallchunk37843 Smallchunk37843;
typedef struct Llchunk37885 Llchunk37885;
typedef struct Bigchunk37845 Bigchunk37845;
typedef struct Intset37817 Intset37817;
typedef struct Trunk37813 Trunk37813;
typedef struct Avlnode37889 Avlnode37889;
typedef struct Gcstat58014 Gcstat58014;
typedef struct TY242769 TY242769;
typedef struct TY242774 TY242774;
typedef struct TY242770 TY242770;
typedef struct Basechunk37841 Basechunk37841;
typedef struct Freecell37833 Freecell37833;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY3889) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3894) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3889 marker;
TY3894 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY19611;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY19611 raiseAction;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  Messageparsingerror249007  {
  Exception Sup;
};
struct  Cell55949  {
NI refcount;
TNimType* typ;
};
struct  Cellseq55965  {
NI len;
NI cap;
Cell55949** d;
};
struct  Cellset55961  {
NI counter;
NI max;
Pagedesc55957* head;
Pagedesc55957** data;
};
typedef Smallchunk37843* TY37906[512];
typedef Trunk37813* Trunkbuckets37815[256];
struct  Intset37817  {
Trunkbuckets37815 data;
};
struct  Memregion37891  {
NI minlargeobj;
NI maxlargeobj;
TY37906 freesmallchunks;
Llchunk37885* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk37845* freechunkslist;
Intset37817 chunkstarts;
Avlnode37889* root;
Avlnode37889* deleted;
Avlnode37889* last;
Avlnode37889* freeavlnodes;
};
struct  Gcstat58014  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Gcheap58018  {
Gcstack58016* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq55965 zct;
Cellseq55965 decstack;
Cellset55961 cycleroots;
Cellseq55965 tempstack;
NI recgclock;
Memregion37891 region;
Gcstat58014 stat;
};
struct  Message249005  {
NimStringDesc* username;
NimStringDesc* message;
};
struct  Jsonnodeobj242754  {
NU8 kind;
union{
struct {NimStringDesc* str;
} S1;
struct {NI64 num;
} S2;
struct {NF fnum;
} S3;
struct {NIM_BOOL bval;
} S4;
struct {TY242769* fields;
} S6;
struct {TY242774* elems;
} S7;
} kindU;
};
struct TY242770 {
NimStringDesc* Field0;
Jsonnodeobj242754* Field1;
};
typedef TY242770 TY249118[2];
struct  Gcstack58016  {
Gcstack58016* prev;
Gcstack58016* next;
void* starts;
void* pos;
NI maxstacksize;
};
typedef NI TY37822[8];
struct  Pagedesc55957  {
Pagedesc55957* next;
NI key;
TY37822 bits;
};
struct  Basechunk37841  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk37843  {
  Basechunk37841 Sup;
Smallchunk37843* next;
Smallchunk37843* prev;
Freecell37833* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk37885  {
NI size;
NI acc;
Llchunk37885* next;
};
struct  Bigchunk37845  {
  Basechunk37841 Sup;
Bigchunk37845* next;
Bigchunk37845* prev;
NI align;
NF data;
};
struct  Trunk37813  {
Trunk37813* next;
NI key;
TY37822 bits;
};
typedef Avlnode37889* TY37896[2];
struct  Avlnode37889  {
TY37896 link;
NI key;
NI upperbound;
NI level;
};
struct  Freecell37833  {
Freecell37833* next;
NI zerofield;
};
struct TY242769 {
  TGenericSeq Sup;
  TY242770 data[SEQ_DECL_SIZE];
};
struct TY242774 {
  TGenericSeq Sup;
  Jsonnodeobj242754* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, parsemessage_249013)(NimStringDesc* data, Message249005* Result);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_NIMCALL(Jsonnodeobj242754*, parsejson_248342)(NimStringDesc* buffer);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
N_NIMCALL(NIM_BOOL, isObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(Exception*, getCurrentException)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_30201)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1181)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(NimStringDesc*, getcurrentexceptionmsg_97608)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(Cell55949*, usrtocell_59673)(void* usr);
static N_INLINE(void, rtladdzct_61204)(Cell55949* c);
N_NOINLINE(void, addzct_59644)(Cellseq55965* s, Cell55949* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_62022)(Cell55949* c);
static N_INLINE(NIM_BOOL, canbecycleroot_59694)(Cell55949* c);
static N_INLINE(void, rtladdcycleroot_60423)(Cell55949* c);
N_NOINLINE(void, incl_56665)(Cellset55961* s, Cell55949* cell);
static N_INLINE(void, decref_61604)(Cell55949* c);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(NIM_BOOL, haskey_245008)(Jsonnodeobj242754* node, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(NimStringDesc*, getstr_242990)(Jsonnodeobj242754* n, NimStringDesc* default_242993);
static N_INLINE(Jsonnodeobj242754*, HEX5BHEX5D_244134)(Jsonnodeobj242754* node, NimStringDesc* name);
N_NIMCALL(void, failedassertimpl_99603)(NimStringDesc* msg);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, createmessage_249113)(NimStringDesc* username, NimStringDesc* message);
N_NIMCALL(NimStringDesc*, HEX24_247129)(Jsonnodeobj242754* node);
N_NIMCALL(Jsonnodeobj242754*, HEX25_243281)(TY242770* keyvals, NI keyvalsLen0);
N_NIMCALL(Jsonnodeobj242754*, HEX25_243205)(NimStringDesc* s);
STRING_LITERAL(TMP1182, "Invalid JSON: ", 14);
STRING_LITERAL(TMP1183, "", 0);
STRING_LITERAL(TMP1184, "Unknown error: ", 15);
STRING_LITERAL(TMP1185, "username", 8);
STRING_LITERAL(TMP1186, "Username field missing", 22);
STRING_LITERAL(TMP1187, "not isNil(node) ", 16);
STRING_LITERAL(TMP1188, "node.kind == JObject ", 21);
STRING_LITERAL(TMP1189, "fields", 6);
STRING_LITERAL(TMP1191, "len(a) == L seq modified while iterating over it", 48);
STRING_LITERAL(TMP1192, "Username field is empty", 23);
STRING_LITERAL(TMP1193, "Message field missing", 21);
STRING_LITERAL(TMP1194, "message", 7);
STRING_LITERAL(TMP1195, "Message field is empty", 22);
STRING_LITERAL(TMP1196, "\015\012", 2);
extern NIM_THREADVAR TSafePoint* exchandler_27443;
extern NIM_THREADVAR TFrame* frameptr_27442;
extern TNimType NTI242756; /* JsonParsingError */
extern NIM_THREADVAR Exception* currexception_27445;
extern TNimType NTI4027; /* Exception */
TNimType NTI249007; /* MessageParsingError */
TNimType NTI249022; /* ref MessageParsingError */
extern NIM_THREADVAR Gcheap58018 gch_58059;
TNimType NTI249005; /* Message */
extern TNimType NTI149; /* string */

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_27443;
	exchandler_27443 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_27443 = (*exchandler_27443).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	frameptr_27442 = s;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_27442 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_27442).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_27442;
	frameptr_27442 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_30201();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_27442 = (*frameptr_27442).prev;
}

static N_INLINE(Exception*, getCurrentException)(void) {
	Exception* result;
	nimfr("getCurrentException", "system.nim")
	result = 0;
	nimln(2994, "system.nim");
	result = currexception_27445;
	popFrame();
	return result;
}
N_NIMCALL(void, TMP1181)(void* p, NI op) {
	Messageparsingerror249007* a;
	a = (Messageparsingerror249007*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI)((*src).Sup.len + ((NI) 1)));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(NimStringDesc*, getcurrentexceptionmsg_97608)(void) {
	NimStringDesc* result;
	Exception* e;
	nimfr("getCurrentExceptionMsg", "system.nim")
{	result = 0;
	nimln(2999, "system.nim");
	e = getCurrentException();
	nimln(3000, "system.nim");
	{
		if (!(e == NIM_NIL)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1183));
	}
	goto LA1;
	LA3: ;
	{
		result = copyString((*e).message);
	}
	LA1: ;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(Cell55949*, usrtocell_59673)(void* usr) {
	Cell55949* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(131, "gc.nim");
	result = ((Cell55949*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell55949))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_61204)(Cell55949* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(212, "gc.nim");
	addzct_59644((&gch_58059.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(264, "gc.nim");
	{
		Cell55949* c;
		nimln(349, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(265, "gc.nim");
		c = usrtocell_59673(src);
		nimln(182, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(267, "gc.nim");
	{
		Cell55949* c;
		nimln(349, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(268, "gc.nim");
		c = usrtocell_59673((*dest));
		nimln(269, "gc.nim");
		{
			nimln(180, "gc.nim");
			(*c).refcount -= ((NI) 8);
			nimln(181, "gc.nim");
			if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(270, "gc.nim");
			rtladdzct_61204(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(NIM_BOOL, canbecycleroot_59694)(Cell55949* c) {
	NIM_BOOL result;
	nimfr("canBeCycleRoot", "gc.nim")
	result = 0;
	nimln(134, "gc.nim");
	nimln(1104, "system.nim");
	result = !((((*(*c).typ).flags &(1<<((((NU8) 1))&7)))!=0));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdcycleroot_60423)(Cell55949* c) {
	nimfr("rtlAddCycleRoot", "gc.nim")
	nimln(202, "gc.nim");
	{
		nimln(349, "system.nim");
		nimln(147, "gc.nim");
		if (!!((((NI) ((NI)((*c).refcount & ((NI) 3)))) == ((NI) 3)))) goto LA3;
		nimln(152, "gc.nim");
		(*c).refcount = (NI)((NI)((*c).refcount & ((NI) -4)) | ((NI) 3));
		nimln(204, "gc.nim");
		incl_56665((&gch_58059.cycleroots), c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(void, incref_62022)(Cell55949* c) {
	nimfr("incRef", "gc.nim")
	nimln(229, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	nimln(232, "gc.nim");
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_59694(c);
		if (!LOC3) goto LA4;
		nimln(233, "gc.nim");
		rtladdcycleroot_60423(c);
	}
	LA4: ;
	popFrame();
}

static N_INLINE(void, decref_61604)(Cell55949* c) {
	nimfr("decRef", "gc.nim")
	nimln(219, "gc.nim");
	{
		nimln(180, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(181, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(220, "gc.nim");
		rtladdzct_61204(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		nimln(221, "gc.nim");
		LOC6 = 0;
		LOC6 = canbecycleroot_59694(c);
		if (!LOC6) goto LA7;
		nimln(224, "gc.nim");
		rtladdcycleroot_60423(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr("asgnRef", "gc.nim")
	nimln(257, "gc.nim");
	{
		Cell55949* LOC5;
		nimln(349, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(257, "gc.nim");
		LOC5 = 0;
		LOC5 = usrtocell_59673(src);
		incref_62022(LOC5);
	}
	LA3: ;
	nimln(258, "gc.nim");
	{
		Cell55949* LOC10;
		nimln(349, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		nimln(258, "gc.nim");
		LOC10 = 0;
		LOC10 = usrtocell_59673((*dest));
		decref_61604(LOC10);
	}
	LA8: ;
	nimln(259, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, popCurrentException)(void) {
	asgnRef((void**) (&currexception_27445), NIM_NIL);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell55949* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(246, "gc.nim");
	c = usrtocell_59673(p);
	nimln(248, "gc.nim");
	{
		nimln(180, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln(181, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3;
		nimln(249, "gc.nim");
		rtladdzct_61204(c);
	}
	LA3: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (*a).Sup.len);
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI) 0) <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (((NI) 0) <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	}BeforeRet: ;
	return result;
}

static N_INLINE(Jsonnodeobj242754*, HEX5BHEX5D_244134)(Jsonnodeobj242754* node, NimStringDesc* name) {
	Jsonnodeobj242754* result;
	nimfr("[]", "json.nim")
{	result = 0;
	nimln(790, "json.nim");
	{
		if (!!(!(node == 0))) goto LA3;
		failedassertimpl_99603(((NimStringDesc*) &TMP1187));
	}
	LA3: ;
	nimln(791, "json.nim");
	{
		if (!!(((*node).kind == ((NU8) 5)))) goto LA7;
		failedassertimpl_99603(((NimStringDesc*) &TMP1188));
	}
	LA7: ;
	{
		NimStringDesc* key_244611;
		Jsonnodeobj242754* item_244612;
		TY242769* HEX3Atmp_244614;
		NI i_244617;
		NI L_244619;
		key_244611 = 0;
		item_244612 = 0;
		HEX3Atmp_244614 = 0;
		nimln(792, "json.nim");
		if (!(((32 &(1<<(((*node).kind)&7)))!=0))) raiseFieldError(((NimStringDesc*) &TMP1189));
		HEX3Atmp_244614 = (*node).kindU.S6.fields;
		nimln(3365, "system.nim");
		i_244617 = ((NI) 0);
		nimln(3366, "system.nim");
		L_244619 = (HEX3Atmp_244614 ? HEX3Atmp_244614->Sup.len : 0);
		{
			nimln(3367, "system.nim");
			while (1) {
				NI TMP1190;
				if (!(i_244617 < L_244619)) goto LA11;
				nimln(3368, "system.nim");
				if ((NU)(i_244617) >= (NU)(HEX3Atmp_244614->Sup.len)) raiseIndexError();
				key_244611 = HEX3Atmp_244614->data[i_244617].Field0;
				if ((NU)(i_244617) >= (NU)(HEX3Atmp_244614->Sup.len)) raiseIndexError();
				item_244612 = HEX3Atmp_244614->data[i_244617].Field1;
				nimln(793, "json.nim");
				{
					if (!eqStrings(key_244611, name)) goto LA14;
					nimln(794, "json.nim");
					result = item_244612;
					goto BeforeRet;
				}
				LA14: ;
				nimln(3369, "system.nim");
				TMP1190 = addInt(i_244617, ((NI) 1));
				i_244617 = (NI)(TMP1190);
				nimln(3370, "system.nim");
				{
					if (!!(((HEX3Atmp_244614 ? HEX3Atmp_244614->Sup.len : 0) == L_244619))) goto LA18;
					failedassertimpl_99603(((NimStringDesc*) &TMP1191));
				}
				LA18: ;
			} LA11: ;
		}
	}
	nimln(795, "json.nim");
	result = NIM_NIL;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(void, parsemessage_249013)(NimStringDesc* data, Message249005* Result) {
	Jsonnodeobj242754* volatile datajson;
	TSafePoint TMP1180;
	Jsonnodeobj242754* LOC15;
	Jsonnodeobj242754* LOC27;
	nimfr("parseMessage", "protocol.nim")
	datajson = 0;
	nimln(12, "protocol.nim");
	pushSafePoint(&TMP1180);
	TMP1180.status = setjmp(TMP1180.context);
	if (TMP1180.status == 0) {
		nimln(13, "protocol.nim");
		datajson = parsejson_248342(data);
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR);
		if (isObj(getCurrentException()->Sup.m_type, (&NTI242756))) {
			Messageparsingerror249007* e_249021;
			NimStringDesc* LOC4;
			NimStringDesc* LOC5;
			TMP1180.status = 0;
			e_249021 = 0;
			nimln(2507, "system.nim");
			e_249021 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
			(*e_249021).Sup.Sup.m_type = (&NTI249007);
			nimln(2508, "system.nim");
			nimln(15, "protocol.nim");
			LOC4 = 0;
			nimln(16, "protocol.nim");
			LOC5 = 0;
			LOC5 = getcurrentexceptionmsg_97608();
			LOC4 = rawNewString(LOC5->Sup.len + 14);
appendString(LOC4, ((NimStringDesc*) &TMP1182));
appendString(LOC4, LOC5);
			asgnRefNoCycle((void**) (&(*e_249021).Sup.message), LOC4);
			nimln(15, "protocol.nim");
			raiseException((Exception*)e_249021, "MessageParsingError");
			popCurrentException();
		}
		else		{
			Messageparsingerror249007* e_249034;
			NimStringDesc* LOC7;
			NimStringDesc* LOC8;
			TMP1180.status = 0;
			e_249034 = 0;
			nimln(2507, "system.nim");
			e_249034 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
			(*e_249034).Sup.Sup.m_type = (&NTI249007);
			nimln(2508, "system.nim");
			nimln(18, "protocol.nim");
			LOC7 = 0;
			nimln(19, "protocol.nim");
			LOC8 = 0;
			LOC8 = getcurrentexceptionmsg_97608();
			LOC7 = rawNewString(LOC8->Sup.len + 15);
appendString(LOC7, ((NimStringDesc*) &TMP1184));
appendString(LOC7, LOC8);
			asgnRefNoCycle((void**) (&(*e_249034).Sup.message), LOC7);
			nimln(18, "protocol.nim");
			raiseException((Exception*)e_249034, "MessageParsingError");
			popCurrentException();
		}
	}
	if (TMP1180.status != 0) reraiseException();
	nimln(21, "protocol.nim");
	{
		NIM_BOOL LOC11;
		Messageparsingerror249007* e_249048;
		NimStringDesc* LOC14;
		LOC11 = 0;
		LOC11 = haskey_245008(datajson, ((NimStringDesc*) &TMP1185));
		if (!!(LOC11)) goto LA12;
		e_249048 = 0;
		nimln(2507, "system.nim");
		e_249048 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
		(*e_249048).Sup.Sup.m_type = (&NTI249007);
		nimln(2508, "system.nim");
		LOC14 = 0;
		LOC14 = (*e_249048).Sup.message; (*e_249048).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1186));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		nimln(22, "protocol.nim");
		raiseException((Exception*)e_249048, "MessageParsingError");
	}
	LA12: ;
	nimln(24, "protocol.nim");
	LOC15 = 0;
	LOC15 = HEX5BHEX5D_244134(datajson, ((NimStringDesc*) &TMP1185));
	unsureAsgnRef((void**) (&(*Result).username), getstr_242990(LOC15, ((NimStringDesc*) &TMP1183)));
	nimln(25, "protocol.nim");
	{
		Messageparsingerror249007* e_249062;
		NimStringDesc* LOC20;
		if (!(((*Result).username ? (*Result).username->Sup.len : 0) == ((NI) 0))) goto LA18;
		e_249062 = 0;
		nimln(2507, "system.nim");
		e_249062 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
		(*e_249062).Sup.Sup.m_type = (&NTI249007);
		nimln(2508, "system.nim");
		LOC20 = 0;
		LOC20 = (*e_249062).Sup.message; (*e_249062).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1192));
		if (LOC20) nimGCunrefNoCycle(LOC20);
		nimln(26, "protocol.nim");
		raiseException((Exception*)e_249062, "MessageParsingError");
	}
	LA18: ;
	nimln(28, "protocol.nim");
	{
		NIM_BOOL LOC23;
		Messageparsingerror249007* e_249076;
		NimStringDesc* LOC26;
		LOC23 = 0;
		LOC23 = haskey_245008(datajson, ((NimStringDesc*) &TMP1185));
		if (!!(LOC23)) goto LA24;
		e_249076 = 0;
		nimln(2507, "system.nim");
		e_249076 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
		(*e_249076).Sup.Sup.m_type = (&NTI249007);
		nimln(2508, "system.nim");
		LOC26 = 0;
		LOC26 = (*e_249076).Sup.message; (*e_249076).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1193));
		if (LOC26) nimGCunrefNoCycle(LOC26);
		nimln(29, "protocol.nim");
		raiseException((Exception*)e_249076, "MessageParsingError");
	}
	LA24: ;
	nimln(30, "protocol.nim");
	LOC27 = 0;
	LOC27 = HEX5BHEX5D_244134(datajson, ((NimStringDesc*) &TMP1194));
	unsureAsgnRef((void**) (&(*Result).message), getstr_242990(LOC27, ((NimStringDesc*) &TMP1183)));
	nimln(31, "protocol.nim");
	{
		Messageparsingerror249007* e_249090;
		NimStringDesc* LOC32;
		if (!(((*Result).message ? (*Result).message->Sup.len : 0) == ((NI) 0))) goto LA30;
		e_249090 = 0;
		nimln(2507, "system.nim");
		e_249090 = (Messageparsingerror249007*) newObj((&NTI249022), sizeof(Messageparsingerror249007));
		(*e_249090).Sup.Sup.m_type = (&NTI249007);
		nimln(2508, "system.nim");
		LOC32 = 0;
		LOC32 = (*e_249090).Sup.message; (*e_249090).Sup.message = copyStringRC1(((NimStringDesc*) &TMP1195));
		if (LOC32) nimGCunrefNoCycle(LOC32);
		nimln(32, "protocol.nim");
		raiseException((Exception*)e_249090, "MessageParsingError");
	}
	LA30: ;
	popFrame();
}

N_NIMCALL(NimStringDesc*, createmessage_249113)(NimStringDesc* username, NimStringDesc* message) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	TY249118 LOC2;
	Jsonnodeobj242754* LOC3;
	NimStringDesc* LOC4;
	nimfr("createMessage", "protocol.nim")
	result = 0;
	nimln(35, "protocol.nim");
	nimln(38, "protocol.nim");
	LOC1 = 0;
	nimln(35, "protocol.nim");
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0].Field0 = copyString(((NimStringDesc*) &TMP1185));
	nimln(36, "protocol.nim");
	LOC2[0].Field1 = HEX25_243205(username);
	LOC2[1].Field0 = copyString(((NimStringDesc*) &TMP1194));
	nimln(37, "protocol.nim");
	LOC2[1].Field1 = HEX25_243205(message);
	LOC3 = 0;
	LOC3 = HEX25_243281(LOC2, 2);
	LOC4 = 0;
	LOC4 = HEX24_247129(LOC3);
	LOC1 = rawNewString(LOC4->Sup.len + 2);
appendString(LOC1, LOC4);
appendString(LOC1, ((NimStringDesc*) &TMP1196));
	result = LOC1;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_protocolInit000)(void) {
	nimfr("protocol", "protocol.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_protocolDatInit000)(void) {
static TNimNode* TMP1198[2];
static TNimNode TMP911[4];
NTI249007.size = sizeof(Messageparsingerror249007);
NTI249007.kind = 17;
NTI249007.base = (&NTI4027);
TMP911[0].len = 0; TMP911[0].kind = 2;
NTI249007.node = &TMP911[0];
NTI249022.size = sizeof(Messageparsingerror249007*);
NTI249022.kind = 22;
NTI249022.base = (&NTI249007);
NTI249022.marker = TMP1181;
NTI249005.size = sizeof(Message249005);
NTI249005.kind = 18;
NTI249005.base = 0;
NTI249005.flags = 2;
TMP1198[0] = &TMP911[2];
TMP911[2].kind = 1;
TMP911[2].offset = offsetof(Message249005, username);
TMP911[2].typ = (&NTI149);
TMP911[2].name = "username";
TMP1198[1] = &TMP911[3];
TMP911[3].kind = 1;
TMP911[3].offset = offsetof(Message249005, message);
TMP911[3].typ = (&NTI149);
TMP911[3].name = "message";
TMP911[1].len = 2; TMP911[1].kind = 2; TMP911[1].sons = &TMP1198[0];
NTI249005.node = &TMP911[1];
}

