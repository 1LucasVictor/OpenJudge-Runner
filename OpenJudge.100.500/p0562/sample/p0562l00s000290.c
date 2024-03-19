#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
#define rep(i,l,r) for(ll i=(l);i<(r);i++)
#define max(p,q) ((p)>(q)?(p):(q))
#define min(p,q) ((p)<(q)?(p):(q))
#define abs(p) ((p)>=(0)?(p):(-(p)))
int cmp(const void *a, const void *b);
int main(void){
    ll A, B, tap;
    scanf("%lld %lld", &A, &B);
    if(B==1){
        printf("0\n");
        return 0;
    }
    for(tap=1; 1+A*tap-tap<B; tap++);
    printf("%lld\n", tap--);
    return 0;
}
int cmp(const void *a, const void *b){
    ll A=*(ll *)a, B=*(ll *)b;
    if(A==B)return 0;
    else return A>B ? 1:-1;//昇順ソート
}
