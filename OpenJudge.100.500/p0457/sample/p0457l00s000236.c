#include<stdio.h>
#define rep(i,l,m) for(int i=l ; i < (int)(m) ; i++)
#define repp(i,l,m,n) for(int i=l ; i < (int)(m) ; i+=n)
int main(){
  int N,M;
  int K;
  int A[200000]={0},B[200000]={0};
  int amax=0,bmax=0,atime=0,btime=0,time,timea,max;
  
  scanf("%d",&N);
  scanf("%d",&M);
  scanf("%d",&K);

  rep(i,0,N){
    scanf("%d",&A[i]);
  }
  rep(i,0,M){
    scanf("%d",&B[i]);
  }

  rep(i,0,N){
    atime+=A[i];
    if(atime>K){
      amax=i;
      atime-=A[i];
      break;
    }
    if(i==N-1){
      amax=i+1;
      break;
    }
  }

  rep(i,0,M){
    btime+=B[i];
    if(btime>K){
      bmax=i;
      btime-=B[i];
      break;
    }
    if(i==M-1){
      bmax=i+1;
      break;
    }
  }

  rep(n,0,amax){
    timea=0;
    rep(i,0,n+1){
      timea+=A[i];
      if(time>K)break;
    }
    
    rep(m,0,bmax){
      time=timea;
      rep(i,0,m+1){
	time+=B[i];
	if(time>K)break;
      }
      if(time>K)break;
      if(time<=K && max<n+1+m+1)max=n+1+m+1;
    }
  }
  //printf("%d %d %d %d\n",amax,atime,bmax,btime);
  printf("%d\n",max);
}
