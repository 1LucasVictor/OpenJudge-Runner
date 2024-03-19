#include<stdio.h>
#define max 101

int main(){
  int n,u,k,i,j,num;
  int Adj[max][max]={0};
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&num);
      Adj[u][num]=1;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n-1;j++){
      printf("%d ",Adj[i][j]);
    }
    printf("%d\n",Adj[i][n]);
  }
  return 0;
}

