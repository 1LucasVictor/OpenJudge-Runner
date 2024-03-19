#include <stdio.h>

int main() {
    
    unsigned long long int a;
    long double b;
    
    scanf("%lld%Lf",&a,&b);
    
    
    a*=b;
    
    
    printf("%lld",a);
    
    return 0;
}
