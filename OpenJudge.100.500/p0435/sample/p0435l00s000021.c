#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846
#define MOD 1000000007 /* 1e9 + 7 */
#define MAXN 10000000 /* 1e7 */
#define REP(i,n) for(i=0; i<n; i++)
typedef long long ll;
int i,j;

int main(void) {
    int n,ans=0,x,y,d;
    scanf("%d%d",&n,&d);
    REP(i,n) {
        scanf("%d%d",&x,&y);
        if(x*x+y*y<=d*d) ans++;
    }
    printf("%d\n", ans);
    return 0;
}