#include <stdio.h>
int main(void) {
  int money;
  int happy1;
  int happy2;
  int nokori;
  
  scanf("%d", &money);
  happy1 = money / 500 * 1000;
  nokori = money  % 500;
  happy2 = nokori / 5 * 5;
  
  printf("%d", happy1 + happy2);
  
  return 0;
}