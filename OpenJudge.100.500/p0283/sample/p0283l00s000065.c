#include <stdio.h>

#define N 8

int Q[N][N];
int dpos[2*N-1];
int dneg[2*N-1];
int t[N];
int y[N];

void board(void){

  int i;
  int j;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){

      if(Q[i][j]==1){
	if(t[i]!=j) return;
      }

    }
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){

      if(t[i]==j){
	printf("Q");
      }

      else{
	printf(".");
      }

    }
    printf("\n");
  }
}


void putQ(int i){
  int j;

  if(i== N){
    board();
    return;
  }

  for(j=0; j<N; j++){
    if(y[j]==1 || dpos[i+j]==1 || dneg[i-j+N-1]==1)
      continue;

    t[i] = j;
    y[j] = dpos[i+j] = dneg[i-j+N-1] = 1;
    putQ(i+1);
    y[j] = dpos[i+j] = dneg[i-j+N-1] = 0;
  }

}


int main(){

  int i;
  int n;
  int qt;
  int qy;

  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d%d",&qt,&qy);
    Q[qt][qy] = 1;
  }

  putQ(0);

  return 0;
}


