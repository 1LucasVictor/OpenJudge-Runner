#include <stdio.h>

int num_digit(n)
{
    int result = 1;

    while ((n = n / 10))
        result++;

    return result;
}

int main(void)
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", num_digit(a + b));

    return 0;
}