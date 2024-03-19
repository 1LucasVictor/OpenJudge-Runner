#include<stdio.h>
#include<stdlib.h>
#define INF 10000
int **adj;//2D array of cost between each adj
int *cost;
int *status;
int n;//the number of vertices
void init(void);
void prim(void);
int sumCost(void);
int main(void)
{
  int i,j;//counter
  scanf("%d",&n);
  init();
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&adj[i][j]);
  prim();
  printf("%d\n",sumCost());
  return 0;
}
void init(void)
{
  int i;//counter
  adj=(int**)malloc(sizeof(int*)*n);
  cost=(int*)malloc(sizeof(int)*n);
  status=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++) adj[i]=(int*)malloc(sizeof(int)*n);
}
void prim(void)
{
  int i;//counter
  int minCost;
  int current=0;
  int next;
  for(i=0;i<n;i++)
    {
      cost[i]=INF;
      status[i]=0;
    }
  cost[0]=0;
  status[0]=1;
  for(;;)
    {
      minCost=INF;
      for(i=0;i<n;i++)
        {
          //printf("%d->%d : cost=%d\n",current,i,adj[current][i]);
          if(status[i]==0&&adj[current][i]!=-1)
            {
              if(adj[current][i]<cost[i])
                {
                  cost[i]=adj[current][i];
                  if(adj[current][i]<minCost)
                    {
                      minCost=adj[current][i];
                      next=i;
                    }
                }
            }
        }
      //printf("minCost=%d\n",minCost);
      if(minCost==INF) break;
      cost[next]=adj[current][next];
      current=next;
    }
}
int sumCost(void)
{
  int i;//counter
  int sum=0;
  for(i=0;i<n;i++) sum+=cost[i];
  return sum;
}
