#include<stdio.h>

int fibonacci(int);

int main(){
  int n;

  scanf("%d",&n);
  printf("%d\n",fibonacci(n));

  return 0;
}
  
int fibonacci(int n){
  int F[45],i;

  F[0]=1;
  F[1]=1;

  for(i=2;i<=n;i++) F[i]=F[i-1]+F[i-2];

  return F[n];
}