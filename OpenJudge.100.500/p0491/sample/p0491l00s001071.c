#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int N,K;
    scanf("%lld",&N);
    scanf("%lld",&K);
    long long int mod = N%K;
    if(K-mod>mod){
        printf("%lld",mod);
    }else{
        printf("%lld",K-mod);
    }
    return 0;
}