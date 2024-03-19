#include<stdio.h>

int main(void) {

    int A, X;

    scanf("%d %d", &X, &A);

    if (X < A) {
        printf("0");
    }
    else {
        printf("10");
    }

    return 0;

}