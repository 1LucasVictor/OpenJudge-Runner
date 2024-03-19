#include <stdio.h>

int main(void){
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  
  if(a*n >= b){
    printf("%d", b);
  }else{
    printf("%d", a*n);
  }
  return 0;
}