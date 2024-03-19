#include<stdio.h>
#define FREE 0
#define NOT_FREE 1
#define N 8
void putQueen(int);
void show();
int col[N];
int row[N];
int dpos[N*2];
int dneg[N*2];
int A[N][N];
int B[N][N];

int main(){
  int n,i,j,k,x,y;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);//row,col
    A[x][y]=1;

    }


  putQueen(0);
  return 0;
}
void putQueen(int i){
  int j,f,l,m;

  if(i==N){
    f=0;
    for(l=0;l<N;l++){
      for(m=0;m<N;m++){
	if(A[l][m]!=0&&A[l][m]!=B[l][m])
	  f=1;
      }
    }
    if(f==0)
    show();

    return;
  }
  for(j=0;j<N;j++){
 
    if(col[j]== NOT_FREE){continue;}
    if(dpos[i+j]==NOT_FREE) continue;
    if(dneg[i-j+N-1]==NOT_FREE){
      continue; 
    } 
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;
    B[i][j]=NOT_FREE;
    putQueen(i+1);
    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
    B[i][j]=FREE;

  }
}
void show(){
  int i,j;
for(i=0;i<N;i++){
    for(j=0;j<N;j++){

      if(row[i]==j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}

