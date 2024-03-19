#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int i, a, k, b;
    scanf("%d%d%d", &k, &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i % k == 0)
        {
            printf("OK\n");
            return 0;
        }
    }
    printf("NG\n");
    return 0;
}