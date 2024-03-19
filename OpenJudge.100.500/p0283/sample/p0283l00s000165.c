#include<stdio.h>

#define MAX 8

int retu[MAX], gyou[MAX];
int dpos[2*MAX-1],dneg[2*MAX-1];

int X[MAX][MAX];

int i=0;
int j=0;
int jk;
int r;
int c;

void Initialize();
void PrintBoard();

void recursive(int i){
  int j;

  if(i == MAX){
    PrintBoard();
    return;
  }

  for(j = 0 ; j < MAX ;j++){

    if(gyou[j] == 1 || dpos[i + j] == 1 || dneg[i - j + MAX - 1] == 1) continue;


    retu[i] = j;
    gyou[j] = dpos[i + j] = dneg[i - j + MAX -1] = 1;


    recursive(i + 1);

    retu[i] = gyou[j] = dpos[i + j] = dneg[i - j + MAX - 1] = -1;
  }
}



int main(){



  Initialize();

  while(i<MAX){
    while(j<MAX){
      X[i][j] = -1;
      j++;
    }
    i++;
  }

  scanf("%d",&jk);
  i=0;
  while(i < jk){
    scanf("%d %d",&r,&c);
    X[r][c] = 1;
    i++;
  }

  recursive(0);

  return 0;
}

void Initialize(){
  int i=0;

 while(i < MAX){
    retu[i] = -1;
    gyou[i] = -1;
    i++;
  }
i=0;
  while(i < 2 * MAX - 1){
    dpos[i] = -1;
    dneg[i] = -1;
    i++;
  }
}

void PrintBoard(){
  int i=0, j;

  while(i < MAX){
    j=0;
    while(j < MAX){
      if(X[i][j] == 1){

	if(retu[i] != j) return;
      }
      j++;
    }
    i++;
  }
i=0;
  while(i < MAX ){
    j=0;
    while( j < MAX ){
      if(retu[i] == j) printf("Q");
      else printf(".");
      j++;
    }
    printf("\n");
    i++;
  }
}

