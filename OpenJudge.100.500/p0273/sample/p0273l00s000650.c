#include<stdio.h>

int N,F[44];

int main(){

  int i,j,n;

  scanf("%d",&n);
  printf("%d\n",fibonacci(n));

  return 0;
}



int fibonacci(int n){

  if(n==0 || n==1)
    return F[n]=1;
  if(F[n]!=0)
    return F[n];
  return F[n]=fibonacci(n-2)+fibonacci(n-1);
}