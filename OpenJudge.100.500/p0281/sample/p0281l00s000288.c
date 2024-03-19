#include<stdio.h>
#define N 100
#define INF 1000000
#define WHITE 0
#define BLACK 2

int A[N][N],k,T[N],d[N],color[N],x,min,v,c;

void shortest(){

  int i,j,u;
  
  for(i=0;i<x;i++){
    d[i]=INF;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    min = INF;
    u=-1;
    for(i=0;i<x;i++){
      if(min >d[i] && color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(i=0;i<x;i++){
      if(color[i] != BLACK && A[u][i] != INF && d[i] > d[u] + A[u][i]){

	  d[i] = d[u] + A[u][i];

	
      }
    }
  }
  for(i=0;i<x;i++){
    printf("%d %d\n",i,d[i]);
  }
  
}

int main(){

  int i,j,u;

  scanf("%d",&x);

  for(i=0;i<x;i++){
      for(j=0;j<x;j++){
	A[i][j]=INF;
      }
  }

  for(i=0;i<x;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v]=c;
    }
  }

  shortest();

  
  return 0;
  
}

