#include <stdio.h>

int main(void) {
  int N,A,B,seki;

  scanf("%d",&N); scanf("%d",&A); scanf("%d",&B);

  seki=A*N;

  if(seki>=B)
    printf("%d",B);
  else 
    printf("%d",seki);
  return 0;
}