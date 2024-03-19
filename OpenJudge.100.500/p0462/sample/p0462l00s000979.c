#include <stdio.h>
#include <math.h>

int main(void){

    long double A = 0.0;
    long double B = 0.0;
    scanf("%Lf %Lf", &A, &B);
    B = A * B;
    B = floorl(B);
    printf("%0.0Lf\n", B);

    return 0;
}

