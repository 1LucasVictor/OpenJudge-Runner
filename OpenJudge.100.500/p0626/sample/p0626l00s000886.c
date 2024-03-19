#include<stdio.h>

int main(){
    int D, N, i=1;
    if(scanf("%d %d",&D,&N) == 0) D=D;
    printf("%d",N);
    if(N==100) i=0;
    for(;i<=D;i++) printf("00");
    printf("\n");
}