#include<stdio.h>

int main(void) {
  char s;
  scanf("A%cC", &s);
  if (s == 'B') {
    printf("ARC\n");
  }
  else {
    printf("ABC\n");
  }
  return 0;
}
