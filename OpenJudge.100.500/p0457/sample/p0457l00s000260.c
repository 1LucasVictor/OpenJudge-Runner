#include <stdio.h>

int main(){
  int N,M,ans=0,n=0,m=0;
  long long int K,T=0LL;
  long long int A[200002],B[200002];
  scanf("%d %d %lld",&N,&M,&K);
  for(int i=0;i<N;i++){
    scanf("%lld",A+i);
  }
  A[N]=0LL;

  for(int i=0;i<M;i++){
    scanf("%lld",B+i);
  }
  B[M]=0LL;
  
  while(T<=K && (n+m<=N+M)){
    if(n==N){
      T+=B[m];
      m++;
    }else if(m==M){
      T+=A[n];
      n++;
    }else if(A[n]<B[m]){
      T+=A[n];
      n++;
    }else{
      T+=B[m];
      m++;
    }
    ans++;
  }
  ans--;
  printf("%d\n",ans);
  return 0;
}