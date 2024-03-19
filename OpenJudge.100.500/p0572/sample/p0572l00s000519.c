//133_c
#include <stdio.h>

typedef long long ll;
#define rep(i,a,b,c) for(ll i=(a);i<(b);i+=(c))
ll min(ll a, ll b){if(a<b)return a;else return b;}

ll a[2020]={};

int main(void){
    ll L,R,ans=2018;
    scanf("%lld %lld",&L,&R);
    if(R-L>=2019){
        printf("0\n");
        return 0;
    }
    rep(i,L,R,1){
        rep(j,L+1,R+1,1){
            ans=min(ans,(i*j)%2019);
        }
    }
    printf("%lld\n",ans);
    return 0;
}