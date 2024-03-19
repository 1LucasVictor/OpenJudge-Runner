#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,m,a,b,c;
  while(~scanf("%d %d",&n,&m))
  {  a=n+m;
     b=n-m;
     c=n*m;
     if(a>b&&a>c)
        printf("%d\n",a);
     else   if(b>a&&b>c)
        printf("%d\n",b);
    else    if(c>b&&c>a)
        printf("%d\n",c);
     else   if(n==0&&m==0)
            printf("0\n");

  }
    return 0;
}
