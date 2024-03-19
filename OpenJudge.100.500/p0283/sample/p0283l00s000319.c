#include<stdio.h>
#define F 1
#define NF -1
#define N 8

void Queen(int i);
void Print(void);

int boad[N][N],R[N],col[N],A[2*N-1],B[2*N-1];

int main()
{
  int i,j,n,m,l;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      boad[i][j] = 0;
    }
  }
  for(i=0; i<N; i++){
    R[i] =F;
    col[i]=F;
  }
  for(i=0; i<2*N; i++){
    A[i] = F;
    B[i] =F;
  }
  scanf("%d",&n);

  for(i=0; i<n; i++){
    scanf("%d%d",&m,&l);
    boad[m][l] = 1;
  }
  Queen(0);
  
  return 0;
}

void Queen(int i){
  int j;
    if(i==N){
      Print();
    }
  
  for(j=0; j<N; j++){
    if(col[j] ==NF || B[i+j] == NF || A[i-j+N-1] ==NF)continue;
    R[i]=j;
    col[j] = B[i+j] = A[i-j+N-1] =NF;

    Queen(i+1);

    R[i] = col[j] = B[i+j] =A[i-j+N-1] =F;
  }
}

void Print(){
  int i,j;

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(boad[i][j] ==1 && R[i]!=j)return;
    }
  }
  
  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
  
      if(R[i]==j)printf("Q");

      else printf(".");
    }
    printf("\n");
  }
}





