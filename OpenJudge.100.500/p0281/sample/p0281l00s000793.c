#include<stdio.h>
 
#define N 100
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(){
  int n, i, j, e, v,c=0,k=0;
  int u = 0,mincost = 0;
  int cost[N];
  int d[N];
  int p[N],M[N][N];
   
   
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }
   
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }
   
  for(i=0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
    cost[i] = 0;
  }
   
  d[0] = 0;
   
  while(1){
    u = -1;
    mincost = INFTY;
     
    for(i=0;i < n;i++){
      if(d[i] < mincost && cost[i] == 0){
    mincost = d[i];
    u = i;
      }
    }
     
    if(u == -1) break;
     
    cost[u] = 1;
     
    for(v=0;v <n;v++){
      if(d[v] > d[u]+M[u][v]){
    p[v] = u;
    d[v] = d[u]+M[u][v];
      }
    }
  }
   
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }
   
  return 0;
}