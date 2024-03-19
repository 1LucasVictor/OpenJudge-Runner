#include <stdio.h>

int main() {
    int sum = 0, remainder;
    long n, cur;

    while (1) {
        scanf("%ld", &n);

        if (n == 0)
            break;

        cur = n;
       while (cur > 0) {
            remainder = cur % 10;
            sum += remainder;
            cur /= 10;
        }

        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
