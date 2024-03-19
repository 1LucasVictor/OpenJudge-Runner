#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int A[200000] = { 0 };
    for (int i = 0; i < N - 1; i++) {
        int a = 0;
        scanf("%d", &a);
        A[a - 1] += 1;
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}