#include <stdio.h>
int main(void){
    int X,A,W;
    scanf("%d %d" , &X,&A);

    if(X<A){
    W=0;
    printf("%d",W);
    }else if(A<=X){
        W=10;
        printf("%d",W);
    }

}