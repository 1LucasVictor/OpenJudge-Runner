#include <stdio.h>
#include <limits.h>
#define MAX 101
void prim(int,int);
int a[MAX][MAX];
  int color[MAX];
  int d[MAX];
  int pi[MAX];
int main(){
  int i,j,n,tmp,sum=0;

  for(i =1 ;i<=MAX;i++){
    color[i]=0;
    d[i]=0;
    pi[i]=0;
  }
  scanf("%d",&n);
  
  for(i = 1 ; i <= n;i++){
    for(j = 1;j<=n;j++){
    scanf("%d" ,&a[i][j]);
    if(a[i][j] ==-1){
      a[i][j] = INT_MAX;
    }
    }
  }

  prim(n,1);
  for(i = 1;i<=n;i++){
    sum+=d[i];
  }
  printf("%d\n",sum);
  return 0;
}
void prim(int w,int r){
  int u,mincost;
  int i,j;
  for(i = 1;i<=w;i++){
    d[i] = INT_MAX;
    pi[i] =-1;
    color[i] = 0;
  }
  d[r] = 0;
  while(1){
    mincost = INT_MAX;
    for(i = 1;i<=w;i++){
      if(color[i]!=1 && d[i]<mincost){
	mincost = d[i];
	u = i;
      }
    }
      if(mincost == INT_MAX){
	  break;
      }
      color[u]=1;

	for(j = 1 ;j<=w;j++){
	  if(color[j] !=1 && a[u][j]<d[j]){
	    pi[j] = u;
	    d[j] = a[u][j];
	  }
	}

      }
  }

