#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,X;
    while(~scanf("%d %d %d",&A,&B,&X))
    {
        if(A+B>=X&&A<X)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
