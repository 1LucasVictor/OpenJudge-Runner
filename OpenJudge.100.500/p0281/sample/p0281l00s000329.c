#include<stdio.h>
#include <limits.h>
#include<stdlib.h> 
 
#define WHITE 0
#define BLACK 1
#define MAX 100
#define N -1

int main(){
  
  int d[MAX];
  int w[MAX][MAX];
  int color[MAX];
 
  int n, i, j, min, u, v, p, q, x;
   
  scanf("%d", &n);
   
  for(i = 0;i < n;i++)
    for(j = 0;j < n;j++)
      w[i][j] = N;
   
  for(i = 0;i < n;i++){
    scanf("%d",&x);
    scanf("%d",&q);
     
    for(j = 0;j < q;j++){
      scanf("%d",&v);
      scanf("%d",&p);
       
      w[x][v] = p;
    }
  }
   
   
  for(i = 0;i < n;i++){
    d[i] = INT_MAX;
    color[i] = WHITE;
  }
   
  d[0] = 0;
   
  while(1){
    min = INT_MAX;
 
    for(i = 0;i < n;i++){
      if(d[i] < min && color[i] == WHITE){
	min = d[i];
	u = i;
      }
    }
     
    if(min == INT_MAX) break;
    color[u] = BLACK;
     
    for(v = 0;v < n;v++){
      if(w[u][v] == N) continue;
      if(d[v] > w[u][v] + d[u]) d[v] = w[u][v] + d[u];
    }
  }
   
  for(i = 0;i < n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
 
}