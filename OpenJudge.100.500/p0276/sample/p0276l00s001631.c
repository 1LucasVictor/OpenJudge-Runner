#include <stdio.h>

#define N 101

int main(){

  int n,Adj[N][N],i,j,s,t,u;
  int G[N][N];

  scanf("%d",&n);

 for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      G[i][j]=0;
    }
  }

 for(i=1 ; i<=n ; i++){
   scanf("%d %d",&s, &t);
   for(j=0 ; j<t ; j++){
     scanf("%d",&u);
     G[i][u]=1;
   }
 }



  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      printf("%d ",G[i][j]);
    }
    printf("\n");
  }

  return 0;

}