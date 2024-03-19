#include<stdio.h>
#define N 100
#define INF 100000
#define WHITE 0
#define BLACK 1
 
int main(){

  int i,j,n,count=0,u,k,v,c,G[N][N],color[N],d[N],pi[N],mincost,a;
 
  for( i = 0 ; i < N ; i++ ){
    for( j = 0 ; j < N ; j++ ){
      G[i][j] = -1;
    }
  }

  scanf("%d",&n);
 
  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d",&u,&k);
    for( j = 0 ; j < k ; j++ ){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }
 
  for( i = 0 ; i < n ; i++ ){
    color[i] = WHITE;
    pi[i] = -1;
    d[i]=INF;
  }
 
  d[0]=0;
 
  while(1){
    mincost = INF;
    for( i = 0 ; i < n ; i++ ){
      if( color[i] != 2 && d[i] < mincost ){
	mincost = d[i];
	a = i;
      }
    }
    if( mincost == INF ){
      break;
    }
      
    color[a] = 2;
 
    for( i = 0 ; i < n ; i++ ){
      if( G[a][i] != -1 && color[i] != 2 && (G[a][i]+d[a]) < d[i] ){
	pi[i]= a;
	d[i] = G[a][i]+ d[a];
	color[i] = BLACK;
      }
    }
  }
 
  for( i = 0 ; i < n ; i++ )
    printf("%d %d\n",i,d[i]);

  return 0;

}