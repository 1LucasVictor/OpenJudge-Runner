#include<stdio.h>
#define N 100
#define INF 200000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,A[N][N];
void dijkstra(void){
  int u,v,i,mincost;
  int color[N],d[N],pi[N];

  for(i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[0]=0;
  color[0]=GRAY;

  while(1){
    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(u==-1) break;

    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&A[u][v]!=INF){
	if(d[u]+A[u][v]<d[v]){
	  d[v]=d[u]+A[u][v];
	  pi[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
    for(i=0;i<n;i++) printf("%d %d\n",i,d[i]==INF?-1:d[i]);
}
int main(){
  int i,j,a,b,k,l;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++) A[i][j]=INF;
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&b,&l);
      A[a][b]=l;
    }
  }

  dijkstra();

  return 0;
}
  

