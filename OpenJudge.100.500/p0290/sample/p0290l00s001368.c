#include<stdio.h>
#include<stdlib.h>

int prime_or_not(int x)
{
  int i;
  for(i=2;i<=x/2;i++){
    if(x%i==0) return 0;
  }
  return 1;
}

int main()
{
  int i,n,x,y;
  y=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    y=y+prime_or_not(x);
  }
  printf("%d\n",y);
  return 0;
}