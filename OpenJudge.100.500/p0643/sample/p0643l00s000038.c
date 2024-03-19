#include <stdio.h>
 
int main(void) {
    int a;
    int b;
    long result;

    a = 2;
    b = 3;

    result = (a * b) % 2;
    if (result == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
    return 0;
}