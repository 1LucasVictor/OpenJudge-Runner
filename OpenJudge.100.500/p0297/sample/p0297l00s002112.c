#include<stdio.h>
#include<stdlib.h>

typedef struct{
  char name[10];
  int t;
}Data;

typedef struct{
  int tail;
  Data *data;
  int n;
}Queue;

void initqueue(Queue*, int);
int enqueue(Queue*, Data);
Data dequeue(Queue*);

void dprint(Queue);

void initqueue(Queue *q, int n){
  q->tail = 0;
  q->n = n;
  q->data = (Data *)malloc(sizeof(Data) * n);
}

int enqueue(Queue *q, Data in){
  //if(q->tail < q->n){
    q->data[q->tail] = in;
    q->tail ++;
    return 1;
  //}
  //return 0;
}

Data dequeue(Queue *q){
  int i;
  Data out;
  //if(q->tail >= 0){
    out = q->data[0];
    q->tail --;
    for(i=1;i<=q->tail;i++){
      q->data[i-1] = q->data[i];
    }
    return out;
  //}
  //printf("DEQUEUE EROOR\n");
   //return out;
}

int main(){
  int i, n, q, tcount=0;
  Queue Q;
  Data data, *out;

  scanf("%d%d",&n,&q);
  initqueue(&Q, n);
  out = (Data *)malloc(sizeof(Data) * n);
  for(i=0;i<n;i++){
    scanf("%s %d",data.name, &data.t);
    enqueue(&Q, data);
  }

  while(Q.tail > 0){
    //dprint(Q);
    data = dequeue(&Q);
    if(data.t > q){
      data.t -= q;
      enqueue(&Q, data);
      tcount += q;
    } else {
      tcount += data.t;
      printf("%s %d\n",data.name, tcount);
    }
  }

  /*for(i=0;i<n;i++){
    printf("%s %d\n",out[i].name, out[i].time);
  }*/

  //dprint(Q);
  return 0;
}


void dprint(Queue Q){
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

