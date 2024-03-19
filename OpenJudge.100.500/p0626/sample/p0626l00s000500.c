#include <stdio.h>

int main()
{
    int d,n;
    scanf("%d %d",&d,&n);

    if(d == 0)
    {
        printf("%d",n);
    }
    else if(d == 1)
    {
        printf("%d00",n);
    }
    else
    {
        printf("%d0000",n);
    }
    
}