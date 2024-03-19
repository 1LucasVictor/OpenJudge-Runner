#include<stdio.h>

#define N 101
#define INF (1<<21)
#define NIL -1
#define Black -2
#define White -3
 
typedef struct{
  int dis;
  int color;
}tree;
 
int main(){
  int e, i, j, k, n, u[N], A[N][N], sum = 0;
  tree d[N];
  scanf("%d", &n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d", &e);
      A[i][j] = (e == -1)?INF:e;
      d[i].color = White;
      if(i == 0)d[i].dis = 0;
      else d[i].dis = INF;
    }
  }
  u[0] = 0;
  d[0].color = Black;
  for(k = 1;k < n;k++){
    for(i = 0;i < k;i++){
      for(j = 0;j < n;j++){
    if(d[k].dis > A[u[i]][j] && d[j].color != Black){
      d[k].dis = A[u[i]][j];
      u[k] = j; 
    }
      } 
    }
    d[u[k]].color = Black;  
    sum += d[k].dis;
  }
  printf("%d\n", sum);
  return 0;
}