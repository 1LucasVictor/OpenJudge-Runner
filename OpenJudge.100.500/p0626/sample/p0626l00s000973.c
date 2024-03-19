#include <stdio.h>

int main()
{
    int d,n;
    scanf("%d %d",&d,&n);

    if(d == 0)
    {
        if(n != 100)printf("%d",n);
        else printf("%d",n + 1);
    }
    else if(d == 1)
    {
        if(n != 100)printf("%d00",n);
        else printf("%d00",n + 1);
    }
    else
    {
        if(n != 100)printf("%d0000",n);
        else printf("%d0000",n + 1);
    }
    
}