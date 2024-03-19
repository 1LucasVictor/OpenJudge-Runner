#include <stdio.h>

void Check(int n, int *c5, int *c7){
  if(n == 5) (*c5)++;
  if(n == 7) (*c7)++;
}

int main(void){
  int A, B, C, c5, c7;
  scanf("%d %d %d", &A, &B, &C);
  c5 = c7 = 0;
  Check(A, &c5, &c7);
  Check(B, &c5, &c7);
  Check(C, &c5, &c7);
  if(c5 == 2 && c7 == 1) printf("YES\n");
  else printf("NO\n");
  return 0;
}