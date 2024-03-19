#include <stdio.h>

int main(void){

  int A, B, C;

  scanf("%d%d%d", &A, &B, &C);

  int x = C -(A-B);
  if(x>=0)
    printf("%d\n", x);
  else
    printf("0\n");
  

  return 0;
}
