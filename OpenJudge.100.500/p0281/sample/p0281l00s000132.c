#include <stdio.h>
#define M 100
#define inf 1000000

int p,tree[M][M];

void SSSP(){
  int a,cost,i,j;
  int g[M],now[M];

  for(i=0;i<p;i++){
    g[i]=inf;
    now[i]=0;
  }

  g[0]=0;
  now[0]=1;

  while(1){
    cost=inf;
    a=-1;
    for(i=0;i<p;i++){
      	if(cost>g[i]&&now[i]!=2){
	  a=i;
	  cost=g[i];
	}
    }
    if(a==-1) break;
    now[a]=2;
    for(j=0;j<p;j++){
      if(now[j]!=2 && tree[a][j]!=inf){
	if(g[a]+tree[a][j]<g[j]){
	  g[j]=g[a]+tree[a][j];
	  now[j]=1;
	}
      }
    }
  }

  for(i=0;i<p;i++){
    printf("%d %d\n",i,g[i]);
  }
}
      

int main(){
  int i,j,nu1,nu2,out,weight;

  scanf("%d",&p);

  for(i=0;i<p;i++){
    for(j=0;j<p;j++){
	tree[i][j]=inf;
      }
  }

  for(i=0;i<p;i++){
    scanf("%d%d",&nu1,&out);
    for(j=0;j<out;j++){
      scanf("%d%d",&nu2,&weight);
      tree[nu1][nu2]=weight;
    }
  }
  
  SSSP();

  return 0;
}

