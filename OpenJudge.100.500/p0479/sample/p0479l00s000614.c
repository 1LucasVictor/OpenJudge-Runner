#include<stdio.h>
int main()
{
  unsigned long N;
  scanf("%lu",&N);
  unsigned long A[N],B[N];
  int i;
  for(i=0;i<N-1;i++){
    scanf("%lu",&A[i]);
    B[i]=0;
  }
  B[N]=0;
  unsigned long j;
  for(i=0;i<N-1;i++){
    j=A[i];
    B[j-1]=B[j-1]+1;
  }
  for(i=0;i<N;i++){
    printf("%lu\n",B[i]);
  }
  return 0;
}