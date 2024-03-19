#include <stdio.h>

int num;

int main() {
  scanf("%d", &num);
  if (num == 111) {
    num = 3;
  }else{
    num = num % 3;
  }
  printf("%d", num);
  return 0;
}
