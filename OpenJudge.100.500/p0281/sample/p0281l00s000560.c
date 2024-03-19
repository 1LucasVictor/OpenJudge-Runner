#include <stdio.h>
#include <stdlib.h>
#define INF 100000000
#define NIL -1
#define WHITE 0
#define BLACK 1
 
main(){
        int n, i, j, u, p, m, k, cost=0, mincost;
    int **G, *tmp;
    int *flag;
    int *d, *pi;
 
    scanf("%d", &n);
    flag = (int*)malloc(sizeof(int) * n);
    d = (int *)malloc(sizeof(int)*n);
    pi = (int *)malloc(sizeof(int)*n);
    G = (int**)malloc(sizeof(int*) * n);
    tmp = (int*)malloc(sizeof(int) * n * n);
    for (i = 0; i < n; i++){
        G[i] = tmp + i * n;
        flag[i] = WHITE;
        d[i]=INF;
        pi[i]=NIL;
        for (j = 0; j < n; j++){
            G[i][j] = NIL;
        }
    }
 
    for(i=0; i<n; i++){
      scanf("%*d%d", &k);
      for(j=0; j<k; j++){
        scanf("%d", &p);
        scanf("%d", &m);
        G[i][p] = m;
      }
    }
 
    u=0;
    d[u]=0;
 
    while(1){
      mincost = INF;
      for(i=0; i<n; i++){
        if(flag[i]!=BLACK && d[i]<mincost){
          mincost = d[i];
          u=i;
        }
      }
      if(mincost == INF) break;
      flag[u] = BLACK;
      //cost += mincost;
 
      for(i=0; i<n; i++){
        if(G[u][i]!=NIL && flag[i]!=BLACK && (d[u]+G[u][i])<d[i]){
          d[i]=d[u]+G[u][i];
          pi[i] = u;
        }
      }  
    }
 
        for(i=0; i<n; i++){
      printf("%d %d\n", i, d[i]);
    }
 
    free(tmp);
    free(G);
    free(flag);
    free(d);
    free(pi);
 
    return 0;
}