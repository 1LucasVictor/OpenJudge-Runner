#include<stdio.h>
int f(int);
int fib[45];
int main(){
  int i,n;
  scanf("%d",&n );
  for (i = 0; i < n+1; i++) {
    fib[i]=f(i);

  }
  printf("%d\n",fib[n]);
  return 0;
}
int f(int n){
  if (n==0||n==1) {
    return 1;
  }
  else return fib[n-2]+fib[n-1];
}

