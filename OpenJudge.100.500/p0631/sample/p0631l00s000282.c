#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,d;
    while(~scanf("%d %d %d",&a,&b,&c))
    {
        if(c>a&&a+b>c)
            {
                printf("YES\n");
            }
            else if(c==a)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }
    return 0;
}