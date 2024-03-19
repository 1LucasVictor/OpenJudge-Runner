#include <stdio.h>
#include <stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail,n;

void enqueue(P x){
int next=(tail+1)%LEN;
if(next==head) {exit(2);}
Q[tail]=x;
tail=next;
}

P dequeue(){
P val;
if(head==tail){exit(3);}
val=Q[head];
head=(head+1)%LEN;
return val;
}

int min(int x,int y){
  if(x>y) return y;
  else return x;
}
int main(){
  int sum = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head =1 ;
  tail =n+1;
while (head!=tail) {
  u=dequeue();
  c=min(q,u.t);
  u.t=u.t-c;
  sum=sum+c;
  if (u.t>0) {
    enqueue(u);
  }
  else{
    printf("%s %d\n",u.name,sum);
  }

}

  return 0;
}

