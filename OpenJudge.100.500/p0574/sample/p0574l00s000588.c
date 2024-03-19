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

int main()
{
    int i;
    char s[4];
    scanf("%s",s);
    for(i=0; i<3; i++) {
        if(s[i]==s[i+1]) {
            printf("Bad");
            return 0;
        }
    }
    printf("Good");
    return 0;
}
