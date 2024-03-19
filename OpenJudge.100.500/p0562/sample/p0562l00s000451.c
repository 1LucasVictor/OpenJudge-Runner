#include <stdio.h>
 
int main()
{
  int A, B;
  scanf("%d %d", &A, &B);
 
  int count = 0;
  int next = 1;
  while(next < B)
  {
    next += (A-1);
    count++;
  }
  
  printf("%d\n", count);
  return 0;  
}