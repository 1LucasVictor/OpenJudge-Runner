#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int max(int x, int y)
{
    if (x >= y) return x;
    else return y;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = max(a+b, max(a-b, a*b));
    printf("%d\n", ans);
    return 0;
}
