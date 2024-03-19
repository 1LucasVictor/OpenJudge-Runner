#include <stdio.h>
#pragma warning (disable : 4996)

int main(void) {
  int A, B, X;
  scanf("%d %d %d", &A, &B, &X);
  
  if((A <= X) && (X <= A + B))
    printf("YES");
  else 
    printf("NO");
  
}
