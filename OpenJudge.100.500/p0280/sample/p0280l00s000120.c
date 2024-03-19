#include <stdio.h>

void prim(int,int);

#define INF 10000
#define WHITE 0
#define BLACK 1
#define NIL -1


int d[100],color[100],w[100][100];

int main(){

  int g,r,i,j,answer=0;

  scanf("%d",&g);

  for(i=0;i<g;i++){
    for(j=0;j<g;j++){

      scanf("%d",&w[i][j]);
     
    }
  }

  //printf("wa-i\n");
  
  r=0;

   for(i=0;i<g;i++){
    for(j=0;j<g;j++){

      if(w[i][j]==-1) w[i][j]=INF;
     
    }
  }
  
  prim(g,r);

  for(i=0;i<g;i++){

    answer += d[i];

  }

  printf("%d\n",answer);

  return 0;
}

void prim(int G,int r){

  int u,mincost,i,pi[100],v,count=0;

  for(u=0;u<G;u++){

    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[r] = 0;

  while(1){

    //printf("wa-i2\n");

    mincost = INF;

    for(i=0;i<G;i++){

      if(color[i] != BLACK && d[i] < mincost){

	mincost = d[i];
	u = i;

      }
    }

    if(mincost == INF)break;

    color[u] = BLACK;
    count++;

    for(v=0;v<G;v++){

      if(color[v] != BLACK && w[u][v] < d[v]){

	pi[v] = u;
	d[v] = w[u][v];

      }
    }

    if(count == G)break;
    

  }
}