#include<stdio.h>
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(){
  int n, i, j, e, sum;
  int P[MAX],D[MAX],C[MAX],M[MAX][MAX],key,u;
  
  scanf("%d", &n);
  
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
  
  for(i = 0; i < n; i++){
    C[i] = INFTY;
    P[i] = -1;
    D[i] = 0;
  }
  
  C[0] = 0;

  while(1){
    key = INFTY;
    u = -1;
    
    for(i = 0; i < n; i++){
      if(key > C[i] && D[i] == 0){
	u = i;
	key = C[i];
      }
    }

    if(u == -1){
      break;
    }
    
    D[u] = 1;
    for(j = 0; j < n; j++){
      if(M[u][j] < C[j] && D[j] == 0){
	P[j] = u;
	C[j] = M[u][j];
      }
    }
  }
  sum = 0;
  
  for ( i = 0; i < n; i++ ){
    if ( P[i] != -1 ) sum += M[i][P[i]];
  }
  
  printf("%d\n", sum);
  
  return 0;
}