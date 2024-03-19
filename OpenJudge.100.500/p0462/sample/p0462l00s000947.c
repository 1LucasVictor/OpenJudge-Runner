#include <stdio.h>
 
int main(){
  
    long long a;
    double b;
    
    scanf("%lld %lf", &a, &b);
    
    long long x = a * b;
  
    printf("%lld", x);
    
    return 0;
}