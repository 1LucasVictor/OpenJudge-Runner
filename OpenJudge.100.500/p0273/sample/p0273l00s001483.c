#include <stdio.h>

int fibonacci(int);

int F[46];

int main()
{
  int n,i;

  scanf("%d",&n);

  /* 初期化 */
  for(i = 0;i < 46;i++){
    F[i] = -1;
  }

  /* 出力 */
  printf("%d\n",fibonacci(n));

  return 0;
}

int fibonacci(int n)
{
  if(n ==0 || n == 1) return F[n] = 1; // F[n]に1をメモしてそれを返す

  if(F[n] != -1) return F[n]; // F[n]が計算済なら

  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}