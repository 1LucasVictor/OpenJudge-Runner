#include <stdio.h>

int main(void) {
  
  int money;
  int i=0;
  int j=0;
  
  scanf("%d", &money);
  
  do{
    money=money-500;
    i++;
  }while(money>499);
  
  do{
    money=money-5;
    j++;
  }while(money>4);
  
  printf("%d\n", 1000*i+5*j);
  
  return 0;
}
