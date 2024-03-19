#include<stdio.h>
#define N 101
#define inf 1000000000
#define NIL -1

int A[N][N],d[N],v[N],color[N],pi[N];

int main(){
  int n,i,j,mincost,v,cost=0,u,k,a;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j] = NIL;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&a);
      scanf("%d",&A[i][a]);
    }
  }

  for(u=0;u<n;u++){
    d[u] = inf;
    pi[u] = NIL;
    color[u] = 0;
  }
  d[0] = 0;
  
  while(1){
    mincost = inf;
    for(i=0;i<n;i++){
      if(color[i] != 1 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == inf){
      break;
    }
    color[u] = 1;
    for(v=0;v<n;v++){
      if(color[v] != 1 && d[u] + A[u][v] < d[v] && A[u][v] != -1){
	pi[v] = u;
	d[v] = d[u] + A[u][v];
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
  
}

