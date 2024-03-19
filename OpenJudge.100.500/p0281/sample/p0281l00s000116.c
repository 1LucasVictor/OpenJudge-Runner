#include<stdio.h>
#define MAX 100
#define INF (1<<21)
#define RED 0
#define YELLOW 1
#define BLUE 2

int n,A[MAX][MAX];

void dist()
{
  int i,j,t,min;
  int a[MAX],color[MAX];

  for(i=0;i<n;i++)
    {
      a[i]=INF;
      color[i]=RED;
    }
  a[0]=0;
  color[0]=YELLOW;

  while(1)
    {
      min=INF;
      t=-1;
      for(i=0;i<n;i++)
	{
	  if(min>a[i]&&color[i]!=BLUE)
	    {
	      t=i;
	      min=a[i];
	    }
	}
      if(t==-1) break;
      color[t]=BLUE;
      for(j=0;j<n;j++)
	{
	  if(color[j]!=BLUE && A[t][j]!=INF)
	    {
	      if(a[j]>a[t]+A[t][j])
		{
		  a[j]=a[t]+A[t][j];
		  color[j]=YELLOW;
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      printf("%d",i);
      if(a[i]==INF)printf(" -1\n");
      if(a[i]!=INF)printf(" %d\n",a[i]);
    }
}

int main()
{
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  A[i][j]=INF;
	}
    }

  int pa,num,t,v;
  for(i=0;i<n;i++)
    {
      scanf("%d %d",&t,&pa);
      for(j=0;j<pa;j++)
	{
	  scanf("%d %d",&v,&num);
	  A[t][v]=num;
	}
    }
  dist();
  return 0;
}