#include<stdio.h>

#define N 100
#define MAX 2000
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2


int A[N][N], n;

void dijkstra();

int main(){
  int i, j, s, x, y, c, k;
  scanf("%d", &n);
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j ++){
      A[i][j] = INFTY;
    }
  }
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d", &x, &k);
    for( j = 0 ; j < k ; j ++){
      scanf("%d%d", &y, &c);
      A[x][y] = c;
    }
  }

  dijkstra();

  return 0;
  
}


void dijkstra(){
  
  int i, x, y, min;
  int sum = 0;
  int d[N], color[N];

  for( i = 0 ; i < n ; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    min = INFTY;
    x = -1;
    for( i = 0; i < n ; i++){
      if(min > d[i] && color[i] != BLACK){
        x = i;
        min = d[i];
      }
    }
    if( x == -1 ) break;
    color[x] = BLACK;
    for( y = 0 ; y < n ; y++){
      if( color[y] != BLACK && A[x][y] != INFTY ){
        if( d[y] > d[x] + A[x][y] ){
          d[y] = d[x] + A[x][y];
          color[y] = GRAY;
        }
      }
    }
  }
  for( i = 0 ; i < n ; i++ ){
    printf("%d %d\n", i, (d[i] == INFTY ? -1 : d[i]));
  }
}

