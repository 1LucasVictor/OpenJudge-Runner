/* A Minimum Spanning Tree */
#include<stdio.h>

int G[101][101];

int main(){
  int n,i,j;

  int key[101];
  int pi[101];
  int result;


  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&G[i][j]);
      if(G[i][j]==-1){
	G[i][j]=2001;  /* 0<=a<=2000 */
      }
    }
  }

  for(i=1;i<=n;i++){
    key[i]=2001;
    pi[i]=0;
  }
  key[1]=0;
  pi[1]=1;
  
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(key[j]>G[i][j]){
	key[j]=G[i][j];
      }
    }
  }
  
  result=0;
  for(i=1;i<=n;i++){
    result=result+key[i];
  }
  printf("%d\n",result);

  return 0;
}