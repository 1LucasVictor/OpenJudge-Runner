#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    short a[n];
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=n-1; i>=0;i--)
    {
        if (i==0)
        {
            printf("%d", a[0]);
        }
        else
        {
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}
