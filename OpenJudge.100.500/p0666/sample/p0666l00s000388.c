#include <stdio.h>

int main(void)
{
    int x, a, b;
    scanf("%d%d%d", &x, &a, &b);

    if (x > a && x > b) printf ("delicious\n");
    if (x > a && x <= b) printf("safe\n");
    if (x <= a && x <= b) printf ("dangerous\n");

    return (0);
}
