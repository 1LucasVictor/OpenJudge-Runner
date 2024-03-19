#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,x,c,i;
 while(~scanf("%d%d%d",&a,&b,&x))
 {c=0;
  if(a>x)
  printf("NO\n");
  if(a<=x)
  {for(i=1;i<=b;i++)
  {if(a+i==x)
   c++;
  }
  if(c>0)
  printf("YES\n");
  if(c==0)
  printf("NO\n");
  }
 }
    return 0;
}
