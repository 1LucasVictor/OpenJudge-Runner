#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a ,&b);
    if ( (b/a == 2 || b/a == 4) && (b%a == 2 || b%a == 4 || b%a == 0))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}