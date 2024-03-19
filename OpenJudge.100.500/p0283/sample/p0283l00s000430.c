#include<stdio.h>
#define N 8//マス
#define DAN -1;
#define NDAN 0//安全0 危険-1

int row[N],col[N];
int rightd[N*2-1],leftd[N*2-1];

int input[N][N];//Qあったら１　なかったら０
int ans[N][N];//Qあったら１　なかったら０

void Print(){
  int i,j;

  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(input[i][j]==1 && ans[i][j]==0)return;//inputのQが ansにもあるか
    }
  }
  
  for(i=0;i<N;i++){//出力
    for(j=0;j<N;j++){
      if(ans[i][j]==1)printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

void Queens(int i){//行は固定
  int j;
  
  if(i==N){
    Print();
    return;
  }
    
  for(j=0;j<N;j++){
    if(col[j]==NDAN && rightd[i-j+N-1]==NDAN && leftd[i+j]==NDAN){//安全なら
    
      col[j]=DAN;//Qおいてみる
      rightd[i-j+N-1]=DAN;
      leftd[i+j]=DAN;
      ans[i][j]=1;
    
      Queens(i+1);//次の行へ
   
      col[j]=NDAN;//無理だった、ココにQ奥のやめよう
      rightd[i-j+N-1]=NDAN;
      leftd[i+j]=NDAN;
      ans[i][j]=0;
    }
  }
}


int main(){
  int n,i;
  int x,y;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    input[x][y]=1;
  }

  Queens(0);//0行目から探す

  return 0;
}
/*
  Qの個数
  Qの座標xy xy

  Q..で出力


  1.まず入力無視して８個入った完成形作る
  2.出力する前にinputのQの位置と完成した板がただしいか、ここで初めて確認
  3.2がよかったら出力
*/

