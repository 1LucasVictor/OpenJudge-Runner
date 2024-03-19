#include <stdio.h>
#define MAX 100
#define INF 1000000
#define NIL -1
 
int Thank[MAX][MAX];
int you;
int AlgorithmsAndDataStructures[MAX];
int I[MAX];
void had(int, int);
void a(int);
void GreatTime(int);

main()
{
  int i, j ,u ,k,v,c;
  scanf("%d",&you);
 
  for(i=0; i<you; i++)
    {
      for(j=0; j<you; j++)
	{
	  Thank[i][j]=-1;
	}
    }
 
  for(i=0; i<you; i++)
    {
      scanf("%d %d",&u,&k);
      for(j=0; j<k; j++)
	{
	  scanf("%d %d",&v,&c);
	  Thank[i][v]=c;
	}
    }
 
  GreatTime(0);
  for(i=0; i<you; i++)
    {
      printf("%d %d\n", i, AlgorithmsAndDataStructures[i]);
    }
  
  return 0;
}

void had(int u, int v)
{
  if(AlgorithmsAndDataStructures[v]> AlgorithmsAndDataStructures[u]+Thank[u][v])
    {
      AlgorithmsAndDataStructures[v]=AlgorithmsAndDataStructures[u]+Thank[u][v];
      I[v]=u;
    }
}
 
void a(int s)
{
  int v;
  for(v=0; v<you; v++)
    {
      AlgorithmsAndDataStructures[v]=INF;
      I[v]=NIL;
    }
  AlgorithmsAndDataStructures[s]=0;
}

void GreatTime(int s)
{
  int i, v1, v, minv, u;
  int flag[MAX];
  a(s);
  
  for(i=0; i<you; i++)
    {
      flag[i]=0;
    }
  for(v1=0; v1<you; v1++)
    {
      minv = INF;
      for ( i = 0; i < you; i++ )
	{
	  if(flag[i]==1)
	    {
	      continue;
	    }
	  if(AlgorithmsAndDataStructures[i]<=minv)
	    {
	      u=i;
	      minv=AlgorithmsAndDataStructures[i];
	    }
	}
      
      for(v=0; v<you; v++)
	{
	  if(Thank[u][v]==-1)
	    {
	      continue;
	    }
	  if(flag[v]==1)
	    {
	      continue;
	    }
	  had(u, v);
	}
      flag[u]=1;
    }
}