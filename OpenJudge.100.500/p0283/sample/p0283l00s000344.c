//2020.1.30
//s1270188 xxxmk2
//alds1_13a

#include<stdio.h>
#define N 8

//global
int masu[N][N], row[N], col[N], dpos[2*N-1], dneg[2*N-1];

//function
void pr_masu(void){
  int i, j;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(masu[i][j]==1 && row[i]!=j) return;
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




void queens(int i){
  int j;
  
  if(i==N){
    pr_masu();
    return;
  }

  for(j=0;j<N;j++){
    if(col[j]==1 || dpos[i+j]==1 || dneg[i-j+N-1]==1) continue;

    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=1;

    queens(i+1);

    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=-1;
  }
}


int main(){
  int i, j, k, num;

  //reset
  for(i=0;i<N;i++)
    for(j=0;j<N;j++) masu[i][j]=-1;
  for(i=0;i<N;i++) row[i]=col[i]=-1;
  for(i=0;i<2*N-1;i++) dpos[i]=dneg[i]=-1;

  //input
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%d %d",&j,&k);
    masu[j][k]=1;
  }

  queens(0);
  
  return 0;
}

