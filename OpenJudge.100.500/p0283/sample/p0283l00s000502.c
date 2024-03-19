#include <stdio.h>

#define L 8
#define Y 1
#define N 0

typedef struct{
  int row[L],col[L];
  int dpos[L*2],dneg[L*2];
} Queen;

void putQ(int);
void print(void);

Queen Q;
int X[L][L];

int main(){
  int r, c, b;
  int i, j, k;

  for(i = 0; i < L; i++){
    Q.row[i] = N;
    Q.col[i] = N;
  }

  for(i = 0; i < L*2; i++){
    Q.dpos[i] = N;
    Q.dneg[i] = N;
  }

  for(i = 0; i < L; i++){
    for(j = 0; j < L; j++){
      X[i][j] = 0;
    }
  }

  scanf("%d", &k);

  for(i = 0; i < k; i++){
    scanf("%d%d", &r, &c);

    X[r][c] = 1;
  }
  
  putQ(0);
  
  return 0;
}


void putQ(int i){
  int j;
  
  if(i == L){
    print();
    return;
  }

  for(j = 0; j < L; j++) {
    if(Q.col[j] == Y || Q.dpos[i+j] == Y || Q.dneg[i-j + L-1] == Y) continue;

    Q.row[i] = j;
    Q.col[j] = Q.dpos[i+j] = Q.dneg[i-j + L-1] = Y;
    
    putQ(i+1);
    
    Q.col[j] = Q.dpos[i+j] = Q.dneg[i-j + L-1] = N;
  }
}


void print(void){
  int i, j;

  for(i = 0; i < L; i++){
    for(j = 0; j < L; j++){
      if(X[i][j] == 1){
	if(Q.row[i] != j) return;
      }
    }
  }

  for(i = 0; i < L; i++){
    for(j = 0; j < L; j++){
      if(Q.row[i] == j) printf("Q");
      else printf(".");
    }

    printf("\n");
  }
}

