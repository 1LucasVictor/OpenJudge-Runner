#include <stdio.h>

#define max 100
#define inf 100000000
#define white 0
#define gray 1
#define brack 2

int A[max][max],d[max];

void dijkstra(int);

int main(){
  int i,j,k,c,u,v,n;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = inf;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      A[u][v] = c;
    }
  }
  dijkstra(n);
  
  
}

void dijkstra(int n){
  int p[max],i,u=-1,v,mincost,color[max];
  for(u=0;u<n;u++){
    color[u] = white;
    d[u] = inf;
  }
  d[0] = 0;
  p[0] = -1;

  while(1){
    mincost = inf;
    for(i=0;i<=n-1;i++){
      if(color[i] != brack && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

      if(mincost == inf) break;

      color[u] = brack;

      for(v=0;v<=n-1;v++){
	if(color[v] != brack && A[u][v] != inf){
	  if(d[u] + A[u][v] < d[v]){
	    d[v] = d[u] + A[u][v];
	    p[v] = u;
	    color[v] = gray;
	  }
	}
      }
  }
      for(i=0;i<n;i++){
	printf("%d %d\n",i,(d[i] == inf ? -1 : d[i]));
      }
  
}
      

