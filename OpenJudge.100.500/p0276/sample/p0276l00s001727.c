#include<stdio.h>

#define N 100

int main(){

  int i,j,k,n,u,v,Adj[N][N];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      Adj[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
   
      Adj[u-1][v-1]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d",Adj[i][j]);
      if(j<n) printf(" ");
    }
    printf("%d",Adj[i][j]);
    printf("\n");
  }

  return 0;
  
}