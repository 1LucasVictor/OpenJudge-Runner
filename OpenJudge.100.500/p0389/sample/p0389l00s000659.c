#include <stdio.h>
#include <string.h>

int main(void) {
  while (1) {
    int M,m; char D[410]; int d;
    scanf("%s\n", D); d=strlen(D);
    if (D[0] == '-') break;
    scanf("%d\n", &M);
    for (m=0;m<M;m++) {
      int n;
      scanf("%d\n", &n);
      strncat(D,D,n);
      memmove(D,D+n,d);
      D[d] = 0;
    }
    printf("%s\n",D);
  }
  return 0;
}