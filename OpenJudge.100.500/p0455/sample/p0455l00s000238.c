#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a < 1 || a > 10) return 0;

    printf("%d\n", a + (a*a) + (a*a*a));
}