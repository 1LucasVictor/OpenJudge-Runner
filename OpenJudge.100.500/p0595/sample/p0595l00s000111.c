#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define VEC(kata, num) (kata*)calloc(num, sizeof(kata))
#define DB puts("ok")
#define SENTINEL 1000000007
typedef long long lli;

// 降順
int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}

int main()
{
    int a, b, k, i, ans;
    scanf("%d%d%d",&a,&b,&k);
    int count = 0;
    for(i=1; ; i++) {
        if(a%i==0 && b%i==0) {
            count++;
            //printf("%d\n",i);
            if(count>=k)break;
        }
    }
    printf("%d",i);
    return 0;
}
