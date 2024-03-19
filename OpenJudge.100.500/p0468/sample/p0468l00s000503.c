#include <stdio.h>
#include <string.h>

#define rep(i, n) for(int i = 0; i < n; ++i)
#define ifb(N, n) if(N & (1 << n))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define V [0x1000] 
#define AV = malloc(0x8000) 
#define VZ(v) memset(v, 0, 0x1000)
#define addv(a,b) a = (unsigned long long)a + (unsigned long long)b
#define assv(a,b) a = (unsigned long long)b
#define vi 0x7fffffffffffffff

typedef void * v;
typedef unsigned long long ull;

int main(void) {
    char s V;
    scanf("%3s", s);
    if (s[1] == 'B') puts("ARC");
    else puts("ABC");
}