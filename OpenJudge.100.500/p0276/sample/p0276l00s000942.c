#include<stdio.h>

int main(){
  int next[100][100];
  int mat[101][101] = {{0}};
  int k,num,i,j,m;

  scanf("%d",&m);

  for(i = 1; i <= m; i++){
    scanf("%d %d",&num,&k);
    for(j = 1 ; j <= k; j++){
      scanf(" %d",&next[i][j]);
      mat[i][next[i][j]] = 1;
    }
  }
  for(i = 1; i <= m; i++){
    for(j = 1 ; j < m; j++){
      printf("%d ",mat[i][j]);
    }
    printf("%d\n",mat[i][m]);
  }
  return 0;
}


