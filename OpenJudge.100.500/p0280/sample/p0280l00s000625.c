#include <stdio.h>

int  n,u,w[100][100],color[100],d[100];

int main(){
  int i,j,mincost,sum=0;
  scanf("%d",&n);
 
  for(i=0;i<n;i++) for(j=0;j<n;j++){
      scanf("%d",&w[i][j]);
      if(w[i][j]==-1)w[i][j]=2001;
    }
 
  for(i=0;i<n;i++){
    d[i] =2001;
    color[i] =0;
  }
  d[0]=0;

  while (1){
    mincost=2001;    
for(i=0;i<n;i++){
      if (color[i] != 1 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if (mincost ==2001)
      break;
    color[u] = 1;
    for (i=0;i<n;i++){
      if (color[i] != 1 && w[u][i] < d[i]){
	d[i] = w[u][i];
      }
    }
  }
  for (i=0;i<n;i++){
    sum+=d[i];
  }
  printf("%d\n",sum);
  return 0;
}