#include <stdio.h>

void func1(int n);

int main(void) {
  int n;
  scanf("%d", &n);
  while(n >= 10) {
    if(n < 100) {
      n %= 10;
    } else if(n < 1000) {
      n %= 100;
    }
  }
  func1(n);
  return 0;
}

void func1(int n) {
  if(n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
    printf("hon");
  } else if(n == 0 || n == 1 || n == 6 || n == 8) {
    printf("pon");
  } else {
    printf("bon");
  }
}
