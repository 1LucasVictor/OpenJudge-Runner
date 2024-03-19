#include <stdio.h>

int main(void) {

  char S[128];

  do {
    scanf("%s", S);
  } while (S[0] < 'A' || S[0] > 'Z' || S[1] < 'A' || S[1] > 'Z' || S[2] < 'A' || S[2] > 'Z' || S[3] < 'A' || S[3] > 'Z');

  int n = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (S[i] == S[j]) {
	n++;
      }
    }
  }

  if (n == 2) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}