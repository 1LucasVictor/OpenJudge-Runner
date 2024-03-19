#include <stdio.h>

int main(void)
{
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);

    if (x >= a && a >= b) printf ("delicious\n");
    if (x >= a && a < b) printf("safe\n");
    if (x <= a && a < b) printf ("dangerous\n");

    return (0);
}
