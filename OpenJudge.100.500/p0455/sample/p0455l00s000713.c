#include <stdio.h>

int main(void){
  int a;
  scanf("%d", &a);
  if(1 <=a <= 10){
  printf("%d\n", a+a*a+a*a*a);
  }else {
    printf("%s\n", "Error!");
}
}
