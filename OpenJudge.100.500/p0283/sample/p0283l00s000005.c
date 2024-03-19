#include<stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8

int row[N],col[N],dpos[N*2-1],dneg[N*2-1];
int arr[N][N];

void putqueen(int );
void printBoard();

void putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)
      continue;
    row[i]=j;
    col[j]=NOT_FREE;
    dpos[i+j]=NOT_FREE;
    dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    col[j]=FREE;
    dpos[i+j]=FREE;
    dneg[i-j+N-1]=FREE;
  }
}

void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(arr[i][j]==2){
        if(row[i]!=j) return;
      }
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  return;
}

int main(){
  int i,n,a,b;
   
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<N*2-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
   
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    arr[a][b]=2;
  }
  putQueen(0);
  return 0;
}