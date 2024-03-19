#include <stdio.h>
#define N 44
void fib(int);
int f[N];
int main(){
  
  int n;

  scanf("%d",&n);
  fib(n);

  printf("%d\n",f[n]);

  return 0;
}

void fib(int n)
{
  int i;
  
  f[0] = 1;
  f[1] = 1;
  for(i=2; i<=n; i++){
    f[i] = f[i-2]+f[i-1];
  }
}