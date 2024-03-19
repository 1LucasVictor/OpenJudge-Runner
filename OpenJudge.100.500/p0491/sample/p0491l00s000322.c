#include<stdio.h>
#define ll long long
ll abbs(ll a){if(a>0) return a; return -a;}
int main(){
    ll n, k;
    scanf("%lld%lld",&n,&k);
    if(k >= (2 * n)) printf("%lld\n",n);
    else{
        ll q = n % k;
        ll r = abbs(q - k);
        if(r > q) printf("%lld\n",q);
        else printf("%lld\n",r);
    }
    return 0;
}