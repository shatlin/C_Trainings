#define DE1   1      /* MODE == decrypt */
typedef struct {
        unsigned long ek[32];
        unsigned long dk[32];
} des_ctx;

extern void deskey(unsigned char *, short);
extern void usekey(unsigned long *);
extern void cpkey(unsigned long *);
extern void des(unsigned char *, unsigned char *);
static void scrunch(unsigned char *, unsigned long *);
static void unscrun(unsigned long *, unsigned char *);
static void desfunc(unsigned long *, unsigned long *);
static void cookey(unsigned long *);
static unsigned long KnL[32] = { 0L };
static unsigned long KnR[32] = { 0L };
static unsigned long Kn3[32] = { 0L };
static unsigned char Df_Key[24] = {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xef,0xfe,0xdc,0xba,0x98,0x76,0x54,0x32,0x10,
		 0x89,0xab,0xcd,0xef,0x01,0x23,0x45,0x67 };
static unsigned short bytebit[8]    = {0200, 0100, 040, 020, 010, 04, 02, 01 };
static unsigned long bigbyte[24] = {
		 0x800000L,0x400000L,0x200000L,0x100000L,0x80000L,0x40000L,0x20000L,0x10000L,0x8000L,0x4000L,       0x2000L,      0x1000L,
		 0x800L,0x400L,0x200L,0x100L,0x80L,0x40L,0x20L,0x10L,0x8L,0x4L,0x2L,0x1L};
static unsigned char pc1[56] = {
		 56, 48, 40, 32, 24, 16,  8,   0, 57, 49, 41, 33, 25, 17,
		  9,  1, 58, 50, 42, 34, 26,  18, 10,  2, 59, 51, 43, 35,
		 62, 54, 46, 38, 30, 22, 14,   6, 61, 53, 45, 37, 29, 21,
		 13,  5, 60, 52, 44, 36, 28,  20, 12,  4, 27, 19, 11,  3 };
static unsigned char totrot[16] = {
		 1,2,4,6,8,10,12,14,15,17,19,21,23,25,27,28 };
static unsigned char pc2[48] = {
		 13, 16, 10, 23,  0,  4,       2, 27, 14,  5, 20,  9,
		 22, 18, 11,  3, 25,  7,      15,  6, 26, 19, 12,  1,
		 40, 51, 30, 36, 46, 54,      29, 39, 50, 44, 32, 47,
		 43, 48, 38, 55, 33, 52,      45, 41, 49, 35, 28, 31 };
void deskey(key, edf)       /* Thanks to James Gillogly &amp; Phil Karn! */
unsigned char *key;
short edf;
{
		 register int i, j, l, m, n;
		 unsigned char pc1m[56], pcr[56];
		 unsigned long kn[32];

		 for ( j = 0; j &lt; 56; j++ ) {
				  l = pc1[j];
				  m = l &amp; 07;
				  pc1m[j] = (key[l &gt;&gt; 3] &amp; bytebit[m]) ? 1 : 0;
				  }
		 for( i = 0; i &lt; 16; i++ ) {
				  if( edf == DE1 ) m = (15 &#8211; i) &lt;&lt; 1;
				  else m = i &lt;&lt; 1;
				  n = m + 1;
				  kn[m] = kn[n] = 0L;
				  for( j = 0; j &lt; 28; j++ ) {
							l = j + totrot[i];
							if( l &lt; 28 ) pcr[j] = pc1m[l];
							else pcr[j] = pc1m[l &#8211; 28];
							}
				  for( j = 28; j &lt; 56; j++ ) {
						l = j + totrot[i];
						if( l &lt; 56 ) pcr[j] = pc1m[l];
						else pcr[j] = pc1m[l &#8211; 28];
						}
				  for( j = 0; j &lt; 24; j++ ) {
							if( pcr[pc2[j]] ) kn[m] |= bigbyte[j];
							if( pcr[pc2[j+24]] ) kn[n] |= bigbyte[j];
							}
				  }
		 cookey(kn);
		 return;
}

static void cookey(raw1)
register unsigned long *raw1;
{
		 register unsigned long *cook, *raw0;
		 unsigned long dough[32];
		 register int i;

		 cook = dough;
		 for( i = 0; i &lt; 16; i++, raw1++ ) {
				  raw0 = raw1++;
				  *cook   = (*raw0 &amp; 0x00fc0000L) &lt;&lt; 6;
				  *cook  |= (*raw0 &amp; 0x00000fc0L) &lt;&lt; 10;
				  *cook  |= (*raw1 &amp; 0x00fc0000L) &gt;&gt; 10;
				  *cook++       |= (*raw1 &amp; 0x00000fc0L) &gt;&gt; 6;
				  *cook   = (*raw0 &amp; 0x0003f000L) &lt;&lt; 12;
				  *cook  |= (*raw0 &amp; 0x0000003fL) &lt;&lt; 16;
				  *cook  |= (*raw1 &amp; 0x0003f000L) &gt;&gt; 4;
				  *cook++       |= (*raw1 &amp; 0x0000003fL);
				  }
		 usekey(dough);
		 return;
}

void cpkey(into)
register unsigned long *into;
{
		 register unsigned long *from, *endp;
		 from = KnL, endp = &amp;KnL[32];
		 while( from &lt; endp ) *into++ = *from++;
		 return;
}

void usekey(from)
register unsigned long *from;
{
		 register unsigned long *to, *endp;
		 to = KnL, endp = &amp;KnL[32];
		 while( to &lt; endp ) *to++ = *from++;
		 return;
}

void des(inblock, outblock)
unsigned char *inblock, *outblock;
{
		 unsigned long work[2];

		 scrunch(inblock, work);
		 desfunc(work, KnL);
		 unscrun(work, outblock);
		 return;
}

static void scrunch(outof, into)
register unsigned char *outof;
register unsigned long *into;
{
		 *into   = (*outof++ &amp; 0xffL) &lt;&lt; 24;
		 *into  |= (*outof++ &amp; 0xffL) &lt;&lt; 16;
		 *into  |= (*outof++ &amp; 0xffL) &lt;&lt; 8;
		 *into++ |= (*outof++ &amp; 0xffL);
		 *into   = (*outof++ &amp; 0xffL) &lt;&lt; 24;
		 *into  |= (*outof++ &amp; 0xffL) &lt;&lt; 16;
		 *into  |= (*outof++ &amp; 0xffL) &lt;&lt; 8;
		 *into  |= (*outof   &amp; 0xffL);
		 return;
}

static void unscrun(outof, into)
register unsigned long *outof;
register unsigned char *into;
{
		 *into++ = (*outof &gt;&gt; 24) &amp; 0xffL;
		 *into++ = (*outof &gt;&gt; 16) &amp; 0xffL;
		 *into++ = (*outof &gt;&gt;  8) &amp; 0xffL;
		 *into++ =  *outof++           &amp; 0xffL;
		 *into++ = (*outof &gt;&gt; 24) &amp; 0xffL;
		 *into++ = (*outof &gt;&gt; 16) &amp; 0xffL;
		 *into++ = (*outof &gt;&gt;  8) &amp; 0xffL;
		 *into   =  *outof     &amp; 0xffL;
		 return;
}
static unsigned long SP1[64] = {
		 0x01010400L, 0x00000000L, 0x00010000L, 0x01010404L,
		 0x01010004L, 0x00010404L, 0x00000004L, 0x00010000L,
		 0x00000400L, 0x01010400L, 0x01010404L, 0x00000400L,
		 0x01000404L, 0x01010004L, 0x01000000L, 0x00000004L,
		 0x00000404L, 0x01000400L, 0x01000400L, 0x00010400L,
		 0x00010400L, 0x01010000L, 0x01010000L, 0x01000404L,
		 0x00010004L, 0x01000004L, 0x01000004L, 0x00010004L,
		 0x00000000L, 0x00000404L, 0x00010404L, 0x01000000L,
		 0x00010000L, 0x01010404L, 0x00000004L, 0x01010000L,
		 0x01010400L, 0x01000000L, 0x01000000L, 0x00000400L,
		 0x01010004L, 0x00010000L, 0x00010400L, 0x01000004L,
		 0x00000400L, 0x00000004L, 0x01000404L, 0x00010404L,
		 0x01010404L, 0x00010004L, 0x01010000L, 0x01000404L,
		 0x01000004L, 0x00000404L, 0x00010404L, 0x01010400L,
		 0x00000404L, 0x01000400L, 0x01000400L, 0x00000000L,
		 0x00010004L, 0x00010400L, 0x00000000L, 0x01010004L };

static unsigned long SP2[64] = {
		 0x80108020L, 0x80008000L, 0x00008000L, 0x00108020L,
		 0x00100000L, 0x00000020L, 0x80100020L, 0x80008020L,
		 0x80000020L, 0x80108020L, 0x80108000L, 0x80000000L,
		 0x80008000L, 0x00100000L, 0x00000020L, 0x80100020L,
		 0x00108000L, 0x00100020L, 0x80008020L, 0x00000000L,
		 0x80000000L, 0x00008000L, 0x00108020L, 0x80100000L,
		 0x00100020L, 0x80000020L, 0x00000000L, 0x00108000L,
		 0x00008020L, 0x80108000L, 0x80100000L, 0x00008020L,
		 0x00000000L, 0x00108020L, 0x80100020L, 0x00100000L,
		 0x80008020L, 0x80100000L, 0x80108000L, 0x00008000L,
		 0x80100000L, 0x80008000L, 0x00000020L, 0x80108020L,
		 0x00108020L, 0x00000020L, 0x00008000L, 0x80000000L,
		 0x00008020L, 0x80108000L, 0x00100000L, 0x80000020L,
		 0x00100020L, 0x80008020L, 0x80000020L, 0x00100020L,
		 0x00108000L, 0x00000000L, 0x80008000L, 0x00008020L,
		 0x80000000L, 0x80100020L, 0x80108020L, 0x00108000L };

static unsigned long SP3[64] = {
		 0x00000208L, 0x08020200L, 0x00000000L, 0x08020008L,
		 0x08000200L, 0x00000000L, 0x00020208L, 0x08000200L,
		 0x00020008L, 0x08000008L, 0x08000008L, 0x00020000L,
		 0x08020208L, 0x00020008L, 0x08020000L, 0x00000208L,
		 0x08000000L, 0x00000008L, 0x08020200L, 0x00000200L,
		 0x00020200L, 0x08020000L, 0x08020008L, 0x00020208L,
		 0x08000208L, 0x00020200L, 0x00020000L, 0x08000208L,
		 0x00000008L, 0x08020208L, 0x00000200L, 0x08000000L,
		 0x08020200L, 0x08000000L, 0x00020008L, 0x00000208L,
		 0x00020000L, 0x08020200L, 0x08000200L, 0x00000000L,
		 0x00000200L, 0x00020008L, 0x08020208L, 0x08000200L,
		 0x08000008L, 0x00000200L, 0x00000000L, 0x08020008L,
		 0x08000208L, 0x00020000L, 0x08000000L, 0x08020208L,
		 0x00000008L, 0x00020208L, 0x00020200L, 0x08000008L,
		 0x08020000L, 0x08000208L, 0x00000208L, 0x08020000L,
		 0x00020208L, 0x00000008L, 0x08020008L, 0x00020200L };

static unsigned long SP4[64] = {
		 0x00802001L, 0x00002081L, 0x00002081L, 0x00000080L,
		 0x00802080L, 0x00800081L, 0x00800001L, 0x00002001L,
		 0x00000000L, 0x00802000L, 0x00802000L, 0x00802081L,
		 0x00000081L, 0x00000000L, 0x00800080L, 0x00800001L,
		 0x00000001L, 0x00002000L, 0x00800000L, 0x00802001L,
		 0x00000080L, 0x00800000L, 0x00002001L, 0x00002080L,
		 0x00800081L, 0x00000001L, 0x00002080L, 0x00800080L,
		 0x00002000L, 0x00802080L, 0x00802081L, 0x00000081L,
		 0x00800080L, 0x00800001L, 0x00802000L, 0x00802081L,
		 0x00000081L, 0x00000000L, 0x00000000L, 0x00802000L,
		 0x00002080L, 0x00800080L, 0x00800081L, 0x00000001L,
		 0x00802001L, 0x00002081L, 0x00002081L, 0x00000080L,
		 0x00802081L, 0x00000081L, 0x00000001L, 0x00002000L,
		 0x00800001L, 0x00002001L, 0x00802080L, 0x00800081L,
		 0x00002001L, 0x00002080L, 0x00800000L, 0x00802001L,
		 0x00000080L, 0x00800000L, 0x00002000L, 0x00802080L };

static unsigned long SP5[64] = {
		 0x00000100L, 0x02080100L, 0x02080000L, 0x42000100L,
		 0x00080000L, 0x00000100L, 0x40000000L, 0x02080000L,
		 0x40080100L, 0x00080000L, 0x02000100L, 0x40080100L,
		 0x42000100L, 0x42080000L, 0x00080100L, 0x40000000L,
		 0x02000000L, 0x40080000L, 0x40080000L, 0x00000000L,
		 0x40000100L, 0x42080100L, 0x42080100L, 0x02000100L,
		 0x42080000L, 0x40000100L, 0x00000000L, 0x42000000L,
		 0x02080100L, 0x02000000L, 0x42000000L, 0x00080100L,
		 0x00080000L, 0x42000100L, 0x00000100L, 0x02000000L,
		 0x40000000L, 0x02080000L, 0x42000100L, 0x40080100L,
		 0x02000100L, 0x40000000L, 0x42080000L, 0x02080100L,
		 0x40080100L, 0x00000100L, 0x02000000L, 0x42080000L,
		 0x42080100L, 0x00080100L, 0x42000000L, 0x42080100L,
		 0x02080000L, 0x00000000L, 0x40080000L, 0x42000000L,
		 0x00080100L, 0x02000100L, 0x40000100L, 0x00080000L,
		 0x00000000L, 0x40080000L, 0x02080100L, 0x40000100L };

static unsigned long SP6[64] = {
		 0x20000010L, 0x20400000L, 0x00004000L, 0x20404010L,
		 0x20400000L, 0x00000010L, 0x20404010L, 0x00400000L,
		 0x20004000L, 0x00404010L, 0x00400000L, 0x20000010L,
		 0x00400010L, 0x20004000L, 0x20000000L, 0x00004010L,
		 0x00000000L, 0x00400010L, 0x20004010L, 0x00004000L,
		 0x00404000L, 0x20004010L, 0x00000010L, 0x20400010L,
		 0x20400010L, 0x00000000L, 0x00404010L, 0x20404000L,
		 0x00004010L, 0x00404000L, 0x20404000L, 0x20000000L,
		 0x20004000L, 0x00000010L, 0x20400010L, 0x00404000L,
		 0x20404010L, 0x00400000L, 0x00004010L, 0x20000010L,
		 0x00400000L, 0x20004000L, 0x20000000L, 0x00004010L,
		 0x20000010L, 0x20404010L, 0x00404000L, 0x20400000L,
		 0x00404010L, 0x20404000L, 0x00000000L, 0x20400010L,
		 0x00000010L, 0x00004000L, 0x20400000L, 0x00404010L,
		 0x00004000L, 0x00400010L, 0x20004010L, 0x00000000L,
		 0x20404000L, 0x20000000L, 0x00400010L, 0x20004010L };

static unsigned long SP7[64] = {
		 0x00200000L, 0x04200002L, 0x04000802L, 0x00000000L,
		 0x00000800L, 0x04000802L, 0x00200802L, 0x04200800L,
		 0x04200802L, 0x00200000L, 0x00000000L, 0x04000002L,
		 0x00000002L, 0x04000000L, 0x04200002L, 0x00000802L,
		 0x04000800L, 0x00200802L, 0x00200002L, 0x04000800L,
		 0x04000002L, 0x04200000L, 0x04200800L, 0x00200002L,
		 0x04200000L, 0x00000800L, 0x00000802L, 0x04200802L,
		 0x00200800L, 0x00000002L, 0x04000000L, 0x00200800L,
		 0x04000000L, 0x00200800L, 0x00200000L, 0x04000802L,
		 0x04000802L, 0x04200002L, 0x04200002L, 0x00000002L,
		 0x00200002L, 0x04000000L, 0x04000800L, 0x00200000L,
		 0x04200800L, 0x00000802L, 0x00200802L, 0x04200800L,
		 0x00000802L, 0x04000002L, 0x04200802L, 0x04200000L,
		 0x00200800L, 0x00000000L, 0x00000002L, 0x04200802L,
		 0x00000000L, 0x00200802L, 0x04200000L, 0x00000800L,
		 0x04000002L, 0x04000800L, 0x00000800L, 0x00200002L };

static unsigned long SP8[64] =
{
		 0x10001040L, 0x00001000L, 0x00040000L, 0x10041040L,
		 0x10000000L, 0x10001040L, 0x00000040L, 0x10000000L,
		 0x00040040L, 0x10040000L, 0x10041040L, 0x00041000L,
		 0x10041000L, 0x00041040L, 0x00001000L, 0x00000040L,
		 0x10040000L, 0x10000040L, 0x10001000L, 0x00001040L,
		 0x00041000L, 0x00040040L, 0x10040040L, 0x10041000L,
		 0x00001040L, 0x00000000L, 0x00000000L, 0x10040040L,
		 0x10000040L, 0x10001000L, 0x00041040L, 0x00040000L,
		 0x00041040L, 0x00040000L, 0x10041000L, 0x00001000L,
		 0x00000040L, 0x10040040L, 0x00001000L, 0x00041040L,
		 0x10001000L, 0x00000040L, 0x10000040L, 0x10040000L,
		 0x10040040L, 0x10000000L, 0x00040000L, 0x10001040L,
		 0x00000000L, 0x10041040L, 0x00040040L, 0x10000040L,
		 0x10040000L, 0x10001000L, 0x10001040L, 0x00000000L,
		 0x10041040L, 0x00041000L, 0x00041000L, 0x00001040L,
		 0x00001040L, 0x00040040L, 0x10000000L, 0x10041000L
};

static void desfunc(block, keys)
register unsigned long *block, *keys;
{
		 register unsigned long fval, work, right, leftt;
		 register int round;

		 leftt = block[0];
		 right = block[1];
		 work = ((leftt &gt;&gt; 4) ^ right) &amp; 0x0f0f0f0fL;
		 right ^= work;
		 leftt ^= (work &lt;&lt; 4);
		 work = ((leftt &gt;&gt; 16) ^ right) &amp; 0x0000ffffL;
		 right ^= work;
		 leftt ^= (work &lt;&lt; 16);
		 work = ((right &gt;&gt; 2) ^ leftt) &amp; 0x33333333L;
		 leftt ^= work;
		 right ^= (work &lt;&lt; 2);
		 work = ((right &gt;&gt; 8) ^ leftt) &amp; 0x00ff00ffL;
		 leftt ^= work;
		 right ^= (work &lt;&lt; 8);
		 right = ((right &lt;&lt; 1) | ((right &gt;&gt; 31) &amp; 1L)) &amp; 0xffffffffL;
		 work = (leftt ^ right) &amp; 0xaaaaaaaaL;
		 leftt ^= work;
		 right ^= work;
		 leftt = ((leftt &lt;&lt; 1) | ((leftt &gt;&gt; 31) &amp; 1L)) &amp; 0xffffffffL;

		 for( round = 0; round &lt; 8; round++ ) {
				  work  = (right &lt;&lt; 28) | (right &gt;&gt; 4);
				  work ^= *keys++;
				  fval  = SP7[ work             &amp; 0x3fL];
				  fval |= SP5[(work &gt;&gt;  8) &amp; 0x3fL];
				  fval |= SP3[(work &gt;&gt; 16) &amp; 0x3fL];
				  fval |= SP1[(work &gt;&gt; 24) &amp; 0x3fL];
				  work  = right ^ *keys++;
				  fval |= SP8[ work             &amp; 0x3fL];
				  fval |= SP6[(work &gt;&gt;  8) &amp; 0x3fL];
				  fval |= SP4[(work &gt;&gt; 16) &amp; 0x3fL];
				  fval |= SP2[(work &gt;&gt; 24) &amp; 0x3fL];
				  leftt ^= fval;
				  work  = (leftt &lt;&lt; 28) | (leftt &gt;&gt; 4);
				  work ^= *keys++;
				  fval  = SP7[ work             &amp; 0x3fL];
				  fval |= SP5[(work &gt;&gt;  8) &amp; 0x3fL];
				  fval |= SP3[(work &gt;&gt; 16) &amp; 0x3fL];
				  fval |= SP1[(work &gt;&gt; 24) &amp; 0x3fL];
				  work  = leftt ^ *keys++;
				  fval |= SP8[ work             &amp; 0x3fL];
				  fval |= SP6[(work &gt;&gt;  8) &amp; 0x3fL];
				  fval |= SP4[(work &gt;&gt; 16) &amp; 0x3fL];
				  fval |= SP2[(work &gt;&gt; 24) &amp; 0x3fL];
				  right ^= fval;
				  }

		 right = (right &lt;&lt; 31) | (right &gt;&gt; 1);
		 work = (leftt ^ right) &amp; 0xaaaaaaaaL;
		 leftt ^= work;
		 right ^= work;
		 leftt = (leftt &lt;&lt; 31) | (leftt &gt;&gt; 1);
		 work = ((leftt &gt;&gt; 8) ^ right) &amp; 0x00ff00ffL;
		 right ^= work;
		 leftt ^= (work &lt;&lt; 8);
		 work = ((leftt &gt;&gt; 2) ^ right) &amp; 0x33333333L;
		 right ^= work;
		 leftt ^= (work &lt;&lt; 2);
		 work = ((right &gt;&gt; 16) ^ leftt) &amp; 0x0000ffffL;
		 leftt ^= work;
		 right ^= (work &lt;&lt; 16);
		 work = ((right &gt;&gt; 4) ^ leftt) &amp; 0x0f0f0f0fL;
		 leftt ^= work;
		 right ^= (work &lt;&lt; 4);
		 *block++ = right;
		 *block = leftt;
		 return;
}
/* Validation sets:
 *
 * Single&#8211;length key, single&#8211;length plaintext &#8211;
 * Key    : 0123 4567 89ab cdef
 * Plain  : 0123 4567 89ab cde7
 * Cipher : c957 4425 6a5e d31d
 *
 **********************************************************************/

void des_key(des_ctx *dc, unsigned char *key){
		  deskey(key,EN0);
		  cpkey(dc->ek;&gt;ek);
		  deskey(key,DE1);
		  cpkey(dc->dk;&gt;dk);
}
/* Encrypt several blocks in ECB mode.  Caller is responsible for
	short blocks. */
void des_enc(des_ctx *dc, unsigned char *data, int blocks){
		  unsigned long work[2];
		  int i;
		  unsigned char *cp;
		  cp = data;
		  for(i=0;i&lt;blocks;i++){
					 scrunch(cp,work);
					 desfunc(work,dc->ek;&gt;ek);
					 unscrun(work,cp);
					 cp+=8;
		  }
}

void des_dec(des_ctx *dc, unsigned char *data, int blocks){
		  unsigned long work[2];
		  int i;
		  unsigned char *cp;

		  cp = data;
		  for(i=0;i&lt;blocks;i++){
					 scrunch(cp,work);
					 desfunc(work,dc->dk;&gt;dk);
					 unscrun(work,cp);
					 cp+=8;
		  }
}
void main(void){
		  des_ctx dc;
        int i;
        unsigned long data[10];
		  char *cp,key[8] = {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xef};
		  char x[8] = {0x01,0x23,0x45,0x67,0x89,0xab,0xcd,0xe7};

		  cp = x;

		  des_key(&amp;dc,key);
		  des_enc(&amp;dc,cp,1);
		  printf(&#8220;Enc(0..7,0..7) = &#8221;);
		  for(i=0;i&lt;8;i++) printf(&#8220;%02x &#8221;, ((unsigned int) cp[i])&amp;0×00ff);
		  printf(&#8220;\n&#8221;);

		  des_dec(&amp;dc,cp,1);

		  printf(&#8220;Dec(above,0..7) = &#8221;);
		  for(i=0;i&lt;8;i++) printf(&#8220;%02x &#8221;,((unsigned int)cp[i])&amp;0×00ff);
		  printf(&#8220;\n&#8221;);

		  cp = (char *) data;
		  for(i=0;i&lt;10;i++)data[i]=i;

		  des_enc(&amp;dc,cp,5); /* Enc 5 blocks. */
		  for(i=0;i&lt;10;i+=2) printf(&#8220;Block %01d = %08lx %08lx.\n&#8221;,
										  i/2,data[i],data[i+1]);

		  des_dec(&amp;dc,cp,1);
		  des_dec(&amp;dc,cp+8,4);
		  for(i=0;i&lt;10;i+=2) printf(&#8220;Block %01d = %08lx %08lx.\n&#8221;,
										  i/2,data[i],data[i+1]);
}
