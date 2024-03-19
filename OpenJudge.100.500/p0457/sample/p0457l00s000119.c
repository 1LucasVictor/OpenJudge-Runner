#include<stdio.h>

#define MAX 200001

int main(void){

  int N,M,i,j,ans = 0;
  long int K,time = 0,A[MAX],B[MAX];

  scanf("%d %d %ld",&N,&M,&K);
  for(i = 0;i < N;i++) scanf("%ld",&A[i]);
  for(i = 0;i < M;i++) scanf("%ld",&B[i]);

  i = 0; j = 0;
  while((i < N  && time+A[i] <= K ) || (j < M && time+B[j] <= K)){
    if(i < N && (A[i] < B[j] || j == M)){
      time += A[i];
      i++;
      ans++;
    }else if(j < M && (A[i] > B[j] || i == N)){
      time += B[j];
      j++;
      ans++;
    }
  }

  printf("%d\n",ans);
  return 0;
}
