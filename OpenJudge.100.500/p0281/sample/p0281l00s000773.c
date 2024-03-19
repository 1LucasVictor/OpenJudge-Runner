#include <stdio.h>
#define BLACK 1
#define WHITE 0
#define GRAY 2
#define inf 1000000
int n;
int M[100][100];

void dijkstra()
{
  int minv,i,u,v;
  int d[100],color[100];
  for(i=0;i<n;i++){
    d[i]=inf;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    minv=inf;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
        u=i;
        minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=inf){
        if(d[v]>d[u]+M[u][v]){
          d[v]=d[u]+M[u][v];
          color[v]=GRAY;
        }
      }
    }
  }
    for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}
int main()
{
  int i,j,u,k,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=inf;
    }
  }

  for(i=0;i<n;i++)
    {
      scanf("%d",&u);
      scanf("%d",&k);
      for(j=0;j<k;j++)
        {
          scanf("%d",&v);
          scanf("%d",&c);
          M[u][v]=c;
        }
    }

  dijkstra();

  return 0;
}
