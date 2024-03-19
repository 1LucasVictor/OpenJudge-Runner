#include <stdio.h>

int main (){
  char s [4];
  int existA = 0, existB = 0;

  scanf ("%s", s);

  for (int i = 0; i < 3; i++) {
    if(s[i] == 'A') {
      existA = 1;
    } else {
      existB = 1;
    }
  }

  if(existA && existB) {
    printf("%s\n", "Yes");
  } else {
    printf("%s\n", "No");
  }

  return 0;
}
