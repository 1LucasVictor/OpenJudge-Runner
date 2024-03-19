#include <stdio.h>
#include <stdlib.h>
#define STAY 1
#define NOTSTAY -1

int row[8],col[8],unlef[15],unrig[15],Q[8][8];

void firststage();
void queen(int);
void printer();

int main(){
  int k,i,d = 0,r,c;
  firststage();

  scanf("%d",&k);
  for(i = 0;i < k;i++){
    scanf("%d%d",&r,&c);
    Q[r][c] = 1;
  }

  queen(d);
  
  return 0;
}

void firststage(){
  int i,j;
  for(i = 0;i < 8;i++){
    row[i] = NOTSTAY;
    col[i] = NOTSTAY;
    for(j = 0;j < 8;j++){// 入力の配列初期化 本来ここには必要ない
      Q[i][j] = 0;
    }
  }
  for(i = 0;i < 15;i++){
    unlef[i] = NOTSTAY;
    unrig[i] = NOTSTAY;
  }
}

void queen(int d){
  int j;
  if(d == 8){
    printer();
    return;
  }

  for(j = 0;j < 8;j++){
    if((col[j] == STAY) || (unlef[d + j] == STAY) || (unrig[d - j + 8 - 1] == STAY)) continue;
    row[d] = j;
    col[j] = unlef[d + j] = unrig[d - j + 8 - 1] = STAY;
    queen(d + 1);
    row[d] = col[j] = unlef[d + j] = unrig[d - j + 8 - 1] = NOTSTAY;
  }
  
}

void printer(){
  int i,j;
  for(i = 0;i < 8;i++){
    for(j = 0;j < 8;j++){
      if(Q[i][j] != 0){
	if(row[i] != j) return;
      }
    }
  }
  for(i = 0;i < 8;i++){
    for(j = 0;j < 8;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
      
    }
    printf("\n");
  }
  
}

