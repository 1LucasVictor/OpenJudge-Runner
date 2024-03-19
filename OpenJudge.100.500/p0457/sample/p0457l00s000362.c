#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i;
  int N, M, K;
  char S[200000 + 2];
  char T[200000 + 2];
  int d;
  long cnt = 0;
  scanf("%d %d %d", &N,&M,&K);
//   printf("nmk:%d %d %d", N, M, K);
  long A[N + 1];
  long B[M+1];
  for (i = 0; i < N;i++)  {
	  scanf("%ld", &A[i]);
  }
  A[i] = 9223372036854775807;
 
  for (i = 0; i < M; i++)
  {
	  scanf("%ld", &B[i]);
  }
  B[i] = 9223372036854775807;
  int flg=0,Apt = 0, Bpt = 0;
  while (K > 0)  {
	//   printf("K,Apt,Bpt %d %d %d\n", K, Apt, Bpt);
	  flg = 0;
	  if (A[Apt] <= K)
	  {
		  cnt++;
		  K -= A[Apt];
		  Apt++;
		  flg++;
	  }
	if (B[Bpt] <= K)
	{
		cnt++;
		K -= B[Bpt];
		Bpt++;
		flg++;
	}
	if(flg==0)
		break;
  }
  printf("%ld\n", cnt);
  return 0;
}
