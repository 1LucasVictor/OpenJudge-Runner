#include<stdio.h>
int main(void)
{int S,h,m,s;
  scanf("%d",&S);

  h=S/3600;
  m=S%3600;
  s=m%60;
  m=m/60;

  printf("%d:%d:%d\n",h,m,s);

  return(0);

}