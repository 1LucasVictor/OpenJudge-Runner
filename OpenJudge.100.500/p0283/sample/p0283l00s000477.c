#include <stdio.h>

#define FREE -1
#define NOT_FREE 1
#define FALSE 0
#define TRUE 1
#define N 8

void queencheck(int);
void printboard(void);

int col[N],row[N],dpos[2*N-1],dneg[2*N-1];
int Q[N][N];

int main(){
  int k,r,c,i,j;
 
  
  for(i=0;i<N;i++){
    col[i]=FREE;
    row[i]=FREE;
    for(j=0;j<N;j++){
      Q[i][j] = FALSE;
    }
  }
  
  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
  
  scanf("%d",&k);

  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    Q[r][c] = TRUE;
  }

  queencheck(0);
 
  return 0;
}

void queencheck(int i){
  int j;

  if(i==N){
    printboard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE)continue;

    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;

    queencheck(i+1);

    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
  }
}

void printboard(void){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j] == TRUE){
	if(row[i] != j)return;
      }
    }
  }
		  

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

