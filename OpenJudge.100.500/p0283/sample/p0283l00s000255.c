
#include <stdio.h>
#define Free 0
#define Nonfree 1
#define True 0
#define False 1
int Row[8],Colume[8],dpos[15],dneg[15];
int X[8][8];

void Initialization(){
  int i,j;
  for(i=0;i<8;i++){
    Row[i]=Free;
    Colume[i]=Free;
  }
  for(i=0;i<16;i++){
    dpos[i]=Free;
    dneg[i]=Free;
  }
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      X[i][j]=False;
}

void backtrack_print(){
  int i,j;
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      if(X[i][j]==True)
	if(Row[i]!=j)
	  return ;

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      if(Row[i]==j)
	printf("Q");
      else
	printf(".");
    }
    printf("\n");
  }
}

void backtrack(int row){
  int colume;
  if(row==8){
    //Success of set 8 Queens
    backtrack_print();
    return ;
  }

  for(colume=0;colume<8;colume++){
    if(Colume[colume]==Nonfree || dpos[row+colume]==Nonfree || dneg[row-colume+7]==Nonfree)
      continue;

    //set Queens
    Row[row]=colume;
    Colume[colume]=Nonfree;
    dpos[row+colume]=Nonfree;
    dneg[row-colume+7]=Nonfree;

    //search next row
    backtrack(row+1);

    //delete place of Queens
    Row[row]=Free;
    Colume[colume]=Free;
    dpos[row+colume]=Free;
    dneg[row-colume+7]=Free;
  }
  //Failed to set Queens
}

int main(){
  int i,j,row,colume,number;
  Initialization();

  scanf("%d",&number);
  for(i=0;i<number;i++){
    scanf("%d%d",&row,&colume);
    X[row][colume]=True;
  }

  backtrack(0);

  return 0;
}

