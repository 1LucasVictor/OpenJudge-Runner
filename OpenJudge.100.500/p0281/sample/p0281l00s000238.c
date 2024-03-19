#include<stdio.h>

#define MAX 101
static const int INF = (1 << 21);

int n;
int d[MAX],key1[MAX],key2[MAX],G[MAX][MAX];

void SingleSourceShortestPathI(void){

  int i,j;
  int min,youso;

  for(i = 0;i < n;i++){
    d[i] = INF;
   key1[i] = 0; 
   key2[i] = -1;
  }

  d[0] = 0;

  while(1){
    min = INF;
    youso = -1;

    for(i = 0;i < n;i++){
      if(!key1[i] && d[i] < min){
	youso = i;
	min = d[i];
      }
    }
    if(youso == -1){
      break;
    }
    key1[youso] = 1;

    for(j = 0;j < n;j++){
      if(d[j] > d[youso]+G[youso][j]){
	d[j] = d[youso] + G[youso][j];
	key2[j] = youso;
      }
    }
  }
}

int main(){
  int i,j;
  int u,k,v,c;

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      G[i][j] = INF;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d%d",&u,&k);
    for(j = 0;j < k;j++){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }
  SingleSourceShortestPathI();

 for(i = 0;i < n;i++){
    printf("%d %d\n",i,(d[i] == INF?-1:d[i]));
  }
  return 0;
}