#include <stdio.h>
#include <stdlib.h>


int main(){

    long int X;
    scanf("%ld",&X);

    int a, b;

    a = X/500;
    X = X%500;

    b = X%5;

    printf("%ld",a*1000+b*5);

   return 0;
}