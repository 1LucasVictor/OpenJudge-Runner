#include <stdio.h>

int main(void){
    int A, B ,C;
    scanf("%i %i %i", &A, &B, &C);
    int a = C - (A - B);
    if (a < 0){
        a = 0;
    }
    printf("%i", a);
}