#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    while(~scanf("%d%d%d",&a,&b,&c))
    {
        if(a==c)
        {
            printf("YES\n");
        }
        else if(a+b>c&&a<c)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
}
