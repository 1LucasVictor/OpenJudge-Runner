#include<stdio.h>

int main(void)
{
  int money;
  int happy,happy1,happy2;
  
  scanf("%d", &money);
  
  happy1=(money/500);
  happy2=(money%500)/5;
  
  happy=(happy1*1000)+(happy2*5);
  printf("%d",happy);
  
  return 0;
}