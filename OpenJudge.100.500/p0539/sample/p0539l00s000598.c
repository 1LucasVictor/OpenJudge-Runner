/*	ex3_4
	suzuto	*/

#include <stdio.h>

int main(void) {
  int divident, divisor, quotient, det; /*変数の宣言*/

  scanf("%d",&divident); /*Nの入力*/
  divisor = 1; /*divisorの初期化*/
  det = 0; /*detの初期化*/

  /*divident = divisor * quotientとなる(1以上9以下の積で表せる)かどうかを調べる*/
  while(divisor <= 9){
    quotient = (divident / divisor) % 10; /*商quotientの一の位を算出する(quotient二桁以上の時必ずdivident > divisor * quotient)*/
    if(divident == divisor * quotient){
      det = 1; /*積として表すことができたことを記憶する*/
      printf("Yes\n");/*積で表せたのでYesを出力*/
      break;
    }
    divisor++; /*divisorの更新*/
  }
  if (det == 0){
    printf("No\n"); /*積で表せなかった(det初期値のまま)のでNoを出力*/
  }
  return 0;
}
