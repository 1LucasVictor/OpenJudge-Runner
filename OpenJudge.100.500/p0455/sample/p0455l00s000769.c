#include<stdio.h>
#include<stdlib.h>
int main()
{
  int t,sum;
  scanf("%d",&t);
  sum=t+(t*t)+((t*t)*t);
  printf("%d",sum);
}