#include <stdio.h>

int main()
{
    int a = 0,b = 0;
    scanf("%d %d",&a,&b);
    if((a * b) % 2 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}
