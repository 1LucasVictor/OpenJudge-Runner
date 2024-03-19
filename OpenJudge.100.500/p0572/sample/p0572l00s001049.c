//133_c
#include <stdio.h>

typedef long long ll;
#define rep(i,a,b,c) for(ll i=(a);i<(b);i+=(c))

ll a[2020]={};

int main(void){
    ll L,R,k=0,ans=1;
    scanf("%lld %lld",&L,&R);
    rep(i,L,R+1,1){
        if(i%2019==0){
            printf("0\n");
            return 0;
        }
        a[i%2019]++;
    }
    rep(i,1,2019,1){
        if(k>=2)goto end;
        if(a[i]>0){
            if(a[i]>=2&&k==0){
                ans=i*i;
                goto end;
            }else {
                ans*=i;
                k++;
            }
        }
    }
    end:;
    printf("%lld\n",ans);
    return 0;
}