#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

void enqueue(P);
P dequeue(void);
int isEmpty(void);
int isFull(void);

P Q[LEN+1];
int head, tail, n;

void enqueue(P x){/*Q[tail]???n?????£??\???tail??????????¢???????*/
  if(isFull() == 0){
    Q[tail] = x;
  }

  if((tail + 1) == LEN){
    tail = 0;
  }

  else{
    tail++;
  }

}

P dequeue(){/*Q[head]??????????????????head??????????¢???????*/
  P x;
  if(isEmpty() == 0){
    x = Q[head];
  }

  if((head + 1) == LEN){
    head = 0;
  }

  else{
    head++;
  }

  return x;

}

int isEmpty(){
  if(head == tail) return 1;
  else return 0;
}

int isFull(){
  if(head == (tail  + 1) % LEN) return 1;
  else return 0;
}

int main(){
  int elaps = 0, c=0;
  int i, q, a, b;
  P u;
  scanf("%d %d", &n, &q);

  for ( i = 1; i <= n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }

  head = 1;
  tail = n + 1;

  while(1){
    if(head == tail) break;

    a = isEmpty();
    b = isFull();
    u = dequeue();

    if(q >= u.t){
      c += u.t;
      printf("%s %d\n", u.name, c);
    }

    else{
      c += q;
      u.t = u.t - q;
      enqueue(u);
    }
  
  }

  return 0;
}