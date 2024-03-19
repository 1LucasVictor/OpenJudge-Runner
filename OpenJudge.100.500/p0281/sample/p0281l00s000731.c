#include<stdio.h>
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int h;
int ray[100][100];

void Dijkst();

int main(){
  int i, j, u, k, v, w;

  scanf("%d",&h);

  for(i = 0 ; i < h ; i++){
    for(j = 0 ; j < h ; j++){
      ray[i][j] = INFTY;
    }
  }

  for(i = 0 ; i < h ; i++){
    scanf("%d%d",&u,&k);

    for(j = 0 ; j < k ; j++){
      scanf("%d%d",&v,&w);
      ray[u][v] = w;
    }
  }

  Dijkst();

  return 0;
}

void Dijkst(){
  int i;
  int minx, u, v;
  int d[100], color[100];

  for(i = 0 ; i < h ; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;

  while(1){
    minx = INFTY;
    u = -1;
    for(i = 0 ; i < h ; i++){
      if(minx > d[i] && color[i] != BLACK){
	u = i;
	minx = d[i];
      }
    }

    if(u == -1) break;

    color[u] = BLACK;
    for(v = 0 ; v < h ; v++){
      if(color[v] != BLACK && ray[u][v] != INFTY){
	if(d[v] > d[u] + ray[u][v]){
	  d[v] = d[u] + ray[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  for(i = 0 ; i < h ; i++){
    printf("%d ",i);

    if(d[i] == INFTY) printf("-1\n");
    else printf("%d\n",d[i]);
  }
}
    

