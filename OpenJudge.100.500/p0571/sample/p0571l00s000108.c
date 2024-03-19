#include <stdio.h>
int main (void)
{
  int n,a,A,B;
  
  scanf("%d%d%d",&n, &a, &B);
  
  A = a * n;
  
  if (A<B)
    printf("%d",A);
  
  else if (A>=B)
    printf("%d",B);
  
  return 0;
}