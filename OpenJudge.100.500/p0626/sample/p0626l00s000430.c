#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int D, N;

    scanf("%d%d",&D,&N);

    if(D==0) {
        if(N!=100){
            printf("%d\n", N);
        }else{
            printf("101\n");
        }
    } else if (D==1) {
        if(N!=100){
            printf("%d\n", 100*N);
        }else{
            printf("10001\n");
        }
    }else if (D==2) {
        if(N!=100){
            printf("%d\n", 10000*N);
        }else{
            printf("1000001\n");
        }
    }
    return 0;
}