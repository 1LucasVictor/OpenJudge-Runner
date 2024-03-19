#include<stdio.h>
#define RANGE 45
int main(){
  int i,j,n,fib[RANGE];
  scanf("%d",&n);
  fib[0]=1;
  fib[1]=1;
  for(i=2;i<RANGE;i++){
     fib[i]= fib[i-1]+fib[i-2];
  }
  printf("%d\n",fib[n]);
  return 0;
}
      

