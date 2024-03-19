#include <stdio.h>

int main(void){
    long A,B,C,K;
    long ans;
    scanf("%ld %ld %ld %ld", &A, &B, &C, &K);
    
    if((A+B)>=K){
        if(K<A)ans=K;
        else ans=A;
    }else{
        ans=A+(-1)*(K-A-B);
    }
    printf("%ld",ans);
    return 0;
}