#include <stdio.h>

int main(void) {
  char S[4];
  int i;
  int flag[2] = {0,0};

  scanf("%s", S);

  for (i = 0; i < 3; i++) {
    if (S[i] == 'A') flag[0] = 1;
    if (S[i] == 'B') flag[1] = 1;
  }

  if (flag[0] == 1 && flag[1] == 1) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  return (0);
}
