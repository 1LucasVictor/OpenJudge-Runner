#include<stdio.h>
#include<string.h>
#define L 100005

typedef struct pp {
  char n[100];
  int t;
}P;

P Q[L];
int head,tail,n;
void enqueue(P x){
  Q[tail]=x;
  tail = (tail+1)%L;
}

P dequeue() {
  P x =Q[head];
  head = (head+1)%L;
  return x;
}
int min (int a, int b){return a < b ? a : b;}

int main(){
  int el = 0,c;
  int i,q;
  P u;
  scanf("%d %d",&n,&q);
  for(i=1;i <= n; i++){
    scanf("%s",Q[i].n);
    scanf("%d",&Q[i].t);
  }
  head = 1;
  tail = n+1;

  while(head != tail){
    
    u = dequeue();
    c = min(q,u.t);
    u.t -=c;
    el += c;
    if(u.t > 0)enqueue(u);
    else{
      printf("%s %d\n",u.n,el);
    }
  }
  return 0;
}

      

