#include<stdio.h>
#include<stdlib.h>
#define INF 1000000001
typedef struct vertice
{
  int cost;
  int status;
  int numOfAdj;
  int *adjList;
  int *costList;
} ver;
ver *v;
int n;//the number of vertices
void init();
void setArray(int);
void dijkstra(void);
int main(void)
{
  int i,j;//counter
  int key;
  scanf("%d",&n);
  init();
  for(i=0;i<n;i++)
    {
      scanf("%d",&key);
      scanf("%d",&v[key].numOfAdj);
      setArray(key);
      for(j=0;j<v[key].numOfAdj;j++) scanf("%d%d",&v[key].adjList[j],&v[key].costList[j]);
    }
  dijkstra();
  free(v);
  return 0;
}
void init(void)
{
  int i;//counter
  v=(ver*)malloc(sizeof(ver)*n);
  for(i=0;i<n;i++)
    {
      v[i].numOfAdj=0;
      v[i].status=0;
      v[i].cost=INF;
    }
}
void setArray(int key)
{
  v[key].adjList=(int*)malloc(sizeof(int)*v[key].numOfAdj);
  v[key].costList=(int*)malloc(sizeof(int)*v[key].numOfAdj);
}
void dijkstra(void)
{
  int i;//count
  int current=0;
  int viewing;
  int next;
  int minCost;
  v[0].cost=0;
  for(;;)
    {
      v[current].status=1;
      minCost=INF;
      for(i=0;i<v[current].numOfAdj;i++)
        {
          viewing=v[current].adjList[i];
          if(v[viewing].status==0)
            {
              if(v[current].cost+v[current].costList[i]<v[viewing].cost)
                {
                  v[viewing].cost=v[current].cost+v[current].costList[i];
                  //printf("v[%d].cost=%d\n",viewing,v[viewing].cost);
                }
            }
        }
      for(viewing=0;viewing<n;viewing++)
        {
          if(v[viewing].status==0&&v[viewing].cost<minCost)
            {
              minCost=v[viewing].cost;
              next=viewing;
            }
        }
      if(minCost==INF) break;
      //printf("next->%d\n",next);
      current=next;
    }
  for(i=0;i<n;i++) printf("%d %d\n",i,v[i].cost);
}
