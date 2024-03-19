#include<stdio.h>
#include<stdlib.h>

int main(void){

    long long int N,K,ans;

    scanf("%lld %lld",&N,&K);

    ans = (N % K > N-(N % K)) ? (N % K) : (K - (N % K));

    printf("%lld\n",ans);
    return 0;
}
