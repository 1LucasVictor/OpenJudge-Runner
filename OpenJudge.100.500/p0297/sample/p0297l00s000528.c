#include <stdio.h>
#include <stdlib.h>
#define MAX 100001

typedef struct group{
  char name[10];
  int t;
} P;

int head=1, tail, n;
P Q[MAX];

void enqueue(P);
P dequeue(void);
int minimam(int, int);

int main()
{
  int t_res=0, time; 
  int i, q;
  P R;
  
  scanf("%d%d", &n, &q);
  
  for( i = 1 ; i <= n ; i++ ){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  tail = n + 1;

  while( head != tail ){
    R = dequeue();
    time = minimam(q, R.t);
    R.t -= time;
    t_res += time;
    if( R.t > 0 ) enqueue(R);
    else printf("%s %d\n", R.name, t_res);
  }

  return 0;
}

void enqueue(P x)
{
  Q[tail] = x;
  tail = (tail + 1) % MAX;
}

P dequeue()
{
  P x = Q[head];
  head = (head + 1) % MAX;
  return x;
}

int minimam(int t1, int t2)
{
  if( t1 > t2 ) return t2;
  else return t1;
}