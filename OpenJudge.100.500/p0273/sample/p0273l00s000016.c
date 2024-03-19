#include<stdio.h>
#define N 50

int sum[N];


int num(int a)
{
  if(sum[a] !=0)
    return sum[a];
  if(a<=1)
    return 1;
  return sum[a]=num(a-1)+num(a-2);
}

int main(void)
{
  int b;
  scanf("%d",&b);
  printf("%d\n",num(b));

  return 0;
}
  

