//最小全域木
#include <stdio.h>
#define X 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
int G[100][100];//行列の生成
int n;//行(列)の数
int Span(){
  int i,u,v,minv;
  int d[100];//
  int p[100];
  int color[100];//
  int weight=0;

  for(i=0;i<n;i++){//d,p,cの初期化
    d[i]=X;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=WHITE;//一番最初は0
  while(1){
    minv=X;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<minv){
	minv=d[i];
	u=i;
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(d[v]>G[u][v]){
	if(color[v]!=BLACK && G[u][v]!=X){
	  p[v]=u;
	  d[v]=G[u][v];
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++)weight+=G[i][p[i]];
  return weight;
}
int main(){
  int i,j;
  int x;
  scanf("%d",&n);
  for(i=0; i<n; i++){//行列の中身の格納
    for(j=0; j<n; j++) {
      scanf("%d",&x);
      if(x==-1)x=X;
      G[i][j]=x;
    }
  }
  printf("%d\n",Span());//重みの出力
  return 0;
}

