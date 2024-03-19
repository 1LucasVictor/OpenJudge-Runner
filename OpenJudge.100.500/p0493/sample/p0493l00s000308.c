#include <stdio.h>

int main(void){
  int yen = 0;
  int pt = 0;
  scanf("%d",&yen);
  pt += (yen/500)*1000;
  yen = yen % 500;
  pt += (yen/5)*5;
  printf("%d",pt);
  return 0;
}