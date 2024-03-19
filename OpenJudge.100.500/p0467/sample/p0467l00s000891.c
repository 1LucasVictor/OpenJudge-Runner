#include <stdio.h>
#include <stdlib.h>
 
 
int main(){
    int score;
    int A,B,C,K;
    scanf("%d %d %d %d",&A,&B,&C,&K);
    if(K<=A){
        score = K;
    }else if(K<=A+B){
        score = A;
    }else{
        score = 2*A+B-K;
    }
 
    printf("%d\n",score);
    return 0;
}