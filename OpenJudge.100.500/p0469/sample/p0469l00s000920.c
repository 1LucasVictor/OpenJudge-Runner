#include <stdio.h>
int main(void){

    int i, A, B, K ;

    scanf("%d%d%d" ,&K, &A, &B);

    i=A/K;
    if( K*(i+1)>=A && K*(i+1)<=B){
        printf("OK");

    }else if(K*i==A){
        printf("OK");
    }else{
        printf("NG");
    };

    return 0;
}
