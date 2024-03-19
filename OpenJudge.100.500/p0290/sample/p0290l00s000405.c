#include <stdio.h>
#include <math.h>

int isprime(int);

int main()
{

  int n, count = 0, i, x[10000];

  scanf("%d", &n);

  for(i = 0; i < n; i++) scanf("%d", &x[i]);

  for(i = 0; i < n; i++){
    if(isprime(x[i]) == 1) count++;
    // else if(isprime(x[i]) == 0) continue;
  }
  printf("%d\n", count);
  return 0;
}

int isprime(int x)
{
  int j;

  if(x == 1 || x == 2) return 1;

  if(x <  2 || x % 2 == 0 ) return 0;

  j = 3;
  while(j <= sqrt(x)){
    if(x % j == 0) return 0;
    j = j + 2;
  }
  return 1;
}