#include<stdio.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail, n;

void enqueue(P x){
  Q[tail] = x;
  if(tail + 1 == LEN) tail = 0;
  else tail++;
}

P dequeue(){
  P x;
  x = Q[head];
  if(head + 1 == LEN) head = 0;
  else head++;
  return x;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  //  for(i=1;i<=n;i++) printf("%s %d\n",Q[i].name,Q[i].t);

  tail = i;
  while(head!=tail)
    {
      if(Q[head].t - q <= 0)
	{
	  elaps += Q[head].t;
	  printf("%s %d\n",Q[head].name,elaps);
	  u =  dequeue();
	}
      else
	{
	  elaps += q;
	  Q[head].t -= q;
	  //printf("%s %d %d\n",Q[head].name,Q[head].t,elaps);
	  u = dequeue();
	  enqueue(u);
	}
    }

  
  return 0;
}

