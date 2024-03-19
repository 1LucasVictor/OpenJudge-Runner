#include <stdio.h>

int main()
{
    int a, b, c, sum;
    scanf("%d %d %d", &a, &b, &c);
    sum = c - (a - b);
    if (sum < 0)
        printf("0\n");
    else
        printf("%d\n", sum);
    return 0;
}