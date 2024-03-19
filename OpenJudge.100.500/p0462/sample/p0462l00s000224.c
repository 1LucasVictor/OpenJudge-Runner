#include <stdio.h>
#include <stdlib.h>

int main(void){
    long int a,c;
    double b;

    scanf("%ld", &a);
    scanf("%lf",&b);
    c = (a*b)/1;
    printf("%ld",c);

    return 0;
}