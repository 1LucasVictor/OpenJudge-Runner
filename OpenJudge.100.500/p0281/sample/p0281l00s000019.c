#include<stdio.h>
#define MAX 2001
#define INF 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
int n;
int A[MAX][MAX],d[MAX],col[MAX];

void dikstra(){
  int u,i,j,k,mini;

  for(i=0; i<n; i++){
    col[i] = WHITE;
    d[i] = INF;
  }
  d[0] = 0;
  col[0] = GRAY;

  while(1){
    mini = INF;
    for(i=0; i<n; i++){
      if(col[i] != BLACK && d[i]< mini){
	mini = d[i];
	u = i;
      }
    }
    if(mini == INF)break;
    col[u] =BLACK;

    for(j=0; j<n; j++){
      if(col[j] != BLACK && A[u][j] < d[j]){//ここが(A[][] < d[j]になってた)
	if(d[u] + A[u][j] < d[j]){
	  d[j] = d[u] + A[u][j];
	  col[j] = GRAY;
	}
      }
    }
  }
  for(i=0; i<n; i++){
    if(d[i]==INF)printf("%d %d\n",i,-1);
    else printf("%d %d\n",i,d[i]);
  }
}


int main(){
  int i,j,min,k,v,c,u;
  
  scanf("%d",&n);
  //配列A[][]に全部INFを投下
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      A[i][j]=INF;
    }
  }
  //表に入れる
  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k; j++){
      scanf("%d %d",&v,&c);
      A[u][v] = c;
    }
  }
  dikstra();

  return 0;
}

