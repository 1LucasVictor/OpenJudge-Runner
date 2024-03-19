#include <stdio.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P);
P dequeue();

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);
  head=1;
  tail=n+1;

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  while(head!=tail){
  	u = dequeue();
  	if(q>u.t) c=u.t;
  	else c=q;
  	u.t=u.t-c;
  	elaps = elaps+c;
  	if(u.t>0) enqueue(u);
  	else printf("%s %d\n",u.name,elaps);
  }

  return 0;
}

void enqueue(P x){
  Q[tail]=x;
  tail = (tail+1)%LEN;
}

P dequeue(){
	P x = Q[head];
	head = (head+1)%LEN;
	return x;
}

