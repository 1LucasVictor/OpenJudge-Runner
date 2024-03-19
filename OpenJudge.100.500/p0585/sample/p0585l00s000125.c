#include<stdio.h>

int main() {
  int a, b, t, sum = 0;
  scanf("%d %d %d", &a, &b, &t);
  
  for(int i = 1; i <= t; i++) {
    if(i % a == 0) {
      sum += b;
    }
  }
  printf("%d\n", sum);
  return 0;
}