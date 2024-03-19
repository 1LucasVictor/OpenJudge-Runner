#include <stdio.h>

int fibonacci(int n){
  int i,a=1,b=1,tmp=1;

  for(i=1;i<n;i++){
    tmp=a+b;
    a=b;
    b=tmp;
  }
  return tmp;
}

main(){
  int n,result;

  scanf("%d",&n);
  if(n>=0 && n<=44){
  result=fibonacci(n);
  }

  printf("%d\n",result);
  return 0;
}