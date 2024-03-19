#include <stdio.h>
#define inf 100000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;
int w[100][100];
int d[100];

void dijkstra()
{

  int i, mincost, u;
  int color[100];

  for(i=0;i<n;i++){
    d[i] = inf;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
   
  while(1){
    mincost = inf;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == inf){
      break;
    }
    color[u] = BLACK;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[u] + w[u][i] < d[i]){
	color[i] = GRAY;
	d[i] = d[u] + w[u][i];
      }
    }
  }

}

int main()
{

  int i, j, u, k, v, c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j] = inf;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      w[u][v] = c;
    }
  }

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i] == inf) printf("%d\n",NIL);
    else printf("%d\n",d[i]);
  }

  return 0;

}
  
    

