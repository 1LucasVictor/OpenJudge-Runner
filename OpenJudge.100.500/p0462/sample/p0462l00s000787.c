#include <stdio.h>

int main(void){
    long long int A;
    double B;  

    scanf("%lld",&A);
    scanf("%lf",&B);

    printf("%lld\n",(long long int)((double)A * B));

    return 0;
}