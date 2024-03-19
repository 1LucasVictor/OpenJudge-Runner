//??????????????§
#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Queue[LEN];
int head,tail,n;

void enqueue(P x)
{
  Queue[tail] = x;
  tail = (tail + 1)%LEN;
}

P dequeue()
{
  P x= Queue[head];
  head = (head + 1)%LEN;
  return x;
}

int minimum(int x,int y){
  return x<y ? x: y;
}
int main()
{
  int laps =0;
  int c,i,q;
  P u;
  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Queue[i].name);
    scanf("%d",&Queue[i].t);
  }
  head =1;
  tail = n +1;
  while(head != tail)
    {
      u=dequeue();
      c=minimum(q,u.t);
      u.t-=c;
      laps+=c;
      if(u.t >0)enqueue(u);
      else{
	printf("%s %d\n",u.name,laps);
      }
    }
  return 0;
}