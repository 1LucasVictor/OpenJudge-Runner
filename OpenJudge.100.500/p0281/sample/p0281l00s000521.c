#include<stdio.h>
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 100

void dijkstra(void);
int n,M[MAX][MAX];

  int main()
{
  int i,j,k,u,v,a;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          M[i][j]=INFTY;
        }
    }
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0;j<k;j++)
        {
          scanf("%d%d",&v,&a);
          M[u][v]=a;
        }
    }
  dijkstra();
  return 0;
}

void dijkstra(void)
{
  int i,j,u,min,d[100],color[100];

  for(i=0;i<n;i++)
    {
      d[i]=INFTY;
      color[i]=WHITE;
    }
  d[0]=0;
  color[0]=GRAY;
  while(1)
    {
      min=INFTY;
      u=-1;
      for(i=0;i<n;i++)
        {
          if(min>d[i] && color[i]!=BLACK)
            {
              u=i;
              min=d[i];
            }
        }
      if(u==-1)break;
      color[u]=BLACK;
      for(j=0;j<n;j++)
        {
          if(color[j]!=BLACK && M[u][j]!=INFTY)
            {
              if(d[j]>d[u]+M[u][j])
                {
                  d[j]=d[u]+M[u][j];
                  color[j]=GRAY;
                }
            }
        }
    }
  for(i=0;i<n;i++)
    {
      printf("%d",i);
      printf(" ");
      d[i]=(d[i]==INFTY) ? -1 : d[i];
      printf("%d\n",d[i]);
    }
}


