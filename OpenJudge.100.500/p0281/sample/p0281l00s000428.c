#include <stdio.h>
#define N 10000
#define inf 1000000
#define BLACK 2
#define WHITE 0
#define GRAY 1
#define nil -1;

int A[N][N];

int main(){
  int n,i,j,a,u,num,way,weight;
  int mincost;
  int d[N],color[N];
  
  scanf("%d",&n);
  for(i=0;i<n;++i){
    for(j=0;j<n;++j)A[i][j] = nil;
    d[i] = inf;
   
    color[i] = WHITE;
  }
    
  for(i=0;i<n;++i){
    scanf("%d%d",&a,&num);

    for(j=0;j<num;++j){
      scanf("%d%d",&way,&weight);
      A[a][way] = weight;
    }
  }
  d[0] = 0;

  while(1){
    mincost = inf;

    for(i=0;i<n;++i){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == inf)break;

    color[u] = BLACK;

    for(i=0;i<n;++i){
      if(A[u][i] == -1)continue;

      if(color[i] != BLACK && d[u] + A[u][i] < d[i]){
       
	d[i] = d[u] + A[u][i];
      }
    }
  }

  for(i=0;i<n;++i){
    printf("%d %d\n",i,d[i]);
  }


  
  return 0;
}

