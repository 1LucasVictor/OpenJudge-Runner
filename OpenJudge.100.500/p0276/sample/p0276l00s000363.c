#include<stdio.h>

int main(){
  int i,j,n,u,k,v,m[200][200];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) m[i][j]=0;
  }
  for(i=1;i<=n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      m[i][v]=1;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=1) printf(" ");
      printf("%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}

