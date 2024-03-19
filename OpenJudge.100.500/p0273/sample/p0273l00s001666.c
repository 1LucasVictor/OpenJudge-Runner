#include<stdio.h>

main(){
  int i,n;
  int fib[45];

  scanf("%d",&n);

  fib[0]=1;
  fib[1]=1;
  for(i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }
  printf("%d\n",fib[n]);
  return 0;
}