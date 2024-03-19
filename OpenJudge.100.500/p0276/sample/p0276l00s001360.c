#include<stdio.h>
 
int main(void){
   
  int i, j, n, s, t, u, G[101][101] = {{},{}};
 
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%d%d", &s, &t);
    for(j = 0; j < t; j++){
      scanf("%d", &u);
      G[s][u] = 1;
    }
  }
   
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n; j++){
      if(j != 1) printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}