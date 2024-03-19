#include <stdio.h>

int main(){
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  if( A-B < C )
    printf("%d\n", C-A+B);
  else
    printf("%d\n", 0);
    
  return 0;
}
