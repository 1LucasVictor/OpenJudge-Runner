#include<stdio.h>

#define MAX 101
#define WHITE 0
#define BLACK 1
#define INF 2001
#define NIL -1

int G[MAX][MAX],n,d[MAX],pi[MAX],color[MAX];

void Prim(int r){
  int i;
  for(i=1;i<=n;i++){
    d[i]=INF;
    pi[i]=NIL;
  }
  d[r]=0;
  while(1){
	int u,mincost = INF;
	for(i=1;i<=n;i++){
  	if(color[i]!=BLACK && d[i]<mincost){
    mincost = d[i];
    u = i;
  	}
	}

	if(mincost==INF)break;
  //printf("min:%d\n",mincost);
	color[u]=BLACK;

	for(i=1;i<=n;i++){
  	if(color[i]!=BLACK && G[u][i]<d[i] && G[u][i]!=-1){
    pi[i] = u;
    d[i] = G[u][i];
  	}
	}
  }
}

int main(){
  int i,j,sum=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
	   for(j=1;j<=n;j++){
  	    scanf("%d",&G[i][j]);
  	}
  }
  Prim(1);
  for(i=1;i<=n;i++){
	//printf("%d %d %d\n",G[i][pi[i]],d[i],pi[i]);
		sum+=d[i];
  }
  printf("%d\n",sum);
  return 0;
}

