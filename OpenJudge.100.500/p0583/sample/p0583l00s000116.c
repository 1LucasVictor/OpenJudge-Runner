#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define MOD 998244353
#define MAX(a,b) (a>b?a:b)
#define MAX3(a,b,c) MAX(a,MAX(b,c))
#define MIN(a,b) (a<b?a:b)
#define MIN3(a,b,c) MIN(a, MIN(b,c))
typedef long long lli;


int main()
{
    int n, a, b, c, d, i, flag=0;
    char s[200000];
    scanf("%d%d%d%d%d",&n,&a,&b,&c,&d);
    scanf("%s",s);
    if(c<d) {
        for(i=a; i<d; i++) {
            if(s[i-1]=='#' && s[i]=='#') {
                flag = 1;
                break;
            }
        }
    } else {
        for(i=a; i<c; i++) {
            if(s[i-1]=='#' && s[i]=='#') {
                flag = 1;
                break;
            }
        }
        int temp = 1;
        int start = MAX(b, 2);
        int end = MIN(d, n-1);
        for(i=start; i<=end; i++) {
            if(s[i-2]=='.' && s[i-1]=='.' && s[i]=='.') {
                temp = 0;
                break;
            }
        }
        if(temp==1) {
            flag = 1;
        }
    }
    printf(flag==0?"Yes":"No");
    return 0;
}
