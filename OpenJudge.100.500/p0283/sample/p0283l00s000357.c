#include <stdio.h>

#define N 8
#define F -1
#define NF -2

int board[N][N],col[N],row[N],dpos[2*N-1],dneg[2*N-1];
 
void p(){

  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(board[i][j]==1 && row[i]!=j)return;
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
  p();
  return ;
  }
  
  for(j=0;j<N;j++){

    if(col[j]==NF || dpos[i+j]==NF || dneg[i-j+N-1]==NF) continue;

    row[i]=j;
    col[j]=NF;
    dpos[i+j]=NF;
    dneg[i-j+N-1]=NF;

    recursive(i+1);

    row[i]=F;
    col[j]=F;
    dpos[i+j]=F;
    dneg[i-j+N-1]=F;

  } 
}



  
 
int main()
{

int i,j,k;
 
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      board[i][j]=-1;
    }
  }
	
  for(i=0;i<N;i++){
    col[i]=F;
    row[i]=F;
  }
  for(i=0;i<N;i++){
    dpos[i]=F;
    dneg[i]=F;
  }
  
  scanf("%d",&k);
  
  int x[k],y[k];
  
  for(i=0;i<k;i++){
    scanf("%d%d",&x[i],&y[i]);
    board[x[i]][y[i]]=1;
  }

 
  recursive(0);

 
  return 0;
}

  
      





