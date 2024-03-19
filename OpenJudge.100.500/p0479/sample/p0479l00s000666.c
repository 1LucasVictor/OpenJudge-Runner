#include<stdio.h>
int main(void){
  int N,i;
  scanf("%d",&N);
  int A[N-1],B[N];
  for(i=0;i<N-1;i++){
    scanf("%d",&A[i]);
    B[i] = 0;
  }
  B[N-1] = 0;
  for(i=0;i<N-1;i++)
    B[A[i]-1]++;
  for(i=0;i<N;i++)
    printf("%d\n",B[i]);
}