#include <stdio.h>
  
int main(){
  //入力
  int N,A,B;
  //全て正整数でNは20以下、A,Bは50以下からok
  scanf("%d %d %d", &N,&A,&B);

  //計算・出力
  printf("%d", A*N>B ? B : A*N);
  //A*NとBの小さい方を出力
  return 0;
}