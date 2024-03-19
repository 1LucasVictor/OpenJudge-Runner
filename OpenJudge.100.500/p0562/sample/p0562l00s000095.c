#include <stdio.h>

int main(void){
    int A, B;
    int ana = 0;
    int counter = 0;
    scanf("%i %i", &A, &B);
    counter++;
    ana += A;
    while (ana < B){
        counter++;
        ana += A - 1;
    }
    printf("%i\n", counter);
}