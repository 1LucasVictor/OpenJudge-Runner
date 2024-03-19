#include<stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE 0

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],flag[N][N];

void printBoard(void){
  int i,j;

  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      if(flag[i][j] == 1 && row[i] != j) return;
    
      

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void putQ(int i){
  int j;
  if(i == N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    /*タテナナメヨコに被る所がある場合には次のるーぷへ*/

    row[i] = j; /*j行目のクイーンが何列目にいるのかという配列row*/
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;/*タテナナメヨコをNOTFREEにする*/
    
  
    putQ(i+1);
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;/*次のパターンのためにタテヨコナナメをフリーにする*/
  }
  
}

int main(){
  int k,r,c,i,j;
 
  
  for(i=0;i<N;i++){
    col[i] = FREE;
    for(j=0;j<N;j++){
      flag[i][j] = FREE;
    }
  }
  for(i=0;i<2*N;i++){
    dpos[i] = dneg[i] = FREE;/*dposはナナメ上、dnegナナメ下二つ分を表しているので２N*/
  }
  
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    flag[r][c] = NOT_FREE; /*入力されたQを埋める*/
  }
  
  putQ(0);
 
  return 0;
}

