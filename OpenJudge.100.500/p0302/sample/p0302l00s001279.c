#include <stdio.h>
 
// バッファを経ずstdinから数値を得る
#if 1
#define gc() getchar_unlocked()
#define pc(c) putchar_unlocked(c)
#else
#define gc() getchar()
#define pc(c) putchar(c)
#endif
int in()
{
    int n = 0, c = gc();
    do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
    return n;
}
 
int  tr['T'+1];
char f[33554432];
 
int main()
{
    int n, k, c;
 
    tr['A'] = 0, tr['C'] = 1, tr['G'] = 2, tr['T'] = 3;
    n = in();
    while (n--) {
        if (gc() == 'i') {
            k = 7; while (--k) gc();
            k++; while ((c = gc()) >= ' ') k <<= 2, k |= tr[c];
            f[k] = 1;
        } else {
            k = 5; while (--k) gc();
            k++; while ((c = gc()) >= ' ') k <<= 2, k |= tr[c];
            if (f[k]) pc('y'), pc('e'), pc('s');
            else      pc('n'), pc('o');
            pc('\n');
        }
    }
    return 0;
}

