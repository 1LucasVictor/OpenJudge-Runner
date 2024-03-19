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
    int n,ans=0;
    double x,y,d;
    scanf("%d%lf",&n,&d);
    REP(i,n) {
        scanf("%lf%lf",&x,&y);
        if(sqrt(x*x+y*y)<=d) ans++;
    }
    printf("%d\n", ans);
    return 0;
}