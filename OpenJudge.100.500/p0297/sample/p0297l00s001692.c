#include <stdio.h>
#include <string.h>
#define N 100005

typedef struct pro {
  char name[10];
  int time;
} Pro;

Pro P[N];
int head,tail,n;

void enqueue(Pro p){
  P[tail] = p;
  tail = (tail + 1) % N;
}

Pro dequeue(){
  Pro p = P[head];
  head = (head + 1) % N;
  return p;
}

int min(int k,int l){return k < l ? k : l;}

int main(){
  int pt = 0,t;
  int i,q;
  Pro p;
  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",P[i].name);
    scanf("%d",&P[i].time);
  }
  head = 1;
  tail = n+1;

  while(head != tail){
    p = dequeue();
    t = min(q,p.time);
    p.time -= t;
    pt += t;
    if(p.time > 0) enqueue(p);
    else{
      printf("%s %d\n",p.name,pt);
    }
  }

  return 0;
}
    
  
  

