#include<stdio.h>

#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N],column[N];
int dpos[2*N-1],dneg[2*N-1];
int x[N][N];

void initialize();
void printboard();
void recursive(int);


int main(){
  int i,j,a,b,c;
  
  initialize();

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j]=-1;
    }
  }

  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d %d",&b,&c);
    x[b][c]=1;
  }

  recursive(0);

  return 0;
}

void initialize(){
  int i;

  for(i=0;i<N;i++){
    row[i]=FREE;
    column[i]=FREE;
  }

  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}

void printboard(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]==1){
	if(row[i]!=j) return;
      }
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

void recursive(int i){
  int j;

  if(i==N){
    printboard();
    return;
  }

  for(j = 0 ; j < N ;j++){
    if(column[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE){
      continue;
    }

    row[i]=j;
    column[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;

    recursive(i+1);

    row[i]=column[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
}

