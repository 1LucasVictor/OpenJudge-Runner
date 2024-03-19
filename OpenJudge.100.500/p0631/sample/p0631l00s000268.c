#include <stdio.h>

int main()
{
    int a, b, x;
    scanf("%d %d %d", &a, &b, &x);
    if (x <= a + b)
    {
        if (a<x)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }
}