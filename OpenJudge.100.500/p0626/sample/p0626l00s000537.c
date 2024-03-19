#include<stdio.h>

int main(){
    int D, N, i;
    if(scanf("%d %d",&D,&N) == 0) D=D;
    printf("%d",N);
    for(i=1;i<=D;i++) printf("00");
    printf("\n");
}