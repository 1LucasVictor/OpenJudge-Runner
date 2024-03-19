#include <stdio.h>
int main()
{
    int h, n, i, err;
    scanf("%d %d", &h, &n);
    int a[n];
    if (h>=1 && h<=1000000000 && n>=1 && n<=100000)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i=0; i<n; i++)
        {
            if (a[i]<1 || a[i]>10000)
            {
                goto skip;
            }
        }
        for (i=0; i<n; i++)
        {
            n-=a[i];
        }
        if (n<=0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
skip:
        printf("Error\n");
    }

    return 0;
}