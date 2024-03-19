#include <stdio.h>
int main(void){
  int d, n, x;
  
  scanf("%d %d", &d, &n);
  
  if(d == 0){
    x = n;
  }else if(d == 1){
    x = n * 100;
  }else{
    x = n *10000;
  }
  
  printf("%d\n", x);
}
