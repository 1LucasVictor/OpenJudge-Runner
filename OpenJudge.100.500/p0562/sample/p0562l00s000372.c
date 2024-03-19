#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int ans = 0;
    for (int i = 0; i < 10000000; i++) {
        int a;
        if (i == 0) {
            a = 1;
        } else {
            a = 0;
        }
        if (a + (A * i) - (i - 1) >= B) {
            ans = i;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
