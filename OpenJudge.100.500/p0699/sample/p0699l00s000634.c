#include <stdio.h>
 
int main()
{
  int A, B, C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  
  if (A+B+C==17) {
    if (A==5 && (B==5 || B==7)) {
        printf("YES");
    }
    else if (A==7 && B==5) {
        printf("YES");
    }
    else {
      printf("NO");
    }
  } else {
    printf("NO");
  }
  
  return 0;
}