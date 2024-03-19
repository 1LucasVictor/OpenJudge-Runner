#include<stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 1000000

int n,M[MAX][MAX];

void dijkstra(){
  int u,j,i,min,num;
  int cost[MAX],color[MAX];

  for(i=0;i<n;i++){
    cost[i]=INFTY;
    color[i]=WHITE;
  }
  cost[0]=0;
  color[0]=GRAY;
  
  while(1){
    min=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(min>cost[i]&&color[i]!=BLACK){
	u=i;
	min=cost[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(j=0;j<n;j++){
      if(color[j]!=BLACK&&M[u][j]!=INFTY){
	if(cost[j]>cost[u]+M[u][j]){
	  cost[j]=cost[u]+M[u][j];
	  color[j]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,cost[i]==INFTY?-1:cost[i]);
  }
}

int main(){
  int i,j,k,u,v,c;
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

