/* ユークリッドの互除法を用いて２自然数の最大公約数を求めるプログラム*/
#include <stdio.h>

int calc_gcd(int, int);

int main()
{
  int x, y;

  scanf("%d%d", &x, &y);

  printf("%d\n", calc_gcd(x, y));

  return 0;
}

/*ユークリッドの互除法を用いて２つの自然数の最大公約数を求める関数*/
int calc_gcd(int x, int y)
{
  int tmp;

  /* x >= y の状態にする*/
  if( y > x )
    {
      tmp = x;
      x = y;
      y = tmp;
    }

  while( x % y != 0 )
    {
      tmp = y;
      y = x % y;
      x = tmp;
    }

  return y;
}

