#include<stdio.h>
#define FREE -1
#define NOT_FREE 1

int row[8]={FREE},col[8]={FREE},dpos[17]={FREE},dneg[17]={FREE},T[8][8];

void printBoard(void);

void recursive(int);

int main(){
  int k,i,r,c;
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    T[r][c]=1;
  }
  recursive(0);
}

void printBoard(void){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(T[i][j]){
	if(row[i]!=j){
	  return ;
	}
      }
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
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
  if(i==8){
    printBoard();
    return ;
  }

  for(j=0;j<8;j++){
    if(NOT_FREE == col[j] || NOT_FREE == dpos[i+j] || NOT_FREE == dneg[i-j+8-1]){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+8-1] = NOT_FREE;
    recursive(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i-j+8-1] = FREE;
  }
}
  

