#include <stdio.h>
#include <math.h>
#define M 100
#define o 1000000

int p;
int tree[M][M];

int weight(){
  int a,i,j,cost,now[M],g[M],oya[M];
  int count=0;

  for(i=0;i<p;i++){
    g[i]=o;
    oya[i]=-1;
    now[i]=0;
  }

  g[0]=0;

  while(1){
    cost=o;
    a=-1;
      for(i=0;i<p;i++){
	if(cost>g[i]&&now[i]!=2){
	  a=i;
	  cost=g[i];
	}
      }
    
    if(a==-1) break;
    now[a]=2;
    for(i=0;i<p;i++){
      if(now[i]!=2 && tree[a][i]!=o){
	if(tree[a][i]<g[i]){
	  g[i]=tree[a][i];
	  oya[i]=a;
	  now[i]=1;
	}
      }
    }
  }

  for(i=0;i<p;i++){
    if(oya[i]!=-1) count+=tree[i][oya[i]];
  }

  printf("%d\n",count);
}

     

int main(){
  int i,j;

  scanf("%d",&p);

  for(i=0;i<p;i++){
    for(j=0;j<p;j++){
      scanf("%d",&tree[i][j]);
      if(tree[i][j]==-1){
	tree[i][j]=o;
      }
    }
  }

  weight();

  return 0;	
}

