#include<stdio.h>

#define LEN 100005

typedef struct pp{
  char name[100];
  int t;
}P;

P Q[LEN];
int head=0, tail=0, n;

void enqueue(P);
P dequeue(void);

void enqueue(P x){
  Q[tail++] = x;
  if(tail == LEN) tail=0;
}

P dequeue(){
  if(head == LEN) head=0;
  return Q[head++];
}

int main(){
  int i, q,dif,q_sum=0;
  P R;
  scanf("%d %d", &n, &q);

  for (i = 0;i < n;i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);

    enqueue(Q[i]);
  }

  i=0;
  while(i < n){
    R = dequeue();
    dif = R.t - q;
    if(dif > 0){
      q_sum += q;
      R.t = dif;
      enqueue(R);
    }
    else{
      q_sum += q + dif;
      R.t = q_sum;
      printf("%s %d\n",R.name,R.t);
      i++;
    }
  }
  
  return 0;
}

