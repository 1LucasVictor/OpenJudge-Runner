#include<stdio.h>
#include<string.h>
#define N 100000

typedef struct{
  int time;
  char name[10];
}data;

int head,tail,x;
void enqueue(data);
data dequeue(void);
int mix(int,int);
data Q[N];

main(){
  int i,j,c=0,e;
  data b;

  scanf("%d%d",&x,&e);
  for(i=1;i<=x;i++){
    scanf("%s%d",Q[i].name,&Q[i].time);
  }

  head = 1;
  tail = x+1;
  while(head != tail){
    b = dequeue();
    j = mix(e,b.time);
    b.time -= j;
    c += j;
    if(b.time > 0){
      enqueue(b);
    }
    else printf("%s %d\n",b.name,c);
  }
  return 0;
}


void enqueue(data a){
  Q[tail] = a;
  tail = (tail + 1)%N;
}

data dequeue(){
  data d;
  d = Q[head];
  head = (head + 1)%N;
  return d;
}

int mix(int x,int y){
  return x < y ? x:y;
}