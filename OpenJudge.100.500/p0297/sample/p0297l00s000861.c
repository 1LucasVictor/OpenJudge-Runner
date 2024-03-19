#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct a{
  char name[100];
  int t;
}P;

P Q[LEN+1];
int head, tail, a;

void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue(){
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a,int b){ return a < b ? a:b; }

int main(){
  int A = 0, z;
  int i, q;
  P u;
  scanf("%d %d", &a, &q);

  for ( i = 1; i <= a; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
  head = 1; tail = a + 1;

  while( head != tail ){
    u = dequeue();
    z = min(q , u.t);
    u.t -= z;
    A += z;
    if( u.t > 0) enqueue(u);
    else{
        printf("%s %d\n",u.name, A);
    }
  }
  return 0;
}

