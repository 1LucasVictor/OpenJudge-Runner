#include<stdio.h>
#include<stdlib.h>
#define M 30
void CHECKMATE(int);

  char ban[8][8];
  int gyou[M],retsu[M],U[M],X[M];

int main(){
  int k,i,j,r,c,x,m;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      ban[i][j]='.';
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    m=7-c;
    ban[r][c]='Q';
    gyou[r]=retsu[c]=1;
    U[r+c]=X[r+m]=1;
  }
  CHECKMATE(0);
  return 0;
}
void CHECKMATE(int y){
  int i,j,m;
  if(y==8){
    for(i=0;i<8;i++){
      for(j=0;j<8;j++){
	printf("%c",ban[i][j]);
      }
      printf("\n");
    }
    exit(0);
  }
  if(gyou[y]==1){
    CHECKMATE(y+1);
  }
  for(i=0;i<8;i++){
    m=7-i;
    if(retsu[i]==0&&U[i+y]==0&&X[y+m]==0){
      ban[y][i]='Q';
      retsu[i]=U[y+i]=X[y+m]=1;
      CHECKMATE(y+1);
      ban[y][i]='.';
      retsu[i]=U[y+i]=X[y+m]=0;
    }
  }
}
  

