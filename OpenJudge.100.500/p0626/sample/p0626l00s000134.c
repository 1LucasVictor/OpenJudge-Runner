#include <stdio.h>

int main(void){
    int D,N,i,X,ans;
    scanf("%d %d",&D,&N);
    
    ans = 0;
    X = 1;
    for(i = 0;i < D;i++){
        X *= 100;
    }
    if(N <= 99){
        printf("%d\n",X * N);
    }else{
        printf("%d\n",X * 101);
    }
}