#include <stdio.h>
#include <stdlib.h>
#define WHITE -1
#define GRAY 0
#define BLACK 1
#define INF 1000000
#define NIL -1

int prim(int);

int A[100][100];

int main()
{
  int n,i,j;

  scanf("%d",&n);
  if(n<1 || n>100) exit(1);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j] == -1) A[i][j] = INF;
    }
  }

  printf("%d\n",prim(n));
  
  return 0;
}

int prim(int n)
{
  int i,u,sum=0,mincost,v;
  int d[100],color[100],pi[100];
  
  for(i=0;i<n;i++){
    d[i] = INF; //重みが最小の辺の重みを記録、辺なし(INF)に一度設定する
    pi[i] = NIL; //MSTにおける頂点vの親を記録、親なし(NIL)に一度設定する
    color[i] = WHITE; //色
  }
  
  d[0] = 0; //始点を0に決める

  while(1){
    mincost = INF;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){ //訪問してないかつ、mincost(記録しているコスト)より新たなコストが小さかったら
	mincost = d[i]; //それを記録
	u = i; //訪問したこと判断するためのu
      }
    }

    if(mincost == INF) break; //mincostがINFということは一度もforループが回っていないといこと＝最小のコストが出きった
    color[u] = BLACK; //訪問完了

    for(v=0;v<n;v++){
      if(color[v] != BLACK && A[u][v] < d[v]){ //訪問してないかつ、uとiの間に辺があってそれが記録している重みよりも小さかったら
	pi[v] = u; //vの親をuに設定
	d[v] = A[u][v]; //小さい方を記録
	color[v] = GRAY; //灰色に設定
      }
    }
  }
    for(i=0;i<n;i++){
      if(pi[i] != NIL){
	sum += A[i][pi[i]];
      }
    
  }
  return sum;
}

