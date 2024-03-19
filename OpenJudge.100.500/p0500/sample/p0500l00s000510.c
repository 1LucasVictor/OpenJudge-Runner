#include <stdio.h>

int main(void){
  int N,M,i,s,c,ans=0;
  int a[3];
  scanf("%d",&N);
  scanf("%d",&M);
  for(i=0;i<N;i++){
  	a[i]=-1;
  }
  for(i=0;i<M;i++){
  	scanf("%d",&s);
  	scanf("%d",&c);
  	if(a[s-1]==-1||a[s-1]==c){
  		a[s-1]=c;
  	}else{
  		printf("%d",-1);
  		return 0;
  	}
  }
  if(N!=1){
  	if(a[0]==0){
  		printf("%d",-1);
  		return 0;
  	}else if(a[0]==-1){
  		a[0]==1;
  	}
  }
  for(i=0;i<N;i++){
  	if(a[i]==-1){
  		a[i]=0;
  	}
  }
  for(i=0;i<N;i++){
  	ans*=10;
  	ans+=a[i];
  }
  printf("%d",ans);
  return 0;
}