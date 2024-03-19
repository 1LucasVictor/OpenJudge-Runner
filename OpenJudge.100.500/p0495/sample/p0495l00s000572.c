#include <stdio.h>
int main() {
  char one, two, three;
  if(scanf("%c%c%c", &one, &two, &three) <= 0) {
    printf("fail");
  }
  if (one == two && two == three) {
    printf("No");
  } else {
    printf("Yes");
  }
  return 0;
}