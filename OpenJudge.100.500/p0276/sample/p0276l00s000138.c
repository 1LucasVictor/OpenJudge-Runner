#include<stdio.h>

int main()
{
  int n,i,j,v,vv,m;
  int map[101][101];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      map[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&v,&m);
    for(j=0;j<m;j++){
      scanf("%d",&vv);
      map[v-1][vv-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",map[i][j]);
    }
    printf("%d\n",map[i][j]);
  }
  return 0;
}