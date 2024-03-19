#include <stdio.h>

int main(void)
{
  int i,j,k,n,u,l,v,M[100][100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      M[u][v]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j>0){
        printf(" ");
      }
      printf("%d",M[i][j]);
    }
    printf("\n");
  }
  return 0;
}