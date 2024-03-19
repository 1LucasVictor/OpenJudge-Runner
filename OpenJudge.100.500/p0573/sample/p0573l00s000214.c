#include <stdio.h>
#include <stdlib.h>


int main(void) {

  char c[5];
  char c1, c2;
  int num1, num2;

  c1 = 0;
  num1 = 0;
  c2 = 0;
  num2 = 0;

  scanf("%s", c);

  for (int i=0;i<4;i++) {
    if (c1 == 0) {
      c1 = c[i];
      num1++;
    } else if (c[i] == c1) {
      num1++;
    } else if (c2 == 0) {
      c2 = c[i];
      num2++;
    } else if (c[i] == c2) {
      num2++;
    } else {
      printf("No\n");
      return 0;
    }
  }

  if (num1 == 2 && num2 == 2) {
    printf("Yes\n");
    return 0;
  } else {
    printf("No\n");
    return 0;
  }
}