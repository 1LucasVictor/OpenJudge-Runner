#include<stdio.h>

int main(){
  int n, Adj[100][100],a[100][100],i,j,u[100][100],k,b;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      Adj[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&b,&k);
    for(j=0;j<k;j++){
      scanf("%d",&u[b][j]);
      Adj[i][u[b][j]-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",Adj[i][j]);
    }
    printf("\n");
  }
 
  return 0;
}
  