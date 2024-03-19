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

#define MAXN (200001)
#define MOD (1000000007)

char s[5];
int cc[26];
int main(void)
{
    scanf("%s",s);

    for(int i=0;i<4;i++) cc[s[i]-'A']++;
    for(int i=0;i<26;i++)
    {
        if(cc[i]!=0 && cc[i]!=2)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
