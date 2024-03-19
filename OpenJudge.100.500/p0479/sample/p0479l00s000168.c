#include <stdio.h>

#define MAXMEMBERS 200000

int main()
{
  int N,t;
  int A[MAXMEMBERS];
  
  scanf("%d\n", &N);
  
  for(int i=2; i<=N; i++)
  {
    scanf("%d",&t);
    ++(A[t]);
  }
  for(int i=1; i<=N; i++)
    printf("%d\n", A[i]);
  
  return 0;
  
}
