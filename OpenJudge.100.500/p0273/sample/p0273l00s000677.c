#include<stdio.h>
#define MAX 50
int fibonacci(int);
int F[MAX];
int main(){
  int n,sum,i;
  for(i=0;i<50;i++)F[i] = -1;
  scanf("%d",&n);
  sum  = fibonacci(n);

  printf("%d\n",sum);

  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1)return F[n] = 1;
  if(F[n] != -1)return F[n];
  else return F[n] = fibonacci(n-2)+fibonacci(n-1);
}