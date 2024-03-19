#include <stdio.h>
int main()
{
  int a,b,c,x;
  scanf("%d %d %d",&a,&b,&c);
  if(a>=1 && b>=1 && c>=1 && a<=10000 && b<=10000 && c<=10000)
  {
    if(a<b)
    {
      if(b<c)printf("%d %d %d\n",a,b,c);
      else if(b>c && a<c)printf("%d %d %d\n",a,c,b);
      else printf("%d %d %d\n",c,a,b);
    }
    else if(a>b)
    {
      if(a<c)printf("%d %d %d\n",b,a,c);
      else if(a>c && b<c)printf("%d %d %d\n",b,c,a);
      else printf("%d %d %d\n",c,b,a);
    }
  }
  return 0;
}