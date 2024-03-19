#include <stdio.h>

int main(void){
  int a,b,c;
  int r;
  
  scanf("%d %d %d", &a, &b, &c);
  
  r = a-b;
  
  if(r>>0){
    printf("%d\n", c-r);
  }
  
  else if(r==0){
    printf("0\n");
  }
  
  else if(c<<r){
    printf("0\n");
  }
  
  return 0;
}
