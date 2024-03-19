#include <stdio.h>

int main(void) {
  int N;
  int A;
  int B;
  
  scanf("%d", &N);
  scanf("%d", &A);
  scanf("%d", &B);

  

  if(N*A < B) {
      printf("%d\n", N*A);
  } else if(N*A > B) {
      printf("%d\n", B);
  } else {
      printf("%d\n", B);
  }

  return 0;
}