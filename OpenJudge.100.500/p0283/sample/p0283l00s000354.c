#include<stdio.h>
#define N 8
#define free -1
#define notfree 1
#define FALSE 2
#define TRUE 3
 
int row[N],col[N],dpos[2*N-1],dneg[2*N-1];
int X[N][N];
 
void initialize(void);
void print(void);
void recursive(int);
 
int main(){
  int i,j,k,r,c;
  initialize();
             
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=FALSE;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    X[r][c]=TRUE;
  }
  recursive(0);
 
  return 0;
}
 
 
void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=free;
    col[i]=free;
  }
 
  for(i=0;i<2*N-1;i++){
    dpos[i]=free;
    dneg[i]=free;
  }
}
 
void print(){
  int i,j;
  
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      if(X[i][j] == TRUE){
	if(row[i] != j)return;
      }
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i] == j)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}
void recursive(int i){
  int j;
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(notfree==col[j]||notfree==dpos[i+j]||notfree==dneg[i-j+N-1])continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=notfree;
    recursive(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=free;
  }
}

