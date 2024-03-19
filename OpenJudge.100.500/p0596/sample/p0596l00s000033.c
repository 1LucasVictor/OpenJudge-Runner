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
    int i, n, a=0, b=0;
    char s[100000];
    scanf("%s",s);
    n = strlen(s);
    for(i=0; i<n; i++) {
        if(s[i] == '0') {
            a++;
        } else {
            b++;
        }
    }
    printf("%d", 2*MIN(a,b));
    return 0;
}
