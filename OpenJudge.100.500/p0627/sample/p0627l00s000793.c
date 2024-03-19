#include <stdio.h>
int main(void){
    int A,B,max;
    scanf("%d %d",&A,&B);
    max=0;
    max=A+B;
    if(max<A-B){
        max=A-B;
    }
    if(max<A*B){
        max=A*B;
    }
    printf("%d",max);
    
    return 0;
}