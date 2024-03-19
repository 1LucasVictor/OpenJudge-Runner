/* include */
#include <stdio.h>
#include <stdlib.h>
/* define */
#define MAX 1000
#define INFTY 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2
/* global */
int n, MATRIX[MAX][MAX]; //0??§??????????????????
/* prototype */
int prim();

int prim(){
  int from, to, min, i, j, sum;
  int PATH[MAX], PARENT[MAX], COLOR[MAX]; //????°??????????, ?????????, ?¨??????¶???
  
  /* create matrix */
  for(i=0;i<n;i++){
    PATH[i] = INFTY;
    PARENT[i] = -1;
    COLOR[i] = WHITE;
  }
  PATH[0] = 0;

  /* ??????????¨???? */
  while(1){
    min = INFTY;
    from = -1;
    for(i=0;i<n;i++){
      if(min>PATH[i] && COLOR[i]!=BLACK){
        from = i;
        min = PATH[i];
      }
    }
    if(from==-1) {
      break;
    }
    COLOR[from] = BLACK;
    for(to=0;to<n;to++){
      if(COLOR[to]!=BLACK && MATRIX[from][to]!=INFTY) {
        if(PATH[to]>MATRIX[from][to]){
          PATH[to] = MATRIX[from][to];
          PARENT[to] = from;
          COLOR[to] = GRAY;
        }
      }
    }
    sum = 0;
    for(i=0;i<n;i++){
      if(PARENT[i]!=-1){
        sum += MATRIX[i][PARENT[i]];
      }
    }
  }
  return sum;
}
  
  
int main() {
  int i, j, path;
  /* number of size */
  scanf("%d", &n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d", &path);
      if(path==-1){
        MATRIX[i][j] = INFTY;
      }else{
        MATRIX[i][j] = path;
      }
    }
  }
  
  printf("%d", prim());
  
  return 0;
}