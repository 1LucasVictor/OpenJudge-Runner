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
    if(M==0){
	printf("10");
	return 0;
      }
    for(i=0;i<M;i++){
      if(s[i]==1&&c[i]==0){
	printf("-1");
	return 0;
      }
      
    }
  }

  if(N==3){
    if(M==0){
	printf("100");
	return 0;
      }
    for(i=0;i<M;i++){
      if(s[i]==1&&c[i]==0){
	printf("-1");
	return 0;
      }
    
    }
  }


    for(i=0;i<N;i++){
      K[i]=0;
    }
    if(N==2){

      K[0]=1;}
    else if(N==3){

      K[0]=1;}

    for(i=0;i<M;i++){
      K[s[i]-1]=c[i];
    }
    
    for(i=0;i<N;i++){
      printf("%d",K[i]);
    }
    
    
  return 0;
}
