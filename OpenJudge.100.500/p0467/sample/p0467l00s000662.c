#include<stdio.h>

long long int A, B, C, K;

int main(void){

    scanf("%lld%lld%lld%lld", &A,&B,&C,&K);

    if(A+B>=K){
        printf("%lld\n", A);
    }else{
        printf("%lld\n", 2*A+B-K);
    }

}