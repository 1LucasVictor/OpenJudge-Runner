#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define chmax(a,b) ((a)=(a)>(b)?(a):(b))
#define chmin(a,b) ((a)=(a)<(b)?(a):(b))
#define abs(p) ((p)>=(0)?(p):(-(p)))
int cmp(const void *a, const void *b);
//your code here!

int main(void){
    ll ans=0;
    char S[4];
    scanf("%s", S);
    rep(i, 0, 3) ans += S[i] - '0';
    printf("%lld\n", ans);
    return 0;
}

int cmp(const void *a, const void *b){
    ll A=*(ll *)a, B=*(ll *)b;
    if(A==B)return 0;
    else return A>B ? 1:-1;//昇順ソート
}
