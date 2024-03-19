#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    while(~scanf("%d%d%d",&x,&y,&z))
    {
       if(z>=x&&z<=x+y)
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
