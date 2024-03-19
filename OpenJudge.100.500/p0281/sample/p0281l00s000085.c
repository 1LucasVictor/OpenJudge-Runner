#include<stdio.h>
#define G_MAX 100

int main()
{
  int i,j;
  int n;
  int v,c,c1,v1;
  int G[G_MAX+1][G_MAX+1];
  int color[G_MAX+1],d[G_MAX+1],pi[G_MAX+1];
  int min,ii;
  
  for(i=0;i<G_MAX+1;i++){
    for(j=0;j<G_MAX+1;j++) G[i][j]=-1;
  }
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%d%d",&v,&c);
    for(j=0;j<c;j++){
      scanf("%d%d",&v1,&c1);
      G[v][v1]=c1;
    }
  }

  for(i=0;i<n;i++){
    color[i]=0;
    pi[i]=-1;
    d[i]=10000001;
  }
  d[0]=0;

  while(1){
    min=10000001;
    for(i=0;i<n;i++){
      if(color[i]!=2 && d[i]<min){
        min=d[i];
        ii=i;
      }
    }
    if(min==10000001)break;
    color[ii]=2;
    for(i=0;i<n;i++){
      if(G[ii][i]!=-1 && color[i]!=2 && (G[ii][i]+d[ii])<d[i]){
	pi[i]=ii;
	d[i]=G[ii][i]+d[ii];
	color[i]=1;
      }
    }
  }
  for(i=0;i<n;i++)
    printf("%d %d\n",i,d[i]);
  return 0;
}

