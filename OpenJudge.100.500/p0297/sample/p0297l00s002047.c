#include<stdio.h>
#define LEN 1000000

typedef struct{
  char name[20];
  int time;
}Que;

Que que[LEN];
int head=0, tail=0;

void push(Que);
Que pop(void);
int size();

//----Main----
int main()
{
  int N, q;
  Que Q;
  int i, j, k;
  int times=0;

  //Read
  scanf("%d %d", &N, &q);
  for(i=0; i<N; i++)
    {
      scanf("%s %d", Q.name, &Q.time);
      push(Q);
    }

  //Start process
  while(1)
    {
      Q=pop();
      if(Q.time<=q)
	{
	  times+=Q.time;
	  printf("%s %d\n", Q.name, times);
	}
      else
	{
	  Q.time-=q;
	  times+=q;
	  push(Q);
	}

      //End process
      if(size()==0)break;
    }

  return 0;
}

//-----Methpd-----
void push(Que q)
{
  que[head]=q;
  head++;
}

Que pop(void)
{
  tail++;
  return que[tail-1];
}

int size(void)
{
  return head-tail;
}