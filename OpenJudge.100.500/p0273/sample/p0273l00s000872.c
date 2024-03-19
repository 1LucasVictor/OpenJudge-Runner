#include <stdio.h>

int Fib(int);

main(){
  int n;

  scanf("%d",&n);
  printf("%d\n",Fib(n));

}

int Fib(int n){

  if(n==0)
    return 1;
  if(n==1)
    return 1;
  else 
   return Fib(n-1)+Fib(n-2);
}