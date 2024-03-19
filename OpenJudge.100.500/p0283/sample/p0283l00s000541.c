#include<stdio.h>
int N;
#define N 8
#define FREE -1
#define NOT_FREE 1
void input();
void putQueen(int);
void printBoard();
int row[N],col[N],dpos[2*N-1],dneg[2*N-1],a[N][N];

int main(){
  input();
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      a[i][j]=-1;
    }
  }
  
  int n,c,k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&c,&k);
    a[c][k]=1;
  }
  
  putQueen(0);
  return 0;
}


void putQueen(int i){
  int j;
  if(i==N){
    printBoard();
    return ;
  }
  
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;
  row[i]=j;
  col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
  putQueen(i+1);
  col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
  
}


void input(){
  int i;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<N*2-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
    
  }
  
}


void printBoard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(a[i][j]==1){
	if(row[i]!=j)return;
      }
      
    }
    
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    
    printf("\n");
  }
  
}


