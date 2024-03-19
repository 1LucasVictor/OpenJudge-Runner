#include <stdio.h>
 
int main()
{
  int A, B;
  scanf("%d%d", &A, &B);
 
  int count = 1;
  B-=A; A--;
  while (B>0)
  {
    count++;
    B-=A;
  }
  
  printf("%d\n", count);
  return 0;  
}