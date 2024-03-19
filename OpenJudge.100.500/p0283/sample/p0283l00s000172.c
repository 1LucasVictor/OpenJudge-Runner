#include<stdio.h>

int row[8],col[8],dpos[2*8-1],dneg[2*8-1], hantei[8][8];

void ini(){
  int i;
  for(i=0;i<8;i++){
    row[i]=-1;
    col[i]=-1;
  }
  for(i=0;i<2*8-1;i++){
    dpos[i]=-1;
    dneg[i]=-1;
  }
}

void print(){
  int i,j;
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(hantei[i][j]){
	if(row[i]!=j)return;
      }
    }
  }
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(row[i]== j) {
        printf("Q");
      }
      else printf(".");
    }
    printf("\n");
  }
}

void re(int i){
  int j;
  if(i==8){
    print();
    return;
  }
  for(j=0;j<8;j++){
    if(col[j]==1 || dpos[i+j]==1 || dneg[i-j+8-1]==1)continue;
    row[i]=j;
    col[j]=dpos[i+j]=dneg[i-j+8-1]=1;
    re(i+1);
    row[i]=col[j]=dpos[i+j]=dneg[i-j+8-1]=-1;
  }
}

int main(){
  int i,j,k,r,c;
  ini();
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      hantei[i][j]=0;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d%d",&r,&c);
    hantei[r][c]=1;
  }
  re(0);
  return 0;
}
    

