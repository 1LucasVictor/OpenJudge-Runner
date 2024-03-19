#include<stdio.h>
int main() {
  int a, b, i, j;
  int result = 0;
  int num = 1;
  scanf("%d", &a);
  scanf("%d", &b);
  
  for (i=0; i<a; i++) {
      num *= 100;
  }
  for (j=0; j<b; j++) {
      result += num;
      if (result % (num * 100) == 0) {
          result += num;
      }
  }
  printf("%d\n", result);
  return 0;
}