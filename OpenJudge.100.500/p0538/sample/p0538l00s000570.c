#include <stdio.h>

int main(void) {
        int a, b;
        scanf("%d %d", &a, &b);

        int ans = -1;
        if (a < 10 && b < 10) {
                ans = a * b;
        }
        printf("%d\n", ans);
        return 0;
}