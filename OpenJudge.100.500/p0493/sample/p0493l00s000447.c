#include<stdio.h>

int main () 
{
  int x,u;
  
  scanf("%d",&x);
  
  u=(x/500)*1000+( (x % 500) / 5) * 5;
    
  printf("%d",u);
  return 0;
}