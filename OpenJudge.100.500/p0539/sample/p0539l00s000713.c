/*  ex3_4
    yy8332  */

#include <stdio.h>

int main(void){
  int number, i, j;

  //入力読み取り
  scanf("%d", &number);

  //判定
  for(i = 1; i <= 9; i++)for(j = 1; j <= 9; j++){
    if(number == i * j){
      //出力
      printf("Yes\n");
      return 0;
    }
  }
  //出力
  printf("No\n");

  return 0;
}
