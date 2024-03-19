#include<stdio.h>

#define fr -2
#define n_fr -1
#define N 8

int row[N],col[N],dpos[2*N-1],dneg[2*N-1],k,r,c,Q[N][N];

void print(void){
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if((Q[i][j]==n_fr)&&(row[i]!=j))
        return ;
    }
  }

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

void recursive(int i){
  int j;

  if(i==N){
    print();
    return;
  }

  for(j=0;j<N;j++){
    if((col[j]==n_fr)||(dpos[i+j]==n_fr)||(dneg[i-j+N-1]==n_fr))
    continue;
    row[i]=j;col[j]=dpos[i+j]=dneg[i-j+N-1]=n_fr;

    recursive(i+1);

    row[i]=col[j]=dpos[i+j]=dneg[i-j+N-1]=fr;
  }
}

int main(){
  int i,j;

  for(i=0;i<N;i++){
    row[i]=col[i]=fr;
    for(j=0;j<N;j++){
      Q[i][j]=fr;
    }
  }
  for(i=0;i<2*N-1;i++){dpos[i]=dneg[i]=fr;}

  scanf("%d",&k);

  for(i=0;i<k;i++){
    scanf("%d %d",&r ,&c);
    Q[r][c]=n_fr;
  }

  recursive(0);

  return 0;
}

