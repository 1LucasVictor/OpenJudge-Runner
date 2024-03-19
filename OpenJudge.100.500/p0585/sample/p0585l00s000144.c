#include <stdio.h>

int main(void)
{
    int a, b, t;
    int count = 0;

    scanf("%d %d %d", &a, &b, &t);
    count = t / a;
    printf("%d\n", count * b);

    return 0;
}