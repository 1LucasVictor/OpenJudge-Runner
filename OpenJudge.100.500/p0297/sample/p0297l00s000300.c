#include<stdio.h>
#include<stdlib.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;
void enqueue(P);
P dequeue();
void initialize(void);

void initialize(){
  head = 1;
 tail = n+1;
}

void enqueue(P x){
  Q[tail] = x;
  if (tail + 1 == LEN){
          tail=1;
  }
  else{
    tail++;
}
}

P dequeue(){
  P x;
  x = Q[head];
    if(head + 1 == LEN){
      head = 1;
}
    else{
      head++;
}
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

  initialize();

  while(c!=n){
    if(Q[head].t>q){
      elaps+=q;
      Q[head].t-=q;
      enqueue(Q[head]);
      u=dequeue();
}

    else if(Q[head].t<=q){
      elaps+=Q[head].t;
      Q[head].t-=q;
      u=dequeue();
      printf("%s %d\n",u.name,elaps);
      c++;
}
}


  return 0;
}




