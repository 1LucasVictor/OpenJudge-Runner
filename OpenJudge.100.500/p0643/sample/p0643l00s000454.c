#include <stdio.h>

int main(void)
{
    int a,b;
    int product;

    scanf("%d %d", &a, &b);
    product = a * b;

    if( (product%2) == 0 ){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
}