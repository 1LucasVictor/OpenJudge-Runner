#include <stdio.h>
int main()
{
  int N;
  scanf("%d",&N);

  if(N % 10 == 0 || N % 10 || N % 10 == 6 || N % 10 == 8)
  printf("pon");
  else if(N % 10 == 3)
  printf("bon");
  else
  printf("hon");

  return 0;
}
