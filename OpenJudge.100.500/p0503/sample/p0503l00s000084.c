#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int N, A[200000];
  int flag = 0;
  scanf("%d", &N);
  for(int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }
  for(int i = 0; i < N; i++)
    for(int j = N; j > i; j--)
      if(A[j] > A[j - 1])
      {
        int stash = A[j - 1];
        A[j - 1] = A[j];
        A[j] = stash;
      }
  for(int i = 1; i < N; i++)
    if(A[i] == A[i - 1])
      flag = 1;
  if(!flag)
    printf("YES");
  else
    printf("NO");
}