#include <stdio.h>
#include <stdlib.h>
#define LEN 100005

typedef struct pp
{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=0,tail=0,n;

void enqueue(P);
P dequeue(void);

int main()
{
  int elaps = 0,c,j=0;
  int i,q;
  P u;
  scanf("%d %d",&n,&q);
  for (i=0;i<n;i++)
    {
      scanf("%s",Q[i].name);
      scanf("%d",&Q[i].t);
    }
  while(j!=n)
    {
      u=dequeue();
      if(u.t<=q)
	{
	  elaps+=u.t;
	  printf("%s %d\n",u.name,elaps);
	  j++;
	}
      else
	{
	  elaps=q+elaps;
	  u.t=u.t-q;
	  enqueue(u);
	}
    }
  return 0;
}

void enqueue(P line)
{
  /*if(head==(tail+1)%n)
    printf("era\n");*/
  Q[tail]=line;
  if(tail+1==n)
    tail=0;
  else
    tail++;
}

P dequeue()
{
  P line;
  /*if(head==tail)
    printf("era\n");*/
  line=Q[head];
  if(head+1==n)
    head=0;
  else
    head++;
  return line;
}

