#include<stdio.h>
static const int A = 100;

int main(){
  int M[A][A];
  int n, u, l, v;

  int i, j;
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++)M[i][j] = 0;
  }

  for(i = 0; i < n; i++){
    scanf("%d%d",&u, &l);
    u--;
    for(j = 0; j < l; j++){
      scanf("%d",&v);
      v--;
      M[u][v] = 1;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j)printf(" ");
      printf("%d",M[i][j]);
    }
    printf("\n");
  }

  return 0;
}

