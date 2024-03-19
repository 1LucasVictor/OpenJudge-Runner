#include <stdio.h>

int main(void){
    int A,B,T,N,SUM=0;
    scanf("%d%d%d",&A ,&B ,&T);
    float t;
    t = T + 0.5;
    N=t/A;
    int i;
    for(i=0;i<N;i++){
        SUM=SUM+B;
    }
    printf("%d",SUM);
}
