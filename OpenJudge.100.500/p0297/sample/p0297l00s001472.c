#include<stdio.h>
#include<string.h>
#define LEN 1000005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head=1, tail, n;

void enqueue(P x){

  Q[tail]=x;
  tail++;
}

P dequeue(){
  P x;
  x=Q[head];
  head++;
  return x;
}


int main(){
  int elaps = 0, c=0;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
 }

  tail=n+1;


  while(1){

    u=dequeue();

    u.t=u.t-q;

    if(c==n) break;

    if(u.t>0){
      enqueue(u);
      elaps+=q;
    }

    if(u.t<=0){
      elaps+=(u.t+q);
      u.t=0;
      printf("%s %d\n",u.name,elaps);
      c++;
}

}

  return 0;
}