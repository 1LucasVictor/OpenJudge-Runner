#include <stdio.h>

int main(void){
    int a,b;
    scanf("%i %i", &a, &b);
    puts((a * b % 2) ? "Odd": "Even");
    return 0;
}