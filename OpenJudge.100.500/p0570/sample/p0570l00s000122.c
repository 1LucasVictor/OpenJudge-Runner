#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    long int A,B,ans;

    scanf("%ld %ld",&A,&B);

    ans = (A + B)/2;

    if(abs(A - ans) == abs(B - ans)){
        printf("%ld",ans);
    }else{
        printf("IMPOSSIBLE");
    }
    return 0;
}