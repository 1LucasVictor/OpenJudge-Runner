#include <stdio.h>

int fibonatti( int );
int main()
{
  int n, fibn;
  
  scanf("%d", &n);

  fibn = fibonatti( n );
  printf("%d\n", fibn);
  
  return 0;
}

int fibonatti(int n)
{
  if(n == 0 || n == 1) return 1;
  else return fibonatti(n-2) + fibonatti(n-1);
}