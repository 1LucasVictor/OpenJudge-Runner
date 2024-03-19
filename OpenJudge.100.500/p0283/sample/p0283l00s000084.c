#include <stdio.h>

#define N 8
int C[N], dpos[2*N-1], dneg[2*N-1], r[N], B[N][N]; // 0:FREE 1:NOTFREE

void init(void){
    for(int i = 0; i < N; i++){
        C[i] = 0;
        r[i] = 0;
        for(int j = 0; j < N; j++){
            B[i][j] = 0;
        }
    }
    for(int i = 0; i < 2*N-1; i++){
        dpos[i] = 0;
        dneg[i] = 0;
    }
}

void printB(){
  int i, j;
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
        if(B[i][j] == 1){
            if(r[i] != j) return;
        }
    }
  }

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(r[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
  
}

void putQueen(int p){
  int i;

  if(p == N){
    printB();
    return ;
  }

  for(i = 0; i < N; i++){
    if(C[i] == 1 || dpos[p+i] == 1) continue;
    if(dneg[p-i+N-1] == 1) continue;
    r[p] = i; 
    C[i] = dpos[p+i] = dneg[p-i+N-1] = 1;

    putQueen(p+1);

    r[p] = C[i] = dpos[p+i] = dneg[p-i+N-1] = 0;
  }
}

int main(){
  int nm, i, p, q, j;

    init();

  scanf("%d", &nm);
  
  for(i = 0; i < nm; i++){
    scanf("%d%d", &p, &q);
    B[p][q] = 1;
  }

  putQueen(0);
  
  
     
  
  return 0;
}

