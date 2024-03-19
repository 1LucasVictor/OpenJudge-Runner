#include<stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int d = c - (a - b);
  
  if (d <= 0) printf("0");

  else {
    printf("%d", d);
  }
  
  return 0;
}