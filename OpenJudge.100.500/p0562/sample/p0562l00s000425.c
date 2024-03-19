#include <stdio.h>

int main(){
  int a, b;  scanf("%d%d", &a, &b);
  printf("%d\n", (b-1)/(a-1)+((b-1)%(a-1)!=0));
  return 0;
}