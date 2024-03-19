#include<stdio.h>
#define NIL -1 

static const int MAX = 500;
static const int INFTY = (1<<21);


main(){
  int n, i, j, k,c;
  int u,v;
  int minv = INFTY;
  int M[MAX][MAX],vis[MAX],d[MAX],pi[MAX];
  
  /* your code */

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

 
  /* your code */
  for (u = 0; u<n; u++ ){
    d[u] = INFTY;
    vis[u] = 0;  
    pi[u] = NIL;
    
  }

  d[0] = 0;
  
  
  while ( 1 ){
    u = NIL;
    minv = INFTY;

    for (i = 0; i<n; i++ ){
      if (d[i] < minv && !vis[i]){
	u = i;
	minv = d[i];
      }
    }
    
    if (u  == NIL ) break;
    
    vis[u] = 1; 
    
    for (v = 0; v<n; v++ ){
      
      if ( d[v] > d[u]+M[u][v] && !vis[v]){
	d[v] = d[u]+M[u][v];
	pi[v] = u;
      }
    }
  }
  
 
 for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }
  
  return 0;
}