#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    long double A; long double B, product = 0.0; 
    scanf("%LF%LF", &A, &B); 
    product = A * B; 
    printf("%llu", (unsigned long long int)trunc(product)); 
  
    return 0; 
} 