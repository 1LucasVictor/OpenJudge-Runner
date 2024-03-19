#include <stdio.h>
#define N 105
#define BLACK -2
#define WHITE 1
#define INF 100000
#define NIL -5

typedef struct {
  int color, d, pi;  
}Record;


void prim(int);



int adj[N][N];
int n;
Record data[N];



int main () {
  int m, i, j, sum =0;

  scanf("%d",&n);

  for(i = 1 ; i <= n ; i++) {
    for(j = 1 ; j <= n ; j++) {
      scanf("%d",&m);
      
      adj[i][j] = m;

      //Insert(m, i);
    }
  }
  

  prim(1);

  for(i = 1 ; i<= n ; i++) {
    //printf("i = %d, data[i] = %d\n", i, data[i].d);
    sum += data[i].d;
  }
  printf("%d\n",sum);

  return 0;
}



void prim(int r) {
  int i, u, mincost = 0;

  for(i = 1 ; i <= n ; i++) {
    data[i].color = WHITE;
    data[i].d = INF;
    data[i].pi = NIL;

  }

  data[r].d = 0;
  

  while(1) {
    mincost = INF;

    for(i = 1 ; i <= n ; i++) {
      if(data[i].color != BLACK) {
	if(data[i].d < mincost) {
	  mincost = data[i].d;
	  u = i;
	  //printf("from %d to %d connected (cost %d)\n", u, i, data[i].d);
	}
      }
    }

    if(mincost == INF) break;

    data[u].color = BLACK;

    for(i = 1 ; i <= n ; i++) {
      if(data[i].color != BLACK && adj[u][i] < data[i].d && adj[u][i] != -1) {
	data[i].pi = u;
	data[i].d = adj[u][i];
	
      }
    }
  }
}










