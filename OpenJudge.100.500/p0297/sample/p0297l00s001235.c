#include<stdio.h>
#include<string.h>
#define LEN 10005

typedef struct a
{
  char name[100];
  int time;
} P;

P p[LEN];
int h, t, n;

void enq(P x)
{
  p[t] = x;
  t = (t + 1) % LEN;
}

P deq()
{
  P x = p[h];
  h = (h + 1) % LEN;
  return x;
}

int min(int a, int b)
{
  if(a > b)
    {
      return b;
    }
      else
	{
	  return a;
	}
}

int main()
{
  int el = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);
  for(i = 1; i <= n; i++)
    {
      scanf("%s", p[i].name);
      scanf("%d", &p[i].time);
    }
  h = 1; t = n + 1;

  while(h != t)
    {
      u = deq();
      c = min(q, u.time);
      u.time -= c;
      el += c;
      if(u.time > 0)
	{
	  enq(u);
	}
      else
	{
	  printf("%s %d\n", u.name, el);
	}
    }
  return 0;
}

