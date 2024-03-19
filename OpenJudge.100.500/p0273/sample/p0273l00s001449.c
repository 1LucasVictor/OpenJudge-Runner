#include<stdio.h>
#define N 50

int fibonacci(int n){
  int i,F[N],val;
  F[0] = 1;
  F[1] = 1;
  val = 0;

  if(n < 2){
    return 1;
  }

  for(i = 2;i <= n;i++){
    F[i] = F[i - 1] + F[i - 2];
    val = F[i];
  }

  return val;
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}