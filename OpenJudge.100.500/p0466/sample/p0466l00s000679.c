#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
  int i;
  char S[50], T[50], ans = 'y';
  scanf("%s %s", S, T);
  for (i = 0; S[i] != '\0'; i++) {
    if (S[i] != T[i]) {
      ans = 'n';
      break;
    }
  }
  if (T[i + 1] != '\0') ans = 'n';
  if (ans == 'y') printf("Yes");
  else            printf("No");
  return 0;
}
