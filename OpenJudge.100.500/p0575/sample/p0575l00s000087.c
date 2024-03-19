#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,A;
    scanf("%d %d",&X,&A);
    if (X>=0&&X<=9&&A>=0&&A<=9)
    {
        if (X<A)
            printf("0");
        else
            printf("10");
    }
    return 0;
}
