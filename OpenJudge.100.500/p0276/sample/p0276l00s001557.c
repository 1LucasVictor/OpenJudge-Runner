#include<stdio.h>

int main(){
  int n,k,v,u,V[101][101]={};
  int i,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      V[u][v] = 1;
    }
  }
    
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",V[i][j]);
      if(j!=n) printf(" ");
    }
    printf("\n");
  }
  
  return 0;
}
