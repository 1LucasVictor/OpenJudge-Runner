#include <stdio.h>
int Adj[100][100];

int main()
{
  int n;
  int u,k;
  int v;
  int i,j;


  //number of vertices
  scanf("%d",&n);
  
  //adjacency list

  for(i=0;i<n;i++){

    scanf("%d%d",&u,&k);

    for(j=0;j<k;j++){
      
      //v1,v2,v3,.....vk
      scanf("%d",&v);
      
      Adj[u][v]=1;
    }
  }
  
  //output
  for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
      
      if(j>1) printf(" ");
      
      printf("%d",Adj[i][j]);
    }printf("\n");
  }
  return 0;
}