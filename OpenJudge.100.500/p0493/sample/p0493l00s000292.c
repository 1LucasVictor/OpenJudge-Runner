#include<stdio.h>
 
int main()
{
  
  int x;
  scanf("%d",&x);
  
  int happy=x/500;
  happy=happy*1000;
  x=x%500;
  x=x/5;
  happy+=x*5;;
  
  
  
  
  printf("%d",happy);
  
  
  
  
 
  return 0;
}