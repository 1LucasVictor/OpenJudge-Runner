#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
   while(~scanf("%d%d",&a,&b))
   {
       int x,y,z,m;
       x=a+b;
       y=a-b;
       z=a*b;
       m=-999999;
       if(x>m)
        m=x;
       if(y>m)
        m=y;
       if(z>m)
        m=z;

       printf("%d\n",m);

       //printf("%d %d %d",x,y,z);
   }

    return 0;
}