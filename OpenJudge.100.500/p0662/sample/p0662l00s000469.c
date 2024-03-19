#include <stdio.h>

int main(void) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        
        int start = a > c ? a : c;
        int end   = b < d ? b : d;
        int ans = end - start;

        if (ans > 0) {
                printf("%d\n", ans);
        } else {
                puts("0");
        }

        return 0;
}