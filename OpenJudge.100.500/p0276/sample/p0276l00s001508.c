#include<stdio.h>

#define MAX 101

int main(){
  int n,i,u,k,j,v;
  int Adj[MAX][MAX];

  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){ 
      Adj[i][j]=0;
    }
  }

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      Adj[u][v]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",Adj[i][j]);
      if(j!=n) printf(" ");
    }
    printf("\n");
  }

  return 0;
}