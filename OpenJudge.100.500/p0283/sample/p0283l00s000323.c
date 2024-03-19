#include <stdio.h>
#define N 8
#define F -1
#define NF -2
#define fal 0
#define tru 1


int row[N],col[N],dial[2*N-1],diar[2*N-1];//行は英語でrow、列は英語でcolumn、対角線は英語でdiagonal
int X[N][N];

void board(int);
void printboard(void);

int main(){
  int i,j,k,r,c;
  for(i=0;i<N;i++){
    row[i]=F;
    col[i]=F;
  }
  for(i=0;i<2*N-1;i++){
    dial[i]=F;
    diar[i]=F;
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      X[i][j]=fal;
    }
  }
  scanf("%d",&k);
  for(i=0;i<k;i++){
    scanf("%d %d",&r,&c);
    X[r][c]=tru;
  }
  board(0);
  return 0;
}

void board(int i){
  //iが行、jが列と見る
  int j;
  //クイーンの配置に成功
  if(i==N){
    printboard();
    return;
  }
  for(j=0;j<N;j++){
    //(i,j)が他のクイーンに襲撃されている場合は何もせずループを回す
    if((col[j]==NF)||(dial[i+j]==NF)||(diar[i-j+N-1]==NF)){
      continue;
    }
    //(i,j)にクイーンを配置
    row[i]=j;
    col[j]=dial[i+j]=diar[i-j+N-1]=NF;
    //次の行を試す
    board(i+1);
    //(i,j)に配置されているクイーンを取り除く。最初、i=7の時に出て来て、i=7の時にNFにしたエリアをFにする。
    row[i]=col[j]=dial[i+j]=diar[i-j+N-1]=F;
    //上のが終った後、board関数を抜け出し、前の board(i+1);に戻り、 i=6でrow[i]=col[j]=dial[i+j]=diar[i-j+N-1]=F;を実行する。
  }
  
}

void printboard(){
  int i,j;

  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(X[i][j]==tru){
	//printf("%d %d %d %d %d\n",i,j,X[i][j],row[i],j);
	
	if(row[i]!=j){
	  return;
	}
      }
    }
  }
  
  // printf("wa-i\n");
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(row[i]==j){
	printf("Q");
      }
      else{
	printf(".");
      }
    }
    printf("\n");
  }
  //printf("\n");
}

