#include <stdio.h>
#define N 8
int Q[N][N] ={0};

void printQueen( )
{
  int i,j;
  for(i = 0 ; i < N ;i++){
    for(j = 0 ; j < N ;j++){
      if(Q[i][j] == 1){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n"); 
  }
}


int check(int b,int a){
  int i, j;
    
  for(i=0;i<N;i++){
    if(i!=a && Q[b][i]==1){
      return 0;
    }
  }
  for(i=0;i<N;i++){
    if(i!=b &&Q[i][a]==1){
      return 0;
    }
  }
  i=b-1;
  j=a+1;
  while(i>=0 && j<N){
    if(Q[i--][j++]==1){
      return 0;
    }
  }
  i=b-1;
  j=a-1;
  while(i>=0 && j>=0){
    if(Q[i--][j--]==1){
      return 0;
    }
  }

  i=b+1;
  j=a-1;

  while(i<N && j>=0){
    if(Q[i++][j--]==1){
      return 0;
    }
  }

  i=b+1;
  j=a+1;
  while(i<N && j<N){
    if(Q[i++][j++]==1){
      return 0;
    }
  }

  return 1;
}


int setQueen(int X){
  int i;
  for(i=0;i<N;i++){
    if(Q[X][i]==1){
      if(!setQueen(X+1)){
	return 0;
      }
    }
  }

  if(X==N){
    printQueen();
    return 1;
  }
  else {
    for(i = 0 ; i < N ; i++){
      if(Q[X][i]==0 && check(X,i)){
	Q[X][i]=1;
	if(!setQueen(X+1)){
	  Q[X][i]=0;
	}
      }
    }
  }

  return 0;
}

int main( ){
  int i,j,a,b,number,A=0;
  scanf("%d",&number);
  for(i = 0; i < number; i++){
    scanf("%d %d",&b,&a);
    Q[b][a]=1;
  }
  i= setQueen(A);
  return 0;
}

