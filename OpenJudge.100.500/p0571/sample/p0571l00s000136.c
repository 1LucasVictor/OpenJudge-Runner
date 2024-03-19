#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define MOD 1000000007
#define MAX(a,b) (a>b?a:b)
#define MAX3(a,b,c) MAX(a,MAX(b,c))
#define MIN(a,b) (a<b?a:b)
#define MIN3(a,b,c) MIN(a, MIN(b,c))
typedef long long lli;
int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

lli nCr(int n, int r, lli *mem) {
    if(n < r) return 0;
    if(mem[n*2010 + r]!=0) {
        return mem[n*2010 + r];
    } else {
        if(n==r || r==0) {
            mem[n*2010 + r] = 1;
            return 1;
        }
        lli a = nCr(n-1, r-1, mem);
        lli b = nCr(n-1, r, mem);
        mem[n*2010 + r] = (a+b)%MOD;
        return mem[n*2010 + r];
    }
}

int main()
{
    int n, a,b;
    scanf("%d%d%d",&n,&a,&b);
    printf("%d",MIN(n*a, b));

    return 0;
}
