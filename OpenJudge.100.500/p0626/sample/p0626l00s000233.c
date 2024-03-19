#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int d, n;
    scanf("%d%d", &d, &n);
    if (n == 100) n++;
    int ans = pow(100, d)*n;
    printf("%d\n", ans);
    return 0;
}
