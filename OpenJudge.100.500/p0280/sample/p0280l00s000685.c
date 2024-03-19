#include<stdio.h>
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(void){
  int n, i, j, e, sum;
  int g[MAX][MAX],d[MAX],pi[MAX],min = INFTY, a, b,v[MAX];
 
  scanf("%d", &n);
 
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      g[i][j] = (e==-1)?INFTY:e;
    }
  }
 
 
  for(i = 0; i < n; i++){
    d[i] = INFTY;
    v[i] = 0; 
    pi[i] = -1;
  }
  d[0] = 0;
   
  while(1){
    b = -1;
    min = INFTY;
 
   
    for(i = 0; i < n; i++){
      if(d[i] < min && !v[i]){ 
    b = i; 
    min = d[i]; 
      }
    }
 
    if(b == -1){
      break; 
    }
    v[b] = 1; 
 
    for(a = 0; a < n; a++){
      if(d[a] >= g[b][a] && !v[a]){
    d[a] = g[b][a];
    pi[a] = b; 
      }
    }
  }
     
 
  sum = 0;
 
  for ( i = 0; i < n; i++ ){
    if ( pi[i] != -1 ) {
      sum = sum + g[i][pi[i]];
    }
  }
 
  printf("%d\n", sum);
  return 0;
}