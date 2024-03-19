/** Minimum Spanning Tree */

/* include */
#include <stdio.h>
#include <stdlib.h>
/* define */
#define MAX 10000
#define INFTY 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
/* global */
int n, MATRIX[MAX][MAX]; //0??§??????????????????
/* prototype */
int prim();
void dijkstra();

int main() {
  int i, j, k, c, from, to;
  /* number of size */
  scanf("%d", &n);

  /* initialize */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      MATRIX[i][j] = INFTY;
    }
  }
  
  /* ????????\??? */
  for(i=0;i<n;i++){
    /* k:????¬???°, c:?????? */
    scanf("%d %d", &from, &k);
    for(j=0;j<k;j++){ //????¬???°??????
      scanf("%d %d", &to, &c);
        MATRIX[from][to] = c; //??????????´?
    }
  }

  /* ??¢?´¢ */
  dijkstra();
  
  return 0;
}

void dijkstra(){
  int from, to, min, i, j, sum;
  int PATH[MAX], PARENT[MAX], VISIT[MAX]; //????°??????????, ?????????, ?¨??????¶???
  
  for(i=0;i<n;i++){
    PATH[i] = INFTY;
    VISIT[i] = WHITE; //visited
  }
  
  PATH[0] = 0;
  VISIT[0] = GRAY;
  while(1){
    min = INFTY;
    from = -1;
    for(i=0;i<n;i++){
      if(min>PATH[i] && VISIT[i]!=BLACK){
        from = i;
        min = PATH[i];
      }
    }
    /* ?????????????????? */
    if(from==-1) {
      break;
    }
    VISIT[from] = BLACK;
    for(to=0;to<n;to++){
      if(VISIT[to]!=BLACK && MATRIX[from][to] != INFTY){
        if(PATH[to]>PATH[from] + MATRIX[from][to]){
          PATH[to] = PATH[from] + MATRIX[from][to];
          VISIT[to] = GRAY;
        }
      }
    }
  }
  /* while end */
  
  for(i=0;i<n;i++){
    printf("%d ", i);
    if(PATH[i] == INFTY){
      printf("-1");
    }else{
      printf("%d", PATH[i]);
    }
    printf("\n");
  }
}


//int prim(){
//  int from, to, min, i, j, sum;
//  int PATH[MAX], PARENT[MAX], VISIT[MAX]; //????°??????????, ?????????, ?¨??????¶???
//  
//  /* create matrix */
//  for(i=0;i<n;i++){
//    PATH[i] = INFTY;
//    PARENT[i] = -1;
//    VISIT[i] = WHITE;
//  }
//  PATH[0] = 0;
//
//  /* ??????????¨???? */
//  while(1){
//    min = INFTY;
//    from = -1;
//    for(i=0;i<n;i++){
//      if(min>PATH[i] && VISIT[i]!=BLACK){
//        from = i;
//        min = PATH[i];
//      }
//    }
//    if(from==-1) {
//      break;
//    }
//    VISIT[from] = BLACK;
//    for(to=0;to<n;to++){
//      if(VISIT[to]!=BLACK && MATRIX[from][to]!=INFTY) {
//        if(PATH[to]>MATRIX[from][to]){
//          PATH[to] = MATRIX[from][to];
//          PARENT[to] = from;
//          VISIT[to] = GRAY;
//        }
//      }
//    }
//    sum = 0;
//    for(i=0;i<n;i++){
//      if(PARENT[i]!=-1){
//        sum += MATRIX[i][PARENT[i]];
//      }
//    }
//  }
//  return sum;
//}