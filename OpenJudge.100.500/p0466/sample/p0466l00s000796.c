#include <stdio.h>
#include <string.h>
int main(void) {
  char S[11];
  char T[12];
 
  scanf("%s", &S);
  scanf("%s", &T);
  int l = strlen(S);
  int cnt = 0;
  for (int i = 0; S[i] != '\0'; i++) {
    if (S[i] != T[i]) {
      cnt++;
    }
  }
  if (cnt == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}