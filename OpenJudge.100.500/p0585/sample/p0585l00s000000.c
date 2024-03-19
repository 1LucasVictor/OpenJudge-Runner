#include <stdio.h>

int main(void){

  int a,b,t;
  scanf("%d %d %d", &a, &b, &t);
  int answer = t/a*b;
  printf("%d\n", answer);

  return 0;
}