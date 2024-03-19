#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, sum = 0, sub = 0, mult = 0;

    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;

    if (mult > sub && mult > sum) {
        printf("%d\n", mult);
    } else if (sum > mult && sum > sub) {
        printf("%d\n", sum);
    } else {
        printf("%d\n", sub);
    }

    return 0;
}

