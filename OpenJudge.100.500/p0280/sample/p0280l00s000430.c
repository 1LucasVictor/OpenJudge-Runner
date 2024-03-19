#include<stdio.h>
#define WHITE 0
#define BLACK 1
#define NIL -1
#define INF 2000000000

void prim(int, int );

int graph[101][101];
int d[101];
int pi[101];
int color[101];
int x = 0;

int main(){

  int sumnode,i,j;

  scanf("%d",&sumnode);

  for(i = 1; i <= sumnode; i++){

    for(j = 1; j <= sumnode; j++){

      scanf("%d",&graph[i][j]);

    }

  }

  prim(sumnode,1);



  for(i = 1; i <= sumnode; i++){

    x = x + d[i];

  }

  printf("%d\n",x);

  return 0;

}


void prim(int sumnode,int first){

  int i,mincost,v,u,j;
  mincost = INF;

  for(u = 1; u <= sumnode; u++){


    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;

  }


  d[first] = 0;

  while(1){

    mincost = INF;

    for(i =1; i<=sumnode;i++){

      if(color[i] != BLACK && d[i] < mincost){

	 mincost = d[i];

	 u = i;

      }
  
    }

    if(mincost == INF)  

      break;

    color[u] = BLACK;

      for(v=1 ; v <= sumnode;v++){

	if(graph[u][v] == -1){

	  continue;

	}

	if (color[v] != BLACK && graph[u][v] < d[v]){

	  pi[v] = u;

	  d[v] = graph[u][v];

	}
      }
  }

}