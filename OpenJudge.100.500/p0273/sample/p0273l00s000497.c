#include <stdio.h>

int fibonacci(int i){
  if(i==0 || i==1) {
    return 1;
  }else{
    return fibonacci(i-2) + fibonacci(i-1);
  }
}
    

int main() {
  int n;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  
  return 0;
}