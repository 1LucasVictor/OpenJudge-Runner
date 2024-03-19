#include<stdio.h>
#define N 100
#define INF 100000


int A[N][N],n;

int Prims(){
  int i,j,u,v,cost[N][N],dis;
  int visit[N],no_edges,min_cost,distance[N],from[N];

  for(i=0;i<n;i++) for(j=0;j<n;j++) if(A[i][j]==-1) cost[i][j]=INF;
      else cost[i][j]=A[i][j];

  distance[0]=0;
  visit[0]=1;

  for(i=0;i<n;i++){
    distance[i]=cost[0][i];
    from[i]=0;
    visit[i]=0;
  }

  min_cost=0;
  no_edges=n-1;

  while(no_edges>0){
    dis=INF;
    for(i=1;i<n;i++){
      if(visit[i]==0 && distance[i]<dis){
	v=i;
	dis=distance[i];
      }
    }
    u=from[v];
    no_edges--;
    visit[v]=1;
    for(i=1;i<n;i++){
      if(visit[i]==0 && cost[i][v]<distance[i]){
	distance[i]=cost[i][v];
	from[i]=v;
      }
    }
    min_cost+=cost[u][v];
  }

  return min_cost;
}



int main(){
  int i,j;

  scanf("%d", &n);

  for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&A[i][j]);

  printf("%d\n",Prims());
  
  return 0;
}

