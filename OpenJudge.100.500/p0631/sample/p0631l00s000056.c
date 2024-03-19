#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a,b,c,t;
   while(~scanf("%d%d%d",&a,&b,&c))
   {
       if(a<b)
       {
           t=a;
           a=b;
           b=t;
       }
       if(b<c)
       {
           t=b;
           b=c;
           c=t;
       }
       if(a<b)
       {
           t=a;
           a=b;
           b=t;
       }
       if(a>=b+c)
        printf("NO\n");
       else
        printf("YES\n");
   }
    return 0;
}
