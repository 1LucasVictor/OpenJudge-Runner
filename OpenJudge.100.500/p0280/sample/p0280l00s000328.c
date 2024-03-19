#include <stdio.h>
#define N 100
#define INF 1000000
 
int n, a[N][N];

int MST(void);
 
int main(){
  int i, j;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("%d\n",MST());
   
  return 0;
}
 
int MST(){
  
  int i, j, u, v, d[N], pi[N], color[N], min, sum = 0;

  for(u = 0; u < n; u++){
    d[u] = INF;
    pi[u] = -1;
    color[u] = 0;
  }
  d[0] = 0;
   
  while(1){
    min = INF;
    for(i = 0; i < n; i++){
      if(color[i] != 2 && min > d[i]){
    u = i;
    min = d[i];
      }
    }
     
    if(min == INF) break;
 
    color[u] = 2;
     
    for(v = 0; v < n; v++){
      if(color[v] != 2 && a[u][v] < d[v] && a[u][v] != -1){
    pi[v] = u;
    d[v] = a[u][v];
      }
    }
  }
 
  for(i = 0; i < n; i++){
    if(pi[i] != -1) sum += a[i][pi[i]];
  }
 
  return sum;
}