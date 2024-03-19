#include <stdio.h>

int main(void) {

  char S[128];

  do {
    scanf("%s", S);
  } while (S[0] < '0' || S[0] > '9' || S[1] < '0' || S[1] > '9' || S[2] < '0' || S[2] > '9'  || S[3] < '0' || S[3] > '9');

  int n = 0;
  for (int i = 0; i < 3; i++) {
    if (S[i] == S[i + 1]) {
      n--;
    }
  }

  if (n < 0) {
    printf("Bad\n");
  } else {
    printf("Good\n");
  }

  return 0;
}