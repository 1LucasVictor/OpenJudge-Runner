#include <stdio.h>

int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  int x = a * b;
  x = x % 2;
  if(x == 0){
    printf("Even\n");
  }else{
    printf("Odd\n");
  }
  return 0;
}
