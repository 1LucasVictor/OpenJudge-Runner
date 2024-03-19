#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <string.h>


int main()
{
  int N;
  scanf("%d", &N);
  int A[200010];
  int B[200010];
  A[0]=0;
  B[0]=0;
  for(int i=1; i<N; i++){
      scanf("%d",&A[i]);
      B[i]=0;
  }

  for(int i=1; i<N+1; i++){
    B[A[i]-1]++;
  }

  for(int i=0; i<N; i++){
    printf("%d\n",B[i]);
  }
  return 0;
}
