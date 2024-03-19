#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define PINK 1
#define RED 2
int n,m[MAX][MAX];

void dijkstra(){
  int minv;
  int d[MAX],p[MAX],color[MAX];
  int i,j;
  for(i=0;i<n;i++){
    d[i]=INFTY;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=PINK;
  while(1){
    minv=INFTY;
    int u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=RED){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=RED;
    for(j=0;j<n;j++){
      if(color[j]!=RED && m[u][j]!=INFTY){
	if(d[j]>d[u]+m[u][j]){
	  d[j]=d[u]+m[u][j];
	  color[j]=PINK;
	}
      }
    }
  }for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INFTY)
      printf("%d\n",-1);
    else printf("%d\n",d[i]);
  }
}
int main(){
  int i,j,k,c,u,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j]=INFTY;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      m[u][v]=c;
    }
  }
  dijkstra();

  return 0;
}