#include <stdio.h>
int main(void){
    int N;
    int A;
    int B;

    1<=N<=20;
    1<=A<=50;
    1<=B<=50;

    scanf("%d %d %d",&N,&A,&B);
  
    if(A * N <= B){
        printf("%d",A * N);
    }else{
        printf("%d",B);
    }
    return 0;
}