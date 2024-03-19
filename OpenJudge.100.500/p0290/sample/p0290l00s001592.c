/*素数判定*/
#include <stdio.h>
#include <math.h>
#define N 10000
int isPrime(int);

int main(){
  int a[N], i, j, n, count=0;

  scanf("%d", &n);

  for (i=0; i<n; i++){
    scanf("%d", &a[i]);
    count += isPrime(a[i]);
  }
  printf("%d\n", count);

  return 0;
}

int isPrime(int x)
{
  int i;
  if(x<=1) return 0;
  for(i=2; i<x-1; i++){
    if(x%i==0) return 0;
  }
  return 1;
}

