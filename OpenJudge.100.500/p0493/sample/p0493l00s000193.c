#include<stdio.h>

int main(void){
    long X;
    int i,j;

    scanf("%ld",&X);

    printf("%ld",(X/500)*1000 + ((X%500)/5)*5);
    return 0;
}