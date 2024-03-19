#include<stdio.h>
typedef unsigned long u64;
int main()
{
  u64 a;
  double b;
  
  scanf("%lu %lf",&a,&b);
  
  printf("%lu",  (a * (u64)(b * 100)) / 100);
}