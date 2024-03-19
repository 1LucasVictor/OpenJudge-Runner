#include<stdio.h>
#define NIL -1
#define WHITE 0
#define BLACK 1
#define MAX 500
#define INF 1000000

int main(){
  int n, i, j, u, v, c, k, minv, M[MAX][MAX], check[MAX], p[MAX], key[MAX], a;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      M[i][j] = INF;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d%d", &v, &c);
      M[u][v] = c;
    }
  }
  for(i=0; i<n; i++){
    key[i] = INF;
    p[i] = NIL;
    check[i] = WHITE;
  }
  key[0] = 0;

  while(1){
    u=NIL;
    minv=INF;
    for(i=0; i<n; i++){
      if(key[i] < minv && check[i] == WHITE){
	u=i;
	minv = key[i];
      }
    }
    if(u == NIL)break;
    check[u] = BLACK;
    for(v=0; v<n; v++){
      if(check[v] == WHITE && key[v] > key[u] + M[u][v]){
	key[v] = key[u] + M[u][v];
	p[v] = u;
      }
    }
  }
  for(j=0; j<3; j++){
  }
  
  for(j=0; j<1; j++){
    for(i=0; i<n; i++){
      if(key[i]==INF)a=0;
      else a=key[i];
      printf("%d %d\n", i, a);
    }
  }

  return 0;
}

