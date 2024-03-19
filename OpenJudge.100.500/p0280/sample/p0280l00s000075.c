#include<stdio.h>

#define N 100

static int MAX = 500;
static int INFTY = (1 << 21); //1 shift 21 bits

main(){
  int n, i, j, e, v, sum;
  int u = 0, mincost = 0;
  int cost[N];
  int key[N];
  int p[N], M[N][N];
  
  //input
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      if(e == -1){
	M[i][j] = INFTY;
      }else{
	M[i][j] = e;
      }
    }
  }
  
  //calc
  for(i = 0; i < n; i++){
    key[i] = INFTY;
    p[i] = -1;
    cost[i] = 0;
  }
  
  key[0] = 0;
  
  while(1){
    u = -1;
    mincost = INFTY;
   
    for(i = 0; i < n; i++){
      if(key[i] < mincost && cost[i] == 0){
	mincost = key[i];
	u = i;
      }
    }
    
    if(u == -1) break;
   
    cost[u] = 1;
    
    for(v = 0; v < n; v++){
      if(M[u][v] < key[v] && cost[v] ==0){
	p[v] = u;
	key[v] = M[u][v];
      }
    }

  }//end while
  
  sum = 0;
  
  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }
  
  //output
  printf("%d\n", sum);
  
  return 0;
}