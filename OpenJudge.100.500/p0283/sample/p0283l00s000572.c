#include<stdio.h>
#include<stdlib.h>

char ban[8][8];
int gyo[30],ret[30],U[30],X[30];

void checkmate(int y){
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
  if(gyo[y]==1){
    checkmate(y+1);
  }
  for(i=0;i<8;i++){
    m=7-i;
    if(ret[i]==0 && U[i+y]==0 && X[y+m]==0){
      ban[y][i]='Q';
      ret[i]=U[y+i]=X[y+m]=1;
      checkmate(y+1);
      ban[y][i]='.';
      ret[i]=U[y+i]=X[y+m]=0;
    }
  }
}

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
    gyo[r]=ret[c]=1;
    U[r+c]=X[r+m]=1;
  }
  checkmate(0);
  return 0;
}

