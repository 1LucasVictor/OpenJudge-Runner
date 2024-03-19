#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1
#define TRUE 1
#define FALSE 0
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

int X[N][N];

void initialize(){
  int i;
  for(i=0 ; i< N ; i++){
    row[i]=FREE;/*行*/
    col[i]=FREE;/*列*/
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]= FREE;/*左下ななめ*/
    dneg[i]= FREE;/*右下ななめ*/
  }
}

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
        if(row[i] != j)return;/*XがTRUEのときかつrowのiがjでないとき*/
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j){/*x[i][j]がFALSEでrow[i]がjのとき*/
        printf("Q");
    }
else{ printf(".");
}
    }
    printf("\n");
  }
}

void recursive(int i){
  int j;
  if(i==N){/*クイーンの配置に成功*/
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    /*(i,j)が他のクイーンに襲撃されてる時むし*/
    if(col[j] == NOT_FREE ||
       dpos[j + i] == NOT_FREE ||
       dneg[i - j + N - 1] == NOT_FREE) continue;
    /*(i,j)にクイーンをはいち*/
    row[i] =j;
    col[j] =dpos[i+j] = dneg[i-j+N-1] =NOT_FREE;
    recursive(i+1);
    /*(i,j)に配置されているクイーンを取り除く*/
    row[i]=col[j] = dpos[i+j]= dneg[i-j+N-1]=FREE;
  }
  /*くいいーんのはいちにしっぱい*/
}


int main(){
  int i,j,k,r,c;
  initialize();

  for(i=0;i<N;i++)
    for(j=0;j<N;j++)X[i][j]=FALSE;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c] =TRUE;
  }
  recursive(0);
  return 0;
}

