#include <stdio.h>

int main(void)
{
    int a, b;
    int sum;
    int digit;
    while (scanf("%d %d", &a, &b) != EOF) {
        sum = a + b;
        digit = 1;
        while ((sum /= 10) >= 1) {
            digit++;
        }
        printf("%d\n", digit);
    }

    return 0;
}