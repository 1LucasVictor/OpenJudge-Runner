#include<stdio.h>
#define rep(i,l,m) for(int i=l ; i < (int)(m) ; i++)
int main(){
  int N,M;
  long int K;
  long int A[200000]={0},B[200000]={0};
  int max=0,time=0;
  
  scanf("%d",&N);
  scanf("%d",&M);
  scanf("%ld",&K);

  rep(i,0,N){
    scanf("%ld",&A[i]);
  }
  rep(i,0,M){
    scanf("%ld",&B[i]);
  }

  rep(n,0,N){
    rep(m,0,M){
      time=0;
      rep(i,0,n+1){
	time+=A[i];
	if(time>K)break;
      }
      rep(i,0,m+1){
	time+=B[i];
	if(time>K)break;
      }
      if(time>K)continue;
      if(time<=K && max<n+1+m+1)max=n+1+m+1;
    }
  }

  printf("%d\n",max);

}
    
  

  
  
  
