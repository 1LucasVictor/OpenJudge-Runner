#include<stdio.h>
#define N 8

#define NOT_FREE 1
#define FREE -1

int row[N];
int col[N];
int dpos[2*N-1];
int dneg[2*N-1];

int k;
int Q[N][N];
int Q_i;
int Q_j;


void initialize(){
  int i,j;

  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  
  for(i=0;i<2*N;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;

  }


  
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	Q[i][j]=FREE;
      }
    }
}

  void printBoard(){
    int i,j;

     for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(Q[i][j]==NOT_FREE){
	  if(row[i]!=j)return;
	}
      }
      }

    
    for(i=0;i<N;i++){
      for(j=0;j<N;j++){
	if(row[i]==j)printf("Q");
	else printf(".");
      }
      printf("\n");
    }
  }



  void putQueen(int i){
    
    if ( i == N){
      
      printBoard();
      return;
    }
    
    for ( int j = 0; j < N; j++ ){

      //もしアタックされているならループをスキップ
      if ( col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE ) continue;
      
      row[i] = j;
      col[j] = NOT_FREE;
      dpos[i+j] = NOT_FREE;
      dneg[i-j+N-1] = NOT_FREE;

	
        putQueen(i + 1);
	
        row[i] = FREE;
	col[j] = FREE;
	dpos[i+j] = FREE;
	dneg[i-j+N-1] = FREE;
	
    
    }
    
}

  

int main(){

  int a;
  int k;
  int Q_i;
  int Q_j;

  initialize();

  scanf("%d",&k);
  
  for(a=0;a<k;a++){
    scanf("%d%d",&Q_i,&Q_j);
    Q[Q_i][Q_j]=NOT_FREE;
   
  }
  
    putQueen(0);
    
    return 0;
}

