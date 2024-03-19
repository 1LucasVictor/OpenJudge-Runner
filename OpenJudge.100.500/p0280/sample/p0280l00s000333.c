#include <stdio.h>
static const int INFTY = (1<<21);

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
int n,m[MAX][MAX];
int prim(void);


int main()
{
  int i,j,a,e;
  
  scanf("%d",&n);

  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a);
      if(a==-1) m[i][j]=INFTY;
      else m[i][j]=a;
    }
  }

  printf("%d\n",prim());


  return 0;
}
int prim()
{
  int x,min,i,j,res=0;
  int d[MAX],p[MAX],color[MAX];
  for(i=0;i<n;i++)
    {
      d[i] =INFTY;           /*d[n]重み最小のへんの重み p[n]にMSTにおける頂点の親記録*/
      p[i] =-1;               /*color[n] white,black,gray 記録*/
      color[i] =WHITE;

    }
  d[0]=0;


  while(1)
    {
      min =INFTY;
      x= -1;
      for(i=0;i<n;i++)
	{
	  if(min> d[i] && color[i]!=BLACK)
	    {
	      x=i;
	      min=d[i];
	    }
	}
      if(x==-1) break;
      color[x]=BLACK;
      for(j=0;j<n;j++)
	{
	  if(color[j]!=BLACK && m[x][j]!= INFTY)
	    {
	      if(d[j]> m[x][j])
		{
		  d[j]=m[x][j];
		  p[j] =x;
		  color[j] =GRAY;
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      if(p[i]!=-1)res+=m[i][p[i]];
    }
  return res;
}

			       



