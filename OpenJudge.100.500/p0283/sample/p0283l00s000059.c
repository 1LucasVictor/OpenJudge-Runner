#include<stdio.h>
#include <stdbool.h>

#define N 8
#define F -1
#define NF 1

int row[N],col[N],dpos[2*N-1],dneg[2*N-1];

bool X[N][N];

void initialize(){
  int i;  
  for(i=0;i<N;i++){
row[i]=F;
col[i]=F;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=F;
    dneg[i]=F;
  }
}

void printBoard(){
  int i,j;  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]){
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
  void recursive(int i){
      int j;
      
    if(i==N){
      printBoard();
      return;
    }

    for(j=0;j<N;j++){
      if(NF==col[j] || NF==dpos[i+j] || NF==dneg[i-j+N-1]){
	continue;
      }

      row[i]=j;
      col[j]=dpos[i+j]=dneg[i-j+N-1]=NF;

      recursive(i+1);

      row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=F;
    }
  }


int main(){
  int i,j,k,c,r;
  initialize();

  for(i=0;i<N;i++)
    for(j=0;j<N;j++)      X[i][j]=false;

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=true;
  }

  recursive(0);
  return 0;
}

