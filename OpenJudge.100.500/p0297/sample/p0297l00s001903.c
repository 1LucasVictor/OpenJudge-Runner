#include<stdio.h>

typedef struct{
  char name[10];
  int time;
} Process;

#define QSIZE 100000

void enque(Process);

int head=0;
int tail=0;
Process que[QSIZE];

int main()
{
  int n, q, timer = 0, flag = 0;

  scanf("%d%d", &n, &q);

  for( tail = 0; tail < n; tail++)
    {
      scanf("%s%d", que[tail].name, &que[tail].time);
    }
  tail--;
  
  for( head = 0; flag < n; head++)
    {
      head = head % QSIZE;
      if(que[head].time - q > 0)
	{
	  que[head].time -= q;
	  enque(que[head]); 
	  timer += q;
	}
      else 
	{
	  timer += que[head].time;
	  printf("%s %d\n", que[head].name, timer);
	  flag++;
	}
    }
  
  return 0;

}

void enque(Process inque)
{
  int next = (tail+1) % QSIZE;
  
  que[next] = inque;
  tail = next;

  return;
}

