#include<stdio.h>
#include<string.h>
#define LEN 100005
#define MAX 100
typedef struct pp{
  char name[MAX];
  int t;
}P;

P Q[LEN+1];
int head, tail, n;

void initialize(){
  head=tail=0;
}

int isEmpty(){
  if(head==tail)
    return 0;
  else
    return 1;
}

int isFull(){
  if(head==(tail+1)%MAX)
    return 0;
  else;
  return 1;
}

void enqueue(P x){
 if(isFull==1)
   printf("??¨?????????????????????????????????\n");
  Q[tail]=x;
  if(tail+1==MAX)
    tail=0;
    else
      tail++;
}

P dequeue(){
  P x;
  if(isEmpty==1)
    printf("??¨?????????????????????????????????\n");
  x=Q[head];
  if(head+1==MAX)
    head=0;
  else
    head++;
  return x;
}


int main(){
  int elaps = 0, c;
  int i, q;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  initialize();
  head=1;
  tail=n+1;
  while(tail!=head){
    if(Q[head].t >q)
{
      elaps+=q;
      Q[head].t-=q;
      enqueue(dequeue());
   }
else
  {
      elaps+=Q[head].t;
      dequeue();
      printf("%s %d\n",Q[head-1].name,elaps);
    }
  }
    return 0;
}