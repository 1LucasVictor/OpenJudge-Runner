#include <stdio.h>

int main(){
  unsigned int N, M, K, A[200000], B[200000], Asum = 0, allsum, count = 0;
  int i = 0;
  scanf("%d %d %d", &N, &M, &K);
  for (int i = 0; i < N; i++)
	  scanf("%d", &A[i]);
  for (int i = 0; i < M; i++)
	  scanf("%d", &B[i]);

  for (int r = 0; r < N; r++){
	Asum += A[r];
	allsum = Asum;
    for (i = 0; i < M; i++){
	  allsum += B[i];
	  if(allsum <= K)
	    count = r+i+2;
    }
  }
  printf("%d", count);
}
