#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,c;
    while(~scanf("%d%d%d",&a,&b,&c))
    {
        if(c>=a&&c<=(a+b))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
