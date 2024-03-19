#include <stdio.h>
  
int main(){
  //入力
  int A,B,C;
  //B<AかつA,B,Cは1から20までの整数
  scanf("%d %d %d", &A,&B,&C);

  //計算
  C = C-(A-B);
  if(C<0) C=0;

  //出力
  printf("%d", C);
  return 0;
}