#include<stdio.h>
#include<string.h>
#define MAX 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[MAX+1];
int head, tail, n;

void enqueue(P);
P dequeue();
int min(int, int);

int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head=1;
  tail=n+1;

  while(head != tail){
    u=dequeue();
    c=min(q,u.t);
    u.t-=c;
    elaps+=c;
    if(u.t>0)enqueue(u);
    else{
      printf("%s %d\n",u.name,elaps);
    }
  }
  return 0;
}

void enqueue(P x){
  Q[tail]=x;
  if(tail+1==MAX) tail=0;
  else tail++;
}

int min(int a, int b){
  return a<b?a:b;
}

P dequeue(){
  P x = Q[head];
  if(head+1==MAX) head=0;
  else head++;
  return x;
}