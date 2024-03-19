/*入力として与えられた整数の集合に含まれる素数の個数の求めるプログラム*/
#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
  int num, n, i, count_pn = 0;

  scanf("%d", &n);
  
  for( i = 0; i<n; i++ )
    {
      scanf("%d", &num);
      count_pn += isPrime(num);
    }

  printf("%d\n", count_pn);

  return 0;
}

/*引数xが素数かどうか判定するプログラム
  戻り値 TRUE 1  FALSE 0*/
int isPrime(int x)
{
  int i;
  double route_x = sqrt(x);
  
  if( x<= 1 )
    return 0;

  for( i = 2; i<=route_x; i++ )
    {
      if( x%i == 0 )
	return 0;
    }
  return 1;
}

