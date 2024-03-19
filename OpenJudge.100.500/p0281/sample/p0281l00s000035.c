#include <stdio.h>
#define N 105
#define BLACK -2
#define WHITE 1
#define INF 100009
#define NIL -5

typedef struct {
  int color, d, pi;  
}Record;


void dijkstra(int);



int adj[N][N];
int n;
Record data[N];



int main () {
  int m, i, j, p, k, sum =0;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++) {
    scanf("%d %d",&p, &k);

    for(j = 0 ; j < k ; j++) {
      scanf("%d",&m);
      scanf("%d",&adj[p][m]);
      
    }
    
      //Insert(m, i);
  }
  

  dijkstra(0);

  for(i = 0 ; i < n ; i++) {
    printf("%d %d\n",i,data[i].d);
  }

  return 0;
}



void dijkstra(int r) {
  int i, u, mincost = 0;

  for(i = 0 ; i < n ; i++) {
    data[i].color = WHITE;
    data[i].d = INF;
    data[i].pi = NIL;

  }

  data[r].d = 0;
  

  while(1) {
    mincost = INF;

    for(i = 0 ; i < n ; i++) {
      if(data[i].color != BLACK) {
	if(data[i].d < mincost) {
	  mincost = data[i].d;
	  u = i;
	}
      }
    }

    if(mincost == INF) break;

    data[u].color = BLACK;

    for(i = 0 ; i < n ; i++) {
      if(data[i].color != BLACK && (adj[u][i] + data[u].d) < data[i].d && adj[u][i] > 0) {
	data[i].pi = u;
	data[i].d = adj[u][i] + data[u].d;
	//printf("from %d to %d connected (cost %d)\n", u, i, data[i].d);
      }
    }
  }
}

