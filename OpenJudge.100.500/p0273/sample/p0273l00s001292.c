#include <stdio.h>
#define MAX 44

int main(void)
{
  /* 変数の宣言 */
  int n, i;
  int f0 = 0, f1, f2;
  /* フィボナッチ数(n=0)の出力 */

  scanf("%d", &n);

  f1 = 1;
  /* フィボナッチ数の計算 */
  for( i = 1 ; i < MAX + 1 ; i++ ){
    // フィボナッチ数の計算
    f2 = f1+ f0;
    // 変数の代入
    f0 = f1;
    f1 = f2;
    if( i == n ){
      printf("%d\n", f1);
      break;
    }
  }


  return 0;
}

