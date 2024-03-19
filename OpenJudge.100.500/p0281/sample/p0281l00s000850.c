#include <stdio.h>

#define W -10
#define B -9
#define MAX 101
#define INF 20000000

void ISS(void);
void DA(void);

int n;/*頂点数*/
int T[MAX][MAX];/*行＝要素、列＝繋ってる要素*/
int color[MAX];/*色分け用配列*/
int d[MAX];
int pi[MAX];
int main()
{
  int i,j,youso,kazu,v,kyori;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d%d",&youso,&kazu);

      for(j=0;j<kazu;j++)
	{
	  scanf("%d%d",&v,&kyori);
	  T[i][v]=kyori;
	}
    }

  DA();

  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);
  
  return 0;
}

void ISS(void)
{
  int i;
  for(i=0;i<n;i++)
    {
      d[i]=INF;
      pi[i]=EOF;
      color[i]=W;
    }
  
  d[0]=0;
}

void DA(void)
{
  int i,j,k,min;

  ISS();

  while(1)
    {
      min=INF;
      for(i=0;i<n;i++)
	{
	  if(color[i]!=B && d[i]<min)
	    {
	      min=d[i];
	      j=i;
	    }
	}
      
      if(min==INF)
	{
	  break;
	}

      color[j]=B;

      for(k=0;k<n;k++)
	{
	  if(color[k]!=B && d[j]+T[j][k]<d[k]&&T[j][k]!=0)
	    {
	      pi[k]=j;
	      d[k]=d[j]+T[j][k];
	    }
	}
    }
}

