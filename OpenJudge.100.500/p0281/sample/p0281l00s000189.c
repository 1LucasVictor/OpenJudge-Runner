#include<stdio.h>
#define N 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[N][N];

void dijkstra(){
  int d[N],color[N];
 int i,j,v,sum=0,min,u;
  for(i=0;i<n;i++){
    d[i]=INFTY;
    color[i]=WHITE;
  }
  d[0]=0;
  //color[0]=GRAY;
  
  while(1){
    min=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && color[i]!=BLACK){
	u=i;
	min=d[i];//????°????????????¨??\??????
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){//u?????????v???????????§
      if(color[v]!=BLACK && M[u][v]!=INFTY){
	if(d[v]>M[u][v]+d[u]){//???????????£??\??????????????????????????????????????????????±???????
	  d[v]=d[u]+M[u][v];
	  
	  // p[v]=u;//???
	  color[v]=GRAY;//?¨????
	}
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  
}

int main(){
  int i,j;
  int k,u,c,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      M[u][v]=c;
    }
  }

  dijkstra();

  return 0;
}