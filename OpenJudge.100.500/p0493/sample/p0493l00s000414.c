#include<stdio.h>
void main()
{
  int n;
  scanf("%d",&n);
  int m=n/500;
  int r=n%500;
  int c=r/5;
  printf("%d",m*1000+c*5);
}
  