#include <stdio.h>
#define MAX 100
#define INF 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,num[MAX][MAX];

void  Dijk()
{
  int i,min,u,v,d[MAX],color[MAX];
  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && color[i]!=BLACK){
        u=i;
        min=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK &&num[u][v]!=INF){
        if(d[v]>d[u]+num[u][v]){
          d[v]=d[u]+num[u][v];
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
}


int main()
{
  int i,j,u,k,v,c;

  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++){
      num[i][j]=INF;
    }
  }
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0;j<k;j++){
        scanf("%d%d",&v,&c);
        num[u][v]=c;
      }
    }

  Dijk();

  return 0;
}

