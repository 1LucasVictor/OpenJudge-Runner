#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,i;
  int *A;

  scanf("%d",&N );
  A = calloc(N, sizeof(int));

  for(i=0; i<N; i++)
    scanf("%d",&A[i]);

  for(i=0; i<N; i++){
    if(A[i]%2 != 0)
      continue;
    else if(A[i]%6 == 0 || A[i]%10 == 0)
      continue;
    else{
      printf("DENIED");
      return 0;
    }
  }
  printf("APPROVED");

  free(A);

  return 0;
}
