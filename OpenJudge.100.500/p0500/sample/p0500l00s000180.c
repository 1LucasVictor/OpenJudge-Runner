#include <stdio.h>

int main(void){

  int i,N,M;
  scanf("%d %d",&N,&M);
  int s[M],c[M];
  for(i=0;i<M;i++){
    scanf("%d %d",&s[i],&c[i]);
      }
  int K[N];

  int j;
  for(i=0;i<M-1;i++){
    for(j=i+1;j<M;j++){
      if(s[i]==s[j]&&c[i]!=c[j]){
	printf("-1");
	return 0;
      } 
    }
  }
  if(N==2){
    for(i=0;i<M;i++){
      if(s[i]==1&&c[i]==0){
	printf("-1");
	return 0;
      }
    }
  }

    if(N==3){
    for(i=0;i<M;i++){
      if(s[i]==1&&c[i]==0){
	printf("-1");
	return 0;}
	else if(s[i]==2&&c[i]==0){
	  printf("-1");
	  return 0;
	}
    }
    }

    for(i=0;i<N;i++){
      K[i]=0;
    }

    for(i=0;i<M;i++){
      K[s[i]-1]=c[i];
    }
    
    for(i=0;i<N;i++){
      printf("%d",K[i]);
    }
    
    
  return 0;
}
