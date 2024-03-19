#include<stdio.h>
#define N 8
#define FREE 0
#define NOT_FREE 1

int row[N],col[N],leftdia[2*N-1],rightdia[2*N-1],X[N][N];//leftdia左下方向、rightdia右下方向

void initialize(void);
void Queens(int);

int main(){

  int i,j,k,r,c;

  //初期化
  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=FREE;
    }
  }

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    X[r][c]=NOT_FREE;
  }

  Queens(0);

  return 0;
  
}

void initialize(){
  
  int i;
  
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  
  for(i=0;i<2*N-1;i++){
    leftdia[i]=FREE;
    rightdia[i]=FREE;
  }
}

void Queens(int i){

  int j;
  
  if(i==N){//表示して終わる
    
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(X[i][j]==NOT_FREE){
	  if(row[i]!=j) return;
	}
      }
    }//for

    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(row[i]==j) printf("Q");
	else printf(".");
      }
      printf("\n");
    }
    
    return;
    
  }

  for(j=0;j<N;j++){
    
    if(NOT_FREE==col[j] || NOT_FREE==leftdia[i+j] || NOT_FREE==rightdia[i-j+N-1]){
      continue;
    }
    
    row[i]=j;
    col[j]=NOT_FREE;
    leftdia[i+j]=NOT_FREE;
    rightdia[i-j+N-1]=NOT_FREE;
    
    Queens(i+1);
    
    row[i]=FREE;
    col[j]=FREE;
    leftdia[i+j]=FREE;
    rightdia[i-j+N-1]=FREE;
    
  }
  
}



