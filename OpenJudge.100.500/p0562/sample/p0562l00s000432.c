#include <stdio.h>

int main(void){
    int A, B;
    int counter = 1;
    scanf("%i %i", &A, &B);
    while (A < B){
        B -= A;
        counter++;
    }
    printf("%i\n", counter);
}