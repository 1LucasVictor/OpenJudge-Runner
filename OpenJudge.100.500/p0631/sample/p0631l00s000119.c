#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b;
    while(~scanf("%d %d %d",&a,&b,&n))
    {
        if(a>n)
            printf("NO\n");
        else if(a==n)
            printf("YES\n");
        else
        {
            if(n-a>b)
                printf("NO\n");
            else
                printf("YES\n");
        }
    }

    return 0;
}
