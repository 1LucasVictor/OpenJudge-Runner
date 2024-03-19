#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,m,a,b,c;
  while(~scanf("%d %d",&n,&m))
  {  a=n+m;
     b=n-m;
     c=n*m;
    if(a<b)
        a=b;
    if(a<c)
        a=c;
    printf("%d\n",a);

  }
    return 0;
}
