#include <stdio.h>
#define MAX 100
#define INF 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, A[MAX][MAX];

void dijkstra(){
  int mv,d[MAX],color[MAX];
  int i,u,v;
  for(i=0;i<n;i++){
    d[i] = INF;
    color[i]=WHITE;
  }

  d[0]=0;
  color[0]=GRAY;
  while(1){
    mv=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(mv>d[i]&&color[i]!= BLACK){
	u=i;
	mv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&A[u][v]!=INF){
	if(d[v]>d[u]+A[u][v]){
	  d[v] = d[u]+A[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
    
  }
}

int main(){
  int i,j,k,c,u,v;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      A[u][v]=c;
    }
  }
  dijkstra();
  return 0;
  
}

