#include <stdio.h>

int fib(int n){
  int i;
  int F[44];
  F[0]=1;
  F[1]=1;
  for(i=2;i<=44;i++)F[i]=F[i-2]+F[i-1];
  return F[n];
}



int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));

}

