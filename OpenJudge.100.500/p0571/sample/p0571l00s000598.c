#include <stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);

    printf("%d\n", min(a * n, b));
    return 0;
}