#include<stdio.h>

int N;

int M[101][101];

int H(int x, int y){

  int i;
  int f = 0;

  for(i=2; i<=N; i++){
    if(M[x][i] == y){
      f = 1;
    }
  }

  if(f == 1){
    return 1;
  }
  else if(f == 0){
    return 0;
  }
}

main(){

  int i, j, k;

  scanf("%d", &N);

  for(i=1; i<=N; i++){
    j = 1;
    scanf("%d %d", &M[i][1], &k);
    for(j =2; j<k+2; j++){
      scanf("%d", &M[i][j]);
    }
  }

  for(i = 1; i<=N; i++){
    for(j = 1; j <= N; j++){
      if(j == N){
	printf("%d\n", H(i, j));
      }
      else{
	printf("%d ", H(i, j));
      }
    }
  }

  return 0;
}