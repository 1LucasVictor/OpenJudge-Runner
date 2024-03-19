#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int a,b,c;
    while(~scanf("%d%d%d",&a,&b,&c))
    {
        if(a+b>=c&&a<=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}