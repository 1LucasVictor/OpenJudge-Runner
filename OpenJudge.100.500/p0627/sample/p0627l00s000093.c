#include <stdio.h>
int main(void) {
    long int a, b, max;
    scanf("%ld %ld", &a, &b);
    
    max = a*b;
    if(a+b>=max) {
        max = a+b;
        if(a-b>=max) {
            max = a-b;
        }
    }
    printf("%ld", max);
}