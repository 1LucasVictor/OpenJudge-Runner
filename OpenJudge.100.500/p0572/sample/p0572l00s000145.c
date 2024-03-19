#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define MOD 2019
#define MAX(a,b) (a>b?a:b)
#define MAX3(a,b,c) MAX(a,MAX(b,c))
#define MIN(a,b) (a<b?a:b)
#define MIN3(a,b,c) MIN(a, MIN(b,c))
typedef long long lli;
int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}


int main()
{
    int i,j,l,r,ans;
    scanf("%d%d",&l,&r);
    int m = (l-1) / 2019;
    int n = r / 2019;
    if(n-m >= 2 || l==0){
        ans = 0;
    } else {
        int min = 2019;
        for(i=l; i<r; i++) {
            for(j=i+1; j<=r; j++) {
                min = MIN(min, (i*j)%2019);
                //if((i*j)%2019 == 0)printf("%d %d\n",i,j);
            }
        }
        ans = min;
    }
    printf("%d",ans);
    return 0;
}
