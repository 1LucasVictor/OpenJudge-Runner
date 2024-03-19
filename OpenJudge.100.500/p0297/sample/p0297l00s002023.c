#include<stdio.h>
#include<string.h>
#define len 100000

typedef struct QQ{
  char name[100];
  int time;
} Q;

Q stuff[len];
int head, tail, n;

void enq(Q );
Q deq();
int minmam(int , int );

int main(){
  int e=0, c;
  int i, q;
  Q u;
  scanf("%d %d", &n, &q);

  for(int i=1; i<=n; i++){
    scanf("%s", stuff[i].name);
    scanf("%d", &stuff[i].time);
  }
  head = 1;
  tail = n+1;
  while(head!=tail){
    u = deq();
    c = minmam(q, u.time);
    u.time=u.time-c;
    e=e+c;
    if(u.time > 0) enq(u);
    else{
      printf("%s %d\n", u.name, e);
    }
  }
  return 0;
}





void enq(Q x){
  stuff[tail] = x;
  tail = (tail+1) % len;
}

Q deq(){
  Q x = stuff[head];
  head = (head+1) % len;
  return x;
}

int minmam(int x, int y){
  if(x>y){return y;}
  else{return x;}
}




