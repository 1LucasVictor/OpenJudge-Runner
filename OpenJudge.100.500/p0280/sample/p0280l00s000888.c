#include <stdio.h>

#define MAX 100
#define INFTY 2000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,G[MAX][MAX];
int prim();

int main()
{
  
  int i,j;
  int e;


  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      
      scanf("%d",&G[i][j]);

    }
  }
  prim();

  return 0;
}

int prim(){
  //すべての頂点 uについてcolor[u]WHITEとし、d[u]をMAX(∞)へ初期化

  int u =0;
  int d[MAX],pi[MAX],color[MAX];
  int i;
  int mincost;
  int sum =0;

  for(i=0;i<n;i++){
    
    
    d[i] = INFTY;
    pi[i] = -1; //NIL
    color[i] = WHITE;

  }

  d[u] = 0;
    

  while(1) {
    mincost = INFTY;
    u=-1;

    for(i=0;i<n;i++) {
      if(color[i] != BLACK && mincost > d[i]){
	
	mincost = d[i];
	u = i;
      }
    }

    if( mincost == INFTY){
      break;
    }

    color[u] = BLACK;

    for(i=0;i<n;i++){
      if(G[i][u] != -1) {
	
	if(color[i] != BLACK && G[i][u] < d[i] ){
	  if(d[i] > G[u][i]){
	  d[i] = G[u][i];
	  pi[i] = u;
	  color[i] = GRAY;
	  }
	}
      }
    }
  }

  for(i=0;i<n;i++){
    if(pi[i] != -1){
      sum += G[i][pi[i]];
    }
  }
  printf("%d\n",sum);
  
}
    
      