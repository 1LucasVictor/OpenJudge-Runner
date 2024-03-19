#include <stdio.h>

int main(void)
{
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);

    if (x + 1 >= a && a >= b) printf ("delicious\n");
    if (x + 1 >= a && a < b) printf("safe\n");
    if (x + 1 <= a && a < b) printf ("dangerous\n");

    return (0);
}
