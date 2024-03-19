#include<stdio.h>
#define N 100
int main(){
  int n,i,j,k,l,m;
  int graph[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      graph[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&k,&l);
    k--;
    for(j=0;j<l;j++){
      scanf("%d",&m);
      m--;
      graph[k][m]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==n-1)printf("%d\n",graph[i][j]);
      else printf("%d ",graph[i][j]);
    }
  }
  return 0;
}

