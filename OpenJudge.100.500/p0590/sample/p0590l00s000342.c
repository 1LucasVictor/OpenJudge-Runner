#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,n,f;
    while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&n)!=EOF)
    {  f=e-a;
      if(f<=n)
        printf("Yay!\n");
      else
        printf(":(\n");

    }
    return 0;
}
