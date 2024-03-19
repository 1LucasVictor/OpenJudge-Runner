#include <stdio.h>

int main(void) {
  int paper = 0;
  int n;
  scanf("%d", &n);
  if(n % 2 == 0) {
    paper = n / 2;
  } else {
    paper = n / 2 + n % 2;
  }
  printf("%d", paper);
  return 0;
}
