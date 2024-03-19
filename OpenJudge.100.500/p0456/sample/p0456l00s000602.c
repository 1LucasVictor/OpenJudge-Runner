#include <stdio.h>
#include <string.h>
int main(){
  int a = 0;
  char S[100], T[100];
  scanf("%s%s", S, T);
  for (int i = 0; i < strlen(S); i++) {
    if (S[i]!=T[i]) {
      a += 1;
    }
  }
  printf("%d", a);
  return 0;
}