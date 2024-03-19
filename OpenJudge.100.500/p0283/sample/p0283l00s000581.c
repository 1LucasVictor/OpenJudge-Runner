//8 Queens Problem
//2019-01-30
//Ebitani Akira

#include <stdio.h>

#define N 8
#define FREE -1
#define BURIED 1

void Process(int);
void Print();

int row[N], cul[N], dl[2*N-1], dr[2*N-1];
int A[N][N];

int main (){
  int i, j;
  int k, r, c;

  for(i = 0 ; i < N ; i++){
    row[i] = -1;
    cul[i] = -1;
  }
  for(i = 0 ; i < N*2-1 ; i++){
    dl[i] = -1;
    dr[i] = -1;
    //printf("%d", dl[i]);
  }

  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j++){
      A[i][j] = 0;
      //printf("%d", A[i][j]);
    }
  }

  scanf("%d", &k);
  for(i = 0 ; i < k ; i++){
    scanf("%d%d", &r, &c);
    A[r][c] = 1;
    //printf("%d", A[i][j]);
  }
  Process(0);

  return 0;
}

void Process(int a){
  int j;

  if(a == N){
    //printf("test\n");
    Print();
    return;
  }

  for(j = 0 ; j < N ; j++){
    if(cul[j] == 1||
	     dl[a+j] == 1||
	     dr[a-j+N-1] == 1)continue;
    row[a] = j;
    cul[j] = dl[a+j] = dr[a-j+N-1] = 1;

    Process(a+1);

    row[a] = cul[j] = dl[a+j] = dr[a-j+N-1] = -1;

  }
}

void Print(){
  int i, j;

  for(i = 0 ; i < N ; i++){

    //printf("test\n");
    for(j = 0 ; j < N ; j ++){
      if(A[i][j]){
        //printf("test\n");
	      if(row[i] != j)return;

      }
    }
  }
  //printf("test\n");
  for(i = 0 ; i < N ; i++){
    for(j = 0 ; j < N ; j ++){
      //printf("test\n");
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

