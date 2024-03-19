#include <stdio.h>
int main(int argc, char *argv[])
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  if(A*B*C == 5 * 5 * 7) printf("YES\n");
  else printf("NO\n");
  return 0;
}
