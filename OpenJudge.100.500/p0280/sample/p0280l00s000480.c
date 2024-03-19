#include<stdio.h>
#define INFINITY (1<<21)
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[MAX][MAX]/*へんの重みを保存した隣接行列*/;

int prim(){
  int i,u,minv,v,sum=0;
  int d[MAX]/*Tに属する頂点とV-Tに属する頂点を繋ぐへんの中で最小の重みを記録*/,p[MAX]/*それぞれの親を記録*/,color[MAX];
  for(i=0;i<n;i++){/*dをinfinity pを−１colorを白に初期化*/
    d[i] = INFINITY;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0]=0;/*d[0]を０にする*/

  while(1){
    minv=INFINITY;
    u = -1;
    for(i=0;i<n;i++){/*minvにブラック以外の頂点から最小のおもみをいれる*/
      if(minv>d[i] && color[i]!=BLACK){
        u=i;
        minv=d[i];
      }
    }
    if(u == -1)break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && M[u][v] != INFINITY){
        if(d[v] > M[u][v]){
          d[v]= M[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=M[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e == -1)M[i][j]=INFINITY;
      else M[i][j]=e;
    }
  }
  printf("%d\n",prim());
  return 0;
}

