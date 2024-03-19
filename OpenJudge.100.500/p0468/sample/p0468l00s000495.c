#include <stdio.h>
int main(void) {
  char S[5];
  scanf("%s", S);
  switch (S[1]) {
    case 'B':
      printf("%s\n", "ARC");
      break;
    case 'R':
      printf("%s\n", "ABC");
      break;
  }
  return 0;
}