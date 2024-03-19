#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int X;
    int A;
    
    scanf("%d %d",&X,&A);
    
    if (X<A){
        printf("0\n");
    }
    else{
        printf("10\n");
    }
    return 0;
}