#include <stdio.h>
#include <math.h>

int cmpnum(const void * n1, const void * n2)
{
	if (*(int *)n1 > *(int *)n2)
	{
		return 1;
	}
	else if (*(int *)n1 < *(int *)n2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(){
  int N;
  scanf("%d", &N);
  int A[N];
  int i;
  for (i = 0; i < N; i++) {
    A[i] = 0;
    scanf("%d", &A[i]);
  }
  qsort(A, sizeof(A) / sizeof(A[0]), sizeof(int), cmpnum);
  for (int i = 0; i < N; i++) {
    if (A[i] == A[i + 1]){
      printf("NO");
      return 0;
    }
  }
  printf("YES");
  return 0;
}