#include <stdio.h>
int main(void) {
  int A,B,C=0;
  scanf("%d %d",&A,&B);
  C = A + B;
  if (C%2==0) {
    printf("%d\n",C/2);
  } else {
    printf("IMPOSSIBLE\n");
  }
  return 0;
}