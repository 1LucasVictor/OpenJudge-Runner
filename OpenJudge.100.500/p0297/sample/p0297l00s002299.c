#include<stdio.h>
#include<stdlib.h>

#define MAX 100000

typedef struct{
  char name[10];
  int t;
}Data;

typedef struct{
  int head;
  int tail;
  Data data[MAX];
}Queue;

void initqueue(Queue*);
int enqueue(Queue*, Data);
Data dequeue(Queue*);
//void dprint(Queue);

void initqueue(Queue *q){
  q->head = 0;
  q->tail = 0;
}

int enqueue(Queue *q, Data in){
  int i;
  if(q->tail < MAX){
    q->data[q->tail] = in;
    q->tail ++;
    if(q->tail >= MAX){
      for(i=q->head;i<q->tail;i++){
        q->data[i-q->head] = q->data[i];
      }
      q->tail = i-q->head;
      q->head = 0;
    }
    return 1;
  }
  return 0;
}

Data dequeue(Queue *q){
  Data out;
  if(q->tail >= 0 || q->head < q->tail){
    out = q->data[q->head];
    q->head ++;
    return out;
  }
  printf("DEQUEUE EROOR\n");
  return out;
}

int main(){
  int i, n, q, tcount=0;
  Queue Q;
  Data data;

  scanf("%d%d",&n,&q);
  initqueue(&Q);
  for(i=0;i<n;i++){
    scanf("%s %d",data.name, &data.t);
    enqueue(&Q, data);
  }

  while(n > 0){
    //dprint(Q);
    data = dequeue(&Q);
    if(data.t > q){
      data.t -= q;
      enqueue(&Q, data);
      tcount += q;
    } else {
      tcount += data.t;
      printf("%s %d\n",data.name, tcount);
      n--;
    }
  }

  /*for(i=0;i<n;i++){
    printf("%s %d\n",out[i].name, out[i].time);
  }*/

  //dprint(Q);
  return 0;
}


/*void dprint(Queue Q){
  int i, j;
  Data inp;
  for(i=0;i<Q.tail;i++){
    printf("%s %d\n",Q.data[i].name, Q.data[i].t);
  }
  printf("\n\n");
  if(0){
    for(j=0;j<Q.n;j++){
      inp = dequeue(&Q);
      printf("dequeue %s %d\n",inp.name, inp.t);
      for(i=0;i<Q.tail;i++){
        printf("%s %d\n",Q.data[i].name, Q.data[i].t);
      }
    }
  }
}
*/

