#include<stdio.h>

#define INF 10000
#define WHITE 1
#define BLACK 0
#define GRAY 2

int p[101];
int d[101];
int color[101];
int num[101][101];

void prim(int);


int main(){
  int n;
  int i,j;
  

  scanf("%d",&n);


  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&num[i][j]);
    }
  }

  prim(n);

  return 0;
}

void prim(int n){
  int i,j,u;
  int mincost;
  int sum=0;

  for(i=1;i<=n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[1]=0;

  while(1){
    mincost=INF;
    for(i=1;i<=n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }    
    if(mincost==INF) break;

    color[u]=BLACK;
      
    for(i=1;i<=n;i++){
      if(color[i]!=BLACK && num[u][i]!=-1){
	if(num[u][i]<d[i]){
	  d[i]=num[u][i];
	  p[i]=u;
	  color[i]=GRAY;
	}
      }
    }
  }


  for(i=1;i<=n;i++){
    if(p[i]!=-1) sum+=num[i][p[i]];
  }
  printf("%d\n",sum);
}