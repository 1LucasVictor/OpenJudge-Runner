#include <stdio.h>
int main(void){
    long a, A, B;
    scanf("%ld", &a);
    A = (a / 500);
    B = ((a % 500) % 5);
    printf("%ld", A * 1000 + B * 5);
    
}
