#include <stdio.h>
int main(void){
    int D,N;
    scanf("%d %d",&D,&N);
    if(D==0){
        if(N==100)printf("101");
        else printf("%d",N);
    }
    if(D==1){
        if(N==100)printf("10100");
        else printf("%d00",N);
    }
    if(D==2){
        if(N==100)printf("1010000");
        else printf("%d0000",N);
    }
    return 0;
}
