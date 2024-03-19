#include<stdio.h>
#include<math.h>
#define MAX 100
#define WHILE 0
#define GRAY 1
#define BLACK 2
#define INFTY -1
//flooat inf=INFINITY;
int inf=(1<<21);
int n,a[MAX][MAX];

int prim(){
  int i,u,v,mincost,sum=0;
  int color[MAX],d[MAX];

  for(i=0;i<n;i++){
    d[i]=inf;
    color[i]=WHILE;
  }
  d[0]=0;
  while(1){
    mincost=inf;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && a[u][v]!=inf){
	if(d[v]>(d[u]+a[u][v])){
	  d[v]=a[u][v]+d[u];
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INFTY)printf("-1\n");
    else printf("%d\n",d[i]);
  }

  return sum;
}

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=inf;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      a[u][v]=c;
    }
  }
  
  prim();
  return 0;
}
    

