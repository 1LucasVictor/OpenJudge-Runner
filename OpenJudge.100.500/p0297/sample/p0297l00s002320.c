#include<stdio.h>
#include<stdlib.h>

typedef struct pp{
  char name[100];
  int t;
}P;

P *Q;
int head = 1, tail, n;

void enqueue(P x){
  tail++;
  if(tail >= n+1) tail = 1;
  Q[tail] = x;
}

P dequeue(){
  head++;
  if(head > n+1) head = 2;
  return Q[head-1];
}


int main(){
  int elaps = 0, c = 0;
  int i, q;
  P u;

  scanf("%d %d", &n, &q);
  tail = n;

  Q = malloc((n + 1) * sizeof(P));

  for ( i = 1; i <= n; i++){
    scanf("%s%d", Q[i].name, &Q[i].t);
  }

  i = 1;
  while(c != n){
    u = dequeue();
    if(u.t != 0){
        if(u.t > q){
            elaps += q;
            u.t -= q;
            enqueue(u);

        }else{
            elaps += u.t;
            u.t = 0;
            c++;
            printf("%s %d\n",u.name,elaps);
        }
    }
  }

  free(Q);

  return 0;
}

