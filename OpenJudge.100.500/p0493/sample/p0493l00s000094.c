#include <stdio.h>
#include <stdlib.h>


int main(){

    int X;
    scanf("%d",&X);

    int a, b;

    a = X/500;
    X = X%500;

    b = X%5;

    printf("%d",a*1000+b*5);

   return 0;
}