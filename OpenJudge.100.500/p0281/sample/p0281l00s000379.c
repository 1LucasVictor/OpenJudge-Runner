#include <stdio.h>
#define max 100
#define INFTY 1000000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, m[max][max];
int d[max]; //d[]..頂点vへの道で最小の重みを入れる


void dijkstra();

int main(){

  int k, c, u, v;
  int i, j;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      m[i][j] = INFTY;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d", &u, &k);
    
    for(j=0; j<k; j++){
      scanf("%d %d", &v, &c);
      m[u][v]=c;
    }
  }

  dijkstra();

  //print
  for(i=0; i<n; i++){
    printf("%d", i);
    if(d[i]!= INFTY) printf(" %d\n", d[i]);
  }
  //for(i=0; i<n; i++) printf("%d %d\n", i, d[i]);
  

  return 0;
}

void dijkstra(){

  int minv, u;
  //int d[max]; //d[]..頂点vへの道で最小の重みを入れる
  int color[max];
  int i, v;

  for(i=0; i<n; i++){//初期化
    d[i]= INFTY;
    color[i]= WHITE;
  }

  d[0]=0;
  color[0]=GRAY;

  while(1){

    minv=INFTY;
    u= -1;

    for(i=0; i<n; i++){
      
      if( d[i]<minv && color[i] != BLACK){
	u=i;
	minv=d[i];
      }
    }
    if(u == -1) break;
    color[u]=BLACK;

    for(v=0; v<n; v++){
      
      if(color[v]!= BLACK && m[u][v] != INFTY){

	if( d[u]+ m[u][v] < d[v]){
	  d[v] = d[u]+m[u][v];
	  color[v]=GRAY;
	}
      }
    }
  }//while終了
}

