#include<stdio.h>
#define N 8

int D[N][N]={0};

void printP(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(D[i][j] == 1){
	printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
}

int cal(int b,int a){
  int i,j;

  for(i=0;i<N;i++){
    if(i!=a && D[b][i]==1){
      return 0;
    }
  }
  for(i=0;i<N;i++){
    if(i!=b &&D[i][a]==1){
      return 0;
    }
  }
  i=b-1;
  j=a+1;
  while(i>=0 && j<N){
    if(D[i--][j++]==1){
      return 0;
    }
  }
  i=b-1;
  j=a-1;
  while(i>=0 && j>=0){
    if(D[i--][j--]==1){
      return 0;
    }
  }

  i=b+1;
  j=a-1;

  while(i<N && j>=0){
    if(D[i++][j--]==1){
      return 0;
    }
  }

  i=b+1;
  j=a+1;
  while(i<N && j<N){
    if(D[i++][j++]==1){
      return 0;
    }
  }

  return 1;
}

int Get(int X){
  int i;

  for(i=0;i<N;i++){
    if(D[X][i]==1){
      if(!Get(X+1)){
	return 0;
      }
    }
  }

  if(X==N){
    printP();
    return 1;
  }
  else {
    for(i=0;i<N;i++){
      if(D[X][i]==0 && cal(X,i)){
	D[X][i]=1;
	if(!Get(X+1)){
	  D[X][i]=0;
	}
      }
    }
  }

  return 0;
}

int main(){
  int num,i,j,x,y,X=0;

  scanf("%d",&num);

  for(i=0;i<num;i++){
    scanf("%d %d",&y,&x);
    D[y][x]=1;
  }
  i=Get(X);

  return 0;
}
    

