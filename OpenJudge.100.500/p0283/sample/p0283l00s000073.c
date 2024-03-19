#include<stdio.h>
#include<stdbool.h>
#define N 8
#define free -1
#define nfree 1

int dps[2*N-1], dng[2*N-1], row[N], col[N];

bool X[N][N];

void initialize(){
  int i;
  for(i=0; i<N; i++){
    row[i] = free;
    col[i] = free;
  }
  for(i=0; i<2*N-1; i++){
    dps[i] = free;
    dng[i] = free;
  }
}

void PrintBoard(){
  int i, j;
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(X[i][j]){
        if(row[i] != j)   return;
      }
    }
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(row[i] == j)            printf("Q" );
      else printf(".");
    }

    printf("\n" );
  }
}

void recursive(int i){

  if(i==N){
    PrintBoard();
    return;
  }

  for(int j =0; j<N; j++){

    if(nfree == col[j] ||
       nfree == dps[i+j] ||
       nfree == dng[i-j+N-1])        continue;
       row[i] = j;
       col[j] = dps[i+j] = dng[i - j + N -1] = nfree;
       recursive(i+1);
       col[j] = dps[i+j] = dng[i - j + N -1] = free;
   }
}


int main(){
  initialize();

  for(int i = 0; i<N; i++){
    for(int j = 0;j < N;j++){
      X[i][j] = false;
    }
  }

  int s, t, u;
  scanf("%d", &s);

  for(int i; i<s; i++){
    scanf("%d%d", &t, &u);
    X[t][u] = true;
  }
  recursive(0);

  return 0;
}

