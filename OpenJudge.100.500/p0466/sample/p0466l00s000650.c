#include <stdio.h>
#include <string.h>
int main(void) {
  char S[10];
  char T[11];

  scanf("%s", S);
  scanf("%s", T);
  int l = strlen(S);
  int cnt = 0;
  for (int i = 0; i < l; i++) {
    if (S[i] == T[i]) {
      cnt++;
    }
  }
  if (cnt == l) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}