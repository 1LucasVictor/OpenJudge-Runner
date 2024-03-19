/*
  kadai3_4 81
  unomi
*/
#include <stdio.h>

int main(void){
  int N=0, i=0, j=0;

  // N の入力を取得
  scanf("%d",&N);

  // 9*9の範囲を総当たり
  // →一致するものがあればyes、なければNoを出力
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      if(i*j == N){
        puts("Yes");
        return 0;
      }
    } 
  }
  puts("No");

  return 0;
}
