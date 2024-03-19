#include <stdio.h>

int main(){
  int n,u,k,i,j,v,V[100][100]={};

  scanf("%d",&n);   /*頂点数*/
  
  for(i=1; i<=n; i++){
    scanf("%d",&u);      /*頂点番号*/
    scanf("%d",&k);      /*出次数*/
    for(j=0; j<k; j++){
      scanf("%d",&v);     /*隣接番号*/
      V[u][v-1] = 1;    
    }
  }
  for(i=1; i<=n; i++){
    for(j=0; j<n-1; j++){
      printf("%d ",V[i][j]);
    }
    printf("%d\n",V[i][n-1]);
  }

  return 0;
}