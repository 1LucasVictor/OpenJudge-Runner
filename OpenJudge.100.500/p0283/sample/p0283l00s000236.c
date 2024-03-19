#include<stdio.h>
#define NOT_FREE -1
#define FREE 1
#define N 8

int k,v[N][N];
int col[N],row[N],dneg[2*N-1],dpos[2*N-1];

void print(){
  int i,j;
  
  for(i=0;i<N;i++)for(j=0;j<N;j++)if(v[i][j] && row[i]!=j)return;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      printf("%s",((row[i]==j)?"Q":"."));
   
    }
   printf("\n");
  }
}

void queen(int i){
  int j;
  
  if(i==N){
    print();
    return;
  }
  for(j=0;j<N;j++){
    if(col[j]==NOT_FREE || dpos[i+j]==NOT_FREE || dneg[i-j+N-1]==NOT_FREE)continue;

    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+N-1]=NOT_FREE;

    queen(i+1);

    col[j]=dpos[i+j]=dneg[i-j+N-1]=FREE;
  }
  
}

int main(){
  int i,j,r,c;

  for(i=0;i<N;i++){
    row[i]=FREE;
    col[i]=FREE;
  }
  for(j=0;j<2*N-1;j++){
    dpos[i]=FREE;
    dneg[i]=FREE;
  }

  for(i=0;i<N;i++)for(i=0;i<N;i++)v[i][j]=0;

  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    v[r][c]=1;
  }
  queen(0);
  
  return 0;
}

