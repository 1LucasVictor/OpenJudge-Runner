#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void enqueue(P);

P dequeue(void);

int min(int,int);

int main(){
  int a = 0, c;
  int i, x;
  P u;
  scanf("%d %d", &n, &x);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head=1;
  tail=n+1;

  while(head != tail){
    u=dequeue();
    c=min(x,u.t);
    u.t-=c;
    a+=c;
    if(u.t>0)enqueue(u);
    else{
      printf("%s %d\n",u.name,a);
    }
  }
  return 0;
}
void enqueue(P x){
  Q[tail]=x;
  tail=(tail+1)%LEN;
}

P dequeue(){
  P x=Q[head];
  head=(head+1)%LEN;
  return x;
}

int min(int a,int b){return a<b ? a:b;}

