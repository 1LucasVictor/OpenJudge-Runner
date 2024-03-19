#include <stdio.h>
#define N 8
#define M 15
#define FREE -1
#define NOT_FREE 1

int col[N],row[N],dpops[M],dneg[M],p[N][N];

void printBoard(){
  int i,j;

  for(i=0;i<N;i++){
    for (j=0;j<N;j++){
      if(p[i][j]){
        if(row[i]!=j) return;
      }

      /* code */
    }
  }

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j) printf("Q");
      else printf(".");
    }
   printf("\n");
  }
}

void putQueen(int i){
  int j;
  if (i == N) {
    printBoard();
    return;
  }

  for (j = 0;j<N;j++){
    if (col[j] == NOT_FREE ||dpops[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
    // put a queen at (i, j)
    row[i] = j;
    col[j] = dpops[i+j] = dneg[i-j+N-1] = NOT_FREE;
    // try the next row
    putQueen(i+1);
    // remove the queen at (i, j) for backtracking
    col[j] = dpops[i+j] = dneg[i-j+N-1] = FREE;
  }
}

int main(){
int i,j,k,n,r,c;

for(i=0;i<M;i++){
  dpops[i]=FREE;
  dneg[i]=FREE;
}

for(i=0;i<N;i++){
  col[i]=FREE;
  row[i]=FREE;
  for(j=0;j<N;j++){
    p[i][j]=0;
  }
}

scanf("%d",&k);

for(i=0;i<k;i++){
  scanf("%d%d",&r,&c);
  p[r][c]=1;
}
putQueen(0);

return 0;
}