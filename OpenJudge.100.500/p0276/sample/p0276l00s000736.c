#include<stdio.h>
#define MAX 100
int main(){
  int G[MAX][MAX];
  int id;
  int n;
  int num;
  int i,j;
  int hand;
  
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++){
      G[i][j]=0;
    }
  }
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d%d",&id,&num);//頂点番号　agree　隣の点のid
    
    for(j=0;j<num;j++){
      scanf("%d",&hand);
      G[id-1][hand-1]=1;//グラフつくる//頂点番号は１オリジンなので-1して０オリジンで０の行列作る
    }
  }
  
  for(i=0;i<n;i++){//OUTPUT
    for(j=0;j<n;j++){
      if(j)printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}

