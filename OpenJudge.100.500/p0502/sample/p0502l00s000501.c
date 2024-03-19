#include <stdio.h>
#define A 1000

int main()
{
    int n, a[A], i, j;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

    }
    for(j = 0; j < n; j++)
    {
        if( a[j] % 2 != 0 )
            continue;
        else
        {
            if( a[j] % 3 == 0 || a[j] % 5 == 0 )
                continue;
            else 
            {
                printf("DENIED\n");
                return 0;
            }
        }
    }
    printf("APPROVED\n");

    return 0;
}