#include <stdio.h>

int gcd(int x, int y)
{
  int d, tmp;


  if(x < y){            //数字の入れ替え
    tmp = x;
    x = y;
    y = tmp;
  }
  d = x % y;

  while(d != 0){      //ユークリッドの互除法を使用
    x = y;
    y = d;
    d = x % y;
  }
  return y;
}

int main(void)
{
  int x, y;

  scanf("%d %d", &x, &y);

  printf("%d\n", gcd(x, y));

  return 0;
}

