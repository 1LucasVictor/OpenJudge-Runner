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
        ll n=i;
        while(n>=2019){
            n%=2019;
        }
        a[n]++;
    }
    rep(i,1,2019,1){
        if(k>=2)goto end;
        if(a[i]>0){
            if(k==0){
                if(a[i]==1){
                    ans*=i;
                    k++;
                }else if(a[i]>1){
                    ans+=i*i;
                    goto end;
                }
            }else if(k==1){
                ans*=i;
                goto end;
            }
        }
    }
    end:;
    while(ans>=2019){
        ans%=2019;
    }
    printf("%lld\n",ans);
    return 0;
}