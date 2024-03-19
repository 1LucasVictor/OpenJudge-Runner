#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  float quo=(c+0.5)/a;
  int k=quo;
  printf("%d",k*b);
  return 0;
}