#include <stdio.h>

int main(void){
  int a, b;
  double t;
  int i;
  int sum = 0;

  scanf("%d %d %lf", &a, &b, &t);

  for(i = a; i <= t + 0.5; i += a)  sum += b;
  
  printf("%d", sum);
  
}
