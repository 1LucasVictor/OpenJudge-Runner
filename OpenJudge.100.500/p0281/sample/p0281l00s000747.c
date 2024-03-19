#include <stdio.h>
#define MAX 100
#define INF 1000000
#define W 0
#define G 1
#define B 2
void dijkstra(void);
int A[MAX][MAX],n;

int main()
{
  int i,j;
  int u,k,v,c;  

  scanf("%d",&n);
  //ini
  for(i=0;i<n;i++)
    for(j=0;j<n;j++) A[i][j]=INF;

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

void dijkstra(void)
{
  int i,k,kv,min;
  int cost[MAX],col[MAX];

  //ini
  for(i=0;i<n;i++){
    cost[i]=INF;
    col[i]=W;
  }

  cost[0]=0;
  while(1){
    min=INF;
    k=-1;
    for(i=0;i<n;i++){
      if(cost[i]<min && col[i]!=B){
	k=i;
	min=cost[i];
      }
    }

    if(k==-1) break;
    col[k]=B;
    for(kv=0;kv<n;kv++){
      if(col[kv]!=B && A[k][kv]!=INF){
	if(cost[k]+A[k][kv]<cost[kv]){
	  cost[kv]=cost[k]+A[k][kv];
	  col[kv]=G;
	}
      }
    }
  }

  for(i=0;i<n;i++) printf("%d %d\n",i,cost[i]);

}