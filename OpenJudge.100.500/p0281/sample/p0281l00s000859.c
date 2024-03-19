#include<stdio.h>
#define INFTY 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
void dijkstra();
int n,M[100][100];
int main(void){
  int i,j,u,k,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }
  dijkstra();
  return 0;
}
void dijkstra(){
  int u,minv,i;
  int d[100],p[100],color[100];
  int v;
  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }

  d[0]=0;

  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
	u=i;
	minv=d[i];
      }
     }
    if(u==-1)
      break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&M[u][v]!=INFTY){
	if(d[v]>M[u][v]+d[u]){
	  d[v]=M[u][v]+d[u];
	  p[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}  

  
  

