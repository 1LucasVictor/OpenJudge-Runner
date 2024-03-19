#include<stdio.h>
 
int main()
{
  int glad = 0;
  int money;
  
  scanf("%d", &money);
  
  glad += (money / 500) * 1000;
  
  money = money % 500;
  
  glad += (money / 5) * 5;
  
  printf("%d", glad);
    
  return 0;
}