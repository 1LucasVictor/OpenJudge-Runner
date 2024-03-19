#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
typedef long long ll;
#define rep(i,n) for(ll i=0; i<(ll)(n); i++)
#define max(l,r) ((l)>(r)?l:r)
#define min(l,r) ((l)<(r)?l:r)
#define swap(l,r) {ll tp=l;l=r;r=tp;}
const ll MOD = 1000000007;

int main(){
    //input
    ll n, d;
    scanf("%lld%lld", &n, &d);

    ll ans = 0;
    rep(i,n){
        ll x, y;
        scanf("%lld%lld", &x, &y);
        if(x*x + y*y <= d*d) ans++;
    }

    //output
    printf("%lld", ans);
}