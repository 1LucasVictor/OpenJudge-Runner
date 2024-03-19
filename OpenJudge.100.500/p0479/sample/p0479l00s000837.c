#include<stdio.h>
typedef long long ll;
int main(){
    ll N,a[200000],b[200000];
    scanf("%lld",&N);
    for(ll i=0;i<N-1;i++){
        scanf("%lld",&a[i]);

    }
    for(ll i=0;i<N-1;i++){
        b[a[i]-1]++;
    }
    for(ll i=0;i<N;i++){
        printf("%lld\n",b[i]);
    }
}