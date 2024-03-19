#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define N 8
#define FREE (-1)
#define NOT_FREE 1
int row[N],col[N],dpos[2 * N -1],dneg[2 * N - 1],i,j;
int flag[N][N];

void initialize(){
  int i,j;
  for(i=0;i<N;i++){
    row[i] = FREE;
    col[i] = FREE;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i] = FREE;
    dneg[i] = FREE;
  }
}

void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(flag[i][j]){
	if(row[i] != j)return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}


void recursive(int i){
  int j;
  if(i == N){//クイーンの配置に成功
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    //(i,j)が他のクイーンに襲撃されている場合は無視
    if(NOT_FREE == col[j] || NOT_FREE == dpos[i + j] || NOT_FREE == dneg[i-j+N-1])continue;
    //(i,j)にクイーンを配置する
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + N - 1] = NOT_FREE;
    //次の行を試す
    recursive(i + 1);
    //(i,j)にクイーンを取り除く
    row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
  }
  //クイーンの配置に失敗
}

int main(){
  int k,r,c;
  initialize();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      flag[i][j] = FALSE;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf(" %d %d",&r,&c);
    flag[r][c] = TRUE;
  }
  recursive(0);
  
    return 0;
}

