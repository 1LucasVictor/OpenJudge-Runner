#include <stdio.h>

int main(void)
{
    float a,b;
    scanf("%f%f", &a, &b);
    if ((int)(a*b)%2){
        printf("Odd");
    }
    else {
        printf("Even");
    }
    return 0;
}