#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <assert.h>
typedef int64_t ll;
typedef uint64_t ull;
int acs(const void *a, const void *b){return *(int*)a - *(int*)b;} /* 1,2,3,4.. */
int des(const void *a, const void *b){return *(int*)b - *(int*)a;} /* 8,7,6,5.. */
#define min(a,b) (a < b ? a: b)
#define max(a,b) (a > b ? a: b)

#define MAXN (1000000000)
#define MOD (1000000007)

int main(void)
{
    char s[5];
    scanf("%s",s);
    int c=0;
    for(int i=1;i<4;i++)
    { 
        if(s[i-1]==s[i])c++;
    }
    if(c==0)
    {
        printf("Good\n");
    }else
    {
        printf("Bad\n");
    }
    

    return 0;
}
