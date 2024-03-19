#include <stdio.h>

int main(void){

  int a, b, c;
  int x;

  scanf("%d %d %d", &a, &b, &c);

  x=a-b;

  if(x<c){
    printf("%d", c-x);
  }else{
    printf("0\n");
  }

  return 0;
}
