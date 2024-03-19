#include <stdio.h>

int main(){
  int fib[45] = {1,1};
  int i; 
  for (i=2;i<45;i++){
    fib[i]=fib[i-1]+fib[i-2];
  }
  scanf("%d", &i);
  printf("%d\n",fib[i]);

  return 0;
}

