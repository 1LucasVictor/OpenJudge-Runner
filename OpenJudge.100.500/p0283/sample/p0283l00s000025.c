#include<stdio.h>

int a[8][8];

void Qputter(int);
int row[8];
int col[8];
int dpos[15];
int dneg[15];

void printboard(){
  int i, j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(a[i][j]){
        if(row[i] != j) return;
      }
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(row[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}


int main(){
  int n, i, j, r, c;

  for(i=0;i<8;i++) {
    row[i] = col[i] = 0;
  }
  for(i=0;i<15;i++){
    dpos[i] = dneg[i] = 0;
  }


  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      a[i][j] = 0;
    }
  }

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    a[r][c] = 1;
  }
 Qputter(0);

   return 0;
}

void Qputter(int i){
  int j;

  if(i == 8){
    printboard();
    return;
  }

  for(j=0;j<8;j++){
    if(col[j] == -1 || dpos[i + j] == -1 || dneg[i - j + 7] == -1) continue;

    row[i] = j;
    col[j] = dpos[i + j] = dneg[i - j + 7] = -1;
    Qputter(i+1);
    row[i] = col[j] = dpos[i+j] = dneg[i - j + 7] = 0;
  }
}


