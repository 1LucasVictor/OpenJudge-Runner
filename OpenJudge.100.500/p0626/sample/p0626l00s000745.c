#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int D,N;
    scanf("%d%d",&D,&N);
    if( N != 100 ){
        printf("%d\n",N*(int)pow(100,D));
    }else if( D == 0 ){
        printf("101\n");
    }else if( D == 1 ){
        printf("10001\n");
    }else if( D == 2 ){
        printf("1000001\n");
    }

    return 0;
}