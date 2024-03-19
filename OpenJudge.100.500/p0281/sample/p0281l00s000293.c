#include<stdio.h>
#define NIL -1

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j;

  int u,v,c,k;
  int min = INFTY;
  int M[MAX][MAX],vis[MAX],cost[MAX],p[MAX];

  /*for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      M[i][j]=INFTY
    }
    p[i]=NIL;
    d[i]=0;
    }*/
  
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

  /*

    your code
    
  */

  for(i=0;i<n;i++){
    cost[i]=INFTY;
    p[i]=NIL;
    vis[i]=0;
  }
  cost[0]=0;
  
  while(1){
    u=NIL;
    min=INFTY;
 
    for(i=0;i<n;i++){
      if (cost[i]<min && !vis[i]){
	u=i;
	min=cost[i];
      }
    }
    
    if(u==NIL) break;
    vis[u]=1;
    
    for(v=0;v<n;v++){
      if(cost[u]+M[u][v]<cost[v] && !vis[v]){
	cost[v]=cost[u]+M[u][v];
	p[v]=u;
      }
    }
  }
    


  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, cost[i]);
  }

  return 0;
}