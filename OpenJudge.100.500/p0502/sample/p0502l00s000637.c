#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int n, m;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (!(m & 1))
        {
            if (!(m % 3 == 0 || m % 5 == 0))
            {
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");
    return 0;
}