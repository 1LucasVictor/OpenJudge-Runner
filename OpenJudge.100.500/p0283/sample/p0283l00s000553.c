
#include<stdio.h>
#define N 8
#define OK -1
#define NOT 1

int row[N],col[N],dpos[2*N-1],X[N][N];
int dneg[2*N-1];

void freedom(){
int i;
  for(i=0;i<N;i++){
    row[i]=OK;
    col[i] = OK;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i] = OK;
    dneg[i]=OK;
  }
}

void output(){
  int i,j;
  for(i = 0;i<N;i++){
    for(j = 0;j<N;j++){
      if(X[i][j]){
	if(row[i]!=j)return;
      }
    }
  }
  for(i= 0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j){
	printf("Q");
      }else{
	printf(".");
      }
    }
    printf("\n");
  }
}

void Queen(int i){
  int j;

  if(i == N){
    output();
    return;
  }
  for(j = 0;j<N;j++){
    if(col[j] == NOT || dpos[i+j]== NOT || dneg[i-j+N-1]==NOT )continue;

    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = 1;

    Queen(i+1);

    col[j] = dpos[i+j] = dneg[i-j+N-1] = -1;
    
  }
}

void recursive(int i){
  int j;
  if(i == N){
    output();
    return;
  }
  for(j = 0;j<N;j++){
    if(NOT == col[j] || NOT == dpos[i+j] || NOT == dneg[i-j+N-1]){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT;
    recursive(i+1);
   row[i] = col[j] = dpos[i+j] = dneg[i-j+N-1] = OK;
    
  }


}


  int main(){
  freedom();
  int i,j,k,r,c;
 
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=0;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=1;
  }
 
  recursive(0);
  return 0;
}

