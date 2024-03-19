#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int ans = 0;
    for (int i = 1; i < 10000000; i++) {
        if ((A * i) - (i - 1) >= B) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
