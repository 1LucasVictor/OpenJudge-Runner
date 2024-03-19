#include<stdio.h>
int main(){
    int A,B,N;
    int train = 0,taxi = 0;
    scanf("%d %d %d",&N,&A,&B);
    train = N * A;
    taxi = B;
    if(train <= taxi){
        printf("%d",train);
    }else{
        printf("%d",taxi);
    }
    return 0;
}
