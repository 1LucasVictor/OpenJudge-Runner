#include<stdio.h>

typedef struct que{
  char name[100];
  int time;
}S;

int head, tail;
S Q[100000];

void initialize(){
  head = 0;
  tail = 0;
}

void enqueue(S x){
  Q[tail] = x;

  tail = (tail+1)%100000;
}

S dequeue(){
  S x;

  x = Q[head];

  head = (head+1)%100000;

  return x;
}

int main(){
  int n,q,t=0,i;
  S Q2;

  initialize();

  scanf("%d%d", &n, &q);


  tail = n;

  for(i = 0; i < n; i++)
    scanf("%s%d", Q[i].name, &Q[i].time);

  while(tail != head){
    Q2 = dequeue();

    if(Q2.time-q <= 0){     
      t += Q2.time;
      printf("%s %d\n", Q2.name, t);
    }

    else{
      Q2.time = Q2.time - q;
      enqueue(Q2);
      t += q;
    }
  }

  return 0;
}