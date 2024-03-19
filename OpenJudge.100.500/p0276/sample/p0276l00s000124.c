#include <stdio.h>
#define MAX 100

int main(){
  int n,a[MAX+1][MAX+1],i,j,u,k,v;

  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      a[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d%d",&u,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&v);
      a[u][v]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==n) printf("%d\n",a[i][j]);
      else printf("%d ",a[i][j]);
    }
  }
  return 0;
}
