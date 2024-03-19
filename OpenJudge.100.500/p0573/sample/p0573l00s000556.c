#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char S[5];

int main() {
  int i, j, k;
  scanf ("%s", &S);
  
  if (S[1]==S[0]) {
    if (S[2]==S[3] && S[2]!=S[0]) printf ("Yes\n");
    else                          printf ("No\n");
  }
  else {
    if      (S[2]==S[0] && S[3]==S[1]) printf ("Yes\n");
    else if (S[2]==S[1] && S[3]==S[0]) printf ("Yes\n");
    else                               printf ("No\n");
  }
  
  return 0;
}


