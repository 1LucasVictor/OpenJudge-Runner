#include <stdio.h>

int a,b, c,n,u,w[100][100],color[100],d[100];

int main(){
  int i,j,mincost,sum=0;
  scanf("%d",&n);
 for(i=0;i<n;i++)
   for(j=0;j<n;j++)w[i][j]=100008;

  for(i=0;i<n;i++){
    scanf("%d%d",&a,&c);
      for(j=0;j<c;j++){
scanf("%d",&b);
 scanf("%d",&w[a][b]);    
}
    }
 
  for(i=0;i<n;i++){
    d[i] =100008;
    color[i] =0;
  }
  d[0]=0;

  while (1){
    mincost=100008;    
for(i=0;i<n;i++){
      if (color[i] != 1 && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if (mincost ==100008)
      break;
    color[u] = 1;
    for (i=0;i<n;i++){
      if (color[i] != 1 && d[u]+w[u][i] < d[i]){
	d[i] = d[u]+w[u][i];
      }
    }
  }
 
 for (i=0;i<n;i++)
 printf("%d %d\n",i,d[i]); 

  return 0;
}