#include <stdio.h>
#define N 8

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],board[N][N];
void Q_print(void);
void Q_place(int);

int main(){
  int n,r,c,i,j;
  scanf("%d",&n);
  for(i=0;i<N;i++){
    row[i]=0;
    col[i]=0;
  }
  for(i=0;i<2*N-1;i++){
    dpos[i]=0;
    dneg[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&r,&c);
    board[r][c]=1;
  }
  Q_place(0);
  return 0;
}
	
void Q_place(int i){
  int j,k,flag;
  if(i==N){
    flag=0;
    for(j=0;j<N;j++){
      for(k=0;k<N;k++){
	if(board[j][k]){
	  if(row[j]!=k) flag=1; 
	}
      }
    }
    if(flag) j=N;
    else j=0;
    for(;j<N;j++){
      for(k=0;k<N;k++){
	if(row[j]==k) printf("Q");
	else printf(".");
      }
      printf("\n");
    }
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==1 ||
       dpos[i+j]==1 ||
       dneg[i-j+N-1]==1) continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=1;
    Q_place(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=0;
  }
}

    
    
    
  
  
  
  
    
  

