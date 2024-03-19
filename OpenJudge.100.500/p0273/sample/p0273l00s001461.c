#include <stdio.h>
#define MAX 44
int fib(int);

int main(){ 
  int n,i,fib[MAX];

  scanf("%d",&n);

  fib[0]=1;
  fib[1]=1;
  
  for(i=2;i<=n;i++){
    
    fib[i]=fib[i-1]+fib[i-2];
  }
  
  printf("%d\n",fib[n]);
 
  return 0;
}

