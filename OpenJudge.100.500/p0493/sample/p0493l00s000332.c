#include<stdio.h>
int main(void)
{
  int sum,s1 = 0, s2 = 0,k; 
  
  scanf("%d",&sum);
  
    s1 = sum / 500;
    s2 = sum % 500 / 5;

  
  k = s1*1000 + s2*5;
  
  printf("%d", k);
  
   
  return 0;
}