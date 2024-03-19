#include<stdio.h>
int main ()
{
    int n, i;
    int a[101];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = n - 1; 0 <= i; i--)
    {
        printf("%d", a[i]);
        if(0 < i)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}