#include<stdio.h>
int main(void)
{
  int n;
  int a,b,c;
  int wa;
  do{
  scanf("%d",&n);
  }while(n<0||1000000000<n);
  a=n/500;
  b=n%500;
  c=b/5;
  
  wa=a*1000+c*5;
  
  printf("%d",wa);
  return 0;
}