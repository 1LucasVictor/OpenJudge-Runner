#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>
#include<assert.h>

typedef long long ll;
#define rep(i,a,b,c) for(ll i=(a);i<(b);i+=(c))
ll POW(ll a, ll b){ll c=1,i;rep(i,0,b,1)c*=a;return c;}


int main(void){
    ll d,n;
    scanf("%lld %lld",&d,&n);
    if(n==100)n++;
    ll ans=pow(100,d)*n;
    printf("%lld\n",ans);
    return 0;
}