#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define abs(p) ((p)>=(0)?(p):(-(p)))
int main(void){
    ll A, B, X;
    scanf("%lld %lld %lld", &A, &B, &X);
    if(A<=X && X<=(A+B)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
