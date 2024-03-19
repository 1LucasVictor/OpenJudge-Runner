#include <stdio.h>
#include <stdlib.h>
int fibonacci(int);
int F[45];

int main(){

  int n,i;
 
  for(i=0; i<45; i++)
    F[i] = -1;
  
  scanf("%d",&n);


  printf("%d\n",fibonacci(n));
}

int fibonacci(int n){

  if(n == 0 || n == 1)
    return F[n] = 1;
  if(F[n] != -1)
    return F[n];
  return F[n] = fibonacci(n-2) + fibonacci(n-1);
}