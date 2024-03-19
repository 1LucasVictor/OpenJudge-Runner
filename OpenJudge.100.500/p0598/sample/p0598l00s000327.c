#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MOD 998244353
#define MAX(a,b) (a>b?a:b)
#define MAX3(a,b,c) MAX(a,MAX(b,c))
#define MIN(a,b) (a<b?a:b)
#define MIN3(a,b,c) MIN(a, MIN(b,c))
typedef long long lli;
typedef unsigned short int usi;

// 昇順
int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main()
{
    int a, b;
    int i, j;
    scanf("%d %d",&a, &b);

    if(b%a==0) {
        printf("%d",a+b);
    } else {
        printf("%d",b-a);
    }
    return 0;
}
