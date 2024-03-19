#include <stdio.h>
#include <string.h>

#define MAX_N 100000
#define REMOVED '2'

int main() {
  char S[MAX_N];

  int len;
  int has_changed;
  int i, j, i_start;
  int result;

  scanf("%s", S);
  len = strlen(S);
  result = 0;

  do {
    has_changed = 0;
    i_start = 0;
    while (1) {
      for (i = i_start; i < len; i++) {
        if (S[i] != REMOVED) {
          break;
        }
      }
      if (i >= len - 1) {
        break;
      }
      for (j = i + 1; j < len; j++) {
        if (S[j] != REMOVED) {
          break;
        }
      }
      if (j >= len) {
        break;
      }
      if (S[i] != S[j]) {
        result += 2;
        S[i] = REMOVED;
        S[j] = REMOVED;
        has_changed = 1;
        i_start = j + 1;
      } else {
        i_start = j;
      }
    }
  } while (has_changed == 1);

  printf("%d\n", result);

  return 0;
}
