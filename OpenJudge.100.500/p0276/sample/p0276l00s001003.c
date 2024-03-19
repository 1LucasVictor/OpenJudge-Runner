#include <stdio.h>

int Adj[100][100];

int main(void){
  int n,i,j,k,v,u;
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
      if(j==n){
        if(Adj[i][j]!=0) printf("1");
        else
          printf("0");
        break;
      }
      if(Adj[i][j]!=0) printf("1 ");
      else printf("0 ");
    }
    printf("\n");
  }
  return 0;
}

