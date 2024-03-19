#include <stdio.h>
#include <stdlib.h>
#define N 8

void search(int);
void output();

int n,arr[N][N],row[N],col[N],rina[2*N-1],lena[2*N-1];
int main(){
  int i,j,x,y;

  for(i=0;i<N;i++) row[i]=col[i]=-1;
  for(i=0;i<2*N-1;i++) rina[i]=lena[i]=-1;
  
  scanf("%d",&n);
  for(i=0;i<N;i++)
    for(j=0;j<N;j++) arr[i][j] = -1;
  for(i=0;i<n;i++){
    scanf("%d %d",&x,&y);
    arr[x][y] = 1;
  }
  search(0);
  return 0;
}

void search(int put){
  int i,j;
  
  if(put == N){
    output();
    return ;
  }
  for(i=0;i<N;i++){
    if(col[i] == 1 || lena[i+put] == 1 || rina[put-i+N-1] == 1) continue;
    row[put]=i;
    col[i]=lena[i+put]=rina[put-i+N-1]=1;
    search(put+1);
    row[put]=col[i]=lena[put+i]=rina[put-i+N-1]=-1;
  }
}

void output(){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(arr[i][j]==1 && row[i]!=j)return ;
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

