#include <stdio.h>

#define MAX 101

int main(){
  int i=0,j=0;;
  int n;
  int M[MAX][MAX];
  int u;
  int k;
  int v;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      M[i][j]=0;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      M[u][v]=1;
    }
  }
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=1)printf(" ");
      printf("%d",M[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

