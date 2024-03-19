#include <stdio.h>

int main(void) {
    int a, b, k, i = 100, cnt = 0;

    scanf("%d %d %d", &a, &b, &k);

    while (cnt < k) {
        if (a % i == 0 && b % i == 0) {
            cnt++;
        }
        i--;
    }

    printf("%d\n", i + 1);

    return 0;
} 
