#include <stdio.h>

#define MAX 100

//static const int MAX=100;
static const int INFTY=(1<<21);
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n, M[MAX][MAX];

void dijkstra(){
  int i, u, v, minv, d[MAX], color[MAX];
  for(i=0; i<n; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INFTY;
    u = -1;
    for(i=0; i<n; i++){
      if(minv>d[i]&&color[i]!=BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u==-1) break;
    color[u] = BLACK;
    for(v=0; v<n; v++){
      if(color[v]!=BLACK&&M[u][v]!=INFTY){
	if(d[v]>d[u]+M[u][v]){
	  d[v] = d[u]+M[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0; i<n; i++){
    if(d[i]==INFTY) printf("%d -1\n", i);
    else printf("%d %d\n", i, d[i]);
  }
}

int main(){
  int i, j, k, c, u, v;
  
  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++) M[i][j]=INFTY;
  }

  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d%d", &v, &c);
      M[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

