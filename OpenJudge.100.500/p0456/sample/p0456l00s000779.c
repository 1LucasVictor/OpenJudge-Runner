#include <stdio.h>
#include <string.h>
int main(){
  int a = 0, i = 0;
  char S[200000] = {0}, T[200000] = {0};
  scanf("%s%s", S, T);
  while (S[i]) {
    if (S[i]!=T[i]) {
      a = a + 1;
    }
    i++;
  }
  printf("%d", a);
  return 0;
}