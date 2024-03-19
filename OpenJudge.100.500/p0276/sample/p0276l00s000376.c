#include<stdio.h>

int main(){
  int i,j,k,u,n,l;
  int adj[101];
  int finish[101][101];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&adj[j]);
      for(l=0;l<n;l++){
	if(adj[j]==l+1){
	  finish[i][l]=1;
	}/*else{
	  finish[i][l]=0;
	  }*/
      }
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j>0){
	printf(" ");
      }
      printf("%d",finish[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}