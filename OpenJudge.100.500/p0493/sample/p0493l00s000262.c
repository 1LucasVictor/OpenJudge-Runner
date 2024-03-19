#include<stdio.h>

int main(void){
  int coin_500 = 0;
  int coin_5 = 0;
  unsigned int have = 0;
  
  scanf("%u", &have);
  coin_500 = have / 500;
  have -= 500 * coin_500;
  coin_5 = have / 5;
  printf("%d\n", coin_500 * 1000 + coin_5 * 5);
  return 0;
}