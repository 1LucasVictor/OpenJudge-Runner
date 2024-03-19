#include <stdio.h>

int main(void){

    int X = 0;
    int sum = 0;

    scanf("%d", &X);

    sum = (X / 500) * 1000;
    sum += ((X % 500) / 5) * 5;

    printf("%d\n", sum);

    return 0;
}