#include <stdio.h>
#include <stdlib.h>

int main(){
    int score=0;
    int A,B,C,K,i;
    scanf("%d %d %d %d",&A,&B,&C,&K);

    while(0<K){
        if(0<A){
            score++;
            A--;
        }else if(0<B){
            B--;
        }else if(0<C){
            score--;
            C--;
        }
        K--;
    }
    printf("%d\n",score);

    return 0;
}