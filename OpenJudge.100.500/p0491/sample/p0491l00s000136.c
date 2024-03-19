#include <stdio.h>
int main(void){
    int N,K,next;
    
    scanf("%d",&N);
    scanf("%d",&K);
    
    
    
    
    
    
    next=N-K;
    if(next<0){
        next=next*(-1);
    }
    
    while(N>next){
        N=next;
    
        next=N-K;
        if(next<0){
            next=next*(-1);
        }
    
    }
    
    printf("%d\n",N);
    
    return 0;
}