#include <stdio.h>

int main(void){
    int N, A, B,min;

    scanf("%d%d%d",&N,&A,&B);
    if(1<=N && N <=20 && 1 <= A && A<=50 && 1<=B && B <=50){
        if(N*A > B){
            min = B;
            printf("%d", min);
        }else{
            min = N*A;
            printf("%d", min);
        }
    }else{
        return 0;
    }
   
}