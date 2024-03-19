#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    if( a < b )
    {
        printf("%d\n", 0);
    }
    else
    {
        printf("%d\n", 10);
    }
    
    return 0;
}
