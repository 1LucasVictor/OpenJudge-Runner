#include <stdio.h>
#include <math.h>

int isprime(int);

int main()
{
  int n, i, j, count=0, p[10000];

  scanf("%d",&n);
  for( i=0 ; i<n ; i++ ){
    scanf("%d",&p[i]);
    count += isprime(p[i]);
  }

  printf("%d\n",count);
  return 0;
}

int isprime(int x)
{
  int i;
  if(x==2) return 1;
  if(x<2 || x%2==0) return 0;
  i=3;
  while(i<=sqrt(x)){
    if(x%i==0) return 0;
    i = i+2;
  }
  return 1;
}