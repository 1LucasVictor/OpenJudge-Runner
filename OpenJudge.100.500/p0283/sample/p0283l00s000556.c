#include<stdio.h>

#define N 8
#define NOT_FREE 1
#define FREE -1

int row[N];
int col[N];

int Q[N][N];
int dpos[2*N];
int dneg[2*N];
void printboard();
void  putQueen(int);
int main(){

 
  int i,j,x,y,n;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      Q[i][j] = 0;
    }
  }
   for(i=0;i<N;i++){
     row[i] =FREE;

   col[i] = FREE;
   }
  for(i=0;i<2*N;i++){
    dpos[i] =FREE;
    dneg[i] = FREE;
  }

  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    Q[x][y]=1;
  }
  putQueen(0);
 
  return 0;
}

void putQueen(int i){
  int j;
  
  
  if(i==N){
 printboard();
    return ;
  }
 
  
  for(j=0;j<N;j++){
    if(col[j]== NOT_FREE || dpos[i+j]==NOT_FREE ||dneg[i-j+N-1]==NOT_FREE)
      {
	continue;}
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    putQueen(i+1);
    row[i]=col[j]=dpos[i+j] = dneg[i-j+N-1]=FREE;
  }
  }



void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(Q[i][j]){
	if(row[i]!=j) return ;
      }
    }
  }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){

      if(row[i]==j)printf("Q");
      else printf(".");
    }printf("\n");
  }
  return;
}



