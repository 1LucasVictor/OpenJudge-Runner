#include<stdio.h>
#define ll long long
int main(){
    ll k, a, b, c;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    ll ans;
    if(k <= a){
        ans = k;
    }
    else{
        if(k < a + b){
            ans = a;
        }
        else{
            ll p = k - a - b;
            ans = a - p;
        }
    } 
    printf("%lld\n",ans);
    return 0;
}