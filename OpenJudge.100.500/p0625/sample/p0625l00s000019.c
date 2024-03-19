#include <stdio.h>

int main(void) {
    int A, B;
    A = B = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    if (A < 9 && B < 9) {
        printf("Yay!");
    } else {
        printf(":(");
    }

    return 0;
}
