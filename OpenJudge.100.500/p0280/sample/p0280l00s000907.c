#include<stdio.h>
#define INF (1<<24)
int G[100][100];
int d[100];
int v[100];
int u,ans=0;
int n;
int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
      if(G[i][j]==-1)G[i][j]=INF;
    }
    d[i]=INF;
    v[i]=0;
  }
  d[0]=0;
  while(1){
    u=-1;
    for(i=0;i<n;i++){
      if(v[i]==1)continue;
      if(u==-1||d[u]>d[i])u=i;
    }
    if(u==-1)break;
    v[u]=1;
    for(i=0;i<n;i++)
      if(G[u][i]<d[i])
	d[i]=G[u][i];
  }
  for(i=0;i<n;i++)ans+=d[i];
  printf("%d\n",ans);
}