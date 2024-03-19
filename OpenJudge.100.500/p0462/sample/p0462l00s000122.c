#include <stdio.h>
 
int main(){
  
    long long a;
    float b;
    
    scanf("%lld", &a);
    scanf("%f", &b);
    
    long long x = a * b;
  
    printf("%lld", x);
    
    return 0;
}
