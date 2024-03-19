#include <stdio.h>
#define N 100

void dijkstra(void);

int n,a[N][N];

int main(){
  int i,j,x,y,z,w;

  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      a[i][j] = 10000000;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d %d",&x,&y);
    for(j = 0;j < y;j++){
      scanf("%d %d",&z,&w);
      a[x][z] = w;
    }
  }

  dijkstra();
  
  return 0;
}

void dijkstra(void){
  int i,u,v,d[N],sum = 0,mincost,color[N];
  
  for(u = 0;u < n;u++){
    d[u] = 10000000;
    color[u] = 0; //0=white
  }

  d[0] = 0;
  color[0] = 1; //1=gray

  while(1){
    mincost = 10000000;
    u = -1;
    for(i = 0;i < n;i++){
      if(color[i] != 2 && d[i] < mincost){ //2=black
	mincost = d[i];
	u = i;
      }
    }
    if(u == -1) break;

    color[u] = 2;

    for(v = 0;v < n;v++){
      if(color[v] != 2 && a[u][v] != 10000000){
	if(d[v] > d[u] + a[u][v]){
	  d[v] = d[u] + a[u][v];
	  color[v] = 1;
	}
      }
    }
  }

  for(i = 0;i < n;i++){
    printf("%d ",i);
    if(d[i] == 10000000){
      printf("-1\n");
    }
    else printf("%d\n",d[i]);
  }
}

