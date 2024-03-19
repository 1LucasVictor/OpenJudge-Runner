#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int i, j, k, l;
    scanf("%d%d%d", &k, &i, &j);
    for (l = i; i <= j; l++)
    {
        if (l % k == 0)
        {
            printf("OK\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}