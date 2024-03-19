#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<(n);i++)
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define chmax(a,b) ((a)=(a)>(b)?(a):(b))
#define chmin(a,b) ((a)=(a)<(b)?(a):(b))
#define abs(p) ((p)>=(0)?(p):(-(p)))
#define MOD 1000000007
ll power(ll a,ll b){ll r=1;rep(i,b){r*=a;}return r;}
#define swap(a,b) do{ll w=(a);(a)=(b);(b)=w;}while(0)

//your code here!

int main(void){
    ll N;
    scanf("%lld", &N);
    if(1==N) {
        puts("Yes");
        return 0;
    }
    for(ll i=2; i<=9; i++) {
        if(N%i==0 && N/i<=9) {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}
