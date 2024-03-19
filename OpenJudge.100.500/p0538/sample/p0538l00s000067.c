#include<stdio.h>
int main()
  {
  int a,b,s;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a<10&&b<10)s=a*b;
  else s=-1;
  printf("%d",s);
  return 0;
  }