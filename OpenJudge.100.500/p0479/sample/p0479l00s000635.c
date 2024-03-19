#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  
  int A[N-1], ans[N], i;
  for(i=0; i<N-1; i++){
    scanf("%d", &A[i]);
    ans[i] = 0;
  }
  ans[N-1] = 0;
  
  for(i=0; i<N-1; i++){
    ans[A[i]-1]++;
  }
  
  for(i=0; i<N; i++){
    printf("%d\n", ans[i]);
  }
  
  return 0;
}