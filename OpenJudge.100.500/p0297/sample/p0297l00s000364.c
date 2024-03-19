#include<stdio.h>
#include<stdlib.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

int isEmpty();
int isFull();
void enqueue(P x);
P dequeue();

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++)
    {
      scanf("%s", Q[i].name);
      scanf("%d", &Q[i].t);
    }

  head = 1;
  tail = n+1;

  while(!isEmpty())
    {
      u = dequeue();
      u.t -= q;

      /*プロセスが終わらないとき、エンキューしてクオンタム分の時間を加算*/
      if(u.t>0)
	{
	  //printf("least %d\n", u.t);
	  enqueue(u);
	  elaps += q;
	}
      /*プロセスが終わったら、処理した分の時間を加算*/
      else
	{
	  elaps += q + u.t;
	  printf("%s %d\n", u.name, elaps);
	}
    }
 
  return 0;
}

int isEmpty()
{
  if(head == tail)return 1;
  else return 0;
}

int isFull()
{
  if(head == tail+1%n)return 1;
  else return 0;
}

void enqueue(P x)
{
  if(/*isFull()*/0)
    {
      printf("Queue Over Flow!\n");exit(1);
    }
  Q[tail] = x;
  if(tail == n+1)tail = 1;
  else tail++;
}

P dequeue()
{
  P x;
  
  if(/*isEmpty()*/0)
    {
      printf("Queue Under Flow!\n");exit(2);
    }
  x = Q[head];
  if((head) == n+1)head = 1;
  else head++;
  return x;
}

