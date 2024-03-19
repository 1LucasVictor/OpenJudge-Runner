#include <stdio.h>
#include <string.h>

int main(void) {
  char S[1024];int q,Q;
  scanf("%s\n",S);
  scanf("%d\n",&Q);
  for (q=0;q<Q;q++) {
    char C[1024]; int c,B,E;
    scanf("%s",C);
    scanf("%d %d",&B,&E);
    if (!strcmp(C,"replace")) {
      scanf("%s",C);
      memcpy(S+B,C,E-B+1);
    }
    else if (!strcmp(C,"reverse")) {
      strncpy(C,S+B,E-B+1);
      for(c=E;c>=B;c--)
        S[c]=C[E-c];
    }
    else if (!strcmp(C,"print")) {
      strncpy(C,S+B,E-B+1);
      C[E-B+1]=0;
      printf("%s\n",C);
    }
  }
  return 0;
}