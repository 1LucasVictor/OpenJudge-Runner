#include<stdio.h>

int F[50];
int fibonacci(int);

main(){

  int n,c,i;

  scanf("%d",&n);
  c= fibonacci(n);
  printf("%d\n",c);

  return 0;
}


int fibonacci(int n){
  int i;
  F[0]=1;
  F[1]=1;
  for(i=2;i<=n;i++){
    F[i]= F[i-2]+F[i-1];
  }
  return F[n];
}