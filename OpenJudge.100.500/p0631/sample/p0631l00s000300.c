#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b;
    while(~scanf("%d %d %d",&a,&b,&n))
    {
        if(n-a<=b)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
