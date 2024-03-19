/*
 * C言語のサンプルプログラム - Webkaru
 * - フィボナッチ数の計算 -
 */
#include <stdio.h>
 
int main(void)
{
  /* 変数の宣言 */
  int n;
  int f0, f1, f2;
  int count=0;
  f0 = 0;
  f1 = 1;
  scanf("%d",&n);
 
  /* フィボナッチ数の計算 */
  while(n<44) {
    count++;
    // フィボナッチ数の計算
    f2 = f1 + f0;
    if(n==count){
      printf("%d\n",f2);
      break;
    }
    
    //printf("f2=%d f1=%d f0=%d\n",f2,f1,f0);
    // 変数の代入
    f0 = f1;
    f1 = f2;
  }
 
  return 0;
}

