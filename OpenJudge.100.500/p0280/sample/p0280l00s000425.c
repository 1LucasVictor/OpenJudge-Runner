#include<stdio.h>

#define MAX 1000
 
int main(){
  int n, i, j, k, l, min, sum = 0;
  int g[MAX][MAX], a[MAX], b[MAX];
 
  scanf("%d", &n);
 
  for( i = 0; i < n; i++){
    a[i] = 0;
    b[i] = MAX;
    for( j = 0; j < n; j++){
      scanf("%d", &g[i][j]);   
    }
  }
  b[0] = 0;
 
  for( i = 1; i < n; i++){
    min = MAX;
    for( j = 0; j < n; j++){
      if( b[j] < min && a[j] == 0){
    min = b[j];
    k = j;
      }
    }
 
    a[k] = 1;
   
    for( l = 0; l < n; l++){
 
      if(g[k][l] < b[l] && g[k][l] != -1 && a[l] == 0){
    b[l] = g[k][l];
      }
    }
  }
 
  for( i = 0; i < n; i++){
    sum += b[i];
  }
 
  printf("%d\n", sum);
 
  return 0;
}