#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
      if((c-b)<=a&&(c-b)>0)
       printf("safe");
      if((c-b)<=0)
       printf("delicious");
      if((c-b)>a)
       printf("dangerous");
    }

    return 0;
}