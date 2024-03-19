#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  scanf("%d",&a);
  scanf("%d %d",&b,&c);
  d=b%a;
  e=c-b+d;
  if(d==0||(a>=d&&a<=e)) printf("OK\n");
  else printf("NG\n");
   return 0;
}