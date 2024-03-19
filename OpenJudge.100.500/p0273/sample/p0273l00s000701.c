#include<stdio.h>

int fib(int);

main(){

  int n,a;
  scanf("%d",&n);
  a=fib(n);

  printf("%d",a);

}

int fib(int c)
{
  int f;
  if(c == 0 || c == 1 ){
    return 1; 
  }

  if(c > 0 && c >=2 ){
    f = fib(c-1)+fib(c-2);
    return f;
  }
}