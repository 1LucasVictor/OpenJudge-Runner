#include<stdio.h>
#define N 200

int F[N];

int fibonacci(int n){
  if(n == 0 || n == 1){
    return F[n] = 1; // F[n] に 1 をメモしてそれを返す
  }
  if(F[n]!=NULL){
	return F[n];
  }
  else  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
		  }

main(){
  int n,F;

  scanf("%d",&n);
  F = fibonacci(n);
  printf("%d\n",F);
  return 0;
}