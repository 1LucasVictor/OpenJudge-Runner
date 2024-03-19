#include<stdio.h>

int main(){
    long int a,b;
    float tmp;

    scanf("%ld",&a);
    scanf("%f",&tmp);

    b = (long int)(tmp*100);

    printf("%ld\n", ( a * b ) / 100 );

    return 0;
}