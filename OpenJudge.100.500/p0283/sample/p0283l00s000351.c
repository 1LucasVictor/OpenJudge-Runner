#include  <stdio.h>
#include <stdbool.h>

#define N 8
#define FREE -1
#define NOTFREE 1


void intialize();
void printboard();
void recursive(int);

int row[N],col[N],drops[2*N-1],dneg[2*N-1];
bool x[N][N];

int main (){
  int i,j,k,r,c;
  intialize();
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      x[i][j]=0;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    x[r][c]=1;
  }
  recursive(0);

  return 0;
}
void intialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(i=0;i<2*N-1;i++){
    drops[i]=FREE;
    dneg[i]=FREE;
  }
}
void printboard(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(x[i][j]){
	if(row[i]!=j)
	  return;
      }
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j)
	printf("Q");
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
  for(j=0;j<N;j++){
    if(NOTFREE==col[j]||NOTFREE==drops[i+j]||NOTFREE==dneg[i-j+N-1])
      continue;

    row[i]=j;
    col[j]=drops[i+j]=dneg[i-j+N-1]=NOTFREE;

    recursive(i+1);
    row[i]=col[j]=drops[i+j]=dneg[i-j+N-1]=FREE;
  }
}
 
