#include<stdio.h>
#define MAX 100
#define INF (1<<22)

int G[MAX][MAX];

void span(int);

int main(){
  int a,n,i,j;

  scanf("%d",&n);
  
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&a);

      if(a <= -1){
	G[i][j] = INF;
      } else {
	G[i][j] = a;
      }
    }
  }

  span(n);

  return 0;
}

void span(int n){
  int col[MAX],par[MAX],wei[MAX],i,min,hen;
  int sum = 0;

  for(i = 0;i < n;i++){
    col[i] = 0;
    par[i] = -1;
    wei[i] = INF;
  }
  
  wei[0] = 0;

  while(1){
    min = INF;
    hen = -1;
    
    for(i = 0;i < n;i++){
      if(col[i] != 2 && wei[i] < min){
	min = wei[i];
	hen = i;
      }
    }
    
    if(hen <= -1)break;
    col[hen] = 2;

    for(i = 0;i < n;i++){
      if(col[i] != 2 && G[hen][i] != INF){
	if(wei[i] > G[hen][i]){
	  par[i] = hen;
	  col[i] = 1;
	  wei[i] = G[hen][i];
	}
      }
    }
  }
  for(i = 0;i < n;i++){
    if(par[i] != -1){
      sum += G[i][par[i]];
    }
  }
  printf("%d\n",sum);
}

