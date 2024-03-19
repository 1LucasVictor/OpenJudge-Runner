#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    long a;
    double b;
    scanf("%ld %lf", &a, &b);
    long ans;
    double dans;
    dans = 0.0001*a*b;
    ans = floor(dans * 10000);
    printf("%ld", ans);
    
}
