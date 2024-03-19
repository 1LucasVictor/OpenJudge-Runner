#include<stdio.h>
#define MAX 100
#define NIL -1
#define WHITE 1
#define GRAY 2
#define BLACK 3
#define INF (1<<21)

int G[MAX][MAX],c[MAX],p[MAX],d[MAX],n;
void dijkstra(){
  int i,u,min;
  for(i=0;i<n;i++){
    c[i]=WHITE;
    p[i]=NIL;
    d[i]=INF;
  }
  d[0]=0;
  c[0]=GRAY;
  while(1){
    min=INF;
    u=NIL;
    for(i=0;i<n;i++){
      if(c[i]!=BLACK && d[i]<min){
        min=d[i];
        u=i;
      }
    }
    if(u==NIL) break;
    c[u]=BLACK;
    for(i=0;i<n;i++){
      if(c[i]!=BLACK && G[u][i]!=NIL){
	if(d[u]+G[u][i]<d[i]){
	  d[i]=G[u][i]+d[u];
	  p[i]=u;
	  c[i]=GRAY;
	}
      }
    }
  }
  /*for(i=0;i<n;i++){
    if(p[i]!=NIL) count+=G[i][p[i]];
  }
  return count;*/
}
  int main(){
    int i,j,a,w,k,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      for(j=0;j<n;j++) G[i][j]=NIL;
    }
  for(i=0;i<n;i++){
    scanf("%d %d",&k,&j);
    for(l=0;l<j;l++){
      scanf("%d %d",&a,&w);
      G[k][a]=w;
    }
  }
  dijkstra();
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]!=INF) printf("%d\n",d[i]);
    else printf("%d\n",NIL);
  }
  return 0;
}

