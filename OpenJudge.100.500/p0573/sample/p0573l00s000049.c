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
    return *(char*)a - *(char*)b;
}
int main()
{
    char s[4], a,b;
    int i, n=0,m=0;
    scanf("%s",s);
    qsort(s, 4, sizeof(char), cmp);
    if(s[0]==s[1] && s[2]==s[3] && s[0]!=s[2]) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
