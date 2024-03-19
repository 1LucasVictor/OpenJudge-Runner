#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>


int main(){
    long int A,B,C,K;
    scanf("%ld %ld %ld %ld",&A,&B,&C,&K);
    long int sum=0;
    if (A>K) {
        sum+=K;
        K=0;
    }
    else{
        sum+=A;
        K-=A;
    }
    if (B>K) {
        K=0;
    }
    else{
        K-=B;
    }
    sum-=K;
    printf("%ld\n",sum);
    return 0;
}