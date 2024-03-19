#include "stdio.h"

int main(void){
  int x,y,z,i,j;
  scanf("%d %d", &x, &y);
  int a[x][y];
  int b[y];
  int c[x];
  for(i = 0; i < x; i++){
    c[i] = 0;
  }
  for(i = 0; i < x; i++){
    for(j = 0; j < y; j++){
      scanf("%d ", &a[i][j]);
    }
  }
  for(i = 0; i < y; i++){
    scanf("%d\n", &b[i]);
  }
  for(i = 0; i < x; i++){
    int sum;
    for(j = 0; j < y; j++){
      sum = a[i][j] * b[j];
      c[i] += sum;
    }
  }
  for(i = 0; i < x; i++){
    printf("%d\n", c[i]);
  }
}

