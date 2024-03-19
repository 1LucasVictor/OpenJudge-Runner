#include <stdio.h>

int main() {
    int X, A, B;
    scanf("%d %d %d", &X, &A, &B);

    if (B < A) {
        printf("delicious");
    } else if (B - A < X) {
        printf("safe");
    } else {
        printf("dangerous");
    }
    return 0;
}