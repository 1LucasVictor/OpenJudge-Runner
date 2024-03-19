
#include<stdio.h>

int value[50];


int fib(int n){
  int i;
  value[0]=1;
  value[1]=1;

  for(i=2;i<=n;i++){
    value[i] = value[i-2] + value[i-1];
  }
  return value[n];
}


int main(){
  int i,n;
 
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}