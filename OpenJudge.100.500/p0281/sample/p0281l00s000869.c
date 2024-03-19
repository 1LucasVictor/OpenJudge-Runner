#include <stdio.h>
#include <stdlib.h>

#define N 101
#define E 200001

int main(){
  int i, j, min;
  int p, q, r, n;
  int W[N][N];
  int dij[N], d[N];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    dij[i] = 0;
    d[i] = E;
    for(j = 0; j < n; j++){
      W[i][j] = -1;
    }
  }
  for(i = 0; i < n; i++){
    scanf("%d %d", &p, &q);
    for(j = 0; j < q; j++){
      scanf("%d", &r);
      scanf("%d", &W[p][r]);
    }
  }
  d[0] = 0;
  while(1){
    min = E;
    for(i = 0; i < n; i++){
      if(dij[i]!=1 && d[i]<min){
        min = d[i];
        p = i;
      }
    }
    if(min == E){
      break;
    }
    for(i = 0; i < n; i++){
      if(W[p][i]!=-1 && dij[i]!=1 && d[p]+W[p][i]<d[i])
        d[i] = d[p] + W[p][i];
    }
    dij[p] = 1;
  }
  for(i = 0; i < n; i++){
    printf("%d %d\n", i, d[i]);
  }

  return 0;
}