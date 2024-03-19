#include <stdio.h>
#define FREE 0
#define N_FREE 1
#define Q 2
#define N 8

int board[N][N];
int row[N],col[N],dneg[2*N-1],dpos[2*N-1];

void printboard(){
  int i, j;
 
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(board[i][j] == N_FREE && row[i] != j)
	return;
    }
  }
 
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(row[i] == j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
};

void putQueen(int i){
  int j;
  
  //  printf("i = %d\n",i);
  
  if(i==N){  
    printboard();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==N_FREE || dpos[i+j]==N_FREE || dneg[i-j+N-1]==N_FREE){ //?????????????????¨???
      continue;
    }

    row[i] = j;
    col[j] = dpos[i+j] = dneg[i-j+N-1] = N_FREE; //1

    //    printf("i2 = %d\n",i);

    //    printf("putQueen\n");
    putQueen(i+1);
    
    //    printf("i3 = %d\n",i);
  
    col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
    
    /*
      printf("*****\n");
      printf("*Back tracking\n");
      printf("*row[]:");
      for(i=0;i<N;i++) printf(" %d",row[i]);
      printf("\n*col[]:");
      for(i=0;i<N;i++) printf(" %d",col[i]);
      printf("\n*dneg[]:");
      for(i=0;i<2*N-1;i++) printf(" %d",dneg[i]);
      printf("\n*dpos[]:");
      for(i=0;i<2*N-1;i++) printf(" %d",dpos[i]);
      printf("\n*****\n");    
    */
  }
};

int main(){
  int k,r,c;
  int i;
 
    
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d",&r);
    scanf("%d",&c);
    board[r][c] = N_FREE; //1
  }
  
  putQueen(0);
     
  return 0;
}