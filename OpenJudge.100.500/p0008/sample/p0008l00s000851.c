#include <stdio.h>

int main(void)
{
    int n, c;
    int i, j;

    while (scanf("%d", &n) != EOF) {
        c = 0;
        for (i = 2; i <= n; i++) {
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    c--;
                    break;
                }
            }
            c++;
        }

        printf("%d\n", c);
    }

    return 0;
}