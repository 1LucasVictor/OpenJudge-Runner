
#include <stdio.h>
int F[45]; //0<=n<=44

int fib(int n){
  if(F[n]!=0){
    return F[n];
  }
  else
    {
      if(n<=1)F[n]=1; //
      else{   
	F[n]=fib(n-1)+fib(n-2); 
      }
      return F[n];
    }
}

int main(void){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}