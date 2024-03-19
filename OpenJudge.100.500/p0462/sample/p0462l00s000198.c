#include <stdio.h>

int main() {
    unsigned long long a, prod = 0;
    double b;
    
    scanf("%llu %lf", &a, &b);
    
    prod += a*b;
    
    printf("%llu\n", prod); 
    
    return 0;
}
