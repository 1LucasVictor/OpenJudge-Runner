#include <stdio.h>

typedef struct{
  int num;
  int k;
  int v[1000];
}DATA;

int main() {

  int n,i,j,G[1000][1000];
  DATA data[1000];
  
  scanf("%d",&n);

  for(i = 1; i <= n; i++) {
    scanf("%d",&data[i].num);
    scanf("%d",&data[i].k);
    for(j = 1; j <= data[i].k; j++) {
      scanf("%d",&data[i].v[j]);
    }
  }

  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      	G[i][j] = 0;   
    }
  }
  
  for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {
      	G[i][data[i].v[j]] = 1;   
    }
  }

   for(i = 1; i <= n; i++) {
    for(j = 1; j <= n; j++) {   
      printf("%d",G[i][j]);
      if(j != n) printf(" ");
      }
    printf("\n");
      }
  return 0;
}

