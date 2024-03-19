#include <stdio.h>
int main() {

    int x, A, B, C, K;

    scanf("%d %d %d %d", &A, &B, &C, &K);

    if(K<=A) {
        x = K;
    } else if(K<=A+B) {
        x = A;
    } else {
        x = A * 2 + B - K;
    }
    printf("%d", x);

    return 0;
}
