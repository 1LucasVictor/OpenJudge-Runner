#include<stdio.h>

#define N 101

int main(){
  int n, m, l, o, i, j;
  int g[N][N];
  for( i = 0; i < N; i++){
    for( j = 0; j < N; j ++){
      g[i][j] = 0;
    }}

  scanf("%d", &n);
  
  for( i = 1; i <= n; i++){
    
    scanf("%d%d", &m, &l);

    for( j = 1; j <= l; j++){

      scanf("%d", &o);  
      g[m][o] = 1;

    }
  }

  for(i = 1; i <= n; i++){

    for( j = 1; j <= n; j++){

      printf("%d",g[i][j]);
      if(j != n) printf(" ");

    }
    printf("\n");
  }

  return 0;
}