#include<stdio.h>

int main(){
  int a[101][101];
  int i,j,u,k,v,n;

  scanf("%d",&n);

  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++) a[i][j]=0;

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    if(k==0) continue;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      a[u][v]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",a[i][j]);
      if(j!=n) printf(" ");
    }
    printf("\n");
  }

  return 0;
}

