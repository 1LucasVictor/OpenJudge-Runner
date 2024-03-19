#include <stdio.h>

#define WHITE 0
#define BLACK 1
#define INF 1000000000

int main(){

  int d[100],p[100],color[100],min,n,u,k,c,i,j;
  int m[100][100];
 
  scanf("%d",&n);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      m[i][j]=-1;
 
  for(i=0;i<n;i++){
    scanf("%d%d",&c,&k);
    for(j=0;j<k;j++){
      scanf("%d",&c);
      scanf("%d",&m[i][c]);
    }
  }
 
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
  }
  d[0]=0;

  while(1){
    min=INF;
    for(i=0;i<n;i++)
      if(color[i]!=BLACK && d[i]<min){
	min=d[i];
	u=i;
      }
    if(min==INF)break;

    color[u]=BLACK;

    for(i=0;i<n;i++)
      if(color[i]!=BLACK && m[u][i]!=-1 && d[u]+m[u][i]<d[i]){
	p[i]=u;
	d[i] = d[u]+m[u][i];
      }
  }
  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);


}

