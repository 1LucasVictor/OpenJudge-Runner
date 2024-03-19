#include<stdio.h>

int main(){
  int a = 0;
  int b = 0;
  
  scanf("%d %d", &a, &b);
  
  if((a+b) % 2 != 0) {
    puts("IMPOSSIBLE");
  }
  else {
    printf("%d", (a+b)/2);
  }
  return 0;
}