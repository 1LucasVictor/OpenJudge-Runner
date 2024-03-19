#include<stdio.h>
#define MAX 44

int fibonacci(int);

int f[MAX];

int main(){
  int n;

  scanf("%d", &n);

  fibonacci(n);

  printf("%d\n", f[n]);

  return 0;
}

int fibonacci(int n){
  //nが0,1のとき1を返す
  if(n == 0 || n == 1){
    f[n] = 1;
    return f[n];
  }

  //値がすでに入っているとき、その値を返す
  if(f[n] != 0) return f[n]; //f[n]に0が入っている = 値がない

  //それ以外の時、計算してメモして返す
  f[n] = fibonacci(n-2) + fibonacci(n-1);
  return f[n];
}

