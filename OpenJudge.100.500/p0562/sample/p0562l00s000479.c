#include <stdio.h>

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int ans;
    for (int i = 0; i < 10000; i++) {
        if (A + ((A * i) - i) >= B) {
            ans = i + 1;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
