#include <stdio.h>
#define N 100
static const int  INFTY = (1<<21);
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,m[N][N];
void dijkstra(void);
int main()
{
  int i,j,a,b,c,d;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  m[i][j]=INFTY;
	}
    }
     
  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d%d",&c,&d);
      m[a][c] =d;
    }
  }
  dijkstra();
  return 0;
}

void dijkstra(){
  int min,i,j,u;
  int d[N],color[N];

  for(i=0;i<n;i++)
    {
      d[i]=INFTY;
      color[i] =WHITE;
    }
  d[0] =0;
  color[i] =GRAY;
  while (1)
    {

      min =INFTY;
      u=-1;
      for(i=0;i<n;i++)
	{
	  if(min> d[i] && color[i]!=BLACK )
	    {
	      u=i;
	      min =d[i];

	    }
	}
      if(u==-1) break;
      color[u] =BLACK;

      for(j=0;j<n;j++)
	{
	  if(color[j]!=BLACK && m[u][j] !=INFTY)
	    {
	      if(d[j] >d[u] +m[u][j])
		{
		  d[j] =d[u]+m[u][j];
		  color[j] =GRAY;
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      printf("%d ",i);
      if(d[i]==INFTY) printf("-1");
      else printf("%d",d[i]);
      printf("\n");
    }
}

