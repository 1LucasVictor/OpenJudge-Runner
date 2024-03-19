#include<stdio.h>

#define max 8
#define Free -1
#define Not_Free 1

void initialize();
void printBoard();
void recursive(int);

int row[max];
int col[max];
int dpos[2 * max - 1];
int dneg[2 * max - 1];
int data[max][max];

int main(){
  int i,j,k,r,c;
  initialize();

  for(i = 0;i < max;i++){
    for(j = 0;j < max;j++){
      data[i][j] = 0;
    }
  }

  scanf("%d",&k);

  for(i = 0;i < k;i++){
    scanf("%d%d",&r,&c);
    data[r][c] = 1;
  }
  recursive(0);
  return 0;
}

void initialize(){
  int i;

  for(i = 0;i < max;i++){
    row[i] = Free;
    col[i] = Free;
  }

  for(i = 0;i < 2 * max - 1;i++){
    dpos[i] = Free;
    dneg[i] = Free;
  }
}

void printBoard(){
  int i,j;

  for(i = 0;i < max;i++){
    for(j = 0;j < max;j++){
      if(data[i][j]){
        if(row[i] != j){
          return;
        }
      }
    }
  }

  for(i = 0;i < max;i++){
    for(j = 0;j < max;j++){
      if(row[i] == j){
        printf("Q");
      }
      else{
        printf(".");
      }
    }
      printf("\n");
  }
}

void recursive(int i){
  int j;

  if(i == max){
    printBoard();
    return;
  }

  for(j = 0;j < max;j++){
    if(Not_Free == col[j] || Not_Free == dpos[i + j] || Not_Free == dneg[i - j + max - 1]){
      continue;
    }
    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + max - 1] = Not_Free;
    recursive(i + 1);
    row[i] = col[j] = dpos[i + j] = dneg[i - j + max - 1] = Free;
  }
}

