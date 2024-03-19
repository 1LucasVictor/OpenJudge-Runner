#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 100005
 
typedef struct{
  char name[100];
  int t;
}P;

void enqueue(P);
P dequeue(void);

P Q[LEN+1];
int head=0,tail=0,n;
 
int main(){
  int elaps = 0;
  int i,q,sum;
  P u;
 
  scanf("%d%d",&n,&q);
  for ( i = 1; i <= n; i++){
    scanf("%s",Q[i].name);
    scanf("%d",&Q[i].t);
  }

  head = 1;
  tail = n+1;
  
  while( head != tail )
    {
      u = dequeue();
      if( u.t <= q && u.t != 0)
	{
	  elaps = elaps + u.t;
	  printf("%s %d\n",u.name,elaps);
	}
      else if( u.t > q)
	{
	  u.t = u.t - q;
	  enqueue(u);
	  elaps = elaps + q;
	}
    }

  return 0;
}

void enqueue(P x)
{

  Q[tail] = x;
 tail++;
}

P dequeue()
{
  P x;
  x = Q[head];
    head++;
  return x;
}