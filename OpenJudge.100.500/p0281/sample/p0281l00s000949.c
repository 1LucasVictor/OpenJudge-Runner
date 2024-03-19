#include <stdio.h>
#define MAX 101
#define INF 10000005
#define NIL -1

   
int main()
{
  int i, j;
  int n, count=0, v, c, c1, v1, i2, min;
  int G[MAX][MAX], col[MAX], d[MAX], pi[MAX];
  
  for(i=0; i<MAX; i++){
    for(j=0; j<MAX; j++){
      G[i][j] = NIL;
	}   
  }
  
  scanf("%d", &n);
  for(i=0; i<n; i++){   
    scanf("%d%d", &v, &c);   
    for(j=0; j<c; j++){
      scanf("%d%d", &v1, &c1);
      G[v][v1] = c1;
    }
  }
    
  for(i=0; i<n; i++){   
    col[i] = 0;
    pi[i] = NIL;
    d[i] = INF; 
  }
   
  d[0] = 0;
    
  while(1){
    min = INF;
    for(i=0; i<n; i++){   
      if(col[i] != 2 && d[i] < min){
        min = d[i];
        i2 = i;
      }
    }
   
    if(min == INF) break;
   
    col[i2] = 2;
   
    for(i=0; i<n; i++){
      if(G[i2][i] != NIL && col[i] != 2 && (G[i2][i]+d[i2]) < d[i]){
		pi[i] = i2;
		d[i] = G[i2][i] + d[i2];
		col[i] = 1;
      }
    }
  }
  
  for(i=0; i<n; i++){
	printf("%d %d\n", i, d[i]);
  }   

  return 0;
}