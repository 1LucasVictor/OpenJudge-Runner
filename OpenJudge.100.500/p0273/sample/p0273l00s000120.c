#include<stdio.h>

int F[45];

void fib(int n){

  int i;

  F[0] = 1;
  F[1] = 1;

  for(i=2;i<=n;i++){
    
    F[i] = F[i - 2] + F[i - 1];

  }


}


int main(){

  int n;

  scanf("%d",&n);

  fib(n);

  printf("%d\n",F[n]);

  return 0;
}

