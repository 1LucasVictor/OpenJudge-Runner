#include <stdio.h>
#include <stdlib.h>

/*
int fib(int n){
  int u,v;
  if(n == 0 || n == 1){
    return 1;
  }
  else {
    u = fib(n-1);
    v = fib(n-2);
  
    return u+v;
  }
}
*/

int main(void){
  int n,f[44],i,fib,j=1,k=1,h;
  
  scanf("%d",&n);
  
  //f = fib(n);
  
  for(i = 1 ; i < n ; i++){
    h = j + k;
    j = k;
    k = h;
  }
  printf("%d\n",h);
  
  return 0;
}