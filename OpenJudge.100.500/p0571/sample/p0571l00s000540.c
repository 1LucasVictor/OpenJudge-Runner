#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if(n*a<=b)
        printf("%d",a*n);
    else
        printf("%d",b);
    return 0;
}
