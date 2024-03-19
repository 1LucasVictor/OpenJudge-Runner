#include<stdio.h>
#include<stdio.h>
#define Max 100005

typedef struct p{
  char N[100];
  int t;
}P;

P Q[Max];
int head,tail,n;

void enqueue(P x);

P dequeue();

int min(int a,int b){return a < b ? a : b;}

int main(){
  int sum = 0,c;
  int i,q;
  P u;
  scanf("%d %d",&n,&q);

  for(i=1;i<=n;i++){
    scanf("%s",Q[i].N);
    scanf("%d",&Q[i].t);
  }
  head = 1; tail = n + 1;

  while(head != tail){
    u = dequeue();
    c = min(q,u.t);
    u.t -= c;
    sum += c;
    if(u.t > 0) enqueue(u);
    else{
      printf("%s %d\n",u.N,sum);
    }
  }
  return 0 ;
}
 

void enqueue(P x){
  Q[tail] = x;
  tail = (tail + 1)% Max;
}
P dequeue(){
  P x = Q[head];
  head = (head + 1)% Max;
  return x;
}