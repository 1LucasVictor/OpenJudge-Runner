#include<stdio.h>


int main(void){

    int A,B,C,K;
    int sum=0;

    scanf("%d %d %d %d", &A, &B, &C, &K);

    if(A>=K){
        sum = K;
    }
    else{
        sum = A;
        K-=A;
        if(B<K){
            K-=B;
            sum -=K;
        }
    }

    printf("%d", sum);
    return 0;
}