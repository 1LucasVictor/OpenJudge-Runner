#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
int acs(const void *a, const void *b){return *(int*)a - *(int*)b;} /* 1,2,3,4.. */
int des(const void *a, const void *b){return *(int*)b - *(int*)a;} /* 8,7,6,5.. */
#define min(a,b) (a < b ? a: b)
#define max(a,b) (a > b ? a: b)

#define MAXN (200000)
#define MOD (998244353)


int main(void)
{
    int a,b;

    
    scanf("%d %d", &a, &b);
    int c = 0;
    int t = 1;
    while(t<b)
    {
        t += a-1;
        c++;
    }
    printf("%d\n",c);
    return 0;
}





