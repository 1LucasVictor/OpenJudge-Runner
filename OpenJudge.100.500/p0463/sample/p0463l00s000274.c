/*
  kadai3_2 Therefore
  unomi
*/
#include <stdio.h>

int main(void){
  int N=0, q=0;

  // N の入力を取得
  scanf("%d",&N);

  // N が二桁以上のとき
  if (N > 9) q = N % 10;
  // N が一桁の時
  else q = N;

  if ((q == 2)||(q == 4)||(q == 5)||(q == 7)||(q == 9)){
    puts("hon");
  }
  else if ((q == 0)||(q == 1)||(q == 6)||(q == 8)){
    puts("pon");
  }
  else if (q == 3){
    puts("bon");
  }

  return 0;
}