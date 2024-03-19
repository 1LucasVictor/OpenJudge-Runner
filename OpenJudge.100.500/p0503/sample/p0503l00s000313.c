#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,i,j;
  int *A;

  scanf("%d",&N);
  A = calloc(N,sizeof(int));

  for(i=0; i<N; i++)
    scanf("%d", &A[i]);

  for(i=0; i<N-1; i++){
    for(j=i+1; j<N; j++){
      if(A[i] == A[j]){
        printf("NO");
        free(A);
        return 0;}
    }
  }
  printf("YES");

  free(A);
  return 0;
}
