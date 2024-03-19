#include <stdio.h>

void Check(int A, int B, int X){
  if(A > X || A + B < X) printf("NO\n");
  else printf("YES\n");
}

int main(void){
  int A, B, X;
  scanf("%d %d %d", &A, &B, &X);
  Check(A, B, X);
  return 0;
}
