#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a, sumA;
  scanf("%d",&a);
  sumA = a + a*a + a*a*a;
  printf("%d\n",sumA);
  return 0;
}