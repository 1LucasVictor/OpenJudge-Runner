#include <stdio.h>
int main(void) {
    long int a, b, max, max2;
    scanf("%ld %ld", &a, &b);
    
    max = a+b>=a-b ? a+b : a-b;
    max2 = max>a*b ? max : a*b;
    
    printf("%ld", max2);
}