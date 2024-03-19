#include<stdio.h>

#define MAX 200001

int main(void){

  int N,M,i,j,ans = 0;
  long int K,time = 0,A[MAX],B[MAX];

  scanf("%d %d %ld",&N,&M,&K);
  for(i = 0;i < N;i++) scanf("%ld",&A[i]);
  for(i = 0;i < M;i++) scanf("%ld",&B[i]);

  i = 0;
  j = 0;
  while((i <= N || j <= M) && (time+A[i] <= K || time+B[j] <= K)){
    if((A[i] < B[j]) && i < N){
      time += A[i];
      //printf("A[%d]++ time:%ld\n",i,time);
      i++;
    }else if((A[i] > B[j]) || j < M){
      time += B[j];
      //printf("B[%d]++ time:%ld\n",j,time);
      j++;
    }else{
      break;
    }
    ans++;
  }

  printf("%d\n",ans);
  return 0;
}
