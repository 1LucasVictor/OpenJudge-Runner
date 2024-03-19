#include <stdio.h>

int main() {
    int N, a, b, y=0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        a = N % i;
        if (a == 0) {
            b = N / i;
            if ((i <= 9) && (b <= 9)) {
                y = 1;
            }
        }
    }
    if (y == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
