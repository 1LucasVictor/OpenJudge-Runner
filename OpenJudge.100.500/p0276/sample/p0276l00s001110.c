#include<stdio.h>
#define MAX 102
int main(){
  int box[MAX][MAX];
  int tmp[MAX][MAX];
  int i,j,n,m,l;
for(i=1;i<MAX;i++){
  for(j=1;j<MAX;j++){
    box[i][j]=0;
    tmp[i][j]=0;
  } 
 }


  
  scanf("%d",&n);//頂点数の入力
  //入力
  for(i=1;i<=n;i++){
      scanf("%d",&m);
      scanf("%d",&l);
      for(j=1;j<=l;j++){
	
	scanf("%d",&tmp[i][j]);//隣接する頂点の番号の保持
      }
  }
  
  
  //隣接の判定
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(tmp[i][j]!=0){
	box[i][tmp[i][j]]=1;
      }
    }
  }

  //出力
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=n){
      printf("%d ",box[i][j]);
      }
      else {
	printf("%d\n",box[i][j]);
      }
    }
  }
  return 0;
}

