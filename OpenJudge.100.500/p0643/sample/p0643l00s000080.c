#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int a,b;
  char buf[32] = { 0 };
  
  //数字読み込み
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d %d", &a, &b);
  
  if(a * b % 2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");
  return 0;
}