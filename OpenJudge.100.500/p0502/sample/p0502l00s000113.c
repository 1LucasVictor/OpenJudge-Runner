#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int N, i, ans = 0;
    int A[110];
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0) {
            if (A[i] % 3 == 0 || A[i] % 5 == 0) {
                continue;
            } else {
                ans = 1;
            }
        }
    }
    if (ans == 0) {
        printf("APPROVED\n");
    } else {
        printf("DENIED\n");
    }


    return 0;
}