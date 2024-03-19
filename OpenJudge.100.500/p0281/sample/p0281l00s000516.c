#include<stdio.h>
#include<stdlib.h>

#define MAX 101
#define INFTY 1000000

int G[MAX][MAX];
int d[MAX];

void Dijkstra(int);

int main(void){
  int i, j, k, n, v, u, c;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      G[i][j] = INFTY;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d", &u, &k);
    for(j=0; j<k; j++){
      scanf("%d%d", &v, &c);
      G[u][v] = c;
    }
  }

  Dijkstra(n);

  return 0;
}

void Dijkstra(int n){
  int i, j, k, min;
  int d[MAX], c[MAX];

  d[0] = 0;
  for(i=1; i<n; i++){
    d[i] = INFTY;
    c[i] = 0;
  }

  while(1){
    min = INFTY;

    for(i=0; i<n; i++){
      if(c[i] != 1 && d[i] < min){
        j = i;
        min = d[i];
      }
    }

    if(min == INFTY) break;

    c[j] = 1;
    for(k=0; k<n; k++){
      if(c[k] != 1 && d[j] + G[j][k] < d[k]) d[k] = d[j] + G[j][k];
    }
  }

  for(i=0; i<n; i++) printf("%d %d\n", i, d[i]);

  return;
}