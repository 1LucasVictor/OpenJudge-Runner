#include<stdio.h>

#define MAX 110
#define INFINITY 1000000
#define NIL -1
#define WHITE 0
#define GRAY 1
#define BLACK 2

void Dijkstra(void);

int n;
int num[MAX][MAX];

int main(){
  int i,j,k,u,v,c;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      num[i][j] = INFINITY;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d%d",&v,&c);
      num[u][v] = c;
    }
  }

  Dijkstra();

  return 0;
}

void Dijkstra(){
  int i,u,v,min;
  int d[MAX],pi[MAX],color[MAX];

  for(u=0; u<n; u++){
    d[u]= INFINITY;
    color[u] = WHITE;
  }
  d[0] = 0;

  while(1){
    min = INFINITY;
    u = NIL;
    for(i=0; i<n; i++){
      if(color[i] != BLACK && d[i] < min){
	min = d[i];
	u = i;
      }
    }

    if(min == INFINITY) break;
    color[u] = BLACK;

    for(v=0; v<n; v++){
      if(color[v] != BLACK && num[u][v] != INFINITY){
	if(d[u] + num[u][v] < d[v]){
	  pi[v] = u;
	  d[v] = d[u] + num[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i=0; i<n; i++){
    printf("%d %d\n",i,d[i]);
  }
}

