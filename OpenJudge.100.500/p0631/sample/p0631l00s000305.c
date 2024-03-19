#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3;
    while(~scanf("%d%d%d",&a1,&a2,&a3))
    {
        if(a3>=a1&&a3<=a2)
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
