#include <stdio.h>

int main(void)
{
    int prime[1000000], i, j, n, c;

    for (i = 2; i < 1000000; i += 2) {
        prime[i] = 0;
        prime[i + 1] = 1;
    }
    prime[0] = prime[1] = 0;
    prime[2] = 1;
    for (i = 3; i < 1000000; i += 2)
        if (prime[i])
            for (j = 2 * i; j < 1000000; j += i)
                prime[j] = 0;

    while (scanf("%d", &n) != EOF) {
        c = 0;
        for (i = 2; i <= n; ++i)
            if (prime[i])
                ++c;
        printf("%d\n", c);
    }

    return 0;
}