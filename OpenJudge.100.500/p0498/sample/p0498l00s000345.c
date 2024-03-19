#include<stdio.h>
int main()
{
    int N;
    // 整数の入力
  scanf("%d", &N);
  if ( N % 2 == 0)
    printf("%d", N / 2);
  else
    printf("%d", N / 2 + 1);
    return 0;
}