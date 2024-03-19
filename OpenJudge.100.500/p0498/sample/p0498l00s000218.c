#include<stdio.h>

int main()
{
  int n,tmp;
  
  scanf("%d",&n);
  
  tmp=n/2;
  
  if(n%2==0)
  {
    printf("%d",tmp);
  }
  else
  {
    printf("%d",tmp+1);
  }
  return 0;
}