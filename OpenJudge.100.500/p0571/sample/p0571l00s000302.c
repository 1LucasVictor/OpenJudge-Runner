#include <stdio.h>
#define min(a,b) ((a > b) ? b : a)

int main ()
{
  int N,A,B;
  
  scanf("%d%d%d", &N,&A,&B);
  
  printf("%d\n", min((N*A), B));

  return 0;
}
