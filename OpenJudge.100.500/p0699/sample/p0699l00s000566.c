#include <stdio.h>

int main(int argc, char *argv[])
{
  int A, B, C;
  int count5 = 2;
  int count7 = 1;
  
  scanf("%d%d%d", &A, &B, &C);

  A == 7 ? count7-- : A == 5 ? count5-- : 0;
  B == 7 ? count7-- : B == 5 ? count5-- : 0;
  C == 7 ? count7-- : C == 5 ? count5-- : 0;
  
  (count5 | count7) == 0 ? printf("YES") : printf("NO");
  
  return 0;
}