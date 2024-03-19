#include<stdio.h>
int main(void)
{
  int a,b,c;
  int k;
  scanf("%d %d %d",&a,&b,&c);
  
  k = c/a;
  printf("%d",b*k);
  return 0;
}