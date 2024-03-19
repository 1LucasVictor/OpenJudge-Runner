#include <stdio.h>

int main(void){
    int A,B,C,K;
    int ans;
    scanf("%d %d %d %d", &A, &B, &C, &K);
    if((A+B)>=K){
        ans=A;
    }else{
        ans=A+(-1)*(K-A-B);
    }
    printf("%d",ans);
    return 0;
}