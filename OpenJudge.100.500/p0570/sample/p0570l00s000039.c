#include<stdio.h>
int main(void){
  int a, b;
  scanf("%d %d", &a, &b);
  if(a == 0 && b == 0){
    puts("IMPOSSIBLE");
    return 0;
  }
  printf("%d\n", (a + b) / 2);
  return 0;
}