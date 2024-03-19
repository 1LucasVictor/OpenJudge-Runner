#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define fr(i,n,m) for(ll i=n;i<m;i++)
int main()
{
    ll n,d,x,y,count=0;
    scanf("%lli %lli",&n,&d);
    fr(i,0,n) {
        scanf("%lli %lli",&x,&y);
        ll XY = x*x+y*y;
        ll D = d*d;
        if (XY <= D) {
            count++;
        }
    }
    printf("%lli",count);
    return 0;
}