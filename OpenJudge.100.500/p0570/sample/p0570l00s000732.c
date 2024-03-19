#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,k,c;
    scanf("%d %d",&a,&b);
    c = a + b;
    if(c % 2 == 0)
    {
        k = c / 2;
        printf("%d",k);
    }
    else
    {
        printf("IMPOSSIBLE");
    }
    return 0;
}