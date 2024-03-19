#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    double A,B;

    scanf("%lf %lf", &A, &B);
    printf("%ld", (long long int)(A*B));
    return 0;
}