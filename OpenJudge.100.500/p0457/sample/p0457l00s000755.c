#include <stdio.h>

int main(){
  long long int A[200002],B[200002];
  int N,M;
  long long int K;
  int S;
  scanf("%d %d %lld",&N,&M,&K);
  A[0]=0LL;B[0]=0LL;
  for(int i=1;i<=N;i++){
    scanf("%lld",A+i);
    A[i]+=A[i-1];
  }
  for(int i=1;i<=M;i++){
    scanf("%lld",B+i);
    B[i]+=B[i-1];
  }
  int max=0,j=M;
  for(int i=0;i<=N;i++){
    if(A[i]>K) break;
    while(A[i]+B[j]>K) j--;
    if(max<i+j) max=i+j;
  }
  
  printf("%d\n",max);
  return 0;
}