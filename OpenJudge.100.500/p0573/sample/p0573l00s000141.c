#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(){
  int i,j,k;
  int A[4];
  char S[5];
  scanf("%s",S);
  for(i=0;i<4;i++)
    A[i] = (int)S[i];
  qsort(A,4,sizeof(int),compare_int);
  if(A[0] == A[1] && A[2] == A[3] && A[1] != A[2])
    puts("Yes");
  else
    puts("No");
  return 0;
}