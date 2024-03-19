#include<stdio.h>
 
#define N 100
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(){
  int l, i, j, x, v,c=0,k=0;
  int u = 0,mincost = 0;
  int cost[N];
  int d[N];
  int p[N],M[N][N];
   
   
  scanf("%d", &l);
  for ( i = 0; i< l; i++ ){
    for ( j = 0; j < l; j++ ){
      M[i][j] = INFTY;
    }
  }
   
  for ( i = 0; i < l; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }
   
  for(i=0;i < l;i++){
    d[i] = INFTY;
    p[i] = -1;
    cost[i] = 0;
  }
   
  d[0] = 0;
   
  while(1){
    u = -1;
    mincost = INFTY;
     
    for(i=0;i < l;i++){
      if(d[i] < mincost && cost[i] == 0){
    mincost = d[i];
    u = i;
      }
    }
     
    if(u == -1) break;
     
    cost[u] = 1;
     
    for(v=0;v <l;v++){
      if(d[v] > d[u]+M[u][v]){
    p[v] = u;
    d[v] = d[u]+M[u][v];
      }
    }
  }
   
  for ( i = 0; i < l; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }
   
  return 0;
}