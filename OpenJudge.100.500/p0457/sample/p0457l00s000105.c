#include <stdio.h>

int main(){
  int N,M,ans=0;
  long long int K,T=0LL;
  long long int A[200002],B[200002];
  scanf("%d %d %lld",&N,&M,&K);
  for(int i=0;i<N;i++){
    scanf("%lld",A+i);
    T+=A[i];
    ans++;
  }

  for(int i=0;i<M;i++){
    scanf("%lld",B+i);
    T+=B[i];
    ans++;
  }
  
  N--;
  M--;
  while(K<T){
    if(N<0){
      T-=B[M];
      M--;
    }else if(M<0){
      T-=A[N];
      N--;
    }else if(A[N]>B[M]){
      T-=A[N];
      N--;
    }else{
      T-=B[M];
      M--;
    }
    ans--;
    if(!(K<T))
      if(T!=0LL) ans++;
  }
  printf("%d\n",ans);
  return 0;
}