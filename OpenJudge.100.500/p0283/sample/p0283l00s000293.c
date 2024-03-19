#include<stdio.h>
#define N 8
#define NOT_FREE 1
#define FREE -1

int a[N][N],row[N],col[N],dpos[2*N-1],dneg[2*N-1];
void printBoard(void){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i][j]){
        if(row[i]!=j) return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++) printf("%c",(row[i]==j)?'Q':'.');
    printf("\n");
  }
}
void putQueen(int i){
  int j;

  if(i==N){
    printBoard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE||
       dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)
      continue;
      row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}
int main(){
  int k,r,c,i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++) a[i][j]=0;
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    a[r][c]='Q';
  }
  putQueen(0);

  return 0;
}
