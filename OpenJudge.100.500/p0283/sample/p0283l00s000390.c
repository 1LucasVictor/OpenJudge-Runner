#include<stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1
#define FALSE 0
#define TRUE 1
int row[N],col[N],dpos[2*N -1],dneg[2*N-1];
int X[N][N];

void initialize(){
  int i;
  for(i=0;i<N;i++){
    row[i]=0;
    col[i]=0;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }
}
void print(){
  int i;
  int j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      {
	if(X[i][j]!=0){
	  if(row[i]!=j) return ;
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
void recursive(int i){
  int j;
   if(i==N){
     print();
    return ;
   }
     for(j=0;j<N;j++){
    if(col[j] == NOT_FREE||dpos[i+j]==NOT_FREE||dneg[i-j+N-1]==NOT_FREE)continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    recursive(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    
  }
}
int main(){
  int i,j;
  int k,r,c;
  initialize();//?????????
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      X[i][j]=FALSE;
      scanf("%d",&k);
      for(i=0;i<k;i++){
	scanf("%d%d",&r,&c);
	X[r][c]=TRUE;
      }
      recursive(0);
      return 0;
}

    