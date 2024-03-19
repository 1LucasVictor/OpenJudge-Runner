#include <stdio.h>
#define MAX 100
#define inf 1000000000
#define WHITE 0
#define BLACK 1
#define GRAY 2

int n,A[MAX][MAX];

void dijkstra(){
  int minv;
  int d[MAX],color[MAX];

  for(int i=0;i<n;i++){
    d[i]=inf;
    color[i]=WHITE;
  }

  d[0]=0;
  color[0]=GRAY;
  while(1){
    minv=inf;
    int u=-1;
    for(int i=0;i<n;i++){
      if(minv > d[i] && color[i] != BLACK){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(int v=0;v<n;v++){
      if(color[v]!=BLACK && A[u][v]!=inf){
	if(d[v]> d[u]+A[u][v]){
	  d[v]=d[u]+A[u][v];
	  color[v]=GRAY;
	}
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d",i);
    if(d[i]==inf) printf(" -1\n");
    else printf(" %d\n",d[i]);
  }
}

int main(){
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=inf;
    }
  }

  int k,c,u,v;
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v]=c;
    }
  }

  dijkstra();

  return 0;
}

  
  
    
 

