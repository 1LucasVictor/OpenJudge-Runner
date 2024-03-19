#define N 100000
#include<stdio.h>

typedef struct{
  char name[10];
  int  time;
  int  flag;
}da_ta;

typedef struct{
  da_ta data[N];
  int  head;
  int  tail;
} queue;

void initialize(queue*,int);
void enqueue(queue*,da_ta);

int  main(){
  int cnt=0,i,n,q,tim=0;
  queue Q;


  scanf("%d %d",&n,&q);
  initialize(&Q,n);

  for(i=0;i<n;i++){
    scanf("%s %d",Q.data[i].name,&Q.data[i].time);
    enqueue(&Q,Q.data[i]);
  }

  i=0;
  while(1){
    if(cnt==n) break;
    if(Q.data[i].flag==1){
      i++;
      if(i==Q.tail) i=0;
      continue;
    }
    if((Q.data[i].time-q)<=0){
      tim+=Q.data[i].time;
      Q.data[i].flag=1;
      printf("%s %d\n",Q.data[i].name,tim);
      cnt++;
    }
    else{
      tim+=q;
      Q.data[i].time-=q;
    }
    i++;
    if(i==Q.tail) i=0;
  }
  return 0;
}

void enqueue(queue *q,da_ta item){
  (*q).data[(*q).tail]=item;
  (*q).tail++;
}

void initialize(queue *q,int n){
  int i;
  (*q).head=0;
  (*q).tail=0;

  for(i=0;i<n;i++){
    (*q).data[i].flag=0;
  }
}


    