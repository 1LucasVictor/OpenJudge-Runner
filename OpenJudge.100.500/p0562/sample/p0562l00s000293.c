#include <stdio.h>

int main(void){
    int A, B;
    int counter = 1;
    scanf("%i %i", &A, &B);
    if (B == 1){
        printf("%i\n", 0);
    } else {
        while (A < B){
        B -= A;
        counter++;
        }
        printf("%i\n", counter);
    }
}