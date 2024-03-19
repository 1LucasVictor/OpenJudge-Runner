#include <stdio.h>

#define MAX 100

int a[MAX][MAX];

int main(){
  int i,j,n,u,k,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      a[u][v]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(a[i][j] == NULL)a[i][j]=0;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++){
      printf("%d ",a[i][j]);
    }
    printf("%d",a[i][n]);
    printf("\n");
  }
return 0;

}